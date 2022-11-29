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
#include "ReplaceText.h"

namespace asposeslidescloud {
namespace model {

ReplaceText::ReplaceText()
{
	setType(L"ReplaceText");
}

ReplaceText::~ReplaceText()
{
}

utility::string_t ReplaceText::getOldText() const
{
	return m_OldText;
}

void ReplaceText::setOldText(utility::string_t value)
{
	m_OldText = value;
	
}

utility::string_t ReplaceText::getNewText() const
{
	return m_NewText;
}

void ReplaceText::setNewText(utility::string_t value)
{
	m_NewText = value;
	
}

bool ReplaceText::isIgnoreCase() const
{
	return m_IgnoreCase;
}

void ReplaceText::setIgnoreCase(bool value)
{
	m_IgnoreCase = value;
	
}

int32_t ReplaceText::getSlidePosition() const
{
	return m_SlidePosition;
}

void ReplaceText::setSlidePosition(int32_t value)
{
	m_SlidePosition = value;
	
}

web::json::value ReplaceText::toJson() const
{
	web::json::value val = this->Task::toJson();
	if (!m_OldText.empty())
	{
		val[utility::conversions::to_string_t("OldText")] = ModelBase::toJson(m_OldText);
	}
	if (!m_NewText.empty())
	{
		val[utility::conversions::to_string_t("NewText")] = ModelBase::toJson(m_NewText);
	}
	val[utility::conversions::to_string_t("IgnoreCase")] = ModelBase::toJson(m_IgnoreCase);
	val[utility::conversions::to_string_t("SlidePosition")] = ModelBase::toJson(m_SlidePosition);
	return val;
}

void ReplaceText::fromJson(web::json::value& val)
{
	this->Task::fromJson(val);
	web::json::value* jsonForOldText = ModelBase::getField(val, "OldText");
	if(jsonForOldText != nullptr && !jsonForOldText->is_null())
	{
		setOldText(ModelBase::stringFromJson(*jsonForOldText));
	}
	web::json::value* jsonForNewText = ModelBase::getField(val, "NewText");
	if(jsonForNewText != nullptr && !jsonForNewText->is_null())
	{
		setNewText(ModelBase::stringFromJson(*jsonForNewText));
	}
	web::json::value* jsonForIgnoreCase = ModelBase::getField(val, "IgnoreCase");
	if(jsonForIgnoreCase != nullptr && !jsonForIgnoreCase->is_null())
	{
		setIgnoreCase(ModelBase::boolFromJson(*jsonForIgnoreCase));
	}
	web::json::value* jsonForSlidePosition = ModelBase::getField(val, "SlidePosition");
	if(jsonForSlidePosition != nullptr && !jsonForSlidePosition->is_null() && jsonForSlidePosition->is_number())
	{
		setSlidePosition(ModelBase::int32_tFromJson(*jsonForSlidePosition));
	}
}

}
}

