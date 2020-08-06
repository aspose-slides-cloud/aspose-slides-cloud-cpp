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
 * WaterfallSeries.h
 *
 * One value series.
 */

#ifndef _WaterfallSeries_H_
#define _WaterfallSeries_H_

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
class  WaterfallSeries : public OneValueSeries
{
public:
	ASPOSE_DLL_EXPORT WaterfallSeries();
	ASPOSE_DLL_EXPORT virtual ~WaterfallSeries();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// True if inner points are shown.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowConnectorLines() const;
	ASPOSE_DLL_EXPORT void setShowConnectorLines(bool value);
	ASPOSE_DLL_EXPORT bool showConnectorLinesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowConnectorLines();

protected:
	bool m_ShowConnectorLines;
	bool m_ShowConnectorLinesIsSet;
};

}
}

#endif /* _WaterfallSeries_H_ */