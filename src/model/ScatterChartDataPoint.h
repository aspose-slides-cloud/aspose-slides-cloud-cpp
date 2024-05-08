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
 * ScatterChartDataPoint.h
 *
 * Scatter chart (two-dimensional) data point
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_ScatterChartDataPoint_H_
#define ASPOSESLIDESCLOUD_MODEL_ScatterChartDataPoint_H_

#include "DataPoint.h"

#include "../model/EffectFormat.h"
#include "../model/SeriesMarker.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ThreeDFormat.h"
#include "../model/DataPoint.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Scatter chart (two-dimensional) data point
/// </summary>
class  ScatterChartDataPoint : public DataPoint
{
public:
	ASPOSE_DLL_EXPORT ScatterChartDataPoint();
	ASPOSE_DLL_EXPORT virtual ~ScatterChartDataPoint();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// X-value
	/// </summary>
	ASPOSE_DLL_EXPORT double getXValue() const;
	ASPOSE_DLL_EXPORT void setXValue(double value);
	ASPOSE_DLL_EXPORT bool xValueIsSet() const;
	ASPOSE_DLL_EXPORT void unsetXValue();
	/// <summary>
	/// Y-value
	/// </summary>
	ASPOSE_DLL_EXPORT double getYValue() const;
	ASPOSE_DLL_EXPORT void setYValue(double value);
	ASPOSE_DLL_EXPORT bool yValueIsSet() const;
	ASPOSE_DLL_EXPORT void unsetYValue();
	/// <summary>
	/// Spreadsheet formula in A1-style.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getXValueFormula() const;
	ASPOSE_DLL_EXPORT void setXValueFormula(utility::string_t value);
	/// <summary>
	/// Spreadsheet formula in A1-style.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getYValueFormula() const;
	ASPOSE_DLL_EXPORT void setYValueFormula(utility::string_t value);

protected:
	double m_XValue;
	bool m_XValueIsSet;
	double m_YValue;
	bool m_YValueIsSet;
	utility::string_t m_XValueFormula;
	utility::string_t m_YValueFormula;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_ScatterChartDataPoint_H_ */
