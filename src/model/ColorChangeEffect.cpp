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



#include "ColorChangeEffect.h"

namespace asposeslidescloud {
namespace model {

ColorChangeEffect::ColorChangeEffect()
{
}

ColorChangeEffect::~ColorChangeEffect()
{
}

utility::string_t ColorChangeEffect::getFromColor() const
{
	return m_FromColor;
}

void ColorChangeEffect::setFromColor(utility::string_t value)
{
	m_FromColor = value;
	
}

utility::string_t ColorChangeEffect::getToColor() const
{
	return m_ToColor;
}

void ColorChangeEffect::setToColor(utility::string_t value)
{
	m_ToColor = value;
	
}

web::json::value ColorChangeEffect::toJson() const
{
	web::json::value val = this->ImageTransformEffect::toJson();
	if (!m_FromColor.empty())
	{
		val[utility::conversions::to_string_t("FromColor")] = ModelBase::toJson(m_FromColor);
	}
	if (!m_ToColor.empty())
	{
		val[utility::conversions::to_string_t("ToColor")] = ModelBase::toJson(m_ToColor);
	}
	return val;
}

void ColorChangeEffect::fromJson(web::json::value& val)
{
	this->ImageTransformEffect::fromJson(val);
	web::json::value* jsonForFromColor = ModelBase::getField(val, "FromColor");
	if(jsonForFromColor != nullptr && !jsonForFromColor->is_null())
	{
		setFromColor(ModelBase::stringFromJson(*jsonForFromColor));
	}
	web::json::value* jsonForToColor = ModelBase::getField(val, "ToColor");
	if(jsonForToColor != nullptr && !jsonForToColor->is_null())
	{
		setToColor(ModelBase::stringFromJson(*jsonForToColor));
	}
}

}
}

