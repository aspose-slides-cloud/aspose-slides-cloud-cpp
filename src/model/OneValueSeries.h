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
 * OneValueSeries.h
 *
 * One value series.
 */

#ifndef _OneValueSeries_H_
#define _OneValueSeries_H_

#include "Series.h"

#include "../model/EffectFormat.h"
#include "../model/SeriesMarker.h"
#include "../model/OneValueChartDataPoint.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include <vector>
#include "../model/Series.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// One value series.
/// </summary>
class  OneValueSeries : public Series
{
public:
	ASPOSE_DLL_EXPORT OneValueSeries();
	ASPOSE_DLL_EXPORT virtual ~OneValueSeries();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Data point type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDataPointType() const;
	ASPOSE_DLL_EXPORT void setDataPointType(utility::string_t value);
	/// <summary>
	/// Gets or sets the values.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<OneValueChartDataPoint>> getDataPoints() const;
	ASPOSE_DLL_EXPORT void setDataPoints(std::vector<std::shared_ptr<OneValueChartDataPoint>> value);

protected:
	utility::string_t m_DataPointType;
	std::vector<std::shared_ptr<OneValueChartDataPoint>> m_DataPoints;
};

}
}

#endif /* _OneValueSeries_H_ */
