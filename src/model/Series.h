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
 * Series.h
 *
 * A chart series.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_Series_H_
#define ASPOSESLIDESCLOUD_MODEL_Series_H_

#include "../ModelBase.h"

#include "../model/EffectFormat.h"
#include "../model/SeriesMarker.h"
#include <cpprest/details/basic_types.h>
#include "../model/DataSource.h"
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// A chart series.
/// </summary>
class  Series : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT Series();
	ASPOSE_DLL_EXPORT virtual ~Series();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Series type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getType() const;
	ASPOSE_DLL_EXPORT void setType(utility::string_t value);
	/// <summary>
	/// Series name.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);
	/// <summary>
	/// Series name data source.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<DataSource> getDataSourceForSeriesName() const;
	ASPOSE_DLL_EXPORT void setDataSourceForSeriesName(std::shared_ptr<DataSource> value);
	/// <summary>
	/// True if each data marker in the series has a different color.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isIsColorVaried() const;
	ASPOSE_DLL_EXPORT void setIsColorVaried(bool value);
	ASPOSE_DLL_EXPORT bool isColorVariedIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsColorVaried();
	/// <summary>
	/// Invert solid color for the series.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getInvertedSolidFillColor() const;
	ASPOSE_DLL_EXPORT void setInvertedSolidFillColor(utility::string_t value);
	/// <summary>
	/// True if curve smoothing is turned on. Applies only to line and scatter connected by lines charts.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isSmooth() const;
	ASPOSE_DLL_EXPORT void setSmooth(bool value);
	ASPOSE_DLL_EXPORT bool smoothIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSmooth();
	/// <summary>
	/// True if the series is plotted on second value axis.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isPlotOnSecondAxis() const;
	ASPOSE_DLL_EXPORT void setPlotOnSecondAxis(bool value);
	ASPOSE_DLL_EXPORT bool plotOnSecondAxisIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPlotOnSecondAxis();
	/// <summary>
	/// Series order.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getOrder() const;
	ASPOSE_DLL_EXPORT void setOrder(int32_t value);
	ASPOSE_DLL_EXPORT bool orderIsSet() const;
	ASPOSE_DLL_EXPORT void unsetOrder();
	/// <summary>
	/// True if the series shall invert its colors if the value is negative. Applies to bar, column and bubble series.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isInvertIfNegative() const;
	ASPOSE_DLL_EXPORT void setInvertIfNegative(bool value);
	ASPOSE_DLL_EXPORT bool invertIfNegativeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetInvertIfNegative();
	/// <summary>
	/// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getExplosion() const;
	ASPOSE_DLL_EXPORT void setExplosion(int32_t value);
	ASPOSE_DLL_EXPORT bool explosionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetExplosion();
	/// <summary>
	/// Series marker.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<SeriesMarker> getMarker() const;
	ASPOSE_DLL_EXPORT void setMarker(std::shared_ptr<SeriesMarker> value);
	/// <summary>
	/// Fill properties set for the series.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FillFormat> getFillFormat() const;
	ASPOSE_DLL_EXPORT void setFillFormat(std::shared_ptr<FillFormat> value);
	/// <summary>
	/// Effect properties set for the series.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<EffectFormat> getEffectFormat() const;
	ASPOSE_DLL_EXPORT void setEffectFormat(std::shared_ptr<EffectFormat> value);
	/// <summary>
	/// Line properties set for the series.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LineFormat> getLineFormat() const;
	ASPOSE_DLL_EXPORT void setLineFormat(std::shared_ptr<LineFormat> value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDataPointType() const;
	ASPOSE_DLL_EXPORT void setDataPointType(utility::string_t value);

protected:
	utility::string_t m_Type;
	utility::string_t m_Name;
	std::shared_ptr<DataSource> m_DataSourceForSeriesName;
	bool m_IsColorVaried;
	bool m_IsColorVariedIsSet;
	utility::string_t m_InvertedSolidFillColor;
	bool m_Smooth;
	bool m_SmoothIsSet;
	bool m_PlotOnSecondAxis;
	bool m_PlotOnSecondAxisIsSet;
	int32_t m_Order;
	bool m_OrderIsSet;
	bool m_InvertIfNegative;
	bool m_InvertIfNegativeIsSet;
	int32_t m_Explosion;
	bool m_ExplosionIsSet;
	std::shared_ptr<SeriesMarker> m_Marker;
	std::shared_ptr<FillFormat> m_FillFormat;
	std::shared_ptr<EffectFormat> m_EffectFormat;
	std::shared_ptr<LineFormat> m_LineFormat;
	utility::string_t m_DataPointType;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_Series_H_ */
