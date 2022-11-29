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
#include "OneValueSeries.h"

namespace asposeslidescloud {
namespace model {

OneValueSeries::OneValueSeries()
{
	m_ShowConnectorLinesIsSet = false;
	m_ShowInnerPointsIsSet = false;
	m_ShowMeanLineIsSet = false;
	m_ShowMeanMarkersIsSet = false;
	m_ShowOutlierPointsIsSet = false;
	setDataPointType(L"OneValue");
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

std::shared_ptr<DataSource> OneValueSeries::getDataSourceForValues() const
{
	return m_DataSourceForValues;
}

void OneValueSeries::setDataSourceForValues(std::shared_ptr<DataSource> value)
{
	m_DataSourceForValues = value;
	
}

bool OneValueSeries::isShowConnectorLines() const
{
	return m_ShowConnectorLines;
}

void OneValueSeries::setShowConnectorLines(bool value)
{
	m_ShowConnectorLines = value;
	m_ShowConnectorLinesIsSet = true;
}

bool OneValueSeries::showConnectorLinesIsSet() const
{
	return m_ShowConnectorLinesIsSet;
}

void OneValueSeries::unsetShowConnectorLines()
{
	m_ShowConnectorLinesIsSet = false;
}

utility::string_t OneValueSeries::getQuartileMethod() const
{
	return m_QuartileMethod;
}

void OneValueSeries::setQuartileMethod(utility::string_t value)
{
	m_QuartileMethod = value;
	
}

bool OneValueSeries::isShowInnerPoints() const
{
	return m_ShowInnerPoints;
}

void OneValueSeries::setShowInnerPoints(bool value)
{
	m_ShowInnerPoints = value;
	m_ShowInnerPointsIsSet = true;
}

bool OneValueSeries::showInnerPointsIsSet() const
{
	return m_ShowInnerPointsIsSet;
}

void OneValueSeries::unsetShowInnerPoints()
{
	m_ShowInnerPointsIsSet = false;
}

bool OneValueSeries::isShowMeanLine() const
{
	return m_ShowMeanLine;
}

void OneValueSeries::setShowMeanLine(bool value)
{
	m_ShowMeanLine = value;
	m_ShowMeanLineIsSet = true;
}

bool OneValueSeries::showMeanLineIsSet() const
{
	return m_ShowMeanLineIsSet;
}

void OneValueSeries::unsetShowMeanLine()
{
	m_ShowMeanLineIsSet = false;
}

bool OneValueSeries::isShowMeanMarkers() const
{
	return m_ShowMeanMarkers;
}

void OneValueSeries::setShowMeanMarkers(bool value)
{
	m_ShowMeanMarkers = value;
	m_ShowMeanMarkersIsSet = true;
}

bool OneValueSeries::showMeanMarkersIsSet() const
{
	return m_ShowMeanMarkersIsSet;
}

void OneValueSeries::unsetShowMeanMarkers()
{
	m_ShowMeanMarkersIsSet = false;
}

bool OneValueSeries::isShowOutlierPoints() const
{
	return m_ShowOutlierPoints;
}

void OneValueSeries::setShowOutlierPoints(bool value)
{
	m_ShowOutlierPoints = value;
	m_ShowOutlierPointsIsSet = true;
}

bool OneValueSeries::showOutlierPointsIsSet() const
{
	return m_ShowOutlierPointsIsSet;
}

void OneValueSeries::unsetShowOutlierPoints()
{
	m_ShowOutlierPointsIsSet = false;
}

web::json::value OneValueSeries::toJson() const
{
	web::json::value val = this->Series::toJson();
	if (m_DataPoints.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_DataPoints)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("DataPoints")] = web::json::value::array(jsonArray);
	}
	if (!m_NumberFormatOfValues.empty())
	{
		val[utility::conversions::to_string_t("NumberFormatOfValues")] = ModelBase::toJson(m_NumberFormatOfValues);
	}
	if (m_DataSourceForValues != nullptr)
	{
		val[utility::conversions::to_string_t("DataSourceForValues")] = ModelBase::toJson(m_DataSourceForValues);
	}
	if(m_ShowConnectorLinesIsSet)
	{
		val[utility::conversions::to_string_t("ShowConnectorLines")] = ModelBase::toJson(m_ShowConnectorLines);
	}
	if (!m_QuartileMethod.empty())
	{
		val[utility::conversions::to_string_t("QuartileMethod")] = ModelBase::toJson(m_QuartileMethod);
	}
	if(m_ShowInnerPointsIsSet)
	{
		val[utility::conversions::to_string_t("ShowInnerPoints")] = ModelBase::toJson(m_ShowInnerPoints);
	}
	if(m_ShowMeanLineIsSet)
	{
		val[utility::conversions::to_string_t("ShowMeanLine")] = ModelBase::toJson(m_ShowMeanLine);
	}
	if(m_ShowMeanMarkersIsSet)
	{
		val[utility::conversions::to_string_t("ShowMeanMarkers")] = ModelBase::toJson(m_ShowMeanMarkers);
	}
	if(m_ShowOutlierPointsIsSet)
	{
		val[utility::conversions::to_string_t("ShowOutlierPoints")] = ModelBase::toJson(m_ShowOutlierPoints);
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
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"OneValueChartDataPoint", item);
					m_DataPoints.push_back(std::static_pointer_cast<OneValueChartDataPoint>(newItem));
				}
			}
        	}
	}
	web::json::value* jsonForNumberFormatOfValues = ModelBase::getField(val, "NumberFormatOfValues");
	if(jsonForNumberFormatOfValues != nullptr && !jsonForNumberFormatOfValues->is_null())
	{
		setNumberFormatOfValues(ModelBase::stringFromJson(*jsonForNumberFormatOfValues));
	}
	web::json::value* jsonForDataSourceForValues = ModelBase::getField(val, "DataSourceForValues");
	if(jsonForDataSourceForValues != nullptr && !jsonForDataSourceForValues->is_null())
	{
		std::shared_ptr<void> instanceForDataSourceForValues = asposeslidescloud::api::ClassRegistry::deserialize(L"DataSource", *jsonForDataSourceForValues);
		setDataSourceForValues(std::static_pointer_cast<DataSource>(instanceForDataSourceForValues));
	}
	web::json::value* jsonForShowConnectorLines = ModelBase::getField(val, "ShowConnectorLines");
	if(jsonForShowConnectorLines != nullptr && !jsonForShowConnectorLines->is_null())
	{
		setShowConnectorLines(ModelBase::boolFromJson(*jsonForShowConnectorLines));
	}
	web::json::value* jsonForQuartileMethod = ModelBase::getField(val, "QuartileMethod");
	if(jsonForQuartileMethod != nullptr && !jsonForQuartileMethod->is_null())
	{
		setQuartileMethod(ModelBase::stringFromJson(*jsonForQuartileMethod));
	}
	web::json::value* jsonForShowInnerPoints = ModelBase::getField(val, "ShowInnerPoints");
	if(jsonForShowInnerPoints != nullptr && !jsonForShowInnerPoints->is_null())
	{
		setShowInnerPoints(ModelBase::boolFromJson(*jsonForShowInnerPoints));
	}
	web::json::value* jsonForShowMeanLine = ModelBase::getField(val, "ShowMeanLine");
	if(jsonForShowMeanLine != nullptr && !jsonForShowMeanLine->is_null())
	{
		setShowMeanLine(ModelBase::boolFromJson(*jsonForShowMeanLine));
	}
	web::json::value* jsonForShowMeanMarkers = ModelBase::getField(val, "ShowMeanMarkers");
	if(jsonForShowMeanMarkers != nullptr && !jsonForShowMeanMarkers->is_null())
	{
		setShowMeanMarkers(ModelBase::boolFromJson(*jsonForShowMeanMarkers));
	}
	web::json::value* jsonForShowOutlierPoints = ModelBase::getField(val, "ShowOutlierPoints");
	if(jsonForShowOutlierPoints != nullptr && !jsonForShowOutlierPoints->is_null())
	{
		setShowOutlierPoints(ModelBase::boolFromJson(*jsonForShowOutlierPoints));
	}
}

}
}

