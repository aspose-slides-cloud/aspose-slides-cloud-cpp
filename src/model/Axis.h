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

/*
 * Axis.h
 *
 * Represents a chart axis
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_Axis_H_
#define ASPOSESLIDESCLOUD_MODEL_Axis_H_

#include "../ModelBase.h"

#include "../model/EffectFormat.h"
#include "../model/ChartLinesFormat.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents a chart axis
/// </summary>
class  Axis : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT Axis();
	ASPOSE_DLL_EXPORT virtual ~Axis();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// True if the axis is visible
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsVisible() const;
	ASPOSE_DLL_EXPORT void setIsVisible(bool value);
	ASPOSE_DLL_EXPORT bool isVisibleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsVisible();
	/// <summary>
	/// True if the axis has a visible title
	/// </summary>
	ASPOSE_DLL_EXPORT bool isHasTitle() const;
	ASPOSE_DLL_EXPORT void setHasTitle(bool value);
	ASPOSE_DLL_EXPORT bool hasTitleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHasTitle();
	/// <summary>
	/// Axis position
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(utility::string_t value);
	/// <summary>
	/// The scaling value of the display units for the value axis
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDisplayUnit() const;
	ASPOSE_DLL_EXPORT void setDisplayUnit(utility::string_t value);
	/// <summary>
	/// The smallest time unit that is represented on the date axis
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getBaseUnitScale() const;
	ASPOSE_DLL_EXPORT void setBaseUnitScale(utility::string_t value);
	/// <summary>
	/// True the major unit of the axis is automatically assigned
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsAutomaticMajorUnit() const;
	ASPOSE_DLL_EXPORT void setIsAutomaticMajorUnit(bool value);
	ASPOSE_DLL_EXPORT bool isAutomaticMajorUnitIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsAutomaticMajorUnit();
	/// <summary>
	/// The major units for the date or value axis
	/// </summary>
	ASPOSE_DLL_EXPORT double getMajorUnit() const;
	ASPOSE_DLL_EXPORT void setMajorUnit(double value);
	ASPOSE_DLL_EXPORT bool majorUnitIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMajorUnit();
	/// <summary>
	/// The major unit scale for the date axis
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getMajorUnitScale() const;
	ASPOSE_DLL_EXPORT void setMajorUnitScale(utility::string_t value);
	/// <summary>
	/// The type of major tick mark for the specified axis
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getMajorTickMark() const;
	ASPOSE_DLL_EXPORT void setMajorTickMark(utility::string_t value);
	/// <summary>
	/// True the minor unit of the axis is automatically assigned
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsAutomaticMinorUnit() const;
	ASPOSE_DLL_EXPORT void setIsAutomaticMinorUnit(bool value);
	ASPOSE_DLL_EXPORT bool isAutomaticMinorUnitIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsAutomaticMinorUnit();
	/// <summary>
	/// The minor units for the date or value axis
	/// </summary>
	ASPOSE_DLL_EXPORT double getMinorUnit() const;
	ASPOSE_DLL_EXPORT void setMinorUnit(double value);
	ASPOSE_DLL_EXPORT bool minorUnitIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMinorUnit();
	/// <summary>
	/// The minor unit scale for the date axis
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getMinorUnitScale() const;
	ASPOSE_DLL_EXPORT void setMinorUnitScale(utility::string_t value);
	/// <summary>
	/// The type of minor tick mark for the specified axis
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getMinorTickMark() const;
	ASPOSE_DLL_EXPORT void setMinorTickMark(utility::string_t value);
	/// <summary>
	/// True if the max value is automatically assigned
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsAutomaticMaxValue() const;
	ASPOSE_DLL_EXPORT void setIsAutomaticMaxValue(bool value);
	ASPOSE_DLL_EXPORT bool isAutomaticMaxValueIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsAutomaticMaxValue();
	/// <summary>
	/// The maximum value on the value axis
	/// </summary>
	ASPOSE_DLL_EXPORT double getMaxValue() const;
	ASPOSE_DLL_EXPORT void setMaxValue(double value);
	ASPOSE_DLL_EXPORT bool maxValueIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMaxValue();
	/// <summary>
	/// True if the min value is automatically assigned
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsAutomaticMinValue() const;
	ASPOSE_DLL_EXPORT void setIsAutomaticMinValue(bool value);
	ASPOSE_DLL_EXPORT bool isAutomaticMinValueIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsAutomaticMinValue();
	/// <summary>
	/// The minimum value on the value axis
	/// </summary>
	ASPOSE_DLL_EXPORT double getMinValue() const;
	ASPOSE_DLL_EXPORT void setMinValue(double value);
	ASPOSE_DLL_EXPORT bool minValueIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMinValue();
	/// <summary>
	/// True if the value axis scale type is logarithmic
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsLogarithmic() const;
	ASPOSE_DLL_EXPORT void setIsLogarithmic(bool value);
	ASPOSE_DLL_EXPORT bool isLogarithmicIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsLogarithmic();
	/// <summary>
	/// The logarithmic base. Default value is 10
	/// </summary>
	ASPOSE_DLL_EXPORT double getLogBase() const;
	ASPOSE_DLL_EXPORT void setLogBase(double value);
	ASPOSE_DLL_EXPORT bool logBaseIsSet() const;
	ASPOSE_DLL_EXPORT void unsetLogBase();
	/// <summary>
	/// The type of the category axis
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCategoryAxisType() const;
	ASPOSE_DLL_EXPORT void setCategoryAxisType(utility::string_t value);
	/// <summary>
	/// True if the value axis crosses the category axis between categories. This property applies only to category axes, and it doesn&#39;t apply to 3-D charts
	/// </summary>
	ASPOSE_DLL_EXPORT bool isAxisBetweenCategories() const;
	ASPOSE_DLL_EXPORT void setAxisBetweenCategories(bool value);
	ASPOSE_DLL_EXPORT bool axisBetweenCategoriesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAxisBetweenCategories();
	/// <summary>
	/// The distance of labels from the axis. Applied to category or date axis. Value must be between 0% and 1000%.             
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getLabelOffset() const;
	ASPOSE_DLL_EXPORT void setLabelOffset(int32_t value);
	ASPOSE_DLL_EXPORT bool labelOffsetIsSet() const;
	ASPOSE_DLL_EXPORT void unsetLabelOffset();
	/// <summary>
	/// True if MS PowerPoint plots data points from last to first
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsPlotOrderReversed() const;
	ASPOSE_DLL_EXPORT void setIsPlotOrderReversed(bool value);
	ASPOSE_DLL_EXPORT bool isPlotOrderReversedIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsPlotOrderReversed();
	/// <summary>
	/// True if the format is linked to source data
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsNumberFormatLinkedToSource() const;
	ASPOSE_DLL_EXPORT void setIsNumberFormatLinkedToSource(bool value);
	ASPOSE_DLL_EXPORT bool isNumberFormatLinkedToSourceIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsNumberFormatLinkedToSource();
	/// <summary>
	/// the format string for the Axis Labels
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getNumberFormat() const;
	ASPOSE_DLL_EXPORT void setNumberFormat(utility::string_t value);
	/// <summary>
	/// The CrossType on the specified axis where the other axis crosses
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCrossType() const;
	ASPOSE_DLL_EXPORT void setCrossType(utility::string_t value);
	/// <summary>
	/// The point on the axis where the perpendicular axis crosses it
	/// </summary>
	ASPOSE_DLL_EXPORT double getCrossAt() const;
	ASPOSE_DLL_EXPORT void setCrossAt(double value);
	ASPOSE_DLL_EXPORT bool crossAtIsSet() const;
	ASPOSE_DLL_EXPORT void unsetCrossAt();
	/// <summary>
	/// True for automatic tick marks spacing value
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsAutomaticTickMarksSpacing() const;
	ASPOSE_DLL_EXPORT void setIsAutomaticTickMarksSpacing(bool value);
	ASPOSE_DLL_EXPORT bool isAutomaticTickMarksSpacingIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsAutomaticTickMarksSpacing();
	/// <summary>
	/// Specifies how many tick marks shall be skipped before the next one shall be drawn. Applied to category or series axis.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getTickMarksSpacing() const;
	ASPOSE_DLL_EXPORT void setTickMarksSpacing(int32_t value);
	ASPOSE_DLL_EXPORT bool tickMarksSpacingIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTickMarksSpacing();
	/// <summary>
	/// True for automatic tick label spacing value
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsAutomaticTickLabelSpacing() const;
	ASPOSE_DLL_EXPORT void setIsAutomaticTickLabelSpacing(bool value);
	ASPOSE_DLL_EXPORT bool isAutomaticTickLabelSpacingIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsAutomaticTickLabelSpacing();
	/// <summary>
	/// Specifies how many tick labels to skip between label that is drawn.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getTickLabelSpacing() const;
	ASPOSE_DLL_EXPORT void setTickLabelSpacing(int32_t value);
	ASPOSE_DLL_EXPORT bool tickLabelSpacingIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTickLabelSpacing();
	/// <summary>
	/// The position of tick-mark labels on the specified axis.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTickLabelPosition() const;
	ASPOSE_DLL_EXPORT void setTickLabelPosition(utility::string_t value);
	/// <summary>
	/// Represents the rotation angle of tick labels.
	/// </summary>
	ASPOSE_DLL_EXPORT double getTickLabelRotationAngle() const;
	ASPOSE_DLL_EXPORT void setTickLabelRotationAngle(double value);
	ASPOSE_DLL_EXPORT bool tickLabelRotationAngleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTickLabelRotationAngle();
	/// <summary>
	/// Get or sets the fill format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FillFormat> getFillFormat() const;
	ASPOSE_DLL_EXPORT void setFillFormat(std::shared_ptr<FillFormat> value);
	/// <summary>
	/// Get or sets the effect format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<EffectFormat> getEffectFormat() const;
	ASPOSE_DLL_EXPORT void setEffectFormat(std::shared_ptr<EffectFormat> value);
	/// <summary>
	/// Get or sets the line format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LineFormat> getLineFormat() const;
	ASPOSE_DLL_EXPORT void setLineFormat(std::shared_ptr<LineFormat> value);
	/// <summary>
	/// Get or sets the format of major grid lines.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ChartLinesFormat> getMajorGridLinesFormat() const;
	ASPOSE_DLL_EXPORT void setMajorGridLinesFormat(std::shared_ptr<ChartLinesFormat> value);
	/// <summary>
	/// Get or sets the format of major grid lines.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ChartLinesFormat> getMinorGridLinesFormat() const;
	ASPOSE_DLL_EXPORT void setMinorGridLinesFormat(std::shared_ptr<ChartLinesFormat> value);

protected:
	bool m_IsVisible;
	bool m_IsVisibleIsSet;
	bool m_HasTitle;
	bool m_HasTitleIsSet;
	utility::string_t m_Position;
	utility::string_t m_DisplayUnit;
	utility::string_t m_BaseUnitScale;
	bool m_IsAutomaticMajorUnit;
	bool m_IsAutomaticMajorUnitIsSet;
	double m_MajorUnit;
	bool m_MajorUnitIsSet;
	utility::string_t m_MajorUnitScale;
	utility::string_t m_MajorTickMark;
	bool m_IsAutomaticMinorUnit;
	bool m_IsAutomaticMinorUnitIsSet;
	double m_MinorUnit;
	bool m_MinorUnitIsSet;
	utility::string_t m_MinorUnitScale;
	utility::string_t m_MinorTickMark;
	bool m_IsAutomaticMaxValue;
	bool m_IsAutomaticMaxValueIsSet;
	double m_MaxValue;
	bool m_MaxValueIsSet;
	bool m_IsAutomaticMinValue;
	bool m_IsAutomaticMinValueIsSet;
	double m_MinValue;
	bool m_MinValueIsSet;
	bool m_IsLogarithmic;
	bool m_IsLogarithmicIsSet;
	double m_LogBase;
	bool m_LogBaseIsSet;
	utility::string_t m_CategoryAxisType;
	bool m_AxisBetweenCategories;
	bool m_AxisBetweenCategoriesIsSet;
	int32_t m_LabelOffset;
	bool m_LabelOffsetIsSet;
	bool m_IsPlotOrderReversed;
	bool m_IsPlotOrderReversedIsSet;
	bool m_IsNumberFormatLinkedToSource;
	bool m_IsNumberFormatLinkedToSourceIsSet;
	utility::string_t m_NumberFormat;
	utility::string_t m_CrossType;
	double m_CrossAt;
	bool m_CrossAtIsSet;
	bool m_IsAutomaticTickMarksSpacing;
	bool m_IsAutomaticTickMarksSpacingIsSet;
	int32_t m_TickMarksSpacing;
	bool m_TickMarksSpacingIsSet;
	bool m_IsAutomaticTickLabelSpacing;
	bool m_IsAutomaticTickLabelSpacingIsSet;
	int32_t m_TickLabelSpacing;
	bool m_TickLabelSpacingIsSet;
	utility::string_t m_TickLabelPosition;
	double m_TickLabelRotationAngle;
	bool m_TickLabelRotationAngleIsSet;
	std::shared_ptr<FillFormat> m_FillFormat;
	std::shared_ptr<EffectFormat> m_EffectFormat;
	std::shared_ptr<LineFormat> m_LineFormat;
	std::shared_ptr<ChartLinesFormat> m_MajorGridLinesFormat;
	std::shared_ptr<ChartLinesFormat> m_MinorGridLinesFormat;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_Axis_H_ */
