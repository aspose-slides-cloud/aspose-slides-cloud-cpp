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



#include "LuminanceEffect.h"

namespace asposeslidescloud {
namespace model {

LuminanceEffect::LuminanceEffect()
{
}

LuminanceEffect::~LuminanceEffect()
{
}

double LuminanceEffect::getBrightness() const
{
	return m_Brightness;
}

void LuminanceEffect::setBrightness(double value)
{
	m_Brightness = value;
	
}

double LuminanceEffect::getContrast() const
{
	return m_Contrast;
}

void LuminanceEffect::setContrast(double value)
{
	m_Contrast = value;
	
}

web::json::value LuminanceEffect::toJson() const
{
	web::json::value val = this->ImageTransformEffect::toJson();
	val[utility::conversions::to_string_t("Brightness")] = ModelBase::toJson(m_Brightness);
	val[utility::conversions::to_string_t("Contrast")] = ModelBase::toJson(m_Contrast);
	return val;
}

void LuminanceEffect::fromJson(web::json::value& val)
{
	this->ImageTransformEffect::fromJson(val);
	web::json::value* jsonForBrightness = ModelBase::getField(val, "Brightness");
	if(jsonForBrightness != nullptr && !jsonForBrightness->is_null() && jsonForBrightness->is_number())
	{
		setBrightness(ModelBase::doubleFromJson(*jsonForBrightness));
	}
	web::json::value* jsonForContrast = ModelBase::getField(val, "Contrast");
	if(jsonForContrast != nullptr && !jsonForContrast->is_null() && jsonForContrast->is_number())
	{
		setContrast(ModelBase::doubleFromJson(*jsonForContrast));
	}
}

}
}

