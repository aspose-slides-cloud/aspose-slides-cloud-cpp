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
#include "ChartCategory.h"

namespace asposeslidescloud {
namespace model {

ChartCategory::ChartCategory()
{
	m_LevelIsSet = false;
}

ChartCategory::~ChartCategory()
{
}

std::vector<utility::string_t> ChartCategory::getParentCategories() const
{
	return m_ParentCategories;
}

void ChartCategory::setParentCategories(std::vector<utility::string_t> value)
{
	m_ParentCategories = value;
	
}

int32_t ChartCategory::getLevel() const
{
	return m_Level;
}

void ChartCategory::setLevel(int32_t value)
{
	m_Level = value;
	m_LevelIsSet = true;
}

bool ChartCategory::levelIsSet() const
{
	return m_LevelIsSet;
}

void ChartCategory::unsetLevel()
{
	m_LevelIsSet = false;
}

utility::string_t ChartCategory::getValue() const
{
	return m_Value;
}

void ChartCategory::setValue(utility::string_t value)
{
	m_Value = value;
	
}

std::shared_ptr<FillFormat> ChartCategory::getFillFormat() const
{
	return m_FillFormat;
}

void ChartCategory::setFillFormat(std::shared_ptr<FillFormat> value)
{
	m_FillFormat = value;
	
}

std::shared_ptr<EffectFormat> ChartCategory::getEffectFormat() const
{
	return m_EffectFormat;
}

void ChartCategory::setEffectFormat(std::shared_ptr<EffectFormat> value)
{
	m_EffectFormat = value;
	
}

std::shared_ptr<LineFormat> ChartCategory::getLineFormat() const
{
	return m_LineFormat;
}

void ChartCategory::setLineFormat(std::shared_ptr<LineFormat> value)
{
	m_LineFormat = value;
	
}

std::vector<std::shared_ptr<OneValueChartDataPoint>> ChartCategory::getDataPoints() const
{
	return m_DataPoints;
}

void ChartCategory::setDataPoints(std::vector<std::shared_ptr<OneValueChartDataPoint>> value)
{
	m_DataPoints = value;
	
}

web::json::value ChartCategory::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_ParentCategories.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_ParentCategories)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("ParentCategories")] = web::json::value::array(jsonArray);
	}
	if(m_LevelIsSet)
	{
		val[utility::conversions::to_string_t("Level")] = ModelBase::toJson(m_Level);
	}
	if (!m_Value.empty())
	{
		val[utility::conversions::to_string_t("Value")] = ModelBase::toJson(m_Value);
	}
	if (m_FillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("FillFormat")] = ModelBase::toJson(m_FillFormat);
	}
	if (m_EffectFormat != nullptr)
	{
		val[utility::conversions::to_string_t("EffectFormat")] = ModelBase::toJson(m_EffectFormat);
	}
	if (m_LineFormat != nullptr)
	{
		val[utility::conversions::to_string_t("LineFormat")] = ModelBase::toJson(m_LineFormat);
	}
	if (m_DataPoints.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_DataPoints)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("DataPoints")] = web::json::value::array(jsonArray);
	}
	return val;
}

void ChartCategory::fromJson(web::json::value& val)
{
	web::json::value* jsonForParentCategories = ModelBase::getField(val, "ParentCategories");
	if(jsonForParentCategories != nullptr && !jsonForParentCategories->is_null())
	{
		{
			m_ParentCategories.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForParentCategories->as_array())
			{
				m_ParentCategories.push_back(ModelBase::stringFromJson(item));
			}
        	}
	}
	web::json::value* jsonForLevel = ModelBase::getField(val, "Level");
	if(jsonForLevel != nullptr && !jsonForLevel->is_null() && jsonForLevel->is_number())
	{
		setLevel(ModelBase::int32_tFromJson(*jsonForLevel));
	}
	web::json::value* jsonForValue = ModelBase::getField(val, "Value");
	if(jsonForValue != nullptr && !jsonForValue->is_null())
	{
		setValue(ModelBase::stringFromJson(*jsonForValue));
	}
	web::json::value* jsonForFillFormat = ModelBase::getField(val, "FillFormat");
	if(jsonForFillFormat != nullptr && !jsonForFillFormat->is_null())
	{
		std::shared_ptr<void> instanceForFillFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"FillFormat", *jsonForFillFormat);
		setFillFormat(std::static_pointer_cast<FillFormat>(instanceForFillFormat));
	}
	web::json::value* jsonForEffectFormat = ModelBase::getField(val, "EffectFormat");
	if(jsonForEffectFormat != nullptr && !jsonForEffectFormat->is_null())
	{
		std::shared_ptr<void> instanceForEffectFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"EffectFormat", *jsonForEffectFormat);
		setEffectFormat(std::static_pointer_cast<EffectFormat>(instanceForEffectFormat));
	}
	web::json::value* jsonForLineFormat = ModelBase::getField(val, "LineFormat");
	if(jsonForLineFormat != nullptr && !jsonForLineFormat->is_null())
	{
		std::shared_ptr<void> instanceForLineFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"LineFormat", *jsonForLineFormat);
		setLineFormat(std::static_pointer_cast<LineFormat>(instanceForLineFormat));
	}
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
}

}
}

