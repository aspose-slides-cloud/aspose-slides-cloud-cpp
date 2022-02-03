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



#include "BoxElement.h"

namespace asposeslidescloud {
namespace model {

BoxElement::BoxElement()
{
	m_OperatorEmulatorIsSet = false;
	m_NoBreakIsSet = false;
	m_DifferentialIsSet = false;
	m_AlignmentPointIsSet = false;
	m_ExplicitBreakIsSet = false;
}

BoxElement::~BoxElement()
{
}

std::shared_ptr<MathElement> BoxElement::getBase() const
{
	return m_Base;
}

void BoxElement::setBase(std::shared_ptr<MathElement> value)
{
	m_Base = value;
	
}

bool BoxElement::getOperatorEmulator() const
{
	return m_OperatorEmulator;
}

void BoxElement::setOperatorEmulator(bool value)
{
	m_OperatorEmulator = value;
	m_OperatorEmulatorIsSet = true;
}

bool BoxElement::operatorEmulatorIsSet() const
{
	return m_OperatorEmulatorIsSet;
}

void BoxElement::unsetOperatorEmulator()
{
	m_OperatorEmulatorIsSet = false;
}

bool BoxElement::getNoBreak() const
{
	return m_NoBreak;
}

void BoxElement::setNoBreak(bool value)
{
	m_NoBreak = value;
	m_NoBreakIsSet = true;
}

bool BoxElement::noBreakIsSet() const
{
	return m_NoBreakIsSet;
}

void BoxElement::unsetNoBreak()
{
	m_NoBreakIsSet = false;
}

bool BoxElement::getDifferential() const
{
	return m_Differential;
}

void BoxElement::setDifferential(bool value)
{
	m_Differential = value;
	m_DifferentialIsSet = true;
}

bool BoxElement::differentialIsSet() const
{
	return m_DifferentialIsSet;
}

void BoxElement::unsetDifferential()
{
	m_DifferentialIsSet = false;
}

bool BoxElement::getAlignmentPoint() const
{
	return m_AlignmentPoint;
}

void BoxElement::setAlignmentPoint(bool value)
{
	m_AlignmentPoint = value;
	m_AlignmentPointIsSet = true;
}

bool BoxElement::alignmentPointIsSet() const
{
	return m_AlignmentPointIsSet;
}

void BoxElement::unsetAlignmentPoint()
{
	m_AlignmentPointIsSet = false;
}

int32_t BoxElement::getExplicitBreak() const
{
	return m_ExplicitBreak;
}

void BoxElement::setExplicitBreak(int32_t value)
{
	m_ExplicitBreak = value;
	m_ExplicitBreakIsSet = true;
}

bool BoxElement::explicitBreakIsSet() const
{
	return m_ExplicitBreakIsSet;
}

void BoxElement::unsetExplicitBreak()
{
	m_ExplicitBreakIsSet = false;
}

web::json::value BoxElement::toJson() const
{
	web::json::value val = this->MathElement::toJson();
	if (m_Base != nullptr)
	{
		val[utility::conversions::to_string_t("Base")] = ModelBase::toJson(m_Base);
	}
	if(m_OperatorEmulatorIsSet)
	{
		val[utility::conversions::to_string_t("OperatorEmulator")] = ModelBase::toJson(m_OperatorEmulator);
	}
	if(m_NoBreakIsSet)
	{
		val[utility::conversions::to_string_t("NoBreak")] = ModelBase::toJson(m_NoBreak);
	}
	if(m_DifferentialIsSet)
	{
		val[utility::conversions::to_string_t("Differential")] = ModelBase::toJson(m_Differential);
	}
	if(m_AlignmentPointIsSet)
	{
		val[utility::conversions::to_string_t("AlignmentPoint")] = ModelBase::toJson(m_AlignmentPoint);
	}
	if(m_ExplicitBreakIsSet)
	{
		val[utility::conversions::to_string_t("ExplicitBreak")] = ModelBase::toJson(m_ExplicitBreak);
	}
	return val;
}

void BoxElement::fromJson(web::json::value& val)
{
	this->MathElement::fromJson(val);
	web::json::value* jsonForBase = ModelBase::getField(val, "Base");
	if(jsonForBase != nullptr && !jsonForBase->is_null())
	{
		std::shared_ptr<MathElement> newItem(new MathElement());
		newItem->fromJson(*jsonForBase);
		setBase(newItem);
	}
	web::json::value* jsonForOperatorEmulator = ModelBase::getField(val, "OperatorEmulator");
	if(jsonForOperatorEmulator != nullptr && !jsonForOperatorEmulator->is_null())
	{
		setOperatorEmulator(ModelBase::boolFromJson(*jsonForOperatorEmulator));
	}
	web::json::value* jsonForNoBreak = ModelBase::getField(val, "NoBreak");
	if(jsonForNoBreak != nullptr && !jsonForNoBreak->is_null())
	{
		setNoBreak(ModelBase::boolFromJson(*jsonForNoBreak));
	}
	web::json::value* jsonForDifferential = ModelBase::getField(val, "Differential");
	if(jsonForDifferential != nullptr && !jsonForDifferential->is_null())
	{
		setDifferential(ModelBase::boolFromJson(*jsonForDifferential));
	}
	web::json::value* jsonForAlignmentPoint = ModelBase::getField(val, "AlignmentPoint");
	if(jsonForAlignmentPoint != nullptr && !jsonForAlignmentPoint->is_null())
	{
		setAlignmentPoint(ModelBase::boolFromJson(*jsonForAlignmentPoint));
	}
	web::json::value* jsonForExplicitBreak = ModelBase::getField(val, "ExplicitBreak");
	if(jsonForExplicitBreak != nullptr && !jsonForExplicitBreak->is_null() && jsonForExplicitBreak->is_number())
	{
		setExplicitBreak(ModelBase::int32_tFromJson(*jsonForExplicitBreak));
	}
}

}
}

