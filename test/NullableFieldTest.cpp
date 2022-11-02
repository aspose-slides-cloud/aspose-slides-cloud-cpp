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

using namespace asposeslidescloud::api;

class NullableFieldTest : public ::testing::Test
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

SlidesApi* NullableFieldTest::api = nullptr;
TestUtils* NullableFieldTest::utils = nullptr;

TEST_F(NullableFieldTest, nullableProperties) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeIndex = 5;
	double min1 = 44.3;
	double min2 = 12.0;
	double max1 = 104.3;
	double max2 = 87.0;

	std::shared_ptr<Chart> dto(new Chart());
	dto->setChartType(L"Line");
	dto->setWidth(400);
	dto->setHeight(300);
	std::shared_ptr<ChartTitle> title(new ChartTitle());
	title->setHasTitle(true);
	title->setText(L"MyTitle");
	dto->setTitle(title);
	std::shared_ptr<OneValueSeries> series(new OneValueSeries());
	series->setType(L"ClusteredColumn");
	series->setDataPointType(L"OneValue");
	series->setName(L"Series1");
	std::shared_ptr<OneValueChartDataPoint> point1(new OneValueChartDataPoint());
	point1->setValue(40);
	std::shared_ptr<OneValueChartDataPoint> point2(new OneValueChartDataPoint());
	point2->setValue(50);
	series->setDataPoints({ point1, point2 });
	dto->setSeries({ series });
	std::shared_ptr<Axes> axes(new Axes());
	std::shared_ptr<Axis> axis(new Axis());
	axis->setIsAutomaticMinValue(false);
	axis->setMinValue(min1);
	axis->setIsAutomaticMaxValue(false);
	axis->setMaxValue(max1);
	axes->setHorizontalAxis(axis);
	dto->setAxes(axes);
	api->createShape(fileName, slideIndex, dto, boost::none, boost::none, password, folderName).wait();
	std::shared_ptr<ShapeBase> shape = api->getShape(fileName, slideIndex, shapeIndex, password, folderName).get();
	std::shared_ptr<Chart> chart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(min1, chart->getAxes()->getHorizontalAxis()->getMinValue());
	EXPECT_EQ(max1, chart->getAxes()->getHorizontalAxis()->getMaxValue());

	std::shared_ptr<Chart> dto2(new Chart());
	std::shared_ptr<Axes> axes2(new Axes());
	std::shared_ptr<Axis> axis2(new Axis());
	axis2->setMinValue(min2);
	axes2->setHorizontalAxis(axis2);
	dto2->setAxes(axes2);
	api->updateShape(fileName, slideIndex, shapeIndex, dto2, password, folderName).wait();
	shape = api->getShape(fileName, slideIndex, shapeIndex, password, folderName).get();
	chart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(min2, chart->getAxes()->getHorizontalAxis()->getMinValue());
	EXPECT_EQ(max1, chart->getAxes()->getHorizontalAxis()->getMaxValue());

	std::shared_ptr<Chart> dto3(new Chart());
	std::shared_ptr<Axes> axes3(new Axes());
	std::shared_ptr<Axis> axis3(new Axis());
	axis3->setMaxValue(max2);
	axes3->setHorizontalAxis(axis3);
	dto3->setAxes(axes3);
	api->updateShape(fileName, slideIndex, shapeIndex, dto3, password, folderName).wait();
	shape = api->getShape(fileName, slideIndex, shapeIndex, password, folderName).get();
	chart = std::static_pointer_cast<Chart>(shape);
	EXPECT_EQ(min2, chart->getAxes()->getHorizontalAxis()->getMinValue());
	EXPECT_EQ(max2, chart->getAxes()->getHorizontalAxis()->getMaxValue());
}
