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
 * ChartSeriesGroup.h
 *
 * Chart series group. Defines common properties for a group of series.
 */

#ifndef _ChartSeriesGroup_H_
#define _ChartSeriesGroup_H_

#include "../ModelBase.h"

#include "../model/ChartLinesFormat.h"
#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Chart series group. Defines common properties for a group of series.
/// </summary>
class  ChartSeriesGroup : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ChartSeriesGroup();
	ASPOSE_DLL_EXPORT virtual ~ChartSeriesGroup();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Returns a type of this series group.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getType() const;
	ASPOSE_DLL_EXPORT void setType(utility::string_t value);
	/// <summary>
	/// Specifies the space between bar or column clusters, as a percentage of the bar or column width.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getGapWidth() const;
	ASPOSE_DLL_EXPORT void setGapWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool gapWidthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetGapWidth();
	/// <summary>
	/// Returns or sets the distance, as a percentage of the marker width, between the data series in a 3D chart.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getGapDepth() const;
	ASPOSE_DLL_EXPORT void setGapDepth(int32_t value);
	ASPOSE_DLL_EXPORT bool gapDepthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetGapDepth();
	/// <summary>
	/// Gets or sets the angle of the first pie or doughnut chart slice,  in degrees (clockwise from up, from 0 to 360 degrees).
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getFirstSliceAngle() const;
	ASPOSE_DLL_EXPORT void setFirstSliceAngle(int32_t value);
	ASPOSE_DLL_EXPORT bool firstSliceAngleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetFirstSliceAngle();
	/// <summary>
	/// Specifies that each data marker in the series has a different color.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsColorVaried() const;
	ASPOSE_DLL_EXPORT void setIsColorVaried(bool value);
	ASPOSE_DLL_EXPORT bool isColorVariedIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsColorVaried();
	/// <summary>
	/// True if chart has series lines. Applied to stacked bar and OfPie charts.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getHasSeriesLines() const;
	ASPOSE_DLL_EXPORT void setHasSeriesLines(bool value);
	ASPOSE_DLL_EXPORT bool hasSeriesLinesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHasSeriesLines();
	/// <summary>
	/// Specifies how much bars and columns shall overlap on 2-D charts (from -100 to 100).
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getOverlap() const;
	ASPOSE_DLL_EXPORT void setOverlap(int32_t value);
	ASPOSE_DLL_EXPORT bool overlapIsSet() const;
	ASPOSE_DLL_EXPORT void unsetOverlap();
	/// <summary>
	/// Specifies the size of the second pie or bar of a pie-of-pie chart or  a bar-of-pie chart, as a percentage of the size of the first pie (can  be between 5 and 200 percents).
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getSecondPieSize() const;
	ASPOSE_DLL_EXPORT void setSecondPieSize(int32_t value);
	ASPOSE_DLL_EXPORT bool secondPieSizeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSecondPieSize();
	/// <summary>
	/// Specifies a value that shall be used to determine which data points  are in the second pie or bar on a pie-of-pie or bar-of-pie chart.  Is used together with PieSplitBy property.
	/// </summary>
	ASPOSE_DLL_EXPORT double getPieSplitPosition() const;
	ASPOSE_DLL_EXPORT void setPieSplitPosition(double value);
	ASPOSE_DLL_EXPORT bool pieSplitPositionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPieSplitPosition();
	/// <summary>
	/// Specifies how to determine which data points are in the second pie or bar  on a pie-of-pie or bar-of-pie chart.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPieSplitBy() const;
	ASPOSE_DLL_EXPORT void setPieSplitBy(utility::string_t value);
	/// <summary>
	/// Specifies the size of the hole in a doughnut chart (can be between 10 and 90 percents  of the size of the plot area.).
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getDoughnutHoleSize() const;
	ASPOSE_DLL_EXPORT void setDoughnutHoleSize(int32_t value);
	ASPOSE_DLL_EXPORT bool doughnutHoleSizeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDoughnutHoleSize();
	/// <summary>
	/// Specifies the scale factor for the bubble chart (can be  between 0 and 300 percents of the default size). Read/write Int32.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getBubbleSizeScale() const;
	ASPOSE_DLL_EXPORT void setBubbleSizeScale(int32_t value);
	ASPOSE_DLL_EXPORT bool bubbleSizeScaleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetBubbleSizeScale();
	/// <summary>
	/// Specifies HiLowLines format.  HiLowLines applied with HiLowClose, OpenHiLowClose, VolumeHiLowClose and VolumeOpenHiLowClose chart types.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ChartLinesFormat> getHiLowLinesFormat() const;
	ASPOSE_DLL_EXPORT void setHiLowLinesFormat(std::shared_ptr<ChartLinesFormat> value);
	/// <summary>
	/// Specifies how the bubble size values are represented on the bubble chart. Read/write BubbleSizeRepresentationType.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getBubbleSizeRepresentation() const;
	ASPOSE_DLL_EXPORT void setBubbleSizeRepresentation(utility::string_t value);

protected:
	utility::string_t m_Type;
	int32_t m_GapWidth;
	bool m_GapWidthIsSet;
	int32_t m_GapDepth;
	bool m_GapDepthIsSet;
	int32_t m_FirstSliceAngle;
	bool m_FirstSliceAngleIsSet;
	bool m_IsColorVaried;
	bool m_IsColorVariedIsSet;
	bool m_HasSeriesLines;
	bool m_HasSeriesLinesIsSet;
	int32_t m_Overlap;
	bool m_OverlapIsSet;
	int32_t m_SecondPieSize;
	bool m_SecondPieSizeIsSet;
	double m_PieSplitPosition;
	bool m_PieSplitPositionIsSet;
	utility::string_t m_PieSplitBy;
	int32_t m_DoughnutHoleSize;
	bool m_DoughnutHoleSizeIsSet;
	int32_t m_BubbleSizeScale;
	bool m_BubbleSizeScaleIsSet;
	std::shared_ptr<ChartLinesFormat> m_HiLowLinesFormat;
	utility::string_t m_BubbleSizeRepresentation;
};

}
}

#endif /* _ChartSeriesGroup_H_ */
