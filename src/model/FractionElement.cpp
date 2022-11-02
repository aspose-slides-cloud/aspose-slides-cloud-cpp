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
#include "FractionElement.h"

namespace asposeslidescloud {
namespace model {

FractionElement::FractionElement()
{
	setType(L"Fraction");
}

FractionElement::~FractionElement()
{
}

utility::string_t FractionElement::getFractionType() const
{
	return m_FractionType;
}

void FractionElement::setFractionType(utility::string_t value)
{
	m_FractionType = value;
	
}

std::shared_ptr<MathElement> FractionElement::getNumerator() const
{
	return m_Numerator;
}

void FractionElement::setNumerator(std::shared_ptr<MathElement> value)
{
	m_Numerator = value;
	
}

std::shared_ptr<MathElement> FractionElement::getDenominator() const
{
	return m_Denominator;
}

void FractionElement::setDenominator(std::shared_ptr<MathElement> value)
{
	m_Denominator = value;
	
}

web::json::value FractionElement::toJson() const
{
	web::json::value val = this->MathElement::toJson();
	if (!m_FractionType.empty())
	{
		val[utility::conversions::to_string_t("FractionType")] = ModelBase::toJson(m_FractionType);
	}
	if (m_Numerator != nullptr)
	{
		val[utility::conversions::to_string_t("Numerator")] = ModelBase::toJson(m_Numerator);
	}
	if (m_Denominator != nullptr)
	{
		val[utility::conversions::to_string_t("Denominator")] = ModelBase::toJson(m_Denominator);
	}
	return val;
}

void FractionElement::fromJson(web::json::value& val)
{
	this->MathElement::fromJson(val);
	web::json::value* jsonForFractionType = ModelBase::getField(val, "FractionType");
	if(jsonForFractionType != nullptr && !jsonForFractionType->is_null())
	{
		setFractionType(ModelBase::stringFromJson(*jsonForFractionType));
	}
	web::json::value* jsonForNumerator = ModelBase::getField(val, "Numerator");
	if(jsonForNumerator != nullptr && !jsonForNumerator->is_null())
	{
		std::shared_ptr<void> instanceForNumerator = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForNumerator);
		setNumerator(std::static_pointer_cast<MathElement>(instanceForNumerator));
	}
	web::json::value* jsonForDenominator = ModelBase::getField(val, "Denominator");
	if(jsonForDenominator != nullptr && !jsonForDenominator->is_null())
	{
		std::shared_ptr<void> instanceForDenominator = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForDenominator);
		setDenominator(std::static_pointer_cast<MathElement>(instanceForDenominator));
	}
}

}
}

