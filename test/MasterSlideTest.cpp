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

class MasterSlideTest : public ::testing::Test
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

SlidesApi* MasterSlideTest::api = nullptr;
TestUtils* MasterSlideTest::utils = nullptr;

TEST_F(MasterSlideTest, masterSlides) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	utility::string_t sourceFile = L"TemplateCV.pptx";
	utility::string_t sourcePath = folderName + L"/" + sourceFile;
	api->copyFile(L"TempTests/" + sourceFile, sourcePath).wait();

	std::shared_ptr<MasterSlides> masterSlides = api->getMasterSlides(fileName, password, folderName).get();
	EXPECT_EQ(1, masterSlides->getSlideList().size());

	std::shared_ptr<MasterSlide> masterSlide = api->getMasterSlide(fileName, 1, password, folderName).get();
	EXPECT_EQ(L"Office Theme", masterSlide->getName());

	masterSlide = api->copyMasterSlide(fileName, sourcePath, 1, L"", L"", boost::none, password, folderName).get();
	EXPECT_EQ(L"Digital portfolio", masterSlide->getName());

	masterSlides = api->getMasterSlides(fileName, password, folderName).get();
	EXPECT_EQ(2, masterSlides->getSlideList().size());
}

TEST_F(MasterSlideTest, masterSlideShapes) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeCount = 6;

	std::shared_ptr<Shapes> shapes = api->getSpecialSlideShapes(fileName, slideIndex, L"masterSlide", password, folderName).get();
	EXPECT_EQ(shapeCount, shapes->getShapesLinks().size());

	std::shared_ptr<Shape> dto(new Shape());
	dto->setShapeType(L"Rectangle");
	dto->setX(100);
	dto->setHeight(100);
	dto->setWidth(500);
	dto->setText(L"New shape");
	std::shared_ptr<ShapeBase> shape = api->createSpecialSlideShape(fileName, slideIndex, L"masterSlide", dto, boost::none, boost::none, password, folderName).get();
	std::shared_ptr<Shape> resultShape = std::static_pointer_cast<Shape>(shape);
	EXPECT_EQ(dto->getText(), resultShape->getText());

	shapes = api->getSpecialSlideShapes(fileName, slideIndex, L"masterSlide", password, folderName).get();
	EXPECT_EQ(shapeCount + 1, shapes->getShapesLinks().size());

	dto->setText(L"Updated shape");
	shape = api->updateSpecialSlideShape(fileName, slideIndex, L"masterSlide", shapeCount + 1, dto, password, folderName).get();
	resultShape = std::static_pointer_cast<Shape>(shape);
	EXPECT_EQ(dto->getText(), resultShape->getText());

	shapes = api->getSpecialSlideShapes(fileName, slideIndex, L"masterSlide", password, folderName).get();
	EXPECT_EQ(shapeCount + 1, shapes->getShapesLinks().size());

	api->deleteSpecialSlideShape(fileName, slideIndex, L"masterSlide", shapeCount + 1, password, folderName).get();
	shapes = api->getSpecialSlideShapes(fileName, slideIndex, L"masterSlide", password, folderName).get();
	EXPECT_EQ(shapeCount, shapes->getShapesLinks().size());
}

TEST_F(MasterSlideTest, masterSlideParagraphs) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeIndex = 2;
	int paragraphCount = 5;

	std::shared_ptr<Paragraphs> paragraphs = api->getSpecialSlideParagraphs(fileName, slideIndex, L"masterSlide", shapeIndex, password, folderName).get();
	EXPECT_EQ(paragraphCount, paragraphs->getParagraphLinks().size());

	std::shared_ptr<Portion> portion(new Portion());
	portion->setText(L"New Paragraph");
	std::shared_ptr<Paragraph> dto(new Paragraph());
	dto->setAlignment(L"Right");
	dto->setPortionList({ portion });
	std::shared_ptr<Paragraph> paragraph = api->createSpecialSlideParagraph(fileName, slideIndex, L"masterSlide", shapeIndex, dto, boost::none, password, folderName).get();
	EXPECT_EQ(dto->getAlignment(), paragraph->getAlignment());

	paragraphs = api->getSpecialSlideParagraphs(fileName, slideIndex, L"masterSlide", shapeIndex, password, folderName).get();
	EXPECT_EQ(paragraphCount + 1, paragraphs->getParagraphLinks().size());

	std::shared_ptr<Paragraph> dto2(new Paragraph());
	dto2->setAlignment(L"Center");
	paragraph = api->updateSpecialSlideParagraph(fileName, slideIndex, L"masterSlide", shapeIndex, paragraphCount + 1, dto2, password, folderName).get();
	EXPECT_EQ(dto2->getAlignment(), paragraph->getAlignment());

	paragraphs = api->getSpecialSlideParagraphs(fileName, slideIndex, L"masterSlide", shapeIndex, password, folderName).get();
	EXPECT_EQ(paragraphCount + 1, paragraphs->getParagraphLinks().size());

	api->deleteSpecialSlideParagraph(fileName, slideIndex, L"masterSlide", shapeIndex, paragraphCount + 1, password, folderName).get();
	paragraphs = api->getSpecialSlideParagraphs(fileName, slideIndex, L"masterSlide", shapeIndex, password, folderName).get();
	EXPECT_EQ(paragraphCount, paragraphs->getParagraphLinks().size());
}

TEST_F(MasterSlideTest, masterSlidePortions) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeIndex = 2;
	int paragraphIndex = 3;
	int portionCount = 1;

	std::shared_ptr<Portions> portions = api->getSpecialSlidePortions(fileName, slideIndex, L"masterSlide", shapeIndex, paragraphIndex, password, folderName).get();
	EXPECT_EQ(portionCount, portions->getItems().size());

	std::shared_ptr<Portion> dto(new Portion());
	dto->setText(L"New Portion");
	dto->setFontBold(L"True");
	std::shared_ptr<Portion> portion = api->createSpecialSlidePortion(fileName, slideIndex, L"masterSlide", shapeIndex, paragraphIndex, dto, boost::none, password, folderName).get();
	EXPECT_EQ(dto->getFontBold(), portion->getFontBold());
	EXPECT_EQ(dto->getText(), portion->getText());

	portions = api->getSpecialSlidePortions(fileName, slideIndex, L"masterSlide", shapeIndex, paragraphIndex, password, folderName).get();
	EXPECT_EQ(portionCount + 1, portions->getItems().size());

	std::shared_ptr<Portion> dto2(new Portion());
	dto2->setText(L"Updated Portion");
	dto2->setFontHeight(22);
	portion = api->updateSpecialSlidePortion(fileName, slideIndex, L"masterSlide", shapeIndex, paragraphIndex, portionCount + 1, dto2, password, folderName).get();
	EXPECT_EQ(dto->getFontBold(), portion->getFontBold());
	EXPECT_EQ(dto2->getFontHeight(), portion->getFontHeight());
	EXPECT_EQ(dto2->getText(), portion->getText());

	portions = api->getSpecialSlidePortions(fileName, slideIndex, L"masterSlide", shapeIndex, paragraphIndex, password, folderName).get();
	EXPECT_EQ(portionCount + 1, portions->getItems().size());

	api->deleteSpecialSlidePortion(fileName, slideIndex, L"masterSlide", shapeIndex, paragraphIndex, portionCount + 1, password, folderName).get();
	portions = api->getSpecialSlidePortions(fileName, slideIndex, L"masterSlide", shapeIndex, paragraphIndex, password, folderName).get();
	EXPECT_EQ(portionCount, portions->getItems().size());
}

TEST_F(MasterSlideTest, masterSlideAnimation) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;

	std::shared_ptr<SlideAnimation> animation = api->getSpecialSlideAnimation(fileName, slideIndex, L"masterSlide", boost::none, boost::none, password, folderName).get();
	EXPECT_EQ(1, animation->getMainSequence().size());

	std::shared_ptr<Effect> effect1(new Effect());
	effect1->setType(L"Blink");
	effect1->setShapeIndex(2);

	std::shared_ptr<Effect> effect2(new Effect());
	effect2->setType(L"Appear");
	effect2->setShapeIndex(3);

	std::shared_ptr<SlideAnimation> dto(new SlideAnimation());
	dto->setMainSequence({ effect1, effect2 });
	animation = api->setSpecialSlideAnimation(fileName, slideIndex, L"masterSlide", dto, password, folderName).get();
	EXPECT_EQ(dto->getMainSequence().size(), animation->getMainSequence().size());

	animation = api->getSpecialSlideAnimation(fileName, slideIndex, L"masterSlide", 3, boost::none, password, folderName).get();
	EXPECT_EQ(1, animation->getMainSequence().size());

	animation = api->deleteSpecialSlideAnimationEffect(fileName, slideIndex, L"masterSlide", 2, password, folderName).get();
	EXPECT_EQ(dto->getMainSequence().size() - 1, animation->getMainSequence().size());

	animation = api->getSpecialSlideAnimation(fileName, slideIndex, L"masterSlide", 3, boost::none, password, folderName).get();
	EXPECT_EQ(0, animation->getMainSequence().size());

	animation = api->deleteSpecialSlideAnimation(fileName, slideIndex, L"masterSlide", password, folderName).get();
	EXPECT_EQ(0, animation->getMainSequence().size());
}

TEST_F(MasterSlideTest, masterSlidesDeleteUnused) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";

	std::shared_ptr<MasterSlides> masterSlides = api->getMasterSlides(fileName, password, folderName).get();
	EXPECT_EQ(1, masterSlides->getSlideList().size());

	masterSlides = api->deleteUnusedMasterSlides(fileName, boost::none, password, folderName).get();
	EXPECT_EQ(1, masterSlides->getSlideList().size());
}

TEST_F(MasterSlideTest, masterSlidesDeleteUnusedOnline) {
	utils->initialize("", "");
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	HttpContent result = api->deleteUnusedMasterSlidesOnline(data, boost::none, L"password").get();
	EXPECT_NE(nullptr, result.getData());
}
