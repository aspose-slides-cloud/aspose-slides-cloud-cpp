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



#include "BubbleSeries.h"

namespace asposeslidescloud {
namespace model {

BubbleSeries::BubbleSeries()
{
	setDataPointType(L"Bubble");
}

BubbleSeries::~BubbleSeries()
{
}

std::vector<std::shared_ptr<BubbleChartDataPoint>> BubbleSeries::getDataPoints() const
{
	return m_DataPoints;
}

void BubbleSeries::setDataPoints(std::vector<std::shared_ptr<BubbleChartDataPoint>> value)
{
	m_DataPoints = value;
	
}

utility::string_t BubbleSeries::getNumberFormatOfBubbleSizes() const
{
	return m_NumberFormatOfBubbleSizes;
}

void BubbleSeries::setNumberFormatOfBubbleSizes(utility::string_t value)
{
	m_NumberFormatOfBubbleSizes = value;
	
}

web::json::value BubbleSeries::toJson() const
{
	web::json::value val = this->XYSeries::toJson();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_DataPoints)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("DataPoints")] = web::json::value::array(jsonArray);
	}
	if (!m_NumberFormatOfBubbleSizes.empty())
	{
		val[utility::conversions::to_string_t("NumberFormatOfBubbleSizes")] = ModelBase::toJson(m_NumberFormatOfBubbleSizes);
	}
	return val;
}

void BubbleSeries::fromJson(web::json::value& val)
{
	this->XYSeries::fromJson(val);
	web::json::value* jsonForDataPoints = ModelBase::getField(val, "DataPoints");
	if(jsonForDataPoints != nullptr && !jsonForDataPoints->is_null())
	{
		{
			m_DataPoints.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForDataPoints->as_array())
			{
				if(item.is_null())
				{
					m_DataPoints.push_back(std::shared_ptr<BubbleChartDataPoint>(nullptr));
				}
				else
				{
					std::shared_ptr<BubbleChartDataPoint> newItem(new BubbleChartDataPoint());
					newItem->fromJson(item);
					m_DataPoints.push_back( newItem );
				}
			}
        	}
	}
	web::json::value* jsonForNumberFormatOfBubbleSizes = ModelBase::getField(val, "NumberFormatOfBubbleSizes");
	if(jsonForNumberFormatOfBubbleSizes != nullptr && !jsonForNumberFormatOfBubbleSizes->is_null())
	{
		setNumberFormatOfBubbleSizes(ModelBase::stringFromJson(*jsonForNumberFormatOfBubbleSizes));
	}
}

}
}

