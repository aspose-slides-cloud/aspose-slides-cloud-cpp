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

class PortionTest : public ::testing::Test
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

SlidesApi* PortionTest::api = nullptr;
TestUtils* PortionTest::utils = nullptr;

TEST_F(PortionTest, portionsGet) {
	utils->initialize("", "");
	std::shared_ptr<Portions> portions = api->getPortions(L"test.pptx", 6, 2, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(2, portions->getItems().size());
}

TEST_F(PortionTest, portionsGetForSubshape) {
	utils->initialize("", "");
	std::shared_ptr<Portions> portions = api->getPortions(L"test.pptx", 6, 3, 1, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(2, portions->getItems().size());
}

TEST_F(PortionTest, portionGet) {
	utils->initialize("", "");
	std::shared_ptr<Portion> portion = api->getPortion(L"test.pptx", 6, 2, 1, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"Paragraph 1 portion 1 ", portion->getText());
}

TEST_F(PortionTest, portionGetForSubshape) {
	utils->initialize("", "");
	std::shared_ptr<Portion> portion = api->getPortion(L"test.pptx", 6, 3, 1, 1, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(L"Subshape Paragraph 1 portion 1 ", portion->getText());
}

TEST_F(PortionTest, portionCreate) {
	utils->initialize("", "");

	std::shared_ptr<Portion> dto(new Portion());
	dto->setText(L"portion 1");
	dto->setFontBold(L"True");
	dto->setFontHeight(20);
	dto->setLatinFont(L"Arial");
	std::shared_ptr<SolidFill> fillFormat(new SolidFill());
	fillFormat->setColor(L"#FFF5FF8A");
	dto->setFillFormat(fillFormat);
	std::shared_ptr<Portion> portion = api->createPortion(L"test.pptx", 6, 2, 1, dto, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(dto->getText(), portion->getText());
	EXPECT_EQ(dto->getFontBold(), portion->getFontBold());
	EXPECT_EQ(dto->getFontHeight(), portion->getFontHeight());
	EXPECT_EQ(dto->getLatinFont(), portion->getLatinFont());
	EXPECT_EQ(L"Solid", portion->getFillFormat()->getType());
}

TEST_F(PortionTest, portionCreateForSubshape) {
	utils->initialize("", "");

	std::shared_ptr<Portion> dto(new Portion());
	dto->setText(L"portion 1");
	dto->setFontBold(L"True");
	dto->setFontHeight(20);
	dto->setLatinFont(L"Arial");
	std::shared_ptr<SolidFill> fillFormat(new SolidFill());
	fillFormat->setColor(L"#FFF5FF8A");
	dto->setFillFormat(fillFormat);
	std::shared_ptr<Portion> portion = api->createPortion(L"test.pptx", 6, 3, 1, dto, boost::none, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(dto->getText(), portion->getText());
	EXPECT_EQ(dto->getFontBold(), portion->getFontBold());
	EXPECT_EQ(dto->getFontHeight(), portion->getFontHeight());
	EXPECT_EQ(dto->getLatinFont(), portion->getLatinFont());
	EXPECT_EQ(L"Solid", portion->getFillFormat()->getType());
}

TEST_F(PortionTest, portionUpdate) {
	utils->initialize("", "");

	std::shared_ptr<Portion> dto(new Portion());
	dto->setText(L"portion 1");
	dto->setFontBold(L"True");
	dto->setFontHeight(20);
	dto->setLatinFont(L"Arial");
	std::shared_ptr<SolidFill> fillFormat(new SolidFill());
	fillFormat->setColor(L"#FFF5FF8A");
	dto->setFillFormat(fillFormat);
	std::shared_ptr<Portion> portion = api->updatePortion(L"test.pptx", 6, 2, 1, 1, dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(dto->getText(), portion->getText());
	EXPECT_EQ(dto->getFontBold(), portion->getFontBold());
	EXPECT_EQ(dto->getFontHeight(), portion->getFontHeight());
	EXPECT_EQ(dto->getLatinFont(), portion->getLatinFont());
	EXPECT_EQ(L"Solid", portion->getFillFormat()->getType());
}

TEST_F(PortionTest, portionUpdateForSubshape) {
	utils->initialize("", "");

	std::shared_ptr<Portion> dto(new Portion());
	dto->setText(L"portion 1");
	dto->setFontBold(L"True");
	dto->setFontHeight(20);
	dto->setLatinFont(L"Arial");
	std::shared_ptr<SolidFill> fillFormat(new SolidFill());
	fillFormat->setColor(L"#FFF5FF8A");
	dto->setFillFormat(fillFormat);
	std::shared_ptr<Portion> portion = api->updatePortion(L"test.pptx", 6, 3, 1, 1, dto, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(dto->getText(), portion->getText());
	EXPECT_EQ(dto->getFontBold(), portion->getFontBold());
	EXPECT_EQ(dto->getFontHeight(), portion->getFontHeight());
	EXPECT_EQ(dto->getLatinFont(), portion->getLatinFont());
	EXPECT_EQ(L"Solid", portion->getFillFormat()->getType());
}

TEST_F(PortionTest, portionsDelete) {
	utils->initialize("", "");
	std::shared_ptr<Portions> portions = api->deletePortions(L"test.pptx", 6, 2, 1, {}, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(0, portions->getItems().size());
}

TEST_F(PortionTest, portionsDeleteByIndices) {
	utils->initialize("", "");
	std::shared_ptr<Portions> portions = api->deletePortions(L"test.pptx", 6, 2, 1, { 1 }, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, portions->getItems().size());
}

TEST_F(PortionTest, portionsDeleteForSubshape) {
	utils->initialize("", "");
	std::shared_ptr<Portions> portions = api->deletePortions(L"test.pptx", 6, 3, 1, {}, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(0, portions->getItems().size());
}

TEST_F(PortionTest, portionsDeleteByIndicesForSubshape) {
	utils->initialize("", "");
	std::shared_ptr<Portions> portions = api->deletePortions(L"test.pptx", 6, 3, 1, { 1 }, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(1, portions->getItems().size());
}

TEST_F(PortionTest, portionDelete) {
	utils->initialize("", "");
	std::shared_ptr<Portions> portions = api->deletePortion(L"test.pptx", 6, 2, 1, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, portions->getItems().size());
}

TEST_F(PortionTest, portionDeleteForSubshape) {
	utils->initialize("", "");
	std::shared_ptr<Portions> portions = api->deletePortion(L"test.pptx", 6, 3, 1, 1, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(1, portions->getItems().size());
}

TEST_F(PortionTest, portionGetRect) {
	utils->initialize("", "");
	std::shared_ptr<TextBounds> textBounds = api->getPortionRectangle(L"test.pptx", 6, 2, 1, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_GT(textBounds->getX(), 0);
	EXPECT_GT(textBounds->getY(), 0);
	EXPECT_GT(textBounds->getWidth(), 0);
	EXPECT_GT(textBounds->getHeight(), 0);
}

TEST_F(PortionTest, portionGetEffective) {
	utils->initialize("", "");
	std::shared_ptr<Portion> portion = api->getPortionEffective(L"test.pptx", 6, 2, 1, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(18, portion->getFontHeight());
}

TEST_F(PortionTest, portionGetEffectiveForSubshape) {
	utils->initialize("", "");
	std::shared_ptr<Portion> portion = api->getPortionEffective(L"test.pptx", 6, 3, 1, 1, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(18, portion->getFontHeight());
}
