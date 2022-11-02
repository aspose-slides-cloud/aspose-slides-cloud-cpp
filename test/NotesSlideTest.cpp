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

class NotesSlideTest : public ::testing::Test
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

SlidesApi* NotesSlideTest::api = nullptr;
TestUtils* NotesSlideTest::utils = nullptr;

TEST_F(NotesSlideTest, notesSlideGetFromStorage) {
	utils->initialize("", "");
	std::shared_ptr<NotesSlide> notesSlide = api->getNotesSlide(L"test.pptx", 1, L"password", L"TempSlidesSDK").get();
	EXPECT_GT(notesSlide->getText().size(), 0);
}

TEST_F(NotesSlideTest, notesSlideExistsFromStorage) {
	utils->initialize("", "");
	std::shared_ptr<EntityExists> result = api->notesSlideExists(L"test.pptx", 1, L"password", L"TempSlidesSDK").get();
	EXPECT_TRUE(result->getExists());
}

TEST_F(NotesSlideTest, notesSlideDownloadFromStorage) {
	utils->initialize("", "");
	HttpContent result = api->downloadNotesSlide(L"test.pptx", 1, L"png", boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(NotesSlideTest, notesSlideGetFromRequest) {
	utils->initialize("", "");
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	std::shared_ptr<NotesSlide> notesSlide = api->getNotesSlideOnline(data, 1, L"password").get();
	EXPECT_GT(notesSlide->getText().size(), 0);
}

TEST_F(NotesSlideTest, notesSlideExistsFromRequest) {
	utils->initialize("", "");
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	std::shared_ptr<EntityExists> result = api->notesSlideExistsOnline(data, 1, L"password").get();
	EXPECT_TRUE(result->getExists());
}

TEST_F(NotesSlideTest, notesSlideDownloadFromRequest) {
	utils->initialize("", "");
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	HttpContent result = api->downloadNotesSlideOnline(data, 1, L"png", boost::none, boost::none, L"password").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(NotesSlideTest, notesSlideShapes) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeCount = 3;

	std::shared_ptr<Shapes> shapes = api->getSpecialSlideShapes(fileName, slideIndex, L"notesSlide", password, folderName).get();
	EXPECT_EQ(shapeCount, shapes->getShapesLinks().size());

	std::shared_ptr<Shape> dto(new Shape());
	dto->setShapeType(L"Rectangle");
	dto->setX(100);
	dto->setHeight(100);
	dto->setWidth(500);
	dto->setText(L"New shape");
	std::shared_ptr<ShapeBase> shape = api->createSpecialSlideShape(fileName, slideIndex, L"notesSlide", dto, boost::none, boost::none, password, folderName).get();
	std::shared_ptr<Shape> resultShape = std::static_pointer_cast<Shape>(shape);
	EXPECT_EQ(dto->getText(), resultShape->getText());

	shapes = api->getSpecialSlideShapes(fileName, slideIndex, L"notesSlide", password, folderName).get();
	EXPECT_EQ(shapeCount + 1, shapes->getShapesLinks().size());

	dto->setText(L"Updated shape");
	shape = api->updateSpecialSlideShape(fileName, slideIndex, L"notesSlide", shapeCount + 1, dto, password, folderName).get();
	resultShape = std::static_pointer_cast<Shape>(shape);
	EXPECT_EQ(dto->getText(), resultShape->getText());

	shapes = api->getSpecialSlideShapes(fileName, slideIndex, L"notesSlide", password, folderName).get();
	EXPECT_EQ(shapeCount + 1, shapes->getShapesLinks().size());

	api->deleteSpecialSlideShape(fileName, slideIndex, L"notesSlide", shapeCount + 1, password, folderName).get();
	shapes = api->getSpecialSlideShapes(fileName, slideIndex, L"notesSlide", password, folderName).get();
	EXPECT_EQ(shapeCount, shapes->getShapesLinks().size());
}

TEST_F(NotesSlideTest, notesSlideParagraphs) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeIndex = 2;
	int paragraphCount = 1;

	std::shared_ptr<Paragraphs> paragraphs = api->getSpecialSlideParagraphs(fileName, slideIndex, L"notesSlide", shapeIndex, password, folderName).get();
	EXPECT_EQ(paragraphCount, paragraphs->getParagraphLinks().size());

	std::shared_ptr<Portion> portion(new Portion());
	portion->setText(L"New Paragraph");
	std::shared_ptr<Paragraph> dto(new Paragraph());
	dto->setAlignment(L"Right");
	dto->setPortionList({ portion });
	std::shared_ptr<Paragraph> paragraph = api->createSpecialSlideParagraph(fileName, slideIndex, L"notesSlide", shapeIndex, dto, boost::none, password, folderName).get();
	EXPECT_EQ(dto->getAlignment(), paragraph->getAlignment());

	paragraphs = api->getSpecialSlideParagraphs(fileName, slideIndex, L"notesSlide", shapeIndex, password, folderName).get();
	EXPECT_EQ(paragraphCount + 1, paragraphs->getParagraphLinks().size());

	std::shared_ptr<Paragraph> dto2(new Paragraph());
	dto2->setAlignment(L"Center");
	paragraph = api->updateSpecialSlideParagraph(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphCount + 1, dto2, password, folderName).get();
	EXPECT_EQ(dto2->getAlignment(), paragraph->getAlignment());

	paragraphs = api->getSpecialSlideParagraphs(fileName, slideIndex, L"notesSlide", shapeIndex, password, folderName).get();
	EXPECT_EQ(paragraphCount + 1, paragraphs->getParagraphLinks().size());

	api->deleteSpecialSlideParagraph(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphCount + 1, password, folderName).get();
	paragraphs = api->getSpecialSlideParagraphs(fileName, slideIndex, L"notesSlide", shapeIndex, password, folderName).get();
	EXPECT_EQ(paragraphCount, paragraphs->getParagraphLinks().size());
}

TEST_F(NotesSlideTest, notesSlidePortions) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeIndex = 2;
	int paragraphIndex = 1;
	int portionCount = 1;

	std::shared_ptr<Portions> portions = api->getSpecialSlidePortions(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, password, folderName).get();
	EXPECT_EQ(portionCount, portions->getItems().size());

	std::shared_ptr<Portion> dto(new Portion());
	dto->setText(L"New Portion");
	dto->setFontBold(L"True");
	std::shared_ptr<Portion> portion = api->createSpecialSlidePortion(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, dto, boost::none, password, folderName).get();
	EXPECT_EQ(dto->getFontBold(), portion->getFontBold());
	EXPECT_EQ(dto->getText(), portion->getText());

	portions = api->getSpecialSlidePortions(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, password, folderName).get();
	EXPECT_EQ(portionCount + 1, portions->getItems().size());

	std::shared_ptr<Portion> dto2(new Portion());
	dto2->setText(L"Updated Portion");
	dto2->setFontHeight(22);
	portion = api->updateSpecialSlidePortion(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, portionCount + 1, dto2, password, folderName).get();
	EXPECT_EQ(dto->getFontBold(), portion->getFontBold());
	EXPECT_EQ(dto2->getFontHeight(), portion->getFontHeight());
	EXPECT_EQ(dto2->getText(), portion->getText());

	portions = api->getSpecialSlidePortions(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, password, folderName).get();
	EXPECT_EQ(portionCount + 1, portions->getItems().size());

	api->deleteSpecialSlidePortion(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, portionCount + 1, password, folderName).get();
	portions = api->getSpecialSlidePortions(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, password, folderName).get();
	EXPECT_EQ(portionCount, portions->getItems().size());
}

TEST_F(NotesSlideTest, notesSlideCreate) {
	utils->initialize("", "");
	std::shared_ptr<NotesSlide> dto(new NotesSlide());
	dto->setText(L"Note text");
	std::shared_ptr<NotesSlide> notesSlide = api->createNotesSlide(L"test.pptx", 1, dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(dto->getText().size(), notesSlide->getText().size());
}

TEST_F(NotesSlideTest, notesSlideUpdate) {
	utils->initialize("", "");
	std::shared_ptr<NotesSlide> dto(new NotesSlide());
	dto->setText(L"Updated note text");
	std::shared_ptr<NotesSlide> notesSlide = api->updateNotesSlide(L"test.pptx", 1, dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(dto->getText().size(), notesSlide->getText().size());
}

TEST_F(NotesSlideTest, notesSlideDelete) {
	utils->initialize("", "");
	std::shared_ptr<Slide> slide = api->deleteNotesSlide(L"test.pptx", 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(nullptr, slide->getNotesSlide());
}
