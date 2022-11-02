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

using namespace asposeslidescloud::api;

class SplitTest : public ::testing::Test
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

SlidesApi* SplitTest::api = nullptr;
TestUtils* SplitTest::utils = nullptr;

TEST_F(SplitTest, splitStorage) {
	utils->initialize("", "");
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t fileName = L"test.pptx";
	utility::string_t password = L"password";

	std::shared_ptr<SplitDocumentResult> result1 = api->split(fileName, nullptr, L"", boost::none, boost::none, boost::none, boost::none, L"", password, folderName).get();
	std::shared_ptr<SplitDocumentResult> result2 = api->split(fileName, nullptr, L"", boost::none, boost::none, 2, 3, L"", password, folderName).get();
	EXPECT_EQ(2, result2->getSlides().size());
	EXPECT_GT(result1->getSlides().size(), result2->getSlides().size());

	utility::string_t url = result1->getSlides()[0]->getHref();
	utility::string_t storagePart = L"/storage/file/";
	size_t storageIndex = url.find(storagePart);
	EXPECT_NE(utility::string_t::npos, storageIndex);
	utility::string_t path = url.substr(storageIndex + storagePart.size());
	std::shared_ptr<ObjectExist> exists = api->objectExists(path).get();
	EXPECT_TRUE(exists->getExists());
}

TEST_F(SplitTest, splitRequest) {
	utils->initialize("", "");
	utility::string_t password = L"password";

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));

	HttpContent result1 = api->splitOnline(data, L"png", boost::none, boost::none, boost::none, boost::none, password).get();
	HttpContent result2 = api->splitOnline(data, L"png", boost::none, boost::none, 2, 3, password).get();
	EXPECT_NE(nullptr, result1.getData());
	EXPECT_NE(nullptr, result2.getData());
	//TODO: assert that zip archives contain unequal amout of elements
	//EXPECT_GT(result1->getSlides().size(), result2->getSlides().size());
}

TEST_F(SplitTest, splitRequestToStorage) {
	utils->initialize("", "");
	utility::string_t password = L"password";

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));

	std::shared_ptr<SplitDocumentResult> result1 = api->splitAndSaveOnline(data, L"png", L"", boost::none, boost::none, boost::none, boost::none, password).get();
	std::shared_ptr<SplitDocumentResult> result2 = api->splitAndSaveOnline(data, L"png", L"", boost::none, boost::none, 2, 3, password).get();
	EXPECT_EQ(2, result2->getSlides().size());
	EXPECT_GT(result1->getSlides().size(), result2->getSlides().size());

	utility::string_t url = result1->getSlides()[0]->getHref();
	utility::string_t storagePart = L"/storage/file/";
	size_t storageIndex = url.find(storagePart);
	EXPECT_NE(utility::string_t::npos, storageIndex);
	utility::string_t path = url.substr(storageIndex + storagePart.size());
	std::shared_ptr<ObjectExist> exists = api->objectExists(path).get();
	EXPECT_TRUE(exists->getExists());
}

TEST_F(SplitTest, splitWithOptions) {
	utils->initialize("", "");
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t fileName = L"test.pptx";
	utility::string_t password = L"password";
	std::shared_ptr<PdfExportOptions> options = std::make_shared<PdfExportOptions>();
	options->setJpegQuality(50);
	std::shared_ptr<SplitDocumentResult> result = api->split(fileName, options, L"", boost::none, boost::none, boost::none, boost::none, L"", password, folderName).get();
	utility::string_t url = result->getSlides()[0]->getHref();
	utility::string_t storagePart = L"/storage/file/";
	size_t storageIndex = url.find(storagePart);
	EXPECT_NE(utility::string_t::npos, storageIndex);
	utility::string_t path = url.substr(storageIndex + storagePart.size());
	std::shared_ptr<ObjectExist> exists = api->objectExists(path).get();
	EXPECT_TRUE(exists->getExists());
}


































