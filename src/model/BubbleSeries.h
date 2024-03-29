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
 * BubbleSeries.h
 *
 * A bubble series.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_BubbleSeries_H_
#define ASPOSESLIDESCLOUD_MODEL_BubbleSeries_H_

#include "XYSeries.h"

#include "../model/EffectFormat.h"
#include "../model/SeriesMarker.h"
#include <cpprest/details/basic_types.h>
#include "../model/DataSource.h"
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include <vector>
#include "../model/BubbleChartDataPoint.h"
#include "../model/XYSeries.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// A bubble series.
/// </summary>
class  BubbleSeries : public XYSeries
{
public:
	ASPOSE_DLL_EXPORT BubbleSeries();
	ASPOSE_DLL_EXPORT virtual ~BubbleSeries();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets the values.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<BubbleChartDataPoint>> getDataPoints() const;
	ASPOSE_DLL_EXPORT void setDataPoints(std::vector<std::shared_ptr<BubbleChartDataPoint>> value);
	/// <summary>
	/// The number format for the series bubble sizes.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getNumberFormatOfBubbleSizes() const;
	ASPOSE_DLL_EXPORT void setNumberFormatOfBubbleSizes(utility::string_t value);
	/// <summary>
	/// Data source type for Bubble size values.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<DataSource> getDataSourceForBubbleSizeValues() const;
	ASPOSE_DLL_EXPORT void setDataSourceForBubbleSizeValues(std::shared_ptr<DataSource> value);

protected:
	std::vector<std::shared_ptr<BubbleChartDataPoint>> m_DataPoints;
	utility::string_t m_NumberFormatOfBubbleSizes;
	std::shared_ptr<DataSource> m_DataSourceForBubbleSizeValues;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_BubbleSeries_H_ */
