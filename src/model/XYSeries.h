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
 * XYSeries.h
 *
 * Common properties for Bubble and Scatter series. 
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_XYSeries_H_
#define ASPOSESLIDESCLOUD_MODEL_XYSeries_H_

#include "Series.h"

#include "../model/EffectFormat.h"
#include "../model/SeriesMarker.h"
#include <cpprest/details/basic_types.h>
#include "../model/DataSource.h"
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/Series.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Common properties for Bubble and Scatter series. 
/// </summary>
class  XYSeries : public Series
{
public:
	ASPOSE_DLL_EXPORT XYSeries();
	ASPOSE_DLL_EXPORT virtual ~XYSeries();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// The number format for the series y values.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getNumberFormatOfYValues() const;
	ASPOSE_DLL_EXPORT void setNumberFormatOfYValues(utility::string_t value);
	/// <summary>
	/// The number format for the series x values.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getNumberFormatOfXValues() const;
	ASPOSE_DLL_EXPORT void setNumberFormatOfXValues(utility::string_t value);
	/// <summary>
	/// Data source type for X Values.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<DataSource> getDataSourceForXValues() const;
	ASPOSE_DLL_EXPORT void setDataSourceForXValues(std::shared_ptr<DataSource> value);
	/// <summary>
	/// Data source type for Y Values.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<DataSource> getDataSourceForYValues() const;
	ASPOSE_DLL_EXPORT void setDataSourceForYValues(std::shared_ptr<DataSource> value);

protected:
	utility::string_t m_NumberFormatOfYValues;
	utility::string_t m_NumberFormatOfXValues;
	std::shared_ptr<DataSource> m_DataSourceForXValues;
	std::shared_ptr<DataSource> m_DataSourceForYValues;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_XYSeries_H_ */
