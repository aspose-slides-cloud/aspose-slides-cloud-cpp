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


#include "gtest/gtest.h"

#include "TestUtils.h"
#include "model/OneValueSeries.h"
#include "model/NoFill.h"
#include "model/SolidFill.h"
#include "model/GradientFill.h"

using namespace asposeslidescloud::api;

class ChartTest : public ::testing::Test
{
public:
	static SlidesApi* api;
	static TestUtils* utils;

protected:
	void SetUp()
	{
		if (api == nullptr)
		{
			std::ifstream rulesFile("testConfig.json");
			std::string rulesString;
			std::ostringstream rulesStream;
			rulesStream << rulesFile.rdbuf();
			rulesString = rulesStream.str();
			web::json::value config = web::json::value::parse(utility::conversions::to_string_t(rulesString));
			std::shared_ptr<ApiConfiguration> configuration = std::make_shared<ApiConfiguration>();
			if (config.has_field(L"ClientId"))
			{
				configuration->setAppSid(config[L"ClientId"].as_string());
			}
			if (config.has_field(L"ClientSecret"))
			{
				configuration->setAppKey(config[L"ClientSecret"].as_string());
			}
			if (config.has_field(L"BaseUrl"))
			{
				configuration->setBaseUrl(config[L"BaseUrl"].as_string());
			}
			if (config.has_field(L"AuthBaseUrl"))
			{
				configuration->setBaseAuthUrl(config[L"AuthBaseUrl"].as_string());
			}
			if (config.has_field(L"Debug"))
			{
				configuration->setDebug(config[L"Debug"].as_bool());
			}
			api = new SlidesApi(configuration);
			utils = new TestUtils(api);
		}
	}
};

SlidesApi* ChartTest::api = nullptr;
TestUtils* ChartTest::utils = nullptr;

TEST_F(ChartTest, chartInit) {
	std::shared_ptr<Chart> chart(new Chart());
	EXPECT_EQ(L"Chart", chart->getType());
}

TEST_F(ChartTest, chartGet) {
	utils->initialize("", "");
	std::shared_ptr<ShapeBase> result = api->getShape(L"test.pptx", 3, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"Chart", result->getType());
	std::shared_ptr<Chart> chart = std::dynamic_pointer_cast<Chart>(result);
	EXPECT_EQ(3, chart->getSeries().size());
	EXPECT_EQ(4, chart->getCategories().size());
}

TEST_F(ChartTest, chartCreate) {
	utils->initialize("", "");

	std::shared_ptr<Chart> chart(new Chart());
	chart->setChartType(L"ClusteredColumn");
	chart->setWidth(400);
	chart->setHeight(300);

	std::shared_ptr<OneValueSeries> series1(new OneValueSeries());
	series1->setName(L"Series1");
	std::shared_ptr<OneValueChartDataPoint> point11(new OneValueChartDataPoint());
	point11->setValue(40);
	std::shared_ptr<OneValueChartDataPoint> point12(new OneValueChartDataPoint());
	point12->setValue(50);
	std::shared_ptr<OneValueChartDataPoint> point13(new OneValueChartDataPoint());
	point13->setValue(70);
	series1->setDataPoints({ point11, point12, point13 });

	std::shared_ptr<OneValueSeries> series2(new OneValueSeries());
	series2->setName(L"Series2");
	std::shared_ptr<OneValueChartDataPoint> point21(new OneValueChartDataPoint());
	point21->setValue(55);
	std::shared_ptr<OneValueChartDataPoint> point22(new OneValueChartDataPoint());
	point22->setValue(35);
	std::shared_ptr<OneValueChartDataPoint> point23(new OneValueChartDataPoint());
	point23->setValue(90);
	series2->setDataPoints({ point21, point22, point23 });
	chart->setSeries({ series1, series2 });

	std::shared_ptr<ChartCategory> category1(new ChartCategory());
	category1->setValue(L"Category1");
	std::shared_ptr<ChartCategory> category2(new ChartCategory());
	category2->setValue(L"Category2");
	std::shared_ptr<ChartCategory> category3(new ChartCategory());
	category3->setValue(L"Category3");
	chart->setCategories({ category1, category2, category3 });
	std::shared_ptr<ShapeBase> shape = api->createShape(L"test.pptx", 3, chart, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<Chart> resultChart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(2, resultChart->getSeries().size());
	EXPECT_EQ(3, resultChart->getCategories().size());
}

TEST_F(ChartTest, chartUpdate) {
	utils->initialize("", "");

	std::shared_ptr<Chart> chart(new Chart());
	chart->setChartType(L"ClusteredColumn");
	chart->setWidth(400);
	chart->setHeight(300);

	std::shared_ptr<OneValueSeries> series1(new OneValueSeries());
	series1->setName(L"Series1");
	std::shared_ptr<OneValueChartDataPoint> point11(new OneValueChartDataPoint());
	point11->setValue(40);
	std::shared_ptr<OneValueChartDataPoint> point12(new OneValueChartDataPoint());
	point12->setValue(50);
	std::shared_ptr<OneValueChartDataPoint> point13(new OneValueChartDataPoint());
	point13->setValue(70);
	series1->setDataPoints({ point11, point12, point13 });

	std::shared_ptr<OneValueSeries> series2(new OneValueSeries());
	series2->setName(L"Series2");
	std::shared_ptr<OneValueChartDataPoint> point21(new OneValueChartDataPoint());
	point21->setValue(55);
	std::shared_ptr<OneValueChartDataPoint> point22(new OneValueChartDataPoint());
	point22->setValue(35);
	std::shared_ptr<OneValueChartDataPoint> point23(new OneValueChartDataPoint());
	point23->setValue(90);
	series2->setDataPoints({ point21, point22, point23 });
	chart->setSeries({ series1, series2 });

	std::shared_ptr<ChartCategory> category1(new ChartCategory());
	category1->setValue(L"Category1");
	std::shared_ptr<ChartCategory> category2(new ChartCategory());
	category2->setValue(L"Category2");
	std::shared_ptr<ChartCategory> category3(new ChartCategory());
	category3->setValue(L"Category3");
	chart->setCategories({ category1, category2, category3 });
	std::shared_ptr<ShapeBase> shape = api->updateShape(L"test.pptx", 3, 1, chart, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<Chart> resultChart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(2, resultChart->getSeries().size());
	EXPECT_EQ(3, resultChart->getCategories().size());
}

TEST_F(ChartTest, chartSeriesCreate) {
	utils->initialize("", "");

	std::shared_ptr<OneValueSeries> series(new OneValueSeries());
	series->setName(L"Series3");
	std::shared_ptr<OneValueChartDataPoint> point1(new OneValueChartDataPoint());
	point1->setValue(40);
	std::shared_ptr<OneValueChartDataPoint> point2(new OneValueChartDataPoint());
	point2->setValue(50);
	std::shared_ptr<OneValueChartDataPoint> point3(new OneValueChartDataPoint());
	point3->setValue(14);
	std::shared_ptr<OneValueChartDataPoint> point4(new OneValueChartDataPoint());
	point4->setValue(70);
	series->setDataPoints({ point1, point2, point3, point4 });

	std::shared_ptr<ShapeBase> shape = api->createChartSeries(L"test.pptx", 3, 1, series, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<Chart> resultChart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(4, resultChart->getSeries().size());
	EXPECT_EQ(4, resultChart->getCategories().size());
}

TEST_F(ChartTest, chartSeriesUpdate) {
	utils->initialize("", "");

	std::shared_ptr<OneValueSeries> series(new OneValueSeries());
	series->setName(L"Series3");
	std::shared_ptr<OneValueChartDataPoint> point1(new OneValueChartDataPoint());
	point1->setValue(40);
	std::shared_ptr<OneValueChartDataPoint> point2(new OneValueChartDataPoint());
	point2->setValue(50);
	std::shared_ptr<OneValueChartDataPoint> point3(new OneValueChartDataPoint());
	point3->setValue(14);
	std::shared_ptr<OneValueChartDataPoint> point4(new OneValueChartDataPoint());
	point4->setValue(70);
	series->setDataPoints({ point1, point2, point3, point4 });

	std::shared_ptr<ShapeBase> shape = api->updateChartSeries(L"test.pptx", 3, 1, 2, series, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<Chart> resultChart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(3, resultChart->getSeries().size());
	EXPECT_EQ(4, resultChart->getCategories().size());
}

TEST_F(ChartTest, chartSeriesDelete) {
	utils->initialize("", "");
	std::shared_ptr<ShapeBase> shape = api->deleteChartSeries(L"test.pptx", 3, 1, 2, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<Chart> resultChart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(2, resultChart->getSeries().size());
	EXPECT_EQ(4, resultChart->getCategories().size());
}

TEST_F(ChartTest, chartCategoryCreate) {
	utils->initialize("", "");

	std::shared_ptr<ChartCategory> category(new ChartCategory());
	category->setValue(L"NewCategory");
	std::shared_ptr<OneValueChartDataPoint> point1(new OneValueChartDataPoint());
	point1->setValue(40);
	std::shared_ptr<OneValueChartDataPoint> point2(new OneValueChartDataPoint());
	point2->setValue(50);
	std::shared_ptr<OneValueChartDataPoint> point3(new OneValueChartDataPoint());
	point3->setValue(14);
	category->setDataPoints({ point1, point2, point3 });
	std::shared_ptr<ShapeBase> shape = api->createChartCategory(L"test.pptx", 3, 1, category, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<Chart> resultChart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(3, resultChart->getSeries().size());
	EXPECT_EQ(5, resultChart->getCategories().size());
	std::shared_ptr<OneValueSeries> series = std::static_pointer_cast<OneValueSeries>(resultChart->getSeries()[0]);
	EXPECT_EQ(5, series->getDataPoints().size());
	EXPECT_EQ(category->getDataPoints()[0]->getValue(), series->getDataPoints()[4]->getValue());
}

TEST_F(ChartTest, chartCategoryUpdate) {
	utils->initialize("", "");

	std::shared_ptr<ChartCategory> category(new ChartCategory());
	category->setValue(L"NewCategory");
	std::shared_ptr<OneValueChartDataPoint> point1(new OneValueChartDataPoint());
	point1->setValue(40);
	std::shared_ptr<OneValueChartDataPoint> point2(new OneValueChartDataPoint());
	point2->setValue(50);
	std::shared_ptr<OneValueChartDataPoint> point3(new OneValueChartDataPoint());
	point3->setValue(14);
	category->setDataPoints({ point1, point2, point3 });
	std::shared_ptr<ShapeBase> shape = api->updateChartCategory(L"test.pptx", 3, 1, 2, category, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<Chart> resultChart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(3, resultChart->getSeries().size());
	EXPECT_EQ(4, resultChart->getCategories().size());
	std::shared_ptr<OneValueSeries> series = std::static_pointer_cast<OneValueSeries>(resultChart->getSeries()[0]);
	EXPECT_EQ(4, series->getDataPoints().size());
	EXPECT_EQ(category->getDataPoints()[0]->getValue(), series->getDataPoints()[1]->getValue());
}

TEST_F(ChartTest, chartCategoryDelete) {
	utils->initialize("", "");
	std::shared_ptr<ShapeBase> shape = api->deleteChartCategory(L"test.pptx", 3, 1, 2, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<Chart> resultChart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(3, resultChart->getSeries().size());
	EXPECT_EQ(3, resultChart->getCategories().size());
	std::shared_ptr<OneValueSeries> series = std::static_pointer_cast<OneValueSeries>(resultChart->getSeries()[0]);
	EXPECT_EQ(3, series->getDataPoints().size());
}

TEST_F(ChartTest, chartDataPointCreate) {
	utils->initialize("", "");

	std::shared_ptr<OneValueChartDataPoint> point(new OneValueChartDataPoint());
	point->setValue(40);
	try
	{
		api->createChartDataPoint(L"test.pptx", 3, 1, 2, point, L"password", L"TempSlidesSDK").wait();
		FAIL() << "Must have failed";
	}
	catch (ApiException ex)
	{
		EXPECT_EQ(400, ex.error_code().value());
	}
}

TEST_F(ChartTest, chartDataPointUpdate) {
	utils->initialize("", "");

	std::shared_ptr<OneValueChartDataPoint> point(new OneValueChartDataPoint());
	point->setValue(40);
	std::shared_ptr<ShapeBase> shape = api->updateChartDataPoint(L"test.pptx", 3, 1, 2, 2, point, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<Chart> resultChart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(3, resultChart->getSeries().size());
	EXPECT_EQ(4, resultChart->getCategories().size());
	std::shared_ptr<OneValueSeries> series = std::static_pointer_cast<OneValueSeries>(resultChart->getSeries()[1]);
	EXPECT_EQ(4, series->getDataPoints().size());
	EXPECT_EQ(point->getValue(), series->getDataPoints()[1]->getValue());
}

TEST_F(ChartTest, chartDataPointDelete) {
	utils->initialize("", "");

	std::shared_ptr<ShapeBase> shape = api->deleteChartDataPoint(L"test.pptx", 3, 1, 2, 2, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<Chart> resultChart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(3, resultChart->getSeries().size());
	EXPECT_EQ(4, resultChart->getCategories().size());
	std::shared_ptr<OneValueSeries> series = std::static_pointer_cast<OneValueSeries>(resultChart->getSeries()[1]);
	EXPECT_EQ(4, series->getDataPoints().size());
	EXPECT_EQ(nullptr, series->getDataPoints()[1].get());
}

TEST_F(ChartTest, chartSunburst) {
	utils->initialize("", "");

	std::shared_ptr<Chart> chart(new Chart());
	chart->setChartType(L"Sunburst");
	chart->setWidth(400);
	chart->setHeight(300);

	std::shared_ptr<OneValueSeries> series1(new OneValueSeries());
	series1->setName(L"Series1");
	std::shared_ptr<OneValueChartDataPoint> point1(new OneValueChartDataPoint());
	point1->setValue(40);
	std::shared_ptr<OneValueChartDataPoint> point2(new OneValueChartDataPoint());
	point2->setValue(50);
	std::shared_ptr<OneValueChartDataPoint> point3(new OneValueChartDataPoint());
	point3->setValue(70);
	std::shared_ptr<OneValueChartDataPoint> point4(new OneValueChartDataPoint());
	point4->setValue(60);
	series1->setDataPoints({ point1, point2, point3, point4 });
	chart->setSeries({ series1 });

	std::shared_ptr<ChartCategory> category1(new ChartCategory());
	category1->setValue(L"Leaf1");
	category1->setParentCategories({ L"Branch1", L"Stem1" });
	std::shared_ptr<ChartCategory> category2(new ChartCategory());
	category2->setValue(L"Leaf2");
	category2->setParentCategories({ L"Branch1", L"Stem1" });
	std::shared_ptr<ChartCategory> category3(new ChartCategory());
	category3->setValue(L"Branch2");
	category3->setParentCategories({ L"Stem1" });
	std::shared_ptr<ChartCategory> category4(new ChartCategory());
	category4->setValue(L"Stem2");
	chart->setCategories({ category1, category2, category3, category4 });
	std::shared_ptr<ShapeBase> shape = api->createShape(L"test.pptx", 3, chart, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<Chart> resultChart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(1, resultChart->getSeries().size());
	EXPECT_EQ(4, resultChart->getCategories().size());
}

TEST_F(ChartTest, chartMultilevelCategoryAxis) {
	utils->initialize("", "");

	std::shared_ptr<Chart> chart(new Chart());
	chart->setChartType(L"ClusteredColumn");
	chart->setX(100);
	chart->setY(100);
	chart->setWidth(400);
	chart->setHeight(300);

	std::shared_ptr<OneValueSeries> series1(new OneValueSeries());
	series1->setName(L"Series1");
	std::shared_ptr<OneValueChartDataPoint> point1(new OneValueChartDataPoint());
	point1->setValue(1);
	std::shared_ptr<OneValueChartDataPoint> point2(new OneValueChartDataPoint());
	point2->setValue(2);
	std::shared_ptr<OneValueChartDataPoint> point3(new OneValueChartDataPoint());
	point3->setValue(3);
	std::shared_ptr<OneValueChartDataPoint> point4(new OneValueChartDataPoint());
	point4->setValue(4);
	std::shared_ptr<OneValueChartDataPoint> point5(new OneValueChartDataPoint());
	point5->setValue(5);
	std::shared_ptr<OneValueChartDataPoint> point6(new OneValueChartDataPoint());
	point6->setValue(6);
	std::shared_ptr<OneValueChartDataPoint> point7(new OneValueChartDataPoint());
	point7->setValue(7);
	std::shared_ptr<OneValueChartDataPoint> point8(new OneValueChartDataPoint());
	point8->setValue(8);
	series1->setDataPoints({ point1, point2, point3, point4, point5, point6, point7, point8 });
	chart->setSeries({ series1 });

	std::shared_ptr<ChartCategory> category1(new ChartCategory());
	category1->setValue(L"Category1");
	category1->setParentCategories({ L"Subcategory1", L"Root1" });
	std::shared_ptr<ChartCategory> category2(new ChartCategory());
	category2->setValue(L"Category2");
	std::shared_ptr<ChartCategory> category3(new ChartCategory());
	category3->setValue(L"Category3");
	category3->setParentCategories({ L"Subcategory2" });
	std::shared_ptr<ChartCategory> category4(new ChartCategory());
	category4->setValue(L"Category4");
	std::shared_ptr<ChartCategory> category5(new ChartCategory());
	category5->setValue(L"Category5");
	category5->setParentCategories({ L"Subcategory3", L"Root2" });
	std::shared_ptr<ChartCategory> category6(new ChartCategory());
	category6->setValue(L"Category6");
	std::shared_ptr<ChartCategory> category7(new ChartCategory());
	category7->setValue(L"Category7");
	category7->setParentCategories({ L"Subcategory4" });
	std::shared_ptr<ChartCategory> category8(new ChartCategory());
	category8->setValue(L"Category8");
	chart->setCategories({ category1, category2, category3, category4, category5, category6, category7, category8 });
	std::shared_ptr<ShapeBase> shape = api->createShape(L"test.pptx", 3, chart, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<Chart> resultChart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(1, resultChart->getSeries().size());
	EXPECT_EQ(8, resultChart->getCategories().size());
}

TEST_F(ChartTest, chartHideChartLegend) {
	utils->initialize("", "");

	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 3;
	int shapeIndex = 1;

	std::shared_ptr<ShapeBase> shape = api->getShape(fileName, slideIndex, shapeIndex, password, folderName).get();
	std::shared_ptr<Chart> chart = std::static_pointer_cast<Chart>(shape);
	chart->getLegend()->setHasLegend(false);
	shape = api->updateShape(fileName, slideIndex, shapeIndex, chart, password, folderName).get();
	chart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(false, chart->getLegend()->isHasLegend());
}

TEST_F(ChartTest, chartGridLinesFormat) {
	utils->initialize("", "");

	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 3;
	int shapeIndex = 1;

	std::shared_ptr<ShapeBase> shape = api->getShape(fileName, slideIndex, shapeIndex, password, folderName).get();
	std::shared_ptr<Chart> chart = std::static_pointer_cast<Chart>(shape);

	std::shared_ptr<Axis> horizontalAxis(new Axis());
	std::shared_ptr<ChartLinesFormat> majorGridLinesFormat(new ChartLinesFormat());
	std::shared_ptr<LineFormat> majorLineFormat(new LineFormat());
	std::shared_ptr<FillFormat> majorLineFillFormat(new NoFill());
	majorLineFormat->setFillFormat(majorLineFillFormat);
	majorGridLinesFormat->setLineFormat(majorLineFormat);
	horizontalAxis->setMajorGridLinesFormat(majorGridLinesFormat);

	std::shared_ptr<ChartLinesFormat> minorGridLinesFormat(new ChartLinesFormat());
	std::shared_ptr<LineFormat> minorLineFormat(new LineFormat());
	std::shared_ptr<SolidFill> minorLineFillFormat(new SolidFill());
	minorLineFillFormat->setColor(L"Black");
	minorLineFormat->setFillFormat(minorLineFillFormat);
	minorGridLinesFormat->setLineFormat(minorLineFormat);
	horizontalAxis->setMinorGridLinesFormat(minorGridLinesFormat);

	std::shared_ptr<Axis> verticalAxis(new Axis());
	std::shared_ptr<ChartLinesFormat> majorVerticalGridLinesFormat(new ChartLinesFormat());
	std::shared_ptr<LineFormat> majorVerticalLineFormat(new LineFormat());
	std::shared_ptr<GradientFill> gradientFill(new GradientFill());
	std::shared_ptr<GradientFillStop> stop1(new GradientFillStop());
	stop1->setColor(L"White");
	stop1->setPosition(0);
	std::shared_ptr<GradientFillStop> stop2(new GradientFillStop());
	stop2->setColor(L"Black");
	stop2->setPosition(1);
	gradientFill->setStops({ stop1, stop2 });
	majorVerticalLineFormat->setFillFormat(gradientFill);
	majorVerticalGridLinesFormat->setLineFormat(majorVerticalLineFormat);
	verticalAxis->setMajorGridLinesFormat(majorVerticalGridLinesFormat);

	std::shared_ptr<ChartLinesFormat> minorVerticalGridLinesFormat(new ChartLinesFormat());
	std::shared_ptr<LineFormat> minorVerticalLineFormat(new LineFormat());
	std::shared_ptr<FillFormat> minorVerticalLineFillFormat(new NoFill());
	minorVerticalLineFormat->setFillFormat(minorVerticalLineFillFormat);
	minorVerticalGridLinesFormat->setLineFormat(minorVerticalLineFormat);
	verticalAxis->setMinorGridLinesFormat(minorVerticalGridLinesFormat);

	std::shared_ptr<Axes> axes(new Axes());
	axes->setHorizontalAxis(horizontalAxis);
	axes->setVerticalAxis(verticalAxis);
	chart->setAxes(axes);
	shape = api->updateShape(fileName, slideIndex, shapeIndex, chart, password, folderName).get();
	chart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(L"NoFill", chart->getAxes()->getHorizontalAxis()->getMajorGridLinesFormat()->getLineFormat()->getFillFormat()->getType());
	EXPECT_EQ(L"Solid", chart->getAxes()->getHorizontalAxis()->getMinorGridLinesFormat()->getLineFormat()->getFillFormat()->getType());
	EXPECT_EQ(L"Gradient", chart->getAxes()->getVerticalAxis()->getMajorGridLinesFormat()->getLineFormat()->getFillFormat()->getType());
	EXPECT_EQ(L"NoFill", chart->getAxes()->getVerticalAxis()->getMinorGridLinesFormat()->getLineFormat()->getFillFormat()->getType());
}
