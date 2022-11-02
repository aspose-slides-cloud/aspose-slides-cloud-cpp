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

class ParagraphTest : public ::testing::Test
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

SlidesApi* ParagraphTest::api = nullptr;
TestUtils* ParagraphTest::utils = nullptr;

TEST_F(ParagraphTest, paragraphGet) {
	utils->initialize("", "");
	std::shared_ptr<Paragraph> paragraph = api->getParagraph(L"test.pptx", 6, 2, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(2, paragraph->getPortionList().size());
}

TEST_F(ParagraphTest, paragraphsGet) {
	utils->initialize("", "");
	std::shared_ptr<Paragraphs> paragraphs = api->getParagraphs(L"test.pptx", 6, 2, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(2, paragraphs->getParagraphLinks().size());
}

TEST_F(ParagraphTest, paragraphGetForSubshape) {
	utils->initialize("", "");
	std::shared_ptr<Paragraph> paragraph = api->getParagraph(L"test.pptx", 6, 3, 1, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(2, paragraph->getPortionList().size());
}

TEST_F(ParagraphTest, paragraphsGetForSubshape) {
	utils->initialize("", "");
	std::shared_ptr<Paragraphs> paragraphs = api->getParagraphs(L"test.pptx", 6, 3, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(2, paragraphs->getParagraphLinks().size());
}

TEST_F(ParagraphTest, paragraphCreate) {
	utils->initialize("", "");

	std::shared_ptr<Paragraph> dto(new Paragraph());
	dto->setMarginLeft(2);
	dto->setMarginRight(2);
	dto->setAlignment(L"Center");
	std::shared_ptr<Paragraph> paragraph = api->createParagraph(L"test.pptx", 6, 2, dto, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(dto->getMarginLeft(), paragraph->getMarginLeft());
	EXPECT_EQ(dto->getMarginRight(), paragraph->getMarginRight());
	EXPECT_EQ(dto->getAlignment(), paragraph->getAlignment());
}

TEST_F(ParagraphTest, paragraphCreateWithPortions) {
	utils->initialize("", "");

	std::shared_ptr<Portion> portion1(new Portion());
	portion1->setText(L"Portion1");
	std::shared_ptr<Portion> portion2(new Portion());
	portion2->setText(L"Portion2");
	std::shared_ptr<Paragraph> dto(new Paragraph());
	dto->setPortionList({ portion1, portion2 });
	std::shared_ptr<Paragraph> paragraph = api->createParagraph(L"test.pptx", 6, 2, dto, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(2, paragraph->getPortionList().size());
}

TEST_F(ParagraphTest, paragraphCreateForSubshape) {
	utils->initialize("", "");

	std::shared_ptr<Paragraph> dto(new Paragraph());
	dto->setMarginLeft(2);
	dto->setMarginRight(2);
	dto->setAlignment(L"Center");
	std::shared_ptr<Paragraph> paragraph = api->createParagraph(L"test.pptx", 6, 3, dto, boost::none, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(dto->getMarginLeft(), paragraph->getMarginLeft());
	EXPECT_EQ(dto->getMarginRight(), paragraph->getMarginRight());
	EXPECT_EQ(dto->getAlignment(), paragraph->getAlignment());
}

TEST_F(ParagraphTest, paragraphUpdate) {
	utils->initialize("", "");

	std::shared_ptr<Paragraph> dto(new Paragraph());
	dto->setMarginLeft(2);
	dto->setMarginRight(2);
	dto->setAlignment(L"Center");
	std::shared_ptr<Paragraph> paragraph = api->updateParagraph(L"test.pptx", 6, 2, 1, dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(dto->getMarginLeft(), paragraph->getMarginLeft());
	EXPECT_EQ(dto->getMarginRight(), paragraph->getMarginRight());
	EXPECT_EQ(dto->getAlignment(), paragraph->getAlignment());
}

TEST_F(ParagraphTest, paragraphUpdateForSubshape) {
	utils->initialize("", "");

	std::shared_ptr<Paragraph> dto(new Paragraph());
	dto->setMarginLeft(2);
	dto->setMarginRight(2);
	dto->setAlignment(L"Center");
	std::shared_ptr<Paragraph> paragraph = api->updateParagraph(L"test.pptx", 6, 3, 1, dto, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(dto->getMarginLeft(), paragraph->getMarginLeft());
	EXPECT_EQ(dto->getMarginRight(), paragraph->getMarginRight());
	EXPECT_EQ(dto->getAlignment(), paragraph->getAlignment());
}

TEST_F(ParagraphTest, paragraphsDelete) {
	utils->initialize("", "");
	std::shared_ptr<Paragraphs> paragraphs = api->deleteParagraphs(L"test.pptx", 6, 2, {}, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(0, paragraphs->getParagraphLinks().size());
}

TEST_F(ParagraphTest, paragraphsDeleteByIndices) {
	utils->initialize("", "");
	std::shared_ptr<Paragraphs> paragraphs = api->deleteParagraphs(L"test.pptx", 6, 2, { 2 }, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, paragraphs->getParagraphLinks().size());
}

TEST_F(ParagraphTest, paragraphsDeleteForSubshape) {
	utils->initialize("", "");
	std::shared_ptr<Paragraphs> paragraphs = api->deleteParagraphs(L"test.pptx", 6, 3, {}, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(0, paragraphs->getParagraphLinks().size());
}

TEST_F(ParagraphTest, paragraphsDeleteByIndicesForSubshape) {
	utils->initialize("", "");
	std::shared_ptr<Paragraphs> paragraphs = api->deleteParagraphs(L"test.pptx", 6, 3, { 1 }, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(1, paragraphs->getParagraphLinks().size());
}

TEST_F(ParagraphTest, paragraphDelete) {
	utils->initialize("", "");
	std::shared_ptr<Paragraphs> paragraphs = api->deleteParagraph(L"test.pptx", 6, 2, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, paragraphs->getParagraphLinks().size());
}

TEST_F(ParagraphTest, paragraphDeleteForSubshape) {
	utils->initialize("", "");
	std::shared_ptr<Paragraphs> paragraphs = api->deleteParagraph(L"test.pptx", 6, 3, 1, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(1, paragraphs->getParagraphLinks().size());
}

TEST_F(ParagraphTest, paragraphGetRect) {
	utils->initialize("", "");
	std::shared_ptr<TextBounds> textBounds = api->getParagraphRectangle(L"test.pptx", 6, 2, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_GT(textBounds->getX(), 0);
	EXPECT_GT(textBounds->getY(), 0);
	EXPECT_GT(textBounds->getWidth(), 0);
	EXPECT_GT(textBounds->getHeight(), 0);
}

TEST_F(ParagraphTest, paragraphDefaultPortionFormat) {
	utils->initialize("", "");

	std::shared_ptr<Paragraph> dto(new Paragraph());
	std::shared_ptr<PortionFormat> portionFormat(new PortionFormat());
	portionFormat->setFontHeight(20);
	portionFormat->setLatinFont(L"Arial");
	std::shared_ptr<Portion> portion1(new Portion());
	portion1->setText(L"Portion1");
	std::shared_ptr<Portion> portion2(new Portion());
	portion2->setText(L"Portion2");
	dto->setPortionList({ portion1, portion2 });
	dto->setDefaultPortionFormat(portionFormat);
	std::shared_ptr<Paragraph> paragraph = api->createParagraph(L"test.pptx", 6, 2, dto, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(2, paragraph->getPortionList().size());
	EXPECT_EQ(dto->getDefaultPortionFormat()->getLatinFont(), paragraph->getDefaultPortionFormat()->getLatinFont());
	EXPECT_EQ(dto->getDefaultPortionFormat()->getFontHeight(), paragraph->getDefaultPortionFormat()->getFontHeight());
}

TEST_F(ParagraphTest, paragraphGetEffective) {
	utils->initialize("", "");
	std::shared_ptr<Paragraph> paragraph = api->getParagraphEffective(L"test.pptx", 6, 2, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(72, paragraph->getDefaultTabSize());
}

TEST_F(ParagraphTest, paragraphGetEffectiveForSubshape) {
	utils->initialize("", "");
	std::shared_ptr<Paragraph> paragraph = api->getParagraphEffective(L"test.pptx", 6, 3, 1, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(72, paragraph->getDefaultTabSize());
}
