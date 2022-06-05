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



#include "HslEffect.h"

namespace asposeslidescloud {
namespace model {

HslEffect::HslEffect()
{
}

HslEffect::~HslEffect()
{
}

double HslEffect::getHue() const
{
	return m_Hue;
}

void HslEffect::setHue(double value)
{
	m_Hue = value;
	
}

double HslEffect::getSaturation() const
{
	return m_Saturation;
}

void HslEffect::setSaturation(double value)
{
	m_Saturation = value;
	
}

double HslEffect::getLuminance() const
{
	return m_Luminance;
}

void HslEffect::setLuminance(double value)
{
	m_Luminance = value;
	
}

web::json::value HslEffect::toJson() const
{
	web::json::value val = this->ImageTransformEffect::toJson();
	val[utility::conversions::to_string_t("Hue")] = ModelBase::toJson(m_Hue);
	val[utility::conversions::to_string_t("Saturation")] = ModelBase::toJson(m_Saturation);
	val[utility::conversions::to_string_t("Luminance")] = ModelBase::toJson(m_Luminance);
	return val;
}

void HslEffect::fromJson(web::json::value& val)
{
	this->ImageTransformEffect::fromJson(val);
	web::json::value* jsonForHue = ModelBase::getField(val, "Hue");
	if(jsonForHue != nullptr && !jsonForHue->is_null() && jsonForHue->is_number())
	{
		setHue(ModelBase::doubleFromJson(*jsonForHue));
	}
	web::json::value* jsonForSaturation = ModelBase::getField(val, "Saturation");
	if(jsonForSaturation != nullptr && !jsonForSaturation->is_null() && jsonForSaturation->is_number())
	{
		setSaturation(ModelBase::doubleFromJson(*jsonForSaturation));
	}
	web::json::value* jsonForLuminance = ModelBase::getField(val, "Luminance");
	if(jsonForLuminance != nullptr && !jsonForLuminance->is_null() && jsonForLuminance->is_number())
	{
		setLuminance(ModelBase::doubleFromJson(*jsonForLuminance));
	}
}

}
}

