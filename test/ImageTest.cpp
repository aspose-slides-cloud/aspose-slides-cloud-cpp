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

class ImageTest : public ::testing::Test
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

TestUtils* ImageTest::utils = nullptr;

TEST_F(ImageTest, imageGet) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";

	std::shared_ptr<Images> presentationResult = utils->getSlidesApi()->getPresentationImages(fileName, password, folderName).get();
	std::shared_ptr<Images> slideResult = utils->getSlidesApi()->getSlideImages(fileName, 1, password, folderName).get();
	EXPECT_LT(slideResult->getList().size(), presentationResult->getList().size());
}

TEST_F(ImageTest, imageDownloadAllStorage) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";

	HttpContent defaultResult = utils->getSlidesApi()->downloadImagesDefaultFormat(fileName, password, folderName).get();
	HttpContent pngResult = utils->getSlidesApi()->downloadImages(fileName, L"png", password, folderName).get();
	//TODO: assert that zip archives contain equal amout of elements
	//EXPECT_NE(defaultResult->getList().size(), pngResult->getList().size());
}

TEST_F(ImageTest, imageDownloadAllRequest) {
	utils->initialize("", "", "");
	utility::string_t password = L"password";

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));

	HttpContent defaultResult = utils->getSlidesApi()->downloadImagesDefaultFormatOnline(data, password).get();
	HttpContent pngResult = utils->getSlidesApi()->downloadImagesOnline(data, L"png", password).get();
	//TODO: assert that zip archives contain equal amout of elements
	//EXPECT_NE(defaultResult->getList().size(), pngResult->getList().size());
}

TEST_F(ImageTest, imageDownloadStorage) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int index = 1;

	HttpContent defaultResult = utils->getSlidesApi()->downloadImageDefaultFormat(fileName, index, password, folderName).get();
	int defaultResultSize = 0;
	do {
		defaultResultSize++;
	} while (defaultResult.getData()->get() != EOF);
	HttpContent pngResult = utils->getSlidesApi()->downloadImage(fileName, index, L"png", password, folderName).get();
	int pngResultSize = 0;
	do {
		pngResultSize++;
	} while (pngResult.getData()->get() != EOF);
	//TODO: assert that zip archives contain equal amout of elements
	EXPECT_NE(pngResultSize, defaultResultSize);
}

TEST_F(ImageTest, imageDownloadRequest) {
	utils->initialize("", "", "");
	utility::string_t password = L"password";
	int index = 1;

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));

	HttpContent defaultResult = utils->getSlidesApi()->downloadImageDefaultFormatOnline(data, index, password).get();
	int defaultResultSize = 0;
	do {
		defaultResultSize++;
	} while (defaultResult.getData()->get() != EOF);
	HttpContent pngResult = utils->getSlidesApi()->downloadImageOnline(data, index, L"png", password).get();
	int pngResultSize = 0;
	do {
		pngResultSize++;
	} while (pngResult.getData()->get() != EOF);
	//TODO: assert that zip archives contain equal amout of elements
	EXPECT_NE(pngResultSize, defaultResultSize);
}

TEST_F(ImageTest, deletePictureCroppedAreas) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 2;
	int shapeIndex = 2;
	utils->getSlidesApi()->deletePictureCroppedAreas(fileName, slideIndex, shapeIndex, password, folderName).get();
}

TEST_F(ImageTest, deletePictureCroppedAreasWrongShapeType) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 2;
	int shapeIndex = 3;
	try
	{
		utils->getSlidesApi()->deletePictureCroppedAreas(fileName, slideIndex, shapeIndex, password, folderName).get();
		FAIL() << "Must have failed";
	}
	catch (ApiException ex)
	{
		EXPECT_EQ(400, ex.error_code().value());
	}
}
