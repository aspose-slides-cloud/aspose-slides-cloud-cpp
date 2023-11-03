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

class NotesSlideTest : public ::testing::Test
{
public:
	static TestUtils* utils;

protected:
	void SetUp()
	{
		if (utils == nullptr)
		{
			utils = new TestUtils();
		}
	}
};

TestUtils* NotesSlideTest::utils = nullptr;

TEST_F(NotesSlideTest, notesSlideGetFromStorage) {
	utils->initialize("", "", "");
	std::shared_ptr<NotesSlide> notesSlide = utils->getSlidesApi()->getNotesSlide(L"test.pptx", 1, L"password", L"TempSlidesSDK").get();
	EXPECT_GT(notesSlide->getText().size(), 0);
}

TEST_F(NotesSlideTest, notesSlideExistsFromStorage) {
	utils->initialize("", "", "");
	std::shared_ptr<EntityExists> result = utils->getSlidesApi()->notesSlideExists(L"test.pptx", 1, L"password", L"TempSlidesSDK").get();
	EXPECT_TRUE(result->isExists());
}

TEST_F(NotesSlideTest, notesSlideDownloadFromStorage) {
	utils->initialize("", "", "");
	HttpContent result = utils->getSlidesApi()->downloadNotesSlide(L"test.pptx", 1, L"png", boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(NotesSlideTest, notesSlideGetFromRequest) {
	utils->initialize("", "", "");
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	std::shared_ptr<NotesSlide> notesSlide = utils->getSlidesApi()->getNotesSlideOnline(data, 1, L"password").get();
	EXPECT_GT(notesSlide->getText().size(), 0);
}

TEST_F(NotesSlideTest, notesSlideExistsFromRequest) {
	utils->initialize("", "", "");
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	std::shared_ptr<EntityExists> result = utils->getSlidesApi()->notesSlideExistsOnline(data, 1, L"password").get();
	EXPECT_TRUE(result->isExists());
}

TEST_F(NotesSlideTest, notesSlideDownloadFromRequest) {
	utils->initialize("", "", "");
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	HttpContent result = utils->getSlidesApi()->downloadNotesSlideOnline(data, 1, L"png", boost::none, boost::none, L"password").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(NotesSlideTest, notesSlideShapes) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeCount = 3;

	std::shared_ptr<Shapes> shapes = utils->getSlidesApi()->getSpecialSlideShapes(fileName, slideIndex, L"notesSlide", password, folderName).get();
	EXPECT_EQ(shapeCount, shapes->getShapesLinks().size());

	std::shared_ptr<Shape> dto(new Shape());
	dto->setShapeType(L"Rectangle");
	dto->setX(100);
	dto->setHeight(100);
	dto->setWidth(500);
	dto->setText(L"New shape");
	std::shared_ptr<ShapeBase> shape = utils->getSlidesApi()->createSpecialSlideShape(fileName, slideIndex, L"notesSlide", dto, boost::none, boost::none, password, folderName).get();
	std::shared_ptr<Shape> resultShape = std::static_pointer_cast<Shape>(shape);
	EXPECT_EQ(dto->getText(), resultShape->getText());

	shapes = utils->getSlidesApi()->getSpecialSlideShapes(fileName, slideIndex, L"notesSlide", password, folderName).get();
	EXPECT_EQ(shapeCount + 1, shapes->getShapesLinks().size());

	dto->setText(L"Updated shape");
	shape = utils->getSlidesApi()->updateSpecialSlideShape(fileName, slideIndex, L"notesSlide", shapeCount + 1, dto, password, folderName).get();
	resultShape = std::static_pointer_cast<Shape>(shape);
	EXPECT_EQ(dto->getText(), resultShape->getText());

	shapes = utils->getSlidesApi()->getSpecialSlideShapes(fileName, slideIndex, L"notesSlide", password, folderName).get();
	EXPECT_EQ(shapeCount + 1, shapes->getShapesLinks().size());

	utils->getSlidesApi()->deleteSpecialSlideShape(fileName, slideIndex, L"notesSlide", shapeCount + 1, password, folderName).get();
	shapes = utils->getSlidesApi()->getSpecialSlideShapes(fileName, slideIndex, L"notesSlide", password, folderName).get();
	EXPECT_EQ(shapeCount, shapes->getShapesLinks().size());
}

TEST_F(NotesSlideTest, notesSlideParagraphs) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeIndex = 2;
	int paragraphCount = 1;

	std::shared_ptr<Paragraphs> paragraphs = utils->getSlidesApi()->getSpecialSlideParagraphs(fileName, slideIndex, L"notesSlide", shapeIndex, password, folderName).get();
	EXPECT_EQ(paragraphCount, paragraphs->getParagraphLinks().size());

	std::shared_ptr<Portion> portion(new Portion());
	portion->setText(L"New Paragraph");
	std::shared_ptr<Paragraph> dto(new Paragraph());
	dto->setAlignment(L"Right");
	dto->setPortionList({ portion });
	std::shared_ptr<Paragraph> paragraph = utils->getSlidesApi()->createSpecialSlideParagraph(fileName, slideIndex, L"notesSlide", shapeIndex, dto, boost::none, password, folderName).get();
	EXPECT_EQ(dto->getAlignment(), paragraph->getAlignment());

	paragraphs = utils->getSlidesApi()->getSpecialSlideParagraphs(fileName, slideIndex, L"notesSlide", shapeIndex, password, folderName).get();
	EXPECT_EQ(paragraphCount + 1, paragraphs->getParagraphLinks().size());

	std::shared_ptr<Paragraph> dto2(new Paragraph());
	dto2->setAlignment(L"Center");
	paragraph = utils->getSlidesApi()->updateSpecialSlideParagraph(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphCount + 1, dto2, password, folderName).get();
	EXPECT_EQ(dto2->getAlignment(), paragraph->getAlignment());

	paragraphs = utils->getSlidesApi()->getSpecialSlideParagraphs(fileName, slideIndex, L"notesSlide", shapeIndex, password, folderName).get();
	EXPECT_EQ(paragraphCount + 1, paragraphs->getParagraphLinks().size());

	utils->getSlidesApi()->deleteSpecialSlideParagraph(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphCount + 1, password, folderName).get();
	paragraphs = utils->getSlidesApi()->getSpecialSlideParagraphs(fileName, slideIndex, L"notesSlide", shapeIndex, password, folderName).get();
	EXPECT_EQ(paragraphCount, paragraphs->getParagraphLinks().size());
}

TEST_F(NotesSlideTest, notesSlidePortions) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeIndex = 2;
	int paragraphIndex = 1;
	int portionCount = 1;

	std::shared_ptr<Portions> portions = utils->getSlidesApi()->getSpecialSlidePortions(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, password, folderName).get();
	EXPECT_EQ(portionCount, portions->getItems().size());

	std::shared_ptr<Portion> dto(new Portion());
	dto->setText(L"New Portion");
	dto->setFontBold(L"True");
	std::shared_ptr<Portion> portion = utils->getSlidesApi()->createSpecialSlidePortion(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, dto, boost::none, password, folderName).get();
	EXPECT_EQ(dto->getFontBold(), portion->getFontBold());
	EXPECT_EQ(dto->getText(), portion->getText());

	portions = utils->getSlidesApi()->getSpecialSlidePortions(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, password, folderName).get();
	EXPECT_EQ(portionCount + 1, portions->getItems().size());

	std::shared_ptr<Portion> dto2(new Portion());
	dto2->setText(L"Updated Portion");
	dto2->setFontHeight(22);
	portion = utils->getSlidesApi()->updateSpecialSlidePortion(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, portionCount + 1, dto2, password, folderName).get();
	EXPECT_EQ(dto->getFontBold(), portion->getFontBold());
	EXPECT_EQ(dto2->getFontHeight(), portion->getFontHeight());
	EXPECT_EQ(dto2->getText(), portion->getText());

	portions = utils->getSlidesApi()->getSpecialSlidePortions(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, password, folderName).get();
	EXPECT_EQ(portionCount + 1, portions->getItems().size());

	utils->getSlidesApi()->deleteSpecialSlidePortion(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, portionCount + 1, password, folderName).get();
	portions = utils->getSlidesApi()->getSpecialSlidePortions(fileName, slideIndex, L"notesSlide", shapeIndex, paragraphIndex, password, folderName).get();
	EXPECT_EQ(portionCount, portions->getItems().size());
}

TEST_F(NotesSlideTest, notesSlideCreate) {
	utils->initialize("", "", "");
	std::shared_ptr<NotesSlide> dto(new NotesSlide());
	dto->setText(L"Note text");
	std::shared_ptr<NotesSlide> notesSlide = utils->getSlidesApi()->createNotesSlide(L"test.pptx", 1, dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(dto->getText().size(), notesSlide->getText().size());
}

TEST_F(NotesSlideTest, notesSlideUpdate) {
	utils->initialize("", "", "");
	std::shared_ptr<NotesSlide> dto(new NotesSlide());
	dto->setText(L"Updated note text");
	std::shared_ptr<NotesSlide> notesSlide = utils->getSlidesApi()->updateNotesSlide(L"test.pptx", 1, dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(dto->getText().size(), notesSlide->getText().size());
}

TEST_F(NotesSlideTest, notesSlideDelete) {
	utils->initialize("", "", "");
	std::shared_ptr<Slide> slide = utils->getSlidesApi()->deleteNotesSlide(L"test.pptx", 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(nullptr, slide->getNotesSlide());
}
