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
	
}

double ScatterChartDataPoint::getYValue() const
{
	return m_YValue;
}

void ScatterChartDataPoint::setYValue(double value)
{
	m_YValue = value;
	
}

web::json::value ScatterChartDataPoint::toJson() const
{
	web::json::value val = this->DataPoint::toJson();
	val[utility::conversions::to_string_t("XValue")] = ModelBase::toJson(m_XValue);
	val[utility::conversions::to_string_t("YValue")] = ModelBase::toJson(m_YValue);
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
}

}
}

