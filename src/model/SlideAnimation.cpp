// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Aspose" file="ApiBase.cs">
//   Copyright (c) 2020 Aspose.Slides for Cloud
// </copyright>
// <summary>
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
// 
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
// 
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
// </summary>
// --------------------------------------------------------------------------------------------------------------------



#include "../ClassRegistry.h"
#include "SlideAnimation.h"

namespace asposeslidescloud {
namespace model {

SlideAnimation::SlideAnimation()
{
}

SlideAnimation::~SlideAnimation()
{
}

std::vector<std::shared_ptr<Effect>> SlideAnimation::getMainSequence() const
{
	return m_MainSequence;
}

void SlideAnimation::setMainSequence(std::vector<std::shared_ptr<Effect>> value)
{
	m_MainSequence = value;
	
}

std::vector<std::shared_ptr<InteractiveSequence>> SlideAnimation::getInteractiveSequences() const
{
	return m_InteractiveSequences;
}

void SlideAnimation::setInteractiveSequences(std::vector<std::shared_ptr<InteractiveSequence>> value)
{
	m_InteractiveSequences = value;
	
}

web::json::value SlideAnimation::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (m_MainSequence.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_MainSequence)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("MainSequence")] = web::json::value::array(jsonArray);
	}
	if (m_InteractiveSequences.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_InteractiveSequences)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("InteractiveSequences")] = web::json::value::array(jsonArray);
	}
	return val;
}

void SlideAnimation::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForMainSequence = ModelBase::getField(val, "MainSequence");
	if(jsonForMainSequence != nullptr && !jsonForMainSequence->is_null())
	{
		{
			m_MainSequence.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForMainSequence->as_array())
			{
				if(item.is_null())
				{
					m_MainSequence.push_back(std::shared_ptr<Effect>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"Effect", item);
					m_MainSequence.push_back(std::static_pointer_cast<Effect>(newItem));
				}
			}
        	}
	}
	web::json::value* jsonForInteractiveSequences = ModelBase::getField(val, "InteractiveSequences");
	if(jsonForInteractiveSequences != nullptr && !jsonForInteractiveSequences->is_null())
	{
		{
			m_InteractiveSequences.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForInteractiveSequences->as_array())
			{
				if(item.is_null())
				{
					m_InteractiveSequences.push_back(std::shared_ptr<InteractiveSequence>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"InteractiveSequence", item);
					m_InteractiveSequences.push_back(std::static_pointer_cast<InteractiveSequence>(newItem));
				}
			}
        	}
	}
}

}
}

