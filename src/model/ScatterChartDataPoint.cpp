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
#include "ScatterChartDataPoint.h"

namespace asposeslidescloud {
namespace model {

ScatterChartDataPoint::ScatterChartDataPoint()
{
	m_XValueIsSet = false;
	m_YValueIsSet = false;
	setType(L"Scatter");
}

ScatterChartDataPoint::~ScatterChartDataPoint()
{
}

double ScatterChartDataPoint::getXValue() const
{
	return m_XValue;
}

void ScatterChartDataPoint::setXValue(double value)
{
	m_XValue = value;
	m_XValueIsSet = true;
}

bool ScatterChartDataPoint::xValueIsSet() const
{
	return m_XValueIsSet;
}

void ScatterChartDataPoint::unsetXValue()
{
	m_XValueIsSet = false;
}

double ScatterChartDataPoint::getYValue() const
{
	return m_YValue;
}

void ScatterChartDataPoint::setYValue(double value)
{
	m_YValue = value;
	m_YValueIsSet = true;
}

bool ScatterChartDataPoint::yValueIsSet() const
{
	return m_YValueIsSet;
}

void ScatterChartDataPoint::unsetYValue()
{
	m_YValueIsSet = false;
}

utility::string_t ScatterChartDataPoint::getXValueFormula() const
{
	return m_XValueFormula;
}

void ScatterChartDataPoint::setXValueFormula(utility::string_t value)
{
	m_XValueFormula = value;
	
}

utility::string_t ScatterChartDataPoint::getYValueFormula() const
{
	return m_YValueFormula;
}

void ScatterChartDataPoint::setYValueFormula(utility::string_t value)
{
	m_YValueFormula = value;
	
}

web::json::value ScatterChartDataPoint::toJson() const
{
	web::json::value val = this->DataPoint::toJson();
	if(m_XValueIsSet)
	{
		val[utility::conversions::to_string_t("XValue")] = ModelBase::toJson(m_XValue);
	}
	if(m_YValueIsSet)
	{
		val[utility::conversions::to_string_t("YValue")] = ModelBase::toJson(m_YValue);
	}
	if (!m_XValueFormula.empty())
	{
		val[utility::conversions::to_string_t("XValueFormula")] = ModelBase::toJson(m_XValueFormula);
	}
	if (!m_YValueFormula.empty())
	{
		val[utility::conversions::to_string_t("YValueFormula")] = ModelBase::toJson(m_YValueFormula);
	}
	return val;
}

void ScatterChartDataPoint::fromJson(web::json::value& val)
{
	this->DataPoint::fromJson(val);
	web::json::value* jsonForXValue = ModelBase::getField(val, "XValue");
	if(jsonForXValue != nullptr && !jsonForXValue->is_null() && jsonForXValue->is_number())
	{
		setXValue(ModelBase::doubleFromJson(*jsonForXValue));
	}
	web::json::value* jsonForYValue = ModelBase::getField(val, "YValue");
	if(jsonForYValue != nullptr && !jsonForYValue->is_null() && jsonForYValue->is_number())
	{
		setYValue(ModelBase::doubleFromJson(*jsonForYValue));
	}
	web::json::value* jsonForXValueFormula = ModelBase::getField(val, "XValueFormula");
	if(jsonForXValueFormula != nullptr && !jsonForXValueFormula->is_null())
	{
		setXValueFormula(ModelBase::stringFromJson(*jsonForXValueFormula));
	}
	web::json::value* jsonForYValueFormula = ModelBase::getField(val, "YValueFormula");
	if(jsonForYValueFormula != nullptr && !jsonForYValueFormula->is_null())
	{
		setYValueFormula(ModelBase::stringFromJson(*jsonForYValueFormula));
	}
}

}
}

