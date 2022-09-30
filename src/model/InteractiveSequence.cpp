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



#include "InteractiveSequence.h"

namespace asposeslidescloud {
namespace model {

InteractiveSequence::InteractiveSequence()
{
}

InteractiveSequence::~InteractiveSequence()
{
}

std::vector<std::shared_ptr<Effect>> InteractiveSequence::getEffects() const
{
	return m_Effects;
}

void InteractiveSequence::setEffects(std::vector<std::shared_ptr<Effect>> value)
{
	m_Effects = value;
	
}

int32_t InteractiveSequence::getTriggerShapeIndex() const
{
	return m_TriggerShapeIndex;
}

void InteractiveSequence::setTriggerShapeIndex(int32_t value)
{
	m_TriggerShapeIndex = value;
	
}

web::json::value InteractiveSequence::toJson() const
{
	web::json::value val = web::json::value::object();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Effects)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Effects")] = web::json::value::array(jsonArray);
	}
	val[utility::conversions::to_string_t("TriggerShapeIndex")] = ModelBase::toJson(m_TriggerShapeIndex);
	return val;
}

void InteractiveSequence::fromJson(web::json::value& val)
{
	web::json::value* jsonForEffects = ModelBase::getField(val, "Effects");
	if(jsonForEffects != nullptr && !jsonForEffects->is_null())
	{
		{
			m_Effects.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForEffects->as_array())
			{
				if(item.is_null())
				{
					m_Effects.push_back(std::shared_ptr<Effect>(nullptr));
				}
				else
				{
					std::shared_ptr<Effect> newItem(new Effect());
					newItem->fromJson(item);
					m_Effects.push_back( newItem );
				}
			}
        	}
	}
	web::json::value* jsonForTriggerShapeIndex = ModelBase::getField(val, "TriggerShapeIndex");
	if(jsonForTriggerShapeIndex != nullptr && !jsonForTriggerShapeIndex->is_null() && jsonForTriggerShapeIndex->is_number())
	{
		setTriggerShapeIndex(ModelBase::int32_tFromJson(*jsonForTriggerShapeIndex));
	}
}

}
}

