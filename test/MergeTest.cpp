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

class MergeTest : public ::testing::Test
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

SlidesApi* MergeTest::api = nullptr;
TestUtils* MergeTest::utils = nullptr;

TEST_F(MergeTest, mergeStorage) {
	utils->initialize("", "", "");
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t fileName2 = L"test-unprotected.pptx";
	api->copyFile(L"TempTests/" + fileName2, folderName + L"/" + fileName2).get();

	utility::string_t fileNamePdf = L"test.pdf";
	api->copyFile(L"TempTests/" + fileNamePdf, folderName + L"/" + fileNamePdf).get();

	std::shared_ptr<PresentationsMergeRequest> request(new PresentationsMergeRequest());
	request->setPresentationPaths({ folderName + L"/" + fileName2, folderName + L"/" + fileNamePdf });
	std::shared_ptr<Document> result = api->merge(L"test.pptx", request, L"password", folderName).get();
	EXPECT_NE(nullptr, result);
}

TEST_F(MergeTest, mergeOrderedStorage) {
	utils->initialize("", "", "");
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t fileName2 = L"test-unprotected.pptx";
	api->copyFile(L"TempTests/" + fileName2, folderName + L"/" + fileName2).get();

	utility::string_t fileNamePdf = L"test.pdf";
	api->copyFile(L"TempTests/" + fileNamePdf, folderName + L"/" + fileNamePdf).get();

	std::shared_ptr<OrderedMergeRequest> request(new OrderedMergeRequest());
	std::shared_ptr<PresentationToMerge> presentation(new PresentationToMerge());
	presentation->setPath(folderName + L"/" + fileName2);
	presentation->setSlides({ 2, 1 });
	request->setPresentations({ presentation });
	std::shared_ptr<Document> result = api->orderedMerge(L"test.pptx", request, L"password", folderName).get();
	EXPECT_NE(nullptr, result);
}

TEST_F(MergeTest, mergeRequest) {
	utils->initialize("", "", "");

	std::shared_ptr<HttpContent> data1 = std::make_shared<HttpContent>();
	data1->setData(std::make_shared<std::ifstream>(L"TestData/TemplateCV.pptx", std::ios::binary));
	std::shared_ptr<HttpContent> data2 = std::make_shared<HttpContent>();
	data2->setData(std::make_shared<std::ifstream>(L"TestData/test-unprotected.pptx", std::ios::binary));
	HttpContent result = api->mergeOnline({ data1, data2 }).get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(MergeTest, mergeAndSaveRequest) {
	utils->initialize("", "", "");
	utility::string_t outPath = L"TestData/out.pptx";
	std::shared_ptr<HttpContent> data1 = std::make_shared<HttpContent>();
	data1->setData(std::make_shared<std::ifstream>(L"TestData/TemplateCV.pptx", std::ios::binary));
	std::shared_ptr<HttpContent> data2 = std::make_shared<HttpContent>();
	data2->setData(std::make_shared<std::ifstream>(L"TestData/test-unprotected.pptx", std::ios::binary));
	api->mergeAndSaveOnline(outPath, { data1, data2 }).wait();
	std::shared_ptr<ObjectExist> exists = api->objectExists(outPath).get();
	EXPECT_TRUE(exists->isExists());
}

TEST_F(MergeTest, mergeOrderedRequest) {
	utils->initialize("", "", "");

	std::shared_ptr<HttpContent> data1 = std::make_shared<HttpContent>();
	data1->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	std::shared_ptr<HttpContent> data2 = std::make_shared<HttpContent>();
	data2->setData(std::make_shared<std::ifstream>(L"TestData/test-unprotected.pptx", std::ios::binary));

	std::shared_ptr<OrderedMergeRequest> request(new OrderedMergeRequest());
	std::shared_ptr<PresentationToMerge> presentation1(new PresentationToMerge());
	presentation1->setPath(L"file1");
	presentation1->setPassword(L"password");
	std::shared_ptr<PresentationToMerge> presentation2(new PresentationToMerge());
	presentation2->setPath(L"file2");
	presentation2->setSlides({ 1, 2 });
	request->setPresentations({ presentation1, presentation2 });
	HttpContent result = api->mergeOnline({ data1, data2 }, request).get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(MergeTest, mergeOrderedCombined) {
	utils->initialize("", "", "");

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test-unprotected.pptx", std::ios::binary));

	std::shared_ptr<OrderedMergeRequest> request(new OrderedMergeRequest());
	std::shared_ptr<PresentationToMerge> presentation1(new PresentationToMerge());
	presentation1->setPath(L"TempSlidesSDK/test.pptx");
	presentation1->setSource(L"Storage");
	presentation1->setPassword(L"password");
	std::shared_ptr<PresentationToMerge> presentation2(new PresentationToMerge());
	presentation2->setPath(L"file1");
	presentation2->setSlides({ 1, 2 });
	request->setPresentations({ presentation1, presentation2 });
	HttpContent result = api->mergeOnline({ data }, request).get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(MergeTest, mergeOrderedUrl) {
	utils->initialize("", "", "");

	std::shared_ptr<OrderedMergeRequest> request(new OrderedMergeRequest());
	std::shared_ptr<PresentationToMerge> presentation1(new PresentationToMerge());
	presentation1->setPath(L"TempSlidesSDK/test.pptx");
	presentation1->setSource(L"Storage");
	presentation1->setPassword(L"password");
	std::shared_ptr<PresentationToMerge> presentation2(new PresentationToMerge());
	presentation2->setPath(L"https://drive.google.com/uc?export=download&id=1ycMzd7e--Ro9H8eH2GL5fPP7-2HjX4My");
	presentation2->setSource(L"Url");
	presentation2->setSlides({ 1 });
	request->setPresentations({ presentation1, presentation2 });
	HttpContent result = api->mergeOnline({}, request).get();
	EXPECT_NE(nullptr, result.getData());
}
