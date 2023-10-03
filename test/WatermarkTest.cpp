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

using namespace asposeslidescloud::api;

class WatermarkTest : public ::testing::Test
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

SlidesApi* WatermarkTest::api = nullptr;
TestUtils* WatermarkTest::utils = nullptr;

TEST_F(WatermarkTest, watermarkTextStorage) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	utility::string_t watermarkText = L"watermarkText";

	std::shared_ptr<Shapes> shapes = api->getShapes(fileName, slideIndex, password, folderName).get();
	size_t shapeCount = shapes->getShapesLinks().size() + 1;

	api->createWatermark(fileName, nullptr, boost::none, watermarkText, L"", L"", password, folderName).get();
	shapes = api->getShapes(fileName, slideIndex, password, folderName).get();
	EXPECT_EQ(shapeCount, shapes->getShapesLinks().size());

	std::shared_ptr<ShapeBase> shapeResult = api->getShape(fileName, slideIndex, shapeCount, password, folderName).get();
	std::shared_ptr<Shape> shape = std::static_pointer_cast<Shape>(shapeResult);
	EXPECT_EQ(L"watermark", shape->getName());
	EXPECT_EQ(watermarkText, shape->getText());

	api->deleteWatermark(fileName, L"", password, folderName).get();
	shapes = api->getShapes(fileName, slideIndex, password, folderName).get();
	EXPECT_EQ(shapeCount - 1, shapes->getShapesLinks().size());
}

TEST_F(WatermarkTest, watermarkDtoStorage) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	utility::string_t watermarkText = L"watermarkText";

	std::shared_ptr<Shapes> shapes = api->getShapes(fileName, slideIndex, password, folderName).get();
	size_t shapeCount = shapes->getShapesLinks().size() + 1;

	std::shared_ptr<Shape> dto(new Shape());
	dto->setText(watermarkText);
	api->createWatermark(fileName, dto, boost::none, L"", L"", L"", password, folderName).get();
	shapes = api->getShapes(fileName, slideIndex, password, folderName).get();
	EXPECT_EQ(shapeCount, shapes->getShapesLinks().size());

	std::shared_ptr<ShapeBase> shapeResult = api->getShape(fileName, slideIndex, shapeCount, password, folderName).get();
	std::shared_ptr<Shape> shape = std::static_pointer_cast<Shape>(shapeResult);
	EXPECT_EQ(L"watermark", shape->getName());
	EXPECT_EQ(watermarkText, shape->getText());

	api->deleteWatermark(fileName, L"", password, folderName).get();
	shapes = api->getShapes(fileName, slideIndex, password, folderName).get();
	EXPECT_EQ(shapeCount - 1, shapes->getShapesLinks().size());
}

TEST_F(WatermarkTest, watermarkImageStorage) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;

	std::shared_ptr<Shapes> shapes = api->getShapes(fileName, slideIndex, password, folderName).get();
	size_t shapeCount = shapes->getShapesLinks().size() + 1;

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/watermark.png", std::ios::binary));
	api->createImageWatermark(fileName, data, nullptr, password, folderName).get();
	shapes = api->getShapes(fileName, slideIndex, password, folderName).get();
	EXPECT_EQ(shapeCount, shapes->getShapesLinks().size());

	std::shared_ptr<ShapeBase> shapeResult = api->getShape(fileName, slideIndex, shapeCount, password, folderName).get();
	std::shared_ptr<Shape> shape = std::static_pointer_cast<Shape>(shapeResult);
	EXPECT_EQ(L"watermark", shape->getName());

	api->deleteWatermark(fileName, L"", password, folderName).get();
	shapes = api->getShapes(fileName, slideIndex, password, folderName).get();
	EXPECT_EQ(shapeCount - 1, shapes->getShapesLinks().size());
}

TEST_F(WatermarkTest, watermarkImageDtoStorage) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	utility::string_t watermarkName = L"myWatermark";

	std::shared_ptr<Shapes> shapes = api->getShapes(fileName, slideIndex, password, folderName).get();
	size_t shapeCount = shapes->getShapesLinks().size() + 1;

	std::shared_ptr<PictureFrame> dto(new PictureFrame());
	dto->setName(watermarkName);
	std::shared_ptr<PictureFill> fill(new PictureFill());
	fill->setBase64Data(utils->getFileDataAsBase64(L"TestData/watermark.png"));
	dto->setFillFormat(fill);
	api->createImageWatermark(fileName, nullptr, dto, password, folderName).get();
	shapes = api->getShapes(fileName, slideIndex, password, folderName).get();
	EXPECT_EQ(shapeCount, shapes->getShapesLinks().size());

	std::shared_ptr<ShapeBase> shapeResult = api->getShape(fileName, slideIndex, shapeCount, password, folderName).get();
	std::shared_ptr<Shape> shape = std::static_pointer_cast<Shape>(shapeResult);
	EXPECT_EQ(watermarkName, shape->getName());

	api->deleteWatermark(fileName, watermarkName, password, folderName).get();
	shapes = api->getShapes(fileName, slideIndex, password, folderName).get();
	EXPECT_EQ(shapeCount - 1, shapes->getShapesLinks().size());
}

TEST_F(WatermarkTest, watermarkTextRequest) {
	utils->initialize("", "", "");
	utility::string_t password = L"password";
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	int dataSize = 0;
	do {
		dataSize++;
	} while (data->getData()->get() != EOF);
	data->getData()->clear();
	data->getData()->seekg(0);

	HttpContent postResult = api->createWatermarkOnline(data, nullptr, boost::none, L"watermarkText", L"", L"", password).get();
	int postSize = 0;
	do {
		postSize++;
	} while (postResult.getData()->get() != EOF);
	EXPECT_NE(dataSize, postSize);

	HttpContent deleteResult = api->deleteWatermarkOnline(data, L"", password).get();
	int deleteSize = 0;
	do {
		deleteSize++;
	} while (deleteResult.getData()->get() != EOF);
	EXPECT_NE(postSize, deleteSize);
}

TEST_F(WatermarkTest, watermarkTextDtoRequest) {
	utils->initialize("", "", "");
	utility::string_t password = L"password";
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	int dataSize = 0;
	do {
		dataSize++;
	} while (data->getData()->get() != EOF);
	data->getData()->clear();
	data->getData()->seekg(0);

	std::shared_ptr<Shape> dto(new Shape());
	dto->setText(L"watermarkText");
	HttpContent postResult = api->createWatermarkOnline(data, dto, boost::none, L"", L"", L"", password).get();
	int postSize = 0;
	do {
		postSize++;
	} while (postResult.getData()->get() != EOF);
	EXPECT_NE(dataSize, postSize);

	HttpContent deleteResult = api->deleteWatermarkOnline(data, L"", password).get();
	int deleteSize = 0;
	do {
		deleteSize++;
	} while (deleteResult.getData()->get() != EOF);
	EXPECT_NE(postSize, deleteSize);
}

TEST_F(WatermarkTest, watermarkImageRequest) {
	utils->initialize("", "", "");
	utility::string_t password = L"password";
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	int dataSize = 0;
	do {
		dataSize++;
	} while (data->getData()->get() != EOF);
	data->getData()->clear();
	data->getData()->seekg(0);

	std::shared_ptr<HttpContent> watermarkData = std::make_shared<HttpContent>();
	watermarkData->setData(std::make_shared<std::ifstream>(L"TestData/watermark.png", std::ios::binary));
	HttpContent postResult = api->createImageWatermarkOnline(data, watermarkData, nullptr, password).get();
	int postSize = 0;
	do {
		postSize++;
	} while (postResult.getData()->get() != EOF);
	EXPECT_NE(dataSize, postSize);

	HttpContent deleteResult = api->deleteWatermarkOnline(data, L"", password).get();
	int deleteSize = 0;
	do {
		deleteSize++;
	} while (deleteResult.getData()->get() != EOF);
	EXPECT_NE(postSize, deleteSize);
}

TEST_F(WatermarkTest, watermarkImageDtoRequest) {
	utils->initialize("", "", "");
	utility::string_t password = L"password";
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	int dataSize = 0;
	do {
		dataSize++;
	} while (data->getData()->get() != EOF);
	data->getData()->clear();
	data->getData()->seekg(0);

	std::shared_ptr<PictureFrame> dto(new PictureFrame());
	std::shared_ptr<PictureFill> fill(new PictureFill());
	fill->setBase64Data(utils->getFileDataAsBase64(L"TestData/watermark.png"));
	dto->setFillFormat(fill);
	HttpContent postResult = api->createImageWatermarkOnline(data, nullptr, dto, password).get();
	int postSize = 0;
	do {
		postSize++;
	} while (postResult.getData()->get() != EOF);
	EXPECT_NE(dataSize, postSize);

	HttpContent deleteResult = api->deleteWatermarkOnline(data, L"", password).get();
	int deleteSize = 0;
	do {
		deleteSize++;
	} while (deleteResult.getData()->get() != EOF);
	EXPECT_NE(postSize, deleteSize);
}
