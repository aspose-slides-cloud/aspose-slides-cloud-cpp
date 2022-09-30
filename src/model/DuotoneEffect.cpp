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



#include "DuotoneEffect.h"

namespace asposeslidescloud {
namespace model {

DuotoneEffect::DuotoneEffect()
{
	setType(L"Duotone");
}

DuotoneEffect::~DuotoneEffect()
{
}

utility::string_t DuotoneEffect::getColor1() const
{
	return m_Color1;
}

void DuotoneEffect::setColor1(utility::string_t value)
{
	m_Color1 = value;
	
}

utility::string_t DuotoneEffect::getColor2() const
{
	return m_Color2;
}

void DuotoneEffect::setColor2(utility::string_t value)
{
	m_Color2 = value;
	
}

web::json::value DuotoneEffect::toJson() const
{
	web::json::value val = this->ImageTransformEffect::toJson();
	if (!m_Color1.empty())
	{
		val[utility::conversions::to_string_t("Color1")] = ModelBase::toJson(m_Color1);
	}
	if (!m_Color2.empty())
	{
		val[utility::conversions::to_string_t("Color2")] = ModelBase::toJson(m_Color2);
	}
	return val;
}

void DuotoneEffect::fromJson(web::json::value& val)
{
	this->ImageTransformEffect::fromJson(val);
	web::json::value* jsonForColor1 = ModelBase::getField(val, "Color1");
	if(jsonForColor1 != nullptr && !jsonForColor1->is_null())
	{
		setColor1(ModelBase::stringFromJson(*jsonForColor1));
	}
	web::json::value* jsonForColor2 = ModelBase::getField(val, "Color2");
	if(jsonForColor2 != nullptr && !jsonForColor2->is_null())
	{
		setColor2(ModelBase::stringFromJson(*jsonForColor2));
	}
}

}
}

