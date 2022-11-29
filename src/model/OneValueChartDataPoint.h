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
 * OneValueChartDataPoint.h
 *
 * One value chart data point.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_OneValueChartDataPoint_H_
#define ASPOSESLIDESCLOUD_MODEL_OneValueChartDataPoint_H_

#include "DataPoint.h"

#include "../model/EffectFormat.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ThreeDFormat.h"
#include "../model/DataPoint.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// One value chart data point.
/// </summary>
class  OneValueChartDataPoint : public DataPoint
{
public:
	ASPOSE_DLL_EXPORT OneValueChartDataPoint();
	ASPOSE_DLL_EXPORT virtual ~OneValueChartDataPoint();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Value.
	/// </summary>
	ASPOSE_DLL_EXPORT double getValue() const;
	ASPOSE_DLL_EXPORT void setValue(double value);
	/// <summary>
	/// Spreadsheet formula in A1-style.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getValueFormula() const;
	ASPOSE_DLL_EXPORT void setValueFormula(utility::string_t value);
	/// <summary>
	/// SetAsTotal. Applied to Waterfall data points only.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isSetAsTotal() const;
	ASPOSE_DLL_EXPORT void setSetAsTotal(bool value);
	ASPOSE_DLL_EXPORT bool setAsTotalIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSetAsTotal();
	/// <summary>
	/// True if the data point shall invert its colors if the value is negative. Applies to bar, column and bubble series.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isInvertIfNegative() const;
	ASPOSE_DLL_EXPORT void setInvertIfNegative(bool value);
	ASPOSE_DLL_EXPORT bool invertIfNegativeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetInvertIfNegative();

protected:
	double m_Value;
	utility::string_t m_ValueFormula;
	bool m_SetAsTotal;
	bool m_SetAsTotalIsSet;
	bool m_InvertIfNegative;
	bool m_InvertIfNegativeIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_OneValueChartDataPoint_H_ */
