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
#include "model/SolidFill.h"

using namespace asposeslidescloud::api;

class SlidesTest : public ::testing::Test
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

SlidesApi* SlidesTest::api = nullptr;
TestUtils* SlidesTest::utils = nullptr;

TEST_F(SlidesTest, slidesGet) {
	utils->initialize("", "");
	std::shared_ptr<Slides> result = api->getSlides(L"test.pptx", L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(9, result->getSlideList().size());
}

TEST_F(SlidesTest, slideGet) {
	utils->initialize("", "");
	std::shared_ptr<Slide> result = api->getSlide(L"test.pptx", 1, L"password", L"TempSlidesSDK").get();
	EXPECT_NE(nullptr, result->getSelfUri());
}

TEST_F(SlidesTest, slideCreate) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	api->createSlide(fileName, L"layoutSlides/3", 1, password, folderName).get();
	std::shared_ptr<Slides> result = api->getSlides(fileName, password, folderName).get();
	EXPECT_EQ(10, result->getSlideList().size());

	api->createSlide(fileName, L"", boost::none, password, folderName).get();
	result = api->getSlides(fileName, password, folderName).get();
	EXPECT_EQ(11, result->getSlideList().size());
}

TEST_F(SlidesTest, slideCopy) {
	utils->initialize("", "");
	std::shared_ptr<Slides> result = api->copySlide(L"test.pptx", 3, boost::none, L"", L"", L"", L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(10, result->getSlideList().size());
}

TEST_F(SlidesTest, slideCopyFromSource) {
	utils->initialize("", "");
	utility::string_t sourceFileName = L"TemplateCV.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t sourcePath = folderName + L"/" + sourceFileName;
	api->copyFile(L"TempTests/" + sourceFileName, sourcePath).get();
	std::shared_ptr<Slides> result = api->copySlide(L"test.pptx", 1, 1, sourcePath, L"", L"", L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(10, result->getSlideList().size());
}

TEST_F(SlidesTest, slideMove) {
	utils->initialize("", "");
	std::shared_ptr<Slides> result = api->moveSlide(L"test.pptx", 1, 2, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(9, result->getSlideList().size());
}

TEST_F(SlidesTest, slidesReorder) {
	utils->initialize("", "");
	std::shared_ptr<Slides> result = api->reorderSlides(L"test.pptx", { 1, 2, 3, 4, 5, 6 }, { 6, 5, 4, 3, 2, 1 }, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(9, result->getSlideList().size());
}

TEST_F(SlidesTest, slideUpdate) {
	utils->initialize("", "");
	std::shared_ptr<Slide> dto(new Slide());
	utility::string_t layoutSlidePath = L"layoutSlides/3";
	std::shared_ptr<ResourceUri> layoutSlide(new ResourceUri());
	layoutSlide->setHref(layoutSlidePath);
	dto->setLayoutSlide(layoutSlide);
	std::shared_ptr<Slide> result = api->updateSlide(L"test.pptx", 1, dto, L"password", L"TempSlidesSDK").get();
	EXPECT_NE(utility::string_t::npos, result->getLayoutSlide()->getHref().find(layoutSlidePath));
}

TEST_F(SlidesTest, slidesDelete) {
	utils->initialize("", "");
	std::shared_ptr<Slides> result = api->deleteSlides(L"test.pptx", {}, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, result->getSlideList().size());
}

TEST_F(SlidesTest, slidesDeleteByIndices) {
	utils->initialize("", "");
	std::shared_ptr<Slides> result = api->deleteSlides(L"test.pptx", { 1, 3, 5 }, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(6, result->getSlideList().size());
}

TEST_F(SlidesTest, slideDelete) {
	utils->initialize("", "");
	std::shared_ptr<Slides> result = api->deleteSlide(L"test.pptx", 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(8, result->getSlideList().size());
}

TEST_F(SlidesTest, backgroundGet) {
	utils->initialize("", "");
	std::shared_ptr<SlideBackground> result = api->getBackground(L"test.pptx", 5, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"Solid", result->getFillFormat()->getType());
}

TEST_F(SlidesTest, backgroundSet) {
	utils->initialize("", "");
	std::shared_ptr<SlideBackground> dto(new SlideBackground());
	std::shared_ptr<SolidFill> fillFormat(new SolidFill());
	utility::string_t color = L"#FFF5FF8A";
	fillFormat->setColor(color);
	dto->setFillFormat(fillFormat);
	std::shared_ptr<SlideBackground> result = api->setBackground(L"test.pptx", 1, dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(fillFormat->getColor(), std::static_pointer_cast<SolidFill>(result->getFillFormat())->getColor());
}

TEST_F(SlidesTest, backgroundSetColor) {
	utils->initialize("", "");
	utility::string_t color = L"#FFF5FF8A";
	std::shared_ptr<SlideBackground> result = api->setBackgroundColor(L"test.pptx", 1, color, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(color, std::static_pointer_cast<SolidFill>(result->getFillFormat())->getColor());
}

TEST_F(SlidesTest, backgroundDelete) {
	utils->initialize("", "");
	std::shared_ptr<SlideBackground> result = api->deleteBackground(L"test.pptx", 5, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"NoFill", result->getFillFormat()->getType());
}
