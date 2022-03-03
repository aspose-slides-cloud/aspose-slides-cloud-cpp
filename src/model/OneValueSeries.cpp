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



#include "OneValueSeries.h"

namespace asposeslidescloud {
namespace model {

OneValueSeries::OneValueSeries()
{
}

OneValueSeries::~OneValueSeries()
{
}

std::vector<std::shared_ptr<OneValueChartDataPoint>> OneValueSeries::getDataPoints() const
{
	return m_DataPoints;
}

void OneValueSeries::setDataPoints(std::vector<std::shared_ptr<OneValueChartDataPoint>> value)
{
	m_DataPoints = value;
	
}

utility::string_t OneValueSeries::getNumberFormatOfValues() const
{
	return m_NumberFormatOfValues;
}

void OneValueSeries::setNumberFormatOfValues(utility::string_t value)
{
	m_NumberFormatOfValues = value;
	
}

web::json::value OneValueSeries::toJson() const
{
	web::json::value val = this->Series::toJson();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_DataPoints)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		if (jsonArray.size() > 0)
		{
			val[utility::conversions::to_string_t("DataPoints")] = web::json::value::array(jsonArray);
		}
	}
	if (!m_NumberFormatOfValues.empty())
	{
		val[utility::conversions::to_string_t("NumberFormatOfValues")] = ModelBase::toJson(m_NumberFormatOfValues);
	}
	return val;
}

void OneValueSeries::fromJson(web::json::value& val)
{
	this->Series::fromJson(val);
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
					m_DataPoints.push_back(std::shared_ptr<OneValueChartDataPoint>(nullptr));
				}
				else
				{
					std::shared_ptr<OneValueChartDataPoint> newItem(new OneValueChartDataPoint());
					newItem->fromJson(item);
					m_DataPoints.push_back( newItem );
				}
			}
        	}
	}
	web::json::value* jsonForNumberFormatOfValues = ModelBase::getField(val, "NumberFormatOfValues");
	if(jsonForNumberFormatOfValues != nullptr && !jsonForNumberFormatOfValues->is_null())
	{
		setNumberFormatOfValues(ModelBase::stringFromJson(*jsonForNumberFormatOfValues));
	}
}

}
}

