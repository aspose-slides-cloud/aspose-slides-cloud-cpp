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
#include "PatternFill.h"

namespace asposeslidescloud {
namespace model {

PatternFill::PatternFill()
{
	setType(L"Pattern");
}

PatternFill::~PatternFill()
{
}

utility::string_t PatternFill::getBackColor() const
{
	return m_BackColor;
}

void PatternFill::setBackColor(utility::string_t value)
{
	m_BackColor = value;
	
}

utility::string_t PatternFill::getForeColor() const
{
	return m_ForeColor;
}

void PatternFill::setForeColor(utility::string_t value)
{
	m_ForeColor = value;
	
}

utility::string_t PatternFill::getStyle() const
{
	return m_Style;
}

void PatternFill::setStyle(utility::string_t value)
{
	m_Style = value;
	
}

web::json::value PatternFill::toJson() const
{
	web::json::value val = this->FillFormat::toJson();
	if (!m_BackColor.empty())
	{
		val[utility::conversions::to_string_t("BackColor")] = ModelBase::toJson(m_BackColor);
	}
	if (!m_ForeColor.empty())
	{
		val[utility::conversions::to_string_t("ForeColor")] = ModelBase::toJson(m_ForeColor);
	}
	if (!m_Style.empty())
	{
		val[utility::conversions::to_string_t("Style")] = ModelBase::toJson(m_Style);
	}
	return val;
}

void PatternFill::fromJson(web::json::value& val)
{
	this->FillFormat::fromJson(val);
	web::json::value* jsonForBackColor = ModelBase::getField(val, "BackColor");
	if(jsonForBackColor != nullptr && !jsonForBackColor->is_null())
	{
		setBackColor(ModelBase::stringFromJson(*jsonForBackColor));
	}
	web::json::value* jsonForForeColor = ModelBase::getField(val, "ForeColor");
	if(jsonForForeColor != nullptr && !jsonForForeColor->is_null())
	{
		setForeColor(ModelBase::stringFromJson(*jsonForForeColor));
	}
	web::json::value* jsonForStyle = ModelBase::getField(val, "Style");
	if(jsonForStyle != nullptr && !jsonForStyle->is_null())
	{
		setStyle(ModelBase::stringFromJson(*jsonForStyle));
	}
}

}
}

