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

class SplitTest : public ::testing::Test
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

TestUtils* SplitTest::utils = nullptr;

TEST_F(SplitTest, splitStorage) {
	utils->initialize("", "", "");
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t fileName = L"test.pptx";
	utility::string_t password = L"password";

	std::shared_ptr<SplitDocumentResult> result1 = utils->getSlidesApi()->split(fileName, nullptr, L"", boost::none, boost::none, boost::none, boost::none, L"", password, folderName).get();
	std::shared_ptr<SplitDocumentResult> result2 = utils->getSlidesApi()->split(fileName, nullptr, L"", boost::none, boost::none, 2, 3, L"", password, folderName).get();
	EXPECT_EQ(2, result2->getSlides().size());
	EXPECT_GT(result1->getSlides().size(), result2->getSlides().size());

	utility::string_t url = result1->getSlides()[0]->getHref();
	utility::string_t storagePart = L"/storage/file/";
	size_t storageIndex = url.find(storagePart);
	EXPECT_NE(utility::string_t::npos, storageIndex);
	utility::string_t path = url.substr(storageIndex + storagePart.size());
	std::shared_ptr<ObjectExist> exists = utils->getSlidesApi()->objectExists(path).get();
	EXPECT_TRUE(exists->isExists());
}

TEST_F(SplitTest, splitRequest) {
	utils->initialize("", "", "");
	utility::string_t password = L"password";

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));

	HttpContent result1 = utils->getSlidesApi()->splitOnline(data, L"png", boost::none, boost::none, boost::none, boost::none, password).get();
	HttpContent result2 = utils->getSlidesApi()->splitOnline(data, L"png", boost::none, boost::none, 2, 3, password).get();
	EXPECT_NE(nullptr, result1.getData());
	EXPECT_NE(nullptr, result2.getData());
	//TODO: assert that zip archives contain unequal amout of elements
	//EXPECT_GT(result1->getSlides().size(), result2->getSlides().size());
}

TEST_F(SplitTest, splitRequestToStorage) {
	utils->initialize("", "", "");
	utility::string_t password = L"password";

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));

	std::shared_ptr<SplitDocumentResult> result1 = utils->getSlidesApi()->splitAndSaveOnline(data, L"png", L"", boost::none, boost::none, boost::none, boost::none, password).get();
	std::shared_ptr<SplitDocumentResult> result2 = utils->getSlidesApi()->splitAndSaveOnline(data, L"png", L"", boost::none, boost::none, 2, 3, password).get();
	EXPECT_EQ(2, result2->getSlides().size());
	EXPECT_GT(result1->getSlides().size(), result2->getSlides().size());

	utility::string_t url = result1->getSlides()[0]->getHref();
	utility::string_t storagePart = L"/storage/file/";
	size_t storageIndex = url.find(storagePart);
	EXPECT_NE(utility::string_t::npos, storageIndex);
	utility::string_t path = url.substr(storageIndex + storagePart.size());
	std::shared_ptr<ObjectExist> exists = utils->getSlidesApi()->objectExists(path).get();
	EXPECT_TRUE(exists->isExists());
}

TEST_F(SplitTest, splitWithOptions) {
	utils->initialize("", "", "");
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t fileName = L"test.pptx";
	utility::string_t password = L"password";
	std::shared_ptr<PdfExportOptions> options = std::make_shared<PdfExportOptions>();
	options->setJpegQuality(50);
	std::shared_ptr<SplitDocumentResult> result = utils->getSlidesApi()->split(fileName, options, L"", boost::none, boost::none, boost::none, boost::none, L"", password, folderName).get();
	utility::string_t url = result->getSlides()[0]->getHref();
	utility::string_t storagePart = L"/storage/file/";
	size_t storageIndex = url.find(storagePart);
	EXPECT_NE(utility::string_t::npos, storageIndex);
	utility::string_t path = url.substr(storageIndex + storagePart.size());
	std::shared_ptr<ObjectExist> exists = utils->getSlidesApi()->objectExists(path).get();
	EXPECT_TRUE(exists->isExists());
}


































