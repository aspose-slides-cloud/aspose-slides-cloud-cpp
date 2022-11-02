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
#include "NaryOperatorElement.h"

namespace asposeslidescloud {
namespace model {

NaryOperatorElement::NaryOperatorElement()
{
	m_GrowToMatchOperandHeightIsSet = false;
	m_HideSubscriptIsSet = false;
	m_HideSuperscriptIsSet = false;
	setType(L"NaryOperator");
}

NaryOperatorElement::~NaryOperatorElement()
{
}

std::shared_ptr<MathElement> NaryOperatorElement::getBase() const
{
	return m_Base;
}

void NaryOperatorElement::setBase(std::shared_ptr<MathElement> value)
{
	m_Base = value;
	
}

std::shared_ptr<MathElement> NaryOperatorElement::getSubscript() const
{
	return m_Subscript;
}

void NaryOperatorElement::setSubscript(std::shared_ptr<MathElement> value)
{
	m_Subscript = value;
	
}

std::shared_ptr<MathElement> NaryOperatorElement::getSuperscript() const
{
	return m_Superscript;
}

void NaryOperatorElement::setSuperscript(std::shared_ptr<MathElement> value)
{
	m_Superscript = value;
	
}

utility::string_t NaryOperatorElement::getOperator() const
{
	return m_Operator;
}

void NaryOperatorElement::setOperator(utility::string_t value)
{
	m_Operator = value;
	
}

utility::string_t NaryOperatorElement::getLimitLocation() const
{
	return m_LimitLocation;
}

void NaryOperatorElement::setLimitLocation(utility::string_t value)
{
	m_LimitLocation = value;
	
}

bool NaryOperatorElement::getGrowToMatchOperandHeight() const
{
	return m_GrowToMatchOperandHeight;
}

void NaryOperatorElement::setGrowToMatchOperandHeight(bool value)
{
	m_GrowToMatchOperandHeight = value;
	m_GrowToMatchOperandHeightIsSet = true;
}

bool NaryOperatorElement::growToMatchOperandHeightIsSet() const
{
	return m_GrowToMatchOperandHeightIsSet;
}

void NaryOperatorElement::unsetGrowToMatchOperandHeight()
{
	m_GrowToMatchOperandHeightIsSet = false;
}

bool NaryOperatorElement::getHideSubscript() const
{
	return m_HideSubscript;
}

void NaryOperatorElement::setHideSubscript(bool value)
{
	m_HideSubscript = value;
	m_HideSubscriptIsSet = true;
}

bool NaryOperatorElement::hideSubscriptIsSet() const
{
	return m_HideSubscriptIsSet;
}

void NaryOperatorElement::unsetHideSubscript()
{
	m_HideSubscriptIsSet = false;
}

bool NaryOperatorElement::getHideSuperscript() const
{
	return m_HideSuperscript;
}

void NaryOperatorElement::setHideSuperscript(bool value)
{
	m_HideSuperscript = value;
	m_HideSuperscriptIsSet = true;
}

bool NaryOperatorElement::hideSuperscriptIsSet() const
{
	return m_HideSuperscriptIsSet;
}

void NaryOperatorElement::unsetHideSuperscript()
{
	m_HideSuperscriptIsSet = false;
}

web::json::value NaryOperatorElement::toJson() const
{
	web::json::value val = this->MathElement::toJson();
	if (m_Base != nullptr)
	{
		val[utility::conversions::to_string_t("Base")] = ModelBase::toJson(m_Base);
	}
	if (m_Subscript != nullptr)
	{
		val[utility::conversions::to_string_t("Subscript")] = ModelBase::toJson(m_Subscript);
	}
	if (m_Superscript != nullptr)
	{
		val[utility::conversions::to_string_t("Superscript")] = ModelBase::toJson(m_Superscript);
	}
	if (!m_Operator.empty())
	{
		val[utility::conversions::to_string_t("Operator")] = ModelBase::toJson(m_Operator);
	}
	if (!m_LimitLocation.empty())
	{
		val[utility::conversions::to_string_t("LimitLocation")] = ModelBase::toJson(m_LimitLocation);
	}
	if(m_GrowToMatchOperandHeightIsSet)
	{
		val[utility::conversions::to_string_t("GrowToMatchOperandHeight")] = ModelBase::toJson(m_GrowToMatchOperandHeight);
	}
	if(m_HideSubscriptIsSet)
	{
		val[utility::conversions::to_string_t("HideSubscript")] = ModelBase::toJson(m_HideSubscript);
	}
	if(m_HideSuperscriptIsSet)
	{
		val[utility::conversions::to_string_t("HideSuperscript")] = ModelBase::toJson(m_HideSuperscript);
	}
	return val;
}

void NaryOperatorElement::fromJson(web::json::value& val)
{
	this->MathElement::fromJson(val);
	web::json::value* jsonForBase = ModelBase::getField(val, "Base");
	if(jsonForBase != nullptr && !jsonForBase->is_null())
	{
		std::shared_ptr<void> instanceForBase = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForBase);
		setBase(std::static_pointer_cast<MathElement>(instanceForBase));
	}
	web::json::value* jsonForSubscript = ModelBase::getField(val, "Subscript");
	if(jsonForSubscript != nullptr && !jsonForSubscript->is_null())
	{
		std::shared_ptr<void> instanceForSubscript = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForSubscript);
		setSubscript(std::static_pointer_cast<MathElement>(instanceForSubscript));
	}
	web::json::value* jsonForSuperscript = ModelBase::getField(val, "Superscript");
	if(jsonForSuperscript != nullptr && !jsonForSuperscript->is_null())
	{
		std::shared_ptr<void> instanceForSuperscript = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForSuperscript);
		setSuperscript(std::static_pointer_cast<MathElement>(instanceForSuperscript));
	}
	web::json::value* jsonForOperator = ModelBase::getField(val, "Operator");
	if(jsonForOperator != nullptr && !jsonForOperator->is_null())
	{
		setOperator(ModelBase::stringFromJson(*jsonForOperator));
	}
	web::json::value* jsonForLimitLocation = ModelBase::getField(val, "LimitLocation");
	if(jsonForLimitLocation != nullptr && !jsonForLimitLocation->is_null())
	{
		setLimitLocation(ModelBase::stringFromJson(*jsonForLimitLocation));
	}
	web::json::value* jsonForGrowToMatchOperandHeight = ModelBase::getField(val, "GrowToMatchOperandHeight");
	if(jsonForGrowToMatchOperandHeight != nullptr && !jsonForGrowToMatchOperandHeight->is_null())
	{
		setGrowToMatchOperandHeight(ModelBase::boolFromJson(*jsonForGrowToMatchOperandHeight));
	}
	web::json::value* jsonForHideSubscript = ModelBase::getField(val, "HideSubscript");
	if(jsonForHideSubscript != nullptr && !jsonForHideSubscript->is_null())
	{
		setHideSubscript(ModelBase::boolFromJson(*jsonForHideSubscript));
	}
	web::json::value* jsonForHideSuperscript = ModelBase::getField(val, "HideSuperscript");
	if(jsonForHideSuperscript != nullptr && !jsonForHideSuperscript->is_null())
	{
		setHideSuperscript(ModelBase::boolFromJson(*jsonForHideSuperscript));
	}
}

}
}

