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
#include "Axis.h"

namespace asposeslidescloud {
namespace model {

Axis::Axis()
{
	m_IsVisibleIsSet = false;
	m_HasTitleIsSet = false;
	m_IsAutomaticMajorUnitIsSet = false;
	m_MajorUnitIsSet = false;
	m_IsAutomaticMinorUnitIsSet = false;
	m_MinorUnitIsSet = false;
	m_IsAutomaticMaxValueIsSet = false;
	m_MaxValueIsSet = false;
	m_IsAutomaticMinValueIsSet = false;
	m_MinValueIsSet = false;
	m_IsLogarithmicIsSet = false;
	m_LogBaseIsSet = false;
	m_AxisBetweenCategoriesIsSet = false;
	m_LabelOffsetIsSet = false;
	m_IsPlotOrderReversedIsSet = false;
	m_IsNumberFormatLinkedToSourceIsSet = false;
	m_CrossAtIsSet = false;
	m_IsAutomaticTickMarksSpacingIsSet = false;
	m_TickMarksSpacingIsSet = false;
	m_IsAutomaticTickLabelSpacingIsSet = false;
	m_TickLabelSpacingIsSet = false;
	m_TickLabelRotationAngleIsSet = false;
}

Axis::~Axis()
{
}

bool Axis::getIsVisible() const
{
	return m_IsVisible;
}

void Axis::setIsVisible(bool value)
{
	m_IsVisible = value;
	m_IsVisibleIsSet = true;
}

bool Axis::isVisibleIsSet() const
{
	return m_IsVisibleIsSet;
}

void Axis::unsetIsVisible()
{
	m_IsVisibleIsSet = false;
}

bool Axis::isHasTitle() const
{
	return m_HasTitle;
}

void Axis::setHasTitle(bool value)
{
	m_HasTitle = value;
	m_HasTitleIsSet = true;
}

bool Axis::hasTitleIsSet() const
{
	return m_HasTitleIsSet;
}

void Axis::unsetHasTitle()
{
	m_HasTitleIsSet = false;
}

std::shared_ptr<ChartTitle> Axis::getTitle() const
{
	return m_Title;
}

void Axis::setTitle(std::shared_ptr<ChartTitle> value)
{
	m_Title = value;
	
}

utility::string_t Axis::getPosition() const
{
	return m_Position;
}

void Axis::setPosition(utility::string_t value)
{
	m_Position = value;
	
}

utility::string_t Axis::getDisplayUnit() const
{
	return m_DisplayUnit;
}

void Axis::setDisplayUnit(utility::string_t value)
{
	m_DisplayUnit = value;
	
}

utility::string_t Axis::getBaseUnitScale() const
{
	return m_BaseUnitScale;
}

void Axis::setBaseUnitScale(utility::string_t value)
{
	m_BaseUnitScale = value;
	
}

bool Axis::getIsAutomaticMajorUnit() const
{
	return m_IsAutomaticMajorUnit;
}

void Axis::setIsAutomaticMajorUnit(bool value)
{
	m_IsAutomaticMajorUnit = value;
	m_IsAutomaticMajorUnitIsSet = true;
}

bool Axis::isAutomaticMajorUnitIsSet() const
{
	return m_IsAutomaticMajorUnitIsSet;
}

void Axis::unsetIsAutomaticMajorUnit()
{
	m_IsAutomaticMajorUnitIsSet = false;
}

double Axis::getMajorUnit() const
{
	return m_MajorUnit;
}

void Axis::setMajorUnit(double value)
{
	m_MajorUnit = value;
	m_MajorUnitIsSet = true;
}

bool Axis::majorUnitIsSet() const
{
	return m_MajorUnitIsSet;
}

void Axis::unsetMajorUnit()
{
	m_MajorUnitIsSet = false;
}

utility::string_t Axis::getMajorUnitScale() const
{
	return m_MajorUnitScale;
}

void Axis::setMajorUnitScale(utility::string_t value)
{
	m_MajorUnitScale = value;
	
}

utility::string_t Axis::getMajorTickMark() const
{
	return m_MajorTickMark;
}

void Axis::setMajorTickMark(utility::string_t value)
{
	m_MajorTickMark = value;
	
}

bool Axis::getIsAutomaticMinorUnit() const
{
	return m_IsAutomaticMinorUnit;
}

void Axis::setIsAutomaticMinorUnit(bool value)
{
	m_IsAutomaticMinorUnit = value;
	m_IsAutomaticMinorUnitIsSet = true;
}

bool Axis::isAutomaticMinorUnitIsSet() const
{
	return m_IsAutomaticMinorUnitIsSet;
}

void Axis::unsetIsAutomaticMinorUnit()
{
	m_IsAutomaticMinorUnitIsSet = false;
}

double Axis::getMinorUnit() const
{
	return m_MinorUnit;
}

void Axis::setMinorUnit(double value)
{
	m_MinorUnit = value;
	m_MinorUnitIsSet = true;
}

bool Axis::minorUnitIsSet() const
{
	return m_MinorUnitIsSet;
}

void Axis::unsetMinorUnit()
{
	m_MinorUnitIsSet = false;
}

utility::string_t Axis::getMinorUnitScale() const
{
	return m_MinorUnitScale;
}

void Axis::setMinorUnitScale(utility::string_t value)
{
	m_MinorUnitScale = value;
	
}

utility::string_t Axis::getMinorTickMark() const
{
	return m_MinorTickMark;
}

void Axis::setMinorTickMark(utility::string_t value)
{
	m_MinorTickMark = value;
	
}

bool Axis::getIsAutomaticMaxValue() const
{
	return m_IsAutomaticMaxValue;
}

void Axis::setIsAutomaticMaxValue(bool value)
{
	m_IsAutomaticMaxValue = value;
	m_IsAutomaticMaxValueIsSet = true;
}

bool Axis::isAutomaticMaxValueIsSet() const
{
	return m_IsAutomaticMaxValueIsSet;
}

void Axis::unsetIsAutomaticMaxValue()
{
	m_IsAutomaticMaxValueIsSet = false;
}

double Axis::getMaxValue() const
{
	return m_MaxValue;
}

void Axis::setMaxValue(double value)
{
	m_MaxValue = value;
	m_MaxValueIsSet = true;
}

bool Axis::maxValueIsSet() const
{
	return m_MaxValueIsSet;
}

void Axis::unsetMaxValue()
{
	m_MaxValueIsSet = false;
}

bool Axis::getIsAutomaticMinValue() const
{
	return m_IsAutomaticMinValue;
}

void Axis::setIsAutomaticMinValue(bool value)
{
	m_IsAutomaticMinValue = value;
	m_IsAutomaticMinValueIsSet = true;
}

bool Axis::isAutomaticMinValueIsSet() const
{
	return m_IsAutomaticMinValueIsSet;
}

void Axis::unsetIsAutomaticMinValue()
{
	m_IsAutomaticMinValueIsSet = false;
}

double Axis::getMinValue() const
{
	return m_MinValue;
}

void Axis::setMinValue(double value)
{
	m_MinValue = value;
	m_MinValueIsSet = true;
}

bool Axis::minValueIsSet() const
{
	return m_MinValueIsSet;
}

void Axis::unsetMinValue()
{
	m_MinValueIsSet = false;
}

bool Axis::getIsLogarithmic() const
{
	return m_IsLogarithmic;
}

void Axis::setIsLogarithmic(bool value)
{
	m_IsLogarithmic = value;
	m_IsLogarithmicIsSet = true;
}

bool Axis::isLogarithmicIsSet() const
{
	return m_IsLogarithmicIsSet;
}

void Axis::unsetIsLogarithmic()
{
	m_IsLogarithmicIsSet = false;
}

double Axis::getLogBase() const
{
	return m_LogBase;
}

void Axis::setLogBase(double value)
{
	m_LogBase = value;
	m_LogBaseIsSet = true;
}

bool Axis::logBaseIsSet() const
{
	return m_LogBaseIsSet;
}

void Axis::unsetLogBase()
{
	m_LogBaseIsSet = false;
}

utility::string_t Axis::getCategoryAxisType() const
{
	return m_CategoryAxisType;
}

void Axis::setCategoryAxisType(utility::string_t value)
{
	m_CategoryAxisType = value;
	
}

bool Axis::isAxisBetweenCategories() const
{
	return m_AxisBetweenCategories;
}

void Axis::setAxisBetweenCategories(bool value)
{
	m_AxisBetweenCategories = value;
	m_AxisBetweenCategoriesIsSet = true;
}

bool Axis::axisBetweenCategoriesIsSet() const
{
	return m_AxisBetweenCategoriesIsSet;
}

void Axis::unsetAxisBetweenCategories()
{
	m_AxisBetweenCategoriesIsSet = false;
}

int32_t Axis::getLabelOffset() const
{
	return m_LabelOffset;
}

void Axis::setLabelOffset(int32_t value)
{
	m_LabelOffset = value;
	m_LabelOffsetIsSet = true;
}

bool Axis::labelOffsetIsSet() const
{
	return m_LabelOffsetIsSet;
}

void Axis::unsetLabelOffset()
{
	m_LabelOffsetIsSet = false;
}

bool Axis::getIsPlotOrderReversed() const
{
	return m_IsPlotOrderReversed;
}

void Axis::setIsPlotOrderReversed(bool value)
{
	m_IsPlotOrderReversed = value;
	m_IsPlotOrderReversedIsSet = true;
}

bool Axis::isPlotOrderReversedIsSet() const
{
	return m_IsPlotOrderReversedIsSet;
}

void Axis::unsetIsPlotOrderReversed()
{
	m_IsPlotOrderReversedIsSet = false;
}

bool Axis::getIsNumberFormatLinkedToSource() const
{
	return m_IsNumberFormatLinkedToSource;
}

void Axis::setIsNumberFormatLinkedToSource(bool value)
{
	m_IsNumberFormatLinkedToSource = value;
	m_IsNumberFormatLinkedToSourceIsSet = true;
}

bool Axis::isNumberFormatLinkedToSourceIsSet() const
{
	return m_IsNumberFormatLinkedToSourceIsSet;
}

void Axis::unsetIsNumberFormatLinkedToSource()
{
	m_IsNumberFormatLinkedToSourceIsSet = false;
}

utility::string_t Axis::getNumberFormat() const
{
	return m_NumberFormat;
}

void Axis::setNumberFormat(utility::string_t value)
{
	m_NumberFormat = value;
	
}

utility::string_t Axis::getCrossType() const
{
	return m_CrossType;
}

void Axis::setCrossType(utility::string_t value)
{
	m_CrossType = value;
	
}

double Axis::getCrossAt() const
{
	return m_CrossAt;
}

void Axis::setCrossAt(double value)
{
	m_CrossAt = value;
	m_CrossAtIsSet = true;
}

bool Axis::crossAtIsSet() const
{
	return m_CrossAtIsSet;
}

void Axis::unsetCrossAt()
{
	m_CrossAtIsSet = false;
}

bool Axis::getIsAutomaticTickMarksSpacing() const
{
	return m_IsAutomaticTickMarksSpacing;
}

void Axis::setIsAutomaticTickMarksSpacing(bool value)
{
	m_IsAutomaticTickMarksSpacing = value;
	m_IsAutomaticTickMarksSpacingIsSet = true;
}

bool Axis::isAutomaticTickMarksSpacingIsSet() const
{
	return m_IsAutomaticTickMarksSpacingIsSet;
}

void Axis::unsetIsAutomaticTickMarksSpacing()
{
	m_IsAutomaticTickMarksSpacingIsSet = false;
}

int32_t Axis::getTickMarksSpacing() const
{
	return m_TickMarksSpacing;
}

void Axis::setTickMarksSpacing(int32_t value)
{
	m_TickMarksSpacing = value;
	m_TickMarksSpacingIsSet = true;
}

bool Axis::tickMarksSpacingIsSet() const
{
	return m_TickMarksSpacingIsSet;
}

void Axis::unsetTickMarksSpacing()
{
	m_TickMarksSpacingIsSet = false;
}

bool Axis::getIsAutomaticTickLabelSpacing() const
{
	return m_IsAutomaticTickLabelSpacing;
}

void Axis::setIsAutomaticTickLabelSpacing(bool value)
{
	m_IsAutomaticTickLabelSpacing = value;
	m_IsAutomaticTickLabelSpacingIsSet = true;
}

bool Axis::isAutomaticTickLabelSpacingIsSet() const
{
	return m_IsAutomaticTickLabelSpacingIsSet;
}

void Axis::unsetIsAutomaticTickLabelSpacing()
{
	m_IsAutomaticTickLabelSpacingIsSet = false;
}

int32_t Axis::getTickLabelSpacing() const
{
	return m_TickLabelSpacing;
}

void Axis::setTickLabelSpacing(int32_t value)
{
	m_TickLabelSpacing = value;
	m_TickLabelSpacingIsSet = true;
}

bool Axis::tickLabelSpacingIsSet() const
{
	return m_TickLabelSpacingIsSet;
}

void Axis::unsetTickLabelSpacing()
{
	m_TickLabelSpacingIsSet = false;
}

utility::string_t Axis::getTickLabelPosition() const
{
	return m_TickLabelPosition;
}

void Axis::setTickLabelPosition(utility::string_t value)
{
	m_TickLabelPosition = value;
	
}

double Axis::getTickLabelRotationAngle() const
{
	return m_TickLabelRotationAngle;
}

void Axis::setTickLabelRotationAngle(double value)
{
	m_TickLabelRotationAngle = value;
	m_TickLabelRotationAngleIsSet = true;
}

bool Axis::tickLabelRotationAngleIsSet() const
{
	return m_TickLabelRotationAngleIsSet;
}

void Axis::unsetTickLabelRotationAngle()
{
	m_TickLabelRotationAngleIsSet = false;
}

std::shared_ptr<FillFormat> Axis::getFillFormat() const
{
	return m_FillFormat;
}

void Axis::setFillFormat(std::shared_ptr<FillFormat> value)
{
	m_FillFormat = value;
	
}

std::shared_ptr<EffectFormat> Axis::getEffectFormat() const
{
	return m_EffectFormat;
}

void Axis::setEffectFormat(std::shared_ptr<EffectFormat> value)
{
	m_EffectFormat = value;
	
}

std::shared_ptr<LineFormat> Axis::getLineFormat() const
{
	return m_LineFormat;
}

void Axis::setLineFormat(std::shared_ptr<LineFormat> value)
{
	m_LineFormat = value;
	
}

std::shared_ptr<ChartLinesFormat> Axis::getMajorGridLinesFormat() const
{
	return m_MajorGridLinesFormat;
}

void Axis::setMajorGridLinesFormat(std::shared_ptr<ChartLinesFormat> value)
{
	m_MajorGridLinesFormat = value;
	
}

std::shared_ptr<ChartLinesFormat> Axis::getMinorGridLinesFormat() const
{
	return m_MinorGridLinesFormat;
}

void Axis::setMinorGridLinesFormat(std::shared_ptr<ChartLinesFormat> value)
{
	m_MinorGridLinesFormat = value;
	
}

web::json::value Axis::toJson() const
{
	web::json::value val = web::json::value::object();
	if(m_IsVisibleIsSet)
	{
		val[utility::conversions::to_string_t("IsVisible")] = ModelBase::toJson(m_IsVisible);
	}
	if(m_HasTitleIsSet)
	{
		val[utility::conversions::to_string_t("HasTitle")] = ModelBase::toJson(m_HasTitle);
	}
	if (m_Title != nullptr)
	{
		val[utility::conversions::to_string_t("Title")] = ModelBase::toJson(m_Title);
	}
	if (!m_Position.empty())
	{
		val[utility::conversions::to_string_t("Position")] = ModelBase::toJson(m_Position);
	}
	if (!m_DisplayUnit.empty())
	{
		val[utility::conversions::to_string_t("DisplayUnit")] = ModelBase::toJson(m_DisplayUnit);
	}
	if (!m_BaseUnitScale.empty())
	{
		val[utility::conversions::to_string_t("BaseUnitScale")] = ModelBase::toJson(m_BaseUnitScale);
	}
	if(m_IsAutomaticMajorUnitIsSet)
	{
		val[utility::conversions::to_string_t("IsAutomaticMajorUnit")] = ModelBase::toJson(m_IsAutomaticMajorUnit);
	}
	if(m_MajorUnitIsSet)
	{
		val[utility::conversions::to_string_t("MajorUnit")] = ModelBase::toJson(m_MajorUnit);
	}
	if (!m_MajorUnitScale.empty())
	{
		val[utility::conversions::to_string_t("MajorUnitScale")] = ModelBase::toJson(m_MajorUnitScale);
	}
	if (!m_MajorTickMark.empty())
	{
		val[utility::conversions::to_string_t("MajorTickMark")] = ModelBase::toJson(m_MajorTickMark);
	}
	if(m_IsAutomaticMinorUnitIsSet)
	{
		val[utility::conversions::to_string_t("IsAutomaticMinorUnit")] = ModelBase::toJson(m_IsAutomaticMinorUnit);
	}
	if(m_MinorUnitIsSet)
	{
		val[utility::conversions::to_string_t("MinorUnit")] = ModelBase::toJson(m_MinorUnit);
	}
	if (!m_MinorUnitScale.empty())
	{
		val[utility::conversions::to_string_t("MinorUnitScale")] = ModelBase::toJson(m_MinorUnitScale);
	}
	if (!m_MinorTickMark.empty())
	{
		val[utility::conversions::to_string_t("MinorTickMark")] = ModelBase::toJson(m_MinorTickMark);
	}
	if(m_IsAutomaticMaxValueIsSet)
	{
		val[utility::conversions::to_string_t("IsAutomaticMaxValue")] = ModelBase::toJson(m_IsAutomaticMaxValue);
	}
	if(m_MaxValueIsSet)
	{
		val[utility::conversions::to_string_t("MaxValue")] = ModelBase::toJson(m_MaxValue);
	}
	if(m_IsAutomaticMinValueIsSet)
	{
		val[utility::conversions::to_string_t("IsAutomaticMinValue")] = ModelBase::toJson(m_IsAutomaticMinValue);
	}
	if(m_MinValueIsSet)
	{
		val[utility::conversions::to_string_t("MinValue")] = ModelBase::toJson(m_MinValue);
	}
	if(m_IsLogarithmicIsSet)
	{
		val[utility::conversions::to_string_t("IsLogarithmic")] = ModelBase::toJson(m_IsLogarithmic);
	}
	if(m_LogBaseIsSet)
	{
		val[utility::conversions::to_string_t("LogBase")] = ModelBase::toJson(m_LogBase);
	}
	if (!m_CategoryAxisType.empty())
	{
		val[utility::conversions::to_string_t("CategoryAxisType")] = ModelBase::toJson(m_CategoryAxisType);
	}
	if(m_AxisBetweenCategoriesIsSet)
	{
		val[utility::conversions::to_string_t("AxisBetweenCategories")] = ModelBase::toJson(m_AxisBetweenCategories);
	}
	if(m_LabelOffsetIsSet)
	{
		val[utility::conversions::to_string_t("LabelOffset")] = ModelBase::toJson(m_LabelOffset);
	}
	if(m_IsPlotOrderReversedIsSet)
	{
		val[utility::conversions::to_string_t("IsPlotOrderReversed")] = ModelBase::toJson(m_IsPlotOrderReversed);
	}
	if(m_IsNumberFormatLinkedToSourceIsSet)
	{
		val[utility::conversions::to_string_t("IsNumberFormatLinkedToSource")] = ModelBase::toJson(m_IsNumberFormatLinkedToSource);
	}
	if (!m_NumberFormat.empty())
	{
		val[utility::conversions::to_string_t("NumberFormat")] = ModelBase::toJson(m_NumberFormat);
	}
	if (!m_CrossType.empty())
	{
		val[utility::conversions::to_string_t("CrossType")] = ModelBase::toJson(m_CrossType);
	}
	if(m_CrossAtIsSet)
	{
		val[utility::conversions::to_string_t("CrossAt")] = ModelBase::toJson(m_CrossAt);
	}
	if(m_IsAutomaticTickMarksSpacingIsSet)
	{
		val[utility::conversions::to_string_t("IsAutomaticTickMarksSpacing")] = ModelBase::toJson(m_IsAutomaticTickMarksSpacing);
	}
	if(m_TickMarksSpacingIsSet)
	{
		val[utility::conversions::to_string_t("TickMarksSpacing")] = ModelBase::toJson(m_TickMarksSpacing);
	}
	if(m_IsAutomaticTickLabelSpacingIsSet)
	{
		val[utility::conversions::to_string_t("IsAutomaticTickLabelSpacing")] = ModelBase::toJson(m_IsAutomaticTickLabelSpacing);
	}
	if(m_TickLabelSpacingIsSet)
	{
		val[utility::conversions::to_string_t("TickLabelSpacing")] = ModelBase::toJson(m_TickLabelSpacing);
	}
	if (!m_TickLabelPosition.empty())
	{
		val[utility::conversions::to_string_t("TickLabelPosition")] = ModelBase::toJson(m_TickLabelPosition);
	}
	if(m_TickLabelRotationAngleIsSet)
	{
		val[utility::conversions::to_string_t("TickLabelRotationAngle")] = ModelBase::toJson(m_TickLabelRotationAngle);
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
	if (m_MajorGridLinesFormat != nullptr)
	{
		val[utility::conversions::to_string_t("MajorGridLinesFormat")] = ModelBase::toJson(m_MajorGridLinesFormat);
	}
	if (m_MinorGridLinesFormat != nullptr)
	{
		val[utility::conversions::to_string_t("MinorGridLinesFormat")] = ModelBase::toJson(m_MinorGridLinesFormat);
	}
	return val;
}

void Axis::fromJson(web::json::value& val)
{
	web::json::value* jsonForIsVisible = ModelBase::getField(val, "IsVisible");
	if(jsonForIsVisible != nullptr && !jsonForIsVisible->is_null())
	{
		setIsVisible(ModelBase::boolFromJson(*jsonForIsVisible));
	}
	web::json::value* jsonForHasTitle = ModelBase::getField(val, "HasTitle");
	if(jsonForHasTitle != nullptr && !jsonForHasTitle->is_null())
	{
		setHasTitle(ModelBase::boolFromJson(*jsonForHasTitle));
	}
	web::json::value* jsonForTitle = ModelBase::getField(val, "Title");
	if(jsonForTitle != nullptr && !jsonForTitle->is_null())
	{
		std::shared_ptr<void> instanceForTitle = asposeslidescloud::api::ClassRegistry::deserialize(L"ChartTitle", *jsonForTitle);
		setTitle(std::static_pointer_cast<ChartTitle>(instanceForTitle));
	}
	web::json::value* jsonForPosition = ModelBase::getField(val, "Position");
	if(jsonForPosition != nullptr && !jsonForPosition->is_null())
	{
		setPosition(ModelBase::stringFromJson(*jsonForPosition));
	}
	web::json::value* jsonForDisplayUnit = ModelBase::getField(val, "DisplayUnit");
	if(jsonForDisplayUnit != nullptr && !jsonForDisplayUnit->is_null())
	{
		setDisplayUnit(ModelBase::stringFromJson(*jsonForDisplayUnit));
	}
	web::json::value* jsonForBaseUnitScale = ModelBase::getField(val, "BaseUnitScale");
	if(jsonForBaseUnitScale != nullptr && !jsonForBaseUnitScale->is_null())
	{
		setBaseUnitScale(ModelBase::stringFromJson(*jsonForBaseUnitScale));
	}
	web::json::value* jsonForIsAutomaticMajorUnit = ModelBase::getField(val, "IsAutomaticMajorUnit");
	if(jsonForIsAutomaticMajorUnit != nullptr && !jsonForIsAutomaticMajorUnit->is_null())
	{
		setIsAutomaticMajorUnit(ModelBase::boolFromJson(*jsonForIsAutomaticMajorUnit));
	}
	web::json::value* jsonForMajorUnit = ModelBase::getField(val, "MajorUnit");
	if(jsonForMajorUnit != nullptr && !jsonForMajorUnit->is_null() && jsonForMajorUnit->is_number())
	{
		setMajorUnit(ModelBase::doubleFromJson(*jsonForMajorUnit));
	}
	web::json::value* jsonForMajorUnitScale = ModelBase::getField(val, "MajorUnitScale");
	if(jsonForMajorUnitScale != nullptr && !jsonForMajorUnitScale->is_null())
	{
		setMajorUnitScale(ModelBase::stringFromJson(*jsonForMajorUnitScale));
	}
	web::json::value* jsonForMajorTickMark = ModelBase::getField(val, "MajorTickMark");
	if(jsonForMajorTickMark != nullptr && !jsonForMajorTickMark->is_null())
	{
		setMajorTickMark(ModelBase::stringFromJson(*jsonForMajorTickMark));
	}
	web::json::value* jsonForIsAutomaticMinorUnit = ModelBase::getField(val, "IsAutomaticMinorUnit");
	if(jsonForIsAutomaticMinorUnit != nullptr && !jsonForIsAutomaticMinorUnit->is_null())
	{
		setIsAutomaticMinorUnit(ModelBase::boolFromJson(*jsonForIsAutomaticMinorUnit));
	}
	web::json::value* jsonForMinorUnit = ModelBase::getField(val, "MinorUnit");
	if(jsonForMinorUnit != nullptr && !jsonForMinorUnit->is_null() && jsonForMinorUnit->is_number())
	{
		setMinorUnit(ModelBase::doubleFromJson(*jsonForMinorUnit));
	}
	web::json::value* jsonForMinorUnitScale = ModelBase::getField(val, "MinorUnitScale");
	if(jsonForMinorUnitScale != nullptr && !jsonForMinorUnitScale->is_null())
	{
		setMinorUnitScale(ModelBase::stringFromJson(*jsonForMinorUnitScale));
	}
	web::json::value* jsonForMinorTickMark = ModelBase::getField(val, "MinorTickMark");
	if(jsonForMinorTickMark != nullptr && !jsonForMinorTickMark->is_null())
	{
		setMinorTickMark(ModelBase::stringFromJson(*jsonForMinorTickMark));
	}
	web::json::value* jsonForIsAutomaticMaxValue = ModelBase::getField(val, "IsAutomaticMaxValue");
	if(jsonForIsAutomaticMaxValue != nullptr && !jsonForIsAutomaticMaxValue->is_null())
	{
		setIsAutomaticMaxValue(ModelBase::boolFromJson(*jsonForIsAutomaticMaxValue));
	}
	web::json::value* jsonForMaxValue = ModelBase::getField(val, "MaxValue");
	if(jsonForMaxValue != nullptr && !jsonForMaxValue->is_null() && jsonForMaxValue->is_number())
	{
		setMaxValue(ModelBase::doubleFromJson(*jsonForMaxValue));
	}
	web::json::value* jsonForIsAutomaticMinValue = ModelBase::getField(val, "IsAutomaticMinValue");
	if(jsonForIsAutomaticMinValue != nullptr && !jsonForIsAutomaticMinValue->is_null())
	{
		setIsAutomaticMinValue(ModelBase::boolFromJson(*jsonForIsAutomaticMinValue));
	}
	web::json::value* jsonForMinValue = ModelBase::getField(val, "MinValue");
	if(jsonForMinValue != nullptr && !jsonForMinValue->is_null() && jsonForMinValue->is_number())
	{
		setMinValue(ModelBase::doubleFromJson(*jsonForMinValue));
	}
	web::json::value* jsonForIsLogarithmic = ModelBase::getField(val, "IsLogarithmic");
	if(jsonForIsLogarithmic != nullptr && !jsonForIsLogarithmic->is_null())
	{
		setIsLogarithmic(ModelBase::boolFromJson(*jsonForIsLogarithmic));
	}
	web::json::value* jsonForLogBase = ModelBase::getField(val, "LogBase");
	if(jsonForLogBase != nullptr && !jsonForLogBase->is_null() && jsonForLogBase->is_number())
	{
		setLogBase(ModelBase::doubleFromJson(*jsonForLogBase));
	}
	web::json::value* jsonForCategoryAxisType = ModelBase::getField(val, "CategoryAxisType");
	if(jsonForCategoryAxisType != nullptr && !jsonForCategoryAxisType->is_null())
	{
		setCategoryAxisType(ModelBase::stringFromJson(*jsonForCategoryAxisType));
	}
	web::json::value* jsonForAxisBetweenCategories = ModelBase::getField(val, "AxisBetweenCategories");
	if(jsonForAxisBetweenCategories != nullptr && !jsonForAxisBetweenCategories->is_null())
	{
		setAxisBetweenCategories(ModelBase::boolFromJson(*jsonForAxisBetweenCategories));
	}
	web::json::value* jsonForLabelOffset = ModelBase::getField(val, "LabelOffset");
	if(jsonForLabelOffset != nullptr && !jsonForLabelOffset->is_null() && jsonForLabelOffset->is_number())
	{
		setLabelOffset(ModelBase::int32_tFromJson(*jsonForLabelOffset));
	}
	web::json::value* jsonForIsPlotOrderReversed = ModelBase::getField(val, "IsPlotOrderReversed");
	if(jsonForIsPlotOrderReversed != nullptr && !jsonForIsPlotOrderReversed->is_null())
	{
		setIsPlotOrderReversed(ModelBase::boolFromJson(*jsonForIsPlotOrderReversed));
	}
	web::json::value* jsonForIsNumberFormatLinkedToSource = ModelBase::getField(val, "IsNumberFormatLinkedToSource");
	if(jsonForIsNumberFormatLinkedToSource != nullptr && !jsonForIsNumberFormatLinkedToSource->is_null())
	{
		setIsNumberFormatLinkedToSource(ModelBase::boolFromJson(*jsonForIsNumberFormatLinkedToSource));
	}
	web::json::value* jsonForNumberFormat = ModelBase::getField(val, "NumberFormat");
	if(jsonForNumberFormat != nullptr && !jsonForNumberFormat->is_null())
	{
		setNumberFormat(ModelBase::stringFromJson(*jsonForNumberFormat));
	}
	web::json::value* jsonForCrossType = ModelBase::getField(val, "CrossType");
	if(jsonForCrossType != nullptr && !jsonForCrossType->is_null())
	{
		setCrossType(ModelBase::stringFromJson(*jsonForCrossType));
	}
	web::json::value* jsonForCrossAt = ModelBase::getField(val, "CrossAt");
	if(jsonForCrossAt != nullptr && !jsonForCrossAt->is_null() && jsonForCrossAt->is_number())
	{
		setCrossAt(ModelBase::doubleFromJson(*jsonForCrossAt));
	}
	web::json::value* jsonForIsAutomaticTickMarksSpacing = ModelBase::getField(val, "IsAutomaticTickMarksSpacing");
	if(jsonForIsAutomaticTickMarksSpacing != nullptr && !jsonForIsAutomaticTickMarksSpacing->is_null())
	{
		setIsAutomaticTickMarksSpacing(ModelBase::boolFromJson(*jsonForIsAutomaticTickMarksSpacing));
	}
	web::json::value* jsonForTickMarksSpacing = ModelBase::getField(val, "TickMarksSpacing");
	if(jsonForTickMarksSpacing != nullptr && !jsonForTickMarksSpacing->is_null() && jsonForTickMarksSpacing->is_number())
	{
		setTickMarksSpacing(ModelBase::int32_tFromJson(*jsonForTickMarksSpacing));
	}
	web::json::value* jsonForIsAutomaticTickLabelSpacing = ModelBase::getField(val, "IsAutomaticTickLabelSpacing");
	if(jsonForIsAutomaticTickLabelSpacing != nullptr && !jsonForIsAutomaticTickLabelSpacing->is_null())
	{
		setIsAutomaticTickLabelSpacing(ModelBase::boolFromJson(*jsonForIsAutomaticTickLabelSpacing));
	}
	web::json::value* jsonForTickLabelSpacing = ModelBase::getField(val, "TickLabelSpacing");
	if(jsonForTickLabelSpacing != nullptr && !jsonForTickLabelSpacing->is_null() && jsonForTickLabelSpacing->is_number())
	{
		setTickLabelSpacing(ModelBase::int32_tFromJson(*jsonForTickLabelSpacing));
	}
	web::json::value* jsonForTickLabelPosition = ModelBase::getField(val, "TickLabelPosition");
	if(jsonForTickLabelPosition != nullptr && !jsonForTickLabelPosition->is_null())
	{
		setTickLabelPosition(ModelBase::stringFromJson(*jsonForTickLabelPosition));
	}
	web::json::value* jsonForTickLabelRotationAngle = ModelBase::getField(val, "TickLabelRotationAngle");
	if(jsonForTickLabelRotationAngle != nullptr && !jsonForTickLabelRotationAngle->is_null() && jsonForTickLabelRotationAngle->is_number())
	{
		setTickLabelRotationAngle(ModelBase::doubleFromJson(*jsonForTickLabelRotationAngle));
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
	web::json::value* jsonForMajorGridLinesFormat = ModelBase::getField(val, "MajorGridLinesFormat");
	if(jsonForMajorGridLinesFormat != nullptr && !jsonForMajorGridLinesFormat->is_null())
	{
		std::shared_ptr<void> instanceForMajorGridLinesFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"ChartLinesFormat", *jsonForMajorGridLinesFormat);
		setMajorGridLinesFormat(std::static_pointer_cast<ChartLinesFormat>(instanceForMajorGridLinesFormat));
	}
	web::json::value* jsonForMinorGridLinesFormat = ModelBase::getField(val, "MinorGridLinesFormat");
	if(jsonForMinorGridLinesFormat != nullptr && !jsonForMinorGridLinesFormat->is_null())
	{
		std::shared_ptr<void> instanceForMinorGridLinesFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"ChartLinesFormat", *jsonForMinorGridLinesFormat);
		setMinorGridLinesFormat(std::static_pointer_cast<ChartLinesFormat>(instanceForMinorGridLinesFormat));
	}
}

}
}

