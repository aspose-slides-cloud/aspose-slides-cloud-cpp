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
 * BoxAndWhiskerSeries.h
 *
 * One value series.
 */

#ifndef _BoxAndWhiskerSeries_H_
#define _BoxAndWhiskerSeries_H_

#include "OneValueSeries.h"

#include "../model/EffectFormat.h"
#include "../model/SeriesMarker.h"
#include "../model/OneValueSeries.h"
#include "../model/OneValueChartDataPoint.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// One value series.
/// </summary>
class  BoxAndWhiskerSeries : public OneValueSeries
{
public:
	ASPOSE_DLL_EXPORT BoxAndWhiskerSeries();
	ASPOSE_DLL_EXPORT virtual ~BoxAndWhiskerSeries();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Quartile method.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getQuartileMethod() const;
	ASPOSE_DLL_EXPORT void setQuartileMethod(utility::string_t value);
	/// <summary>
	/// True if inner points are shown.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowInnerPoints() const;
	ASPOSE_DLL_EXPORT void setShowInnerPoints(bool value);
	ASPOSE_DLL_EXPORT bool showInnerPointsIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowInnerPoints();
	/// <summary>
	/// True if mean line is shown.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowMeanLine() const;
	ASPOSE_DLL_EXPORT void setShowMeanLine(bool value);
	ASPOSE_DLL_EXPORT bool showMeanLineIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowMeanLine();
	/// <summary>
	/// True if mean markers are shown.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowMeanMarkers() const;
	ASPOSE_DLL_EXPORT void setShowMeanMarkers(bool value);
	ASPOSE_DLL_EXPORT bool showMeanMarkersIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowMeanMarkers();
	/// <summary>
	/// True if outlier points are shown.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowOutlierPoints() const;
	ASPOSE_DLL_EXPORT void setShowOutlierPoints(bool value);
	ASPOSE_DLL_EXPORT bool showOutlierPointsIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowOutlierPoints();

protected:
	utility::string_t m_QuartileMethod;
	bool m_ShowInnerPoints;
	bool m_ShowInnerPointsIsSet;
	bool m_ShowMeanLine;
	bool m_ShowMeanLineIsSet;
	bool m_ShowMeanMarkers;
	bool m_ShowMeanMarkersIsSet;
	bool m_ShowOutlierPoints;
	bool m_ShowOutlierPointsIsSet;
};

}
}

#endif /* _BoxAndWhiskerSeries_H_ */
