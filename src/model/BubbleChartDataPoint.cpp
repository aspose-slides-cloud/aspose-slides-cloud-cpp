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
#include "BubbleChartDataPoint.h"

namespace asposeslidescloud {
namespace model {

BubbleChartDataPoint::BubbleChartDataPoint()
{
	setType(L"Bubble");
}

BubbleChartDataPoint::~BubbleChartDataPoint()
{
}

double BubbleChartDataPoint::getBubbleSize() const
{
	return m_BubbleSize;
}

void BubbleChartDataPoint::setBubbleSize(double value)
{
	m_BubbleSize = value;
	
}

utility::string_t BubbleChartDataPoint::getBubbleSizeFormula() const
{
	return m_BubbleSizeFormula;
}

void BubbleChartDataPoint::setBubbleSizeFormula(utility::string_t value)
{
	m_BubbleSizeFormula = value;
	
}

web::json::value BubbleChartDataPoint::toJson() const
{
	web::json::value val = this->ScatterChartDataPoint::toJson();
	val[utility::conversions::to_string_t("BubbleSize")] = ModelBase::toJson(m_BubbleSize);
	if (!m_BubbleSizeFormula.empty())
	{
		val[utility::conversions::to_string_t("BubbleSizeFormula")] = ModelBase::toJson(m_BubbleSizeFormula);
	}
	return val;
}

void BubbleChartDataPoint::fromJson(web::json::value& val)
{
	this->ScatterChartDataPoint::fromJson(val);
	web::json::value* jsonForBubbleSize = ModelBase::getField(val, "BubbleSize");
	if(jsonForBubbleSize != nullptr && !jsonForBubbleSize->is_null() && jsonForBubbleSize->is_number())
	{
		setBubbleSize(ModelBase::doubleFromJson(*jsonForBubbleSize));
	}
	web::json::value* jsonForBubbleSizeFormula = ModelBase::getField(val, "BubbleSizeFormula");
	if(jsonForBubbleSizeFormula != nullptr && !jsonForBubbleSizeFormula->is_null())
	{
		setBubbleSizeFormula(ModelBase::stringFromJson(*jsonForBubbleSizeFormula));
	}
}

}
}

