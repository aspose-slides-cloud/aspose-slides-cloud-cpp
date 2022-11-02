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
#include "SlideCommentBase.h"

namespace asposeslidescloud {
namespace model {

SlideCommentBase::SlideCommentBase()
{
}

SlideCommentBase::~SlideCommentBase()
{
}

utility::string_t SlideCommentBase::getAuthor() const
{
	return m_Author;
}

void SlideCommentBase::setAuthor(utility::string_t value)
{
	m_Author = value;
	
}

utility::string_t SlideCommentBase::getText() const
{
	return m_Text;
}

void SlideCommentBase::setText(utility::string_t value)
{
	m_Text = value;
	
}

utility::string_t SlideCommentBase::getCreatedTime() const
{
	return m_CreatedTime;
}

void SlideCommentBase::setCreatedTime(utility::string_t value)
{
	m_CreatedTime = value;
	
}

std::vector<std::shared_ptr<SlideCommentBase>> SlideCommentBase::getChildComments() const
{
	return m_ChildComments;
}

void SlideCommentBase::setChildComments(std::vector<std::shared_ptr<SlideCommentBase>> value)
{
	m_ChildComments = value;
	
}

utility::string_t SlideCommentBase::getType() const
{
	return m_Type;
}

void SlideCommentBase::setType(utility::string_t value)
{
	m_Type = value;
	
}

web::json::value SlideCommentBase::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Author.empty())
	{
		val[utility::conversions::to_string_t("Author")] = ModelBase::toJson(m_Author);
	}
	if (!m_Text.empty())
	{
		val[utility::conversions::to_string_t("Text")] = ModelBase::toJson(m_Text);
	}
	if (!m_CreatedTime.empty())
	{
		val[utility::conversions::to_string_t("CreatedTime")] = ModelBase::toJson(m_CreatedTime);
	}
	if (m_ChildComments.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_ChildComments)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("ChildComments")] = web::json::value::array(jsonArray);
	}
	if (!m_Type.empty())
	{
		val[utility::conversions::to_string_t("Type")] = ModelBase::toJson(m_Type);
	}
	return val;
}

void SlideCommentBase::fromJson(web::json::value& val)
{
	web::json::value* jsonForAuthor = ModelBase::getField(val, "Author");
	if(jsonForAuthor != nullptr && !jsonForAuthor->is_null())
	{
		setAuthor(ModelBase::stringFromJson(*jsonForAuthor));
	}
	web::json::value* jsonForText = ModelBase::getField(val, "Text");
	if(jsonForText != nullptr && !jsonForText->is_null())
	{
		setText(ModelBase::stringFromJson(*jsonForText));
	}
	web::json::value* jsonForCreatedTime = ModelBase::getField(val, "CreatedTime");
	if(jsonForCreatedTime != nullptr && !jsonForCreatedTime->is_null())
	{
		setCreatedTime(ModelBase::stringFromJson(*jsonForCreatedTime));
	}
	web::json::value* jsonForChildComments = ModelBase::getField(val, "ChildComments");
	if(jsonForChildComments != nullptr && !jsonForChildComments->is_null())
	{
		{
			m_ChildComments.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForChildComments->as_array())
			{
				if(item.is_null())
				{
					m_ChildComments.push_back(std::shared_ptr<SlideCommentBase>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"SlideCommentBase", item);
					m_ChildComments.push_back(std::static_pointer_cast<SlideCommentBase>(newItem));
				}
			}
        	}
	}
	web::json::value* jsonForType = ModelBase::getField(val, "Type");
	if(jsonForType != nullptr && !jsonForType->is_null())
	{
		setType(ModelBase::stringFromJson(*jsonForType));
	}
}

}
}

