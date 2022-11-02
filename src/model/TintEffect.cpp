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
#include "TintEffect.h"

namespace asposeslidescloud {
namespace model {

TintEffect::TintEffect()
{
	setType(L"Tint");
}

TintEffect::~TintEffect()
{
}

double TintEffect::getHue() const
{
	return m_Hue;
}

void TintEffect::setHue(double value)
{
	m_Hue = value;
	
}

double TintEffect::getAmount() const
{
	return m_Amount;
}

void TintEffect::setAmount(double value)
{
	m_Amount = value;
	
}

web::json::value TintEffect::toJson() const
{
	web::json::value val = this->ImageTransformEffect::toJson();
	val[utility::conversions::to_string_t("Hue")] = ModelBase::toJson(m_Hue);
	val[utility::conversions::to_string_t("Amount")] = ModelBase::toJson(m_Amount);
	return val;
}

void TintEffect::fromJson(web::json::value& val)
{
	this->ImageTransformEffect::fromJson(val);
	web::json::value* jsonForHue = ModelBase::getField(val, "Hue");
	if(jsonForHue != nullptr && !jsonForHue->is_null() && jsonForHue->is_number())
	{
		setHue(ModelBase::doubleFromJson(*jsonForHue));
	}
	web::json::value* jsonForAmount = ModelBase::getField(val, "Amount");
	if(jsonForAmount != nullptr && !jsonForAmount->is_null() && jsonForAmount->is_number())
	{
		setAmount(ModelBase::doubleFromJson(*jsonForAmount));
	}
}

}
}

