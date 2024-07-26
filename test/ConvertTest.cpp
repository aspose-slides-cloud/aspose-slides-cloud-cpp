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
#include "model/PdfExportOptions.h"
#include "model/Html5ExportOptions.h"
#include "model/ImageExportOptions.h"
#include "model/HandoutLayoutingOptions.h"

class ConvertTest : public ::testing::Test
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

TestUtils* ConvertTest::utils = nullptr;

TEST_F(ConvertTest, convertPostFromRequest) {
	utils->initialize("", "", "");
	utility::string_t password = L"password";

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	HttpContent result = utils->getSlidesApi()->convert(data, L"pdf", password).get();
	int resultSize = 0;
	do {
		resultSize++;
	} while (result.getData()->get() != EOF);
	HttpContent resultSlides = utils->getSlidesApi()->convert(data, L"pdf", password, L"", L"", { 2, 4 }).get();
	int resultSlidesSize = 0;
	do {
		resultSlidesSize++;
	} while (resultSlides.getData()->get() != EOF);
	EXPECT_GT(resultSize, resultSlidesSize);
}

TEST_F(ConvertTest, convertPutFromRequest) {
	utils->initialize("", "", "");
	utility::string_t outPath = L"TempSlidesSDK/test.pptx";
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	utils->getSlidesApi()->convertAndSave(data, L"pdf", outPath, L"password").wait();
	std::shared_ptr<ObjectExist> exists = utils->getSlidesApi()->objectExists(outPath).get();
	EXPECT_TRUE(exists->isExists());
}

TEST_F(ConvertTest, convertPostFromStorage) {
	utils->initialize("", "", "");
	HttpContent result = utils->getSlidesApi()->downloadPresentation(L"test.pptx", L"html5", nullptr, L"password", L"TempSlidesSDK").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(ConvertTest, convertPutFromStorage) {
	utils->initialize("", "", "");
	utility::string_t outPath = L"TempSlidesSDK/test.pptx";
	utils->getSlidesApi()->savePresentation(L"test.pptx", L"pdf", outPath, nullptr, L"password", L"TempSlidesSDK").wait();
	std::shared_ptr<ObjectExist> exists = utils->getSlidesApi()->objectExists(outPath).get();
	EXPECT_TRUE(exists->isExists());
}

TEST_F(ConvertTest, convertWithOptionsFromRequest) {
	utils->initialize("", "", "");
	utility::string_t password = L"password";

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	HttpContent result = utils->getSlidesApi()->convert(data, L"pdf", password).get();
	int resultSize = 0;
	do {
		resultSize++;
	} while (result.getData()->get() != EOF);
	std::shared_ptr<PdfExportOptions> options = std::make_shared<PdfExportOptions>();
	options->setDrawSlidesFrame(true);
	HttpContent resultOptions = utils->getSlidesApi()->convert(data, L"pdf", password, L"", L"", {}, options).get();
	int resultOptionsSize = 0;
	do {
		resultOptionsSize++;
	} while (resultOptions.getData()->get() != EOF);
	EXPECT_NE(resultSize, resultOptionsSize);
}

TEST_F(ConvertTest, convertWithOptionsFromStorage) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";

	HttpContent result = utils->getSlidesApi()->downloadPresentation(fileName, L"png", nullptr, password, folderName).get();
	int resultSize = 0;
	do {
		resultSize++;
	} while (result.getData()->get() != EOF);
	std::shared_ptr<ImageExportOptions> options = std::make_shared<ImageExportOptions>();
	options->setWidth(480);
	options->setHeight(360);
	HttpContent resultOptions = utils->getSlidesApi()->downloadPresentation(fileName, L"png", options, password, folderName).get();
	int resultOptionsSize = 0;
	do {
		resultOptionsSize++;
	} while (resultOptions.getData()->get() != EOF);
	EXPECT_NE(resultSize, resultOptionsSize);
}

TEST_F(ConvertTest, convertSlidePostFromRequest) {
	utils->initialize("", "", "");
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	HttpContent result = utils->getSlidesApi()->downloadSlideOnline(data, 1, L"pdf", boost::none, boost::none, L"password").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(ConvertTest, convertSlidePutFromRequest) {
	utils->initialize("", "", "");
	utility::string_t outPath = L"TempSlidesSDK/test.pptx";
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	utils->getSlidesApi()->saveSlideOnline(data, 1, L"pdf", outPath, boost::none, boost::none, L"password").wait();
	std::shared_ptr<ObjectExist> exists = utils->getSlidesApi()->objectExists(outPath).get();
	EXPECT_TRUE(exists->isExists());
}

TEST_F(ConvertTest, convertSlidePostFromStorage) {
	utils->initialize("", "", "");
	HttpContent result = utils->getSlidesApi()->downloadSlide(L"test.pptx", 1, L"pdf", nullptr, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(ConvertTest, convertSlidePutFromStorage) {
	utils->initialize("", "", "");
	utility::string_t outPath = L"TempSlidesSDK/test.pptx";
	utils->getSlidesApi()->saveSlide(L"test.pptx", 1, L"pdf", outPath, nullptr, boost::none, boost::none, L"password", L"TempSlidesSDK").wait();
	std::shared_ptr<ObjectExist> exists = utils->getSlidesApi()->objectExists(outPath).get();
	EXPECT_TRUE(exists->isExists());
}

TEST_F(ConvertTest, convertSlideWithOptionsFromRequest) {
	utils->initialize("", "", "");
	utility::string_t password = L"password";
	int slideIndex = 1;

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	HttpContent result = utils->getSlidesApi()->downloadSlideOnline(data, slideIndex, L"pdf", boost::none, boost::none, password).get();
	int resultSize = 0;
	do {
		resultSize++;
	} while (result.getData()->get() != EOF);
	std::shared_ptr<PdfExportOptions> options = std::make_shared<PdfExportOptions>();
	options->setDrawSlidesFrame(true);
	HttpContent resultOptions = utils->getSlidesApi()->downloadSlideOnline(data, slideIndex, L"pdf", boost::none, boost::none, password, L"", L"", options).get();
	int resultOptionsSize = 0;
	do {
		resultOptionsSize++;
	} while (resultOptions.getData()->get() != EOF);
	EXPECT_NE(resultSize, resultOptionsSize);
}

TEST_F(ConvertTest, convertSlideWithOptionsFromStorage) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;

	HttpContent result = utils->getSlidesApi()->downloadSlide(fileName, slideIndex, L"pdf", nullptr, boost::none, boost::none, password, folderName).get();
	int resultSize = 0;
	do {
		resultSize++;
	} while (result.getData()->get() != EOF);
	std::shared_ptr<PdfExportOptions> options = std::make_shared<PdfExportOptions>();
	options->setDrawSlidesFrame(true);
	HttpContent resultOptions = utils->getSlidesApi()->downloadSlide(fileName, slideIndex, L"pdf", options, boost::none, boost::none, password, folderName).get();
	int resultOptionsSize = 0;
	do {
		resultOptionsSize++;
	} while (resultOptions.getData()->get() != EOF);
	EXPECT_NE(resultSize, resultOptionsSize);
}

TEST_F(ConvertTest, convertShapePostFromRequest) {
	utils->initialize("", "", "");
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	HttpContent result = utils->getSlidesApi()->downloadShapeOnline(data, 1, 3, L"png", boost::none, boost::none, L"", L"password").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(ConvertTest, convertShapePutFromRequest) {
	utils->initialize("", "", "");
	utility::string_t outPath = L"TempSlidesSDK/test.pptx";
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	utils->getSlidesApi()->saveShapeOnline(data, 1, 1, L"png", outPath, boost::none, boost::none, L"", L"password").wait();
	std::shared_ptr<ObjectExist> exists = utils->getSlidesApi()->objectExists(outPath).get();
	EXPECT_TRUE(exists->isExists());
}

TEST_F(ConvertTest, convertShapePostFromStorage) {
	utils->initialize("", "", "");
	HttpContent result = utils->getSlidesApi()->downloadShape(L"test.pptx", 1, 1, L"png", nullptr, boost::none, boost::none, L"", L"password", L"TempSlidesSDK").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(ConvertTest, convertSubshapePostFromStorage) {
	utils->initialize("", "", "");
	HttpContent result = utils->getSlidesApi()->downloadShape(L"test.pptx", 1, 4, L"png", nullptr, boost::none, boost::none, L"", L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(ConvertTest, convertShapePutFromStorage) {
	utils->initialize("", "", "");
	utility::string_t outPath = L"TempSlidesSDK/test.png";
	utils->getSlidesApi()->saveShape(L"test.pptx", 1, 1, L"png", outPath, nullptr, boost::none, boost::none, L"", L"password", L"TempSlidesSDK").wait();
	std::shared_ptr<ObjectExist> exists = utils->getSlidesApi()->objectExists(outPath).get();
	EXPECT_TRUE(exists->isExists());
}

TEST_F(ConvertTest, convertSubshapePutFromStorage) {
	utils->initialize("", "", "");
	utility::string_t outPath = L"TempSlidesSDK/test.png";
	utils->getSlidesApi()->saveShape(L"test.pptx", 1, 4, L"png", outPath, nullptr, boost::none, boost::none, L"", L"password", L"TempSlidesSDK", L"", L"1").wait();
	std::shared_ptr<ObjectExist> exists = utils->getSlidesApi()->objectExists(outPath).get();
	EXPECT_TRUE(exists->isExists());
}

TEST_F(ConvertTest, convertWithFallbackRules) {
	utils->initialize("", "", "");
	utility::string_t outPath = L"TempSlidesSDK/test.pptx";
	int startUnicodeIndex = 0x0B80;
	int endUnicodeIndex = 0x0BFF;

	std::shared_ptr<FontFallbackRule> fontRule1 = std::make_shared<FontFallbackRule>();
	fontRule1->setRangeStartIndex(startUnicodeIndex);
	fontRule1->setRangeEndIndex(endUnicodeIndex);
	fontRule1->setFallbackFontList({ L"Vijaya" });

	std::shared_ptr<FontFallbackRule> fontRule2 = std::make_shared<FontFallbackRule>();
	fontRule2->setRangeStartIndex(startUnicodeIndex);
	fontRule2->setRangeEndIndex(endUnicodeIndex);
	fontRule2->setFallbackFontList({ L"Segoe UI Emoji", L"Segoe UI Symbol", L"Arial" });

	std::shared_ptr<ImageExportOptions> options = std::make_shared<ImageExportOptions>();
	options->setFontFallbackRules({ fontRule1, fontRule2 });
	utils->getSlidesApi()->savePresentation(L"test.pptx", L"pdf", outPath, nullptr, L"password", L"TempSlidesSDK").wait();
	std::shared_ptr<ObjectExist> exists = utils->getSlidesApi()->objectExists(outPath).get();
	EXPECT_TRUE(exists->isExists());
}

TEST_F(ConvertTest, convertWithSlidesLayoutOptions) {
	utils->initialize("", "", "");
	utility::string_t outPath = L"TempSlidesSDK/test.pptx";

	std::shared_ptr<HandoutLayoutingOptions> slidesLayoutOptions = std::make_shared<HandoutLayoutingOptions>();
	slidesLayoutOptions->setHandout(L"Handouts2");
	slidesLayoutOptions->setPrintSlideNumbers(true);

	std::shared_ptr<PdfExportOptions> options = std::make_shared<PdfExportOptions>();
	options->setSlidesLayoutOptions(slidesLayoutOptions);
	utils->getSlidesApi()->savePresentation(L"test.pptx", L"pdf", outPath, options, L"password", L"TempSlidesSDK").wait();
	std::shared_ptr<ObjectExist> exists = utils->getSlidesApi()->objectExists(outPath).get();
	EXPECT_TRUE(exists->isExists());
}

TEST_F(ConvertTest, convertWithCustomHtml5Templates) {
	utils->initialize("", "", "");
	utility::string_t templatesPath = L"Html5Templates";
	utility::string_t templateFileName = L"pictureFrame.html";
	utils->getSlidesApi()->createFolder(templatesPath);
	utils->getSlidesApi()->copyFile(L"TestData/" + templateFileName, templatesPath + L"/" + templateFileName);
	std::shared_ptr<Html5ExportOptions> exportOptions = std::make_shared<Html5ExportOptions>();
	exportOptions->setTemplatesPath(templatesPath);
	exportOptions->setAnimateTransitions(true);
	HttpContent result = utils->getSlidesApi()->downloadPresentation(L"test.pptx", L"html5", exportOptions, L"password", L"TempSlidesSDK").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(ConvertTest, convertGetHtml5Templates) {
	utils->initialize("", "", "");
	HttpContent result = utils->getSlidesApi()->getHtml5Templates().get();
	EXPECT_NE(nullptr, result.getData());
}
