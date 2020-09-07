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



#include "OneValueChartDataPoint.h"

namespace asposeslidescloud {
namespace model {

OneValueChartDataPoint::OneValueChartDataPoint()
{
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
	
}

web::json::value OneValueChartDataPoint::toJson() const
{
	web::json::value val = this->DataPoint::toJson();
	val[utility::conversions::to_string_t("Value")] = ModelBase::toJson(m_Value);
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
}

}
}

