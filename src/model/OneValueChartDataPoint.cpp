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
#include "OneValueChartDataPoint.h"

namespace asposeslidescloud {
namespace model {

OneValueChartDataPoint::OneValueChartDataPoint()
{
	m_ValueIsSet = false;
	m_SetAsTotalIsSet = false;
	m_InvertIfNegativeIsSet = false;
	setType(L"OneValue");
}

OneValueChartDataPoint::~OneValueChartDataPoint()
{
}

double OneValueChartDataPoint::getValue() const
{
	return m_Value;
}

void OneValueChartDataPoint::setValue(double value)
{
	m_Value = value;
	m_ValueIsSet = true;
}

bool OneValueChartDataPoint::valueIsSet() const
{
	return m_ValueIsSet;
}

void OneValueChartDataPoint::unsetValue()
{
	m_ValueIsSet = false;
}

utility::string_t OneValueChartDataPoint::getValueFormula() const
{
	return m_ValueFormula;
}

void OneValueChartDataPoint::setValueFormula(utility::string_t value)
{
	m_ValueFormula = value;
	
}

bool OneValueChartDataPoint::isSetAsTotal() const
{
	return m_SetAsTotal;
}

void OneValueChartDataPoint::setSetAsTotal(bool value)
{
	m_SetAsTotal = value;
	m_SetAsTotalIsSet = true;
}

bool OneValueChartDataPoint::setAsTotalIsSet() const
{
	return m_SetAsTotalIsSet;
}

void OneValueChartDataPoint::unsetSetAsTotal()
{
	m_SetAsTotalIsSet = false;
}

bool OneValueChartDataPoint::isInvertIfNegative() const
{
	return m_InvertIfNegative;
}

void OneValueChartDataPoint::setInvertIfNegative(bool value)
{
	m_InvertIfNegative = value;
	m_InvertIfNegativeIsSet = true;
}

bool OneValueChartDataPoint::invertIfNegativeIsSet() const
{
	return m_InvertIfNegativeIsSet;
}

void OneValueChartDataPoint::unsetInvertIfNegative()
{
	m_InvertIfNegativeIsSet = false;
}

web::json::value OneValueChartDataPoint::toJson() const
{
	web::json::value val = this->DataPoint::toJson();
	if(m_ValueIsSet)
	{
		val[utility::conversions::to_string_t("Value")] = ModelBase::toJson(m_Value);
	}
	if (!m_ValueFormula.empty())
	{
		val[utility::conversions::to_string_t("ValueFormula")] = ModelBase::toJson(m_ValueFormula);
	}
	if(m_SetAsTotalIsSet)
	{
		val[utility::conversions::to_string_t("SetAsTotal")] = ModelBase::toJson(m_SetAsTotal);
	}
	if(m_InvertIfNegativeIsSet)
	{
		val[utility::conversions::to_string_t("InvertIfNegative")] = ModelBase::toJson(m_InvertIfNegative);
	}
	return val;
}

void OneValueChartDataPoint::fromJson(web::json::value& val)
{
	this->DataPoint::fromJson(val);
	web::json::value* jsonForValue = ModelBase::getField(val, "Value");
	if(jsonForValue != nullptr && !jsonForValue->is_null() && jsonForValue->is_number())
	{
		setValue(ModelBase::doubleFromJson(*jsonForValue));
	}
	web::json::value* jsonForValueFormula = ModelBase::getField(val, "ValueFormula");
	if(jsonForValueFormula != nullptr && !jsonForValueFormula->is_null())
	{
		setValueFormula(ModelBase::stringFromJson(*jsonForValueFormula));
	}
	web::json::value* jsonForSetAsTotal = ModelBase::getField(val, "SetAsTotal");
	if(jsonForSetAsTotal != nullptr && !jsonForSetAsTotal->is_null())
	{
		setSetAsTotal(ModelBase::boolFromJson(*jsonForSetAsTotal));
	}
	web::json::value* jsonForInvertIfNegative = ModelBase::getField(val, "InvertIfNegative");
	if(jsonForInvertIfNegative != nullptr && !jsonForInvertIfNegative->is_null())
	{
		setInvertIfNegative(ModelBase::boolFromJson(*jsonForInvertIfNegative));
	}
}

}
}

