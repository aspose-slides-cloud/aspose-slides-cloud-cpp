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
#include "Chart.h"

namespace asposeslidescloud {
namespace model {

Chart::Chart()
{
	m_ShowDataLabelsOverMaximumIsSet = false;
	m_HasRoundedCornersIsSet = false;
	setType(L"Chart");
}

Chart::~Chart()
{
}

utility::string_t Chart::getChartType() const
{
	return m_ChartType;
}

void Chart::setChartType(utility::string_t value)
{
	m_ChartType = value;
	
}

bool Chart::getShowDataLabelsOverMaximum() const
{
	return m_ShowDataLabelsOverMaximum;
}

void Chart::setShowDataLabelsOverMaximum(bool value)
{
	m_ShowDataLabelsOverMaximum = value;
	m_ShowDataLabelsOverMaximumIsSet = true;
}

bool Chart::showDataLabelsOverMaximumIsSet() const
{
	return m_ShowDataLabelsOverMaximumIsSet;
}

void Chart::unsetShowDataLabelsOverMaximum()
{
	m_ShowDataLabelsOverMaximumIsSet = false;
}

std::vector<std::shared_ptr<Series>> Chart::getSeries() const
{
	return m_Series;
}

void Chart::setSeries(std::vector<std::shared_ptr<Series>> value)
{
	m_Series = value;
	
}

std::vector<std::shared_ptr<ChartCategory>> Chart::getCategories() const
{
	return m_Categories;
}

void Chart::setCategories(std::vector<std::shared_ptr<ChartCategory>> value)
{
	m_Categories = value;
	
}

std::shared_ptr<ChartTitle> Chart::getTitle() const
{
	return m_Title;
}

void Chart::setTitle(std::shared_ptr<ChartTitle> value)
{
	m_Title = value;
	
}

std::shared_ptr<ChartWall> Chart::getBackWall() const
{
	return m_BackWall;
}

void Chart::setBackWall(std::shared_ptr<ChartWall> value)
{
	m_BackWall = value;
	
}

std::shared_ptr<ChartWall> Chart::getSideWall() const
{
	return m_SideWall;
}

void Chart::setSideWall(std::shared_ptr<ChartWall> value)
{
	m_SideWall = value;
	
}

std::shared_ptr<ChartWall> Chart::getFloor() const
{
	return m_Floor;
}

void Chart::setFloor(std::shared_ptr<ChartWall> value)
{
	m_Floor = value;
	
}

std::shared_ptr<Legend> Chart::getLegend() const
{
	return m_Legend;
}

void Chart::setLegend(std::shared_ptr<Legend> value)
{
	m_Legend = value;
	
}

std::shared_ptr<Axes> Chart::getAxes() const
{
	return m_Axes;
}

void Chart::setAxes(std::shared_ptr<Axes> value)
{
	m_Axes = value;
	
}

std::shared_ptr<PlotArea> Chart::getPlotArea() const
{
	return m_PlotArea;
}

void Chart::setPlotArea(std::shared_ptr<PlotArea> value)
{
	m_PlotArea = value;
	
}

bool Chart::getHasRoundedCorners() const
{
	return m_HasRoundedCorners;
}

void Chart::setHasRoundedCorners(bool value)
{
	m_HasRoundedCorners = value;
	m_HasRoundedCornersIsSet = true;
}

bool Chart::hasRoundedCornersIsSet() const
{
	return m_HasRoundedCornersIsSet;
}

void Chart::unsetHasRoundedCorners()
{
	m_HasRoundedCornersIsSet = false;
}

std::vector<std::shared_ptr<ChartSeriesGroup>> Chart::getSeriesGroups() const
{
	return m_SeriesGroups;
}

void Chart::setSeriesGroups(std::vector<std::shared_ptr<ChartSeriesGroup>> value)
{
	m_SeriesGroups = value;
	
}

web::json::value Chart::toJson() const
{
	web::json::value val = this->ShapeBase::toJson();
	if (!m_ChartType.empty())
	{
		val[utility::conversions::to_string_t("ChartType")] = ModelBase::toJson(m_ChartType);
	}
	if(m_ShowDataLabelsOverMaximumIsSet)
	{
		val[utility::conversions::to_string_t("ShowDataLabelsOverMaximum")] = ModelBase::toJson(m_ShowDataLabelsOverMaximum);
	}
	if (m_Series.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Series)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Series")] = web::json::value::array(jsonArray);
	}
	if (m_Categories.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Categories)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Categories")] = web::json::value::array(jsonArray);
	}
	if (m_Title != nullptr)
	{
		val[utility::conversions::to_string_t("Title")] = ModelBase::toJson(m_Title);
	}
	if (m_BackWall != nullptr)
	{
		val[utility::conversions::to_string_t("BackWall")] = ModelBase::toJson(m_BackWall);
	}
	if (m_SideWall != nullptr)
	{
		val[utility::conversions::to_string_t("SideWall")] = ModelBase::toJson(m_SideWall);
	}
	if (m_Floor != nullptr)
	{
		val[utility::conversions::to_string_t("Floor")] = ModelBase::toJson(m_Floor);
	}
	if (m_Legend != nullptr)
	{
		val[utility::conversions::to_string_t("Legend")] = ModelBase::toJson(m_Legend);
	}
	if (m_Axes != nullptr)
	{
		val[utility::conversions::to_string_t("Axes")] = ModelBase::toJson(m_Axes);
	}
	if (m_PlotArea != nullptr)
	{
		val[utility::conversions::to_string_t("PlotArea")] = ModelBase::toJson(m_PlotArea);
	}
	if(m_HasRoundedCornersIsSet)
	{
		val[utility::conversions::to_string_t("HasRoundedCorners")] = ModelBase::toJson(m_HasRoundedCorners);
	}
	if (m_SeriesGroups.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_SeriesGroups)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("SeriesGroups")] = web::json::value::array(jsonArray);
	}
	return val;
}

void Chart::fromJson(web::json::value& val)
{
	this->ShapeBase::fromJson(val);
	web::json::value* jsonForChartType = ModelBase::getField(val, "ChartType");
	if(jsonForChartType != nullptr && !jsonForChartType->is_null())
	{
		setChartType(ModelBase::stringFromJson(*jsonForChartType));
	}
	web::json::value* jsonForShowDataLabelsOverMaximum = ModelBase::getField(val, "ShowDataLabelsOverMaximum");
	if(jsonForShowDataLabelsOverMaximum != nullptr && !jsonForShowDataLabelsOverMaximum->is_null())
	{
		setShowDataLabelsOverMaximum(ModelBase::boolFromJson(*jsonForShowDataLabelsOverMaximum));
	}
	web::json::value* jsonForSeries = ModelBase::getField(val, "Series");
	if(jsonForSeries != nullptr && !jsonForSeries->is_null())
	{
		{
			m_Series.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForSeries->as_array())
			{
				if(item.is_null())
				{
					m_Series.push_back(std::shared_ptr<Series>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"Series", item);
					m_Series.push_back(std::static_pointer_cast<Series>(newItem));
				}
			}
        	}
	}
	web::json::value* jsonForCategories = ModelBase::getField(val, "Categories");
	if(jsonForCategories != nullptr && !jsonForCategories->is_null())
	{
		{
			m_Categories.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForCategories->as_array())
			{
				if(item.is_null())
				{
					m_Categories.push_back(std::shared_ptr<ChartCategory>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"ChartCategory", item);
					m_Categories.push_back(std::static_pointer_cast<ChartCategory>(newItem));
				}
			}
        	}
	}
	web::json::value* jsonForTitle = ModelBase::getField(val, "Title");
	if(jsonForTitle != nullptr && !jsonForTitle->is_null())
	{
		std::shared_ptr<void> instanceForTitle = asposeslidescloud::api::ClassRegistry::deserialize(L"ChartTitle", *jsonForTitle);
		setTitle(std::static_pointer_cast<ChartTitle>(instanceForTitle));
	}
	web::json::value* jsonForBackWall = ModelBase::getField(val, "BackWall");
	if(jsonForBackWall != nullptr && !jsonForBackWall->is_null())
	{
		std::shared_ptr<void> instanceForBackWall = asposeslidescloud::api::ClassRegistry::deserialize(L"ChartWall", *jsonForBackWall);
		setBackWall(std::static_pointer_cast<ChartWall>(instanceForBackWall));
	}
	web::json::value* jsonForSideWall = ModelBase::getField(val, "SideWall");
	if(jsonForSideWall != nullptr && !jsonForSideWall->is_null())
	{
		std::shared_ptr<void> instanceForSideWall = asposeslidescloud::api::ClassRegistry::deserialize(L"ChartWall", *jsonForSideWall);
		setSideWall(std::static_pointer_cast<ChartWall>(instanceForSideWall));
	}
	web::json::value* jsonForFloor = ModelBase::getField(val, "Floor");
	if(jsonForFloor != nullptr && !jsonForFloor->is_null())
	{
		std::shared_ptr<void> instanceForFloor = asposeslidescloud::api::ClassRegistry::deserialize(L"ChartWall", *jsonForFloor);
		setFloor(std::static_pointer_cast<ChartWall>(instanceForFloor));
	}
	web::json::value* jsonForLegend = ModelBase::getField(val, "Legend");
	if(jsonForLegend != nullptr && !jsonForLegend->is_null())
	{
		std::shared_ptr<void> instanceForLegend = asposeslidescloud::api::ClassRegistry::deserialize(L"Legend", *jsonForLegend);
		setLegend(std::static_pointer_cast<Legend>(instanceForLegend));
	}
	web::json::value* jsonForAxes = ModelBase::getField(val, "Axes");
	if(jsonForAxes != nullptr && !jsonForAxes->is_null())
	{
		std::shared_ptr<void> instanceForAxes = asposeslidescloud::api::ClassRegistry::deserialize(L"Axes", *jsonForAxes);
		setAxes(std::static_pointer_cast<Axes>(instanceForAxes));
	}
	web::json::value* jsonForPlotArea = ModelBase::getField(val, "PlotArea");
	if(jsonForPlotArea != nullptr && !jsonForPlotArea->is_null())
	{
		std::shared_ptr<void> instanceForPlotArea = asposeslidescloud::api::ClassRegistry::deserialize(L"PlotArea", *jsonForPlotArea);
		setPlotArea(std::static_pointer_cast<PlotArea>(instanceForPlotArea));
	}
	web::json::value* jsonForHasRoundedCorners = ModelBase::getField(val, "HasRoundedCorners");
	if(jsonForHasRoundedCorners != nullptr && !jsonForHasRoundedCorners->is_null())
	{
		setHasRoundedCorners(ModelBase::boolFromJson(*jsonForHasRoundedCorners));
	}
	web::json::value* jsonForSeriesGroups = ModelBase::getField(val, "SeriesGroups");
	if(jsonForSeriesGroups != nullptr && !jsonForSeriesGroups->is_null())
	{
		{
			m_SeriesGroups.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForSeriesGroups->as_array())
			{
				if(item.is_null())
				{
					m_SeriesGroups.push_back(std::shared_ptr<ChartSeriesGroup>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"ChartSeriesGroup", item);
					m_SeriesGroups.push_back(std::static_pointer_cast<ChartSeriesGroup>(newItem));
				}
			}
        	}
	}
}

}
}

