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

class HyperlinkTest : public ::testing::Test
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

SlidesApi* HyperlinkTest::api = nullptr;
TestUtils* HyperlinkTest::utils = nullptr;

TEST_F(HyperlinkTest, hyperlinkGetShape) {
	utils->initialize("", "");
	std::shared_ptr<ShapeBase> shape = api->getShape(L"test.pptx", 2, 2, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"Hyperlink", shape->getHyperlinkClick()->getActionType());
	EXPECT_EQ(nullptr, shape->getHyperlinkMouseOver());
}

TEST_F(HyperlinkTest, hyperlinkGetPortion) {
	utils->initialize("", "");
	std::shared_ptr<Portion> shape = api->getPortion(L"test.pptx", 2, 1, 1, 2, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(nullptr, shape->getHyperlinkClick());
	EXPECT_EQ(L"JumpLastSlide", shape->getHyperlinkMouseOver()->getActionType());
}

TEST_F(HyperlinkTest, hyperlinkCreateShape) {
	utils->initialize("", "");
	std::shared_ptr<ShapeBase> shape(new Shape());
	std::shared_ptr<Hyperlink> hyperlink(new Hyperlink());
	hyperlink->setActionType(L"Hyperlink");
	hyperlink->setExternalUrl(L"https://docs.aspose.cloud/slides");
	shape->setHyperlinkClick(hyperlink);
	std::shared_ptr<ShapeBase> updatedShape = api->updateShape(L"test.pptx", 2, 2, shape, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(shape->getHyperlinkClick()->getExternalUrl(), updatedShape->getHyperlinkClick()->getExternalUrl());
}

TEST_F(HyperlinkTest, hyperlinkCreatePortion) {
	utils->initialize("", "");
	std::shared_ptr<Portion> dto(new Portion());
	std::shared_ptr<Hyperlink> hyperlink(new Hyperlink());
	hyperlink->setActionType(L"JumpLastSlide");
	hyperlink->setExternalUrl(L"https://docs.aspose.cloud/slides");
	dto->setHyperlinkMouseOver(hyperlink);
	std::shared_ptr<Portion> updatedPortion = api->createPortion(L"test.pptx", 1, 1, 1, dto, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(dto->getHyperlinkMouseOver()->getActionType(), updatedPortion->getHyperlinkMouseOver()->getActionType());
}

TEST_F(HyperlinkTest, hyperlinkDelete) {
	utils->initialize("", "");
	std::shared_ptr<ShapeBase> shape(new PictureFrame());
	std::shared_ptr<Hyperlink> hyperlink(new Hyperlink());
	hyperlink->setIsDisabled(true);
	shape->setHyperlinkClick(hyperlink);
	std::shared_ptr<ShapeBase> updatedShape = api->updateShape(L"test.pptx", 2, 2, shape, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(nullptr, updatedShape->getHyperlinkClick());
}
