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
 * Chart.h
 *
 * Represents chart resource
 */

#ifndef _Chart_H_
#define _Chart_H_

#include "ShapeBase.h"

#include "../model/EffectFormat.h"
#include "../model/PlotArea.h"
#include "../model/ChartCategory.h"
#include "../model/Axes.h"
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ThreeDFormat.h"
#include <vector>
#include "../model/ChartTitle.h"
#include "../model/Legend.h"
#include "../model/ShapeBase.h"
#include <cpprest/details/basic_types.h>
#include "../model/ResourceUri.h"
#include "../model/ChartWall.h"
#include "../model/Series.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents chart resource
/// </summary>
class  Chart : public ShapeBase
{
public:
	ASPOSE_DLL_EXPORT Chart();
	ASPOSE_DLL_EXPORT virtual ~Chart();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets the type of the chart.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getChartType() const;
	ASPOSE_DLL_EXPORT void setChartType(utility::string_t value);
	/// <summary>
	/// True if data labels over the maximum of the chart shall be shown.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowDataLabelsOverMaximum() const;
	ASPOSE_DLL_EXPORT void setShowDataLabelsOverMaximum(bool value);
	ASPOSE_DLL_EXPORT bool showDataLabelsOverMaximumIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowDataLabelsOverMaximum();
	/// <summary>
	/// Gets or sets the series of chart data values.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<Series>> getSeries() const;
	ASPOSE_DLL_EXPORT void setSeries(std::vector<std::shared_ptr<Series>> value);
	/// <summary>
	/// Gets or sets the categories for chart data
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<ChartCategory>> getCategories() const;
	ASPOSE_DLL_EXPORT void setCategories(std::vector<std::shared_ptr<ChartCategory>> value);
	/// <summary>
	/// Gets or sets the title.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ChartTitle> getTitle() const;
	ASPOSE_DLL_EXPORT void setTitle(std::shared_ptr<ChartTitle> value);
	/// <summary>
	/// Gets or sets the back wall.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ChartWall> getBackWall() const;
	ASPOSE_DLL_EXPORT void setBackWall(std::shared_ptr<ChartWall> value);
	/// <summary>
	/// Gets or sets the side wall.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ChartWall> getSideWall() const;
	ASPOSE_DLL_EXPORT void setSideWall(std::shared_ptr<ChartWall> value);
	/// <summary>
	/// Gets or sets the floor.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ChartWall> getFloor() const;
	ASPOSE_DLL_EXPORT void setFloor(std::shared_ptr<ChartWall> value);
	/// <summary>
	/// Gets or sets the legend.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<Legend> getLegend() const;
	ASPOSE_DLL_EXPORT void setLegend(std::shared_ptr<Legend> value);
	/// <summary>
	/// Gets or sets the axes.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<Axes> getAxes() const;
	ASPOSE_DLL_EXPORT void setAxes(std::shared_ptr<Axes> value);
	/// <summary>
	/// Gets or sets the plot area.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<PlotArea> getPlotArea() const;
	ASPOSE_DLL_EXPORT void setPlotArea(std::shared_ptr<PlotArea> value);

protected:
	utility::string_t m_ChartType;
	bool m_ShowDataLabelsOverMaximum;
	bool m_ShowDataLabelsOverMaximumIsSet;
	std::vector<std::shared_ptr<Series>> m_Series;
	std::vector<std::shared_ptr<ChartCategory>> m_Categories;
	std::shared_ptr<ChartTitle> m_Title;
	std::shared_ptr<ChartWall> m_BackWall;
	std::shared_ptr<ChartWall> m_SideWall;
	std::shared_ptr<ChartWall> m_Floor;
	std::shared_ptr<Legend> m_Legend;
	std::shared_ptr<Axes> m_Axes;
	std::shared_ptr<PlotArea> m_PlotArea;
};

}
}

#endif /* _Chart_H_ */
