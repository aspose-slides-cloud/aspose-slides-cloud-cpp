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

class CreateTest : public ::testing::Test
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

SlidesApi* CreateTest::api = nullptr;
TestUtils* CreateTest::utils = nullptr;

TEST_F(CreateTest, createEmpty) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";

	api->deleteFile(folderName + L"/" + fileName).wait();
	std::shared_ptr<Document> result = api->createPresentation(fileName, nullptr, L"", L"", folderName).get();
	EXPECT_NE(nullptr, result);
}

TEST_F(CreateTest, createFromRequest) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";

	api->deleteFile(folderName + L"/" + fileName).wait();

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));

	std::shared_ptr<Document> result = api->createPresentation(fileName, data, L"password", L"", folderName).get();
	EXPECT_NE(nullptr, result);
}

TEST_F(CreateTest, createFromStorage) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t newFileName = L"test2.pptx";
	utility::string_t folderName = L"TempSlidesSDK";

	api->deleteFile(folderName + L"/" + newFileName).wait();

	std::shared_ptr<Document> result = api->createPresentationFromSource(newFileName, folderName + L"/" +fileName, L"password", L"", L"", folderName).get();
	EXPECT_NE(nullptr, result);
}

TEST_F(CreateTest, createFromTemplate) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t templateFileName = L"TemplateCV.pptx";
	utility::string_t folderName = L"TempSlidesSDK";

	api->deleteFile(folderName + L"/" + fileName).wait();

	utility::string_t templatePath = folderName + L"/" + templateFileName;
	api->copyFile(L"TempTests/" + templateFileName, templatePath).wait();

	utility::string_t data = L"<staff><person><name>John Doe</name><address><line1>10 Downing Street</line1><line2>London</line2></address><phone>+457 123456</phone><bio>Hi, I'm John and this is my CV</bio><skills><skill><title>C#</title><level>Excellent</level></skill><skill><title>C++</title><level>Good</level></skill><skill><title>Java</title><level>Average</level></skill></skills></person></staff>";
	std::shared_ptr<Document> result = api->createPresentationFromTemplate(fileName, templatePath, data, L"", L"", boost::none, L"", folderName).get();
	EXPECT_NE(nullptr, result);
}

TEST_F(CreateTest, createFromHtml) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";

	api->deleteFile(folderName + L"/" + fileName).wait();

	std::shared_ptr<Document> result = api->importFromHtml(fileName, L"<html><body>New Content</body></html>", L"", folderName).get();
	EXPECT_NE(nullptr, result);
}

TEST_F(CreateTest, appendFromHtml) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";

	size_t slideCount = api->getSlides(fileName, password, folderName).get()->getSlideList().size();

	std::shared_ptr<Document> result = api->importFromHtml(fileName, L"<html><body>New Content</body></html>", password, folderName).get();
	size_t newSlideCount = api->getSlides(fileName, password, folderName).get()->getSlideList().size();
	EXPECT_EQ(slideCount + 1, newSlideCount);
}

TEST_F(CreateTest, createFromPdf) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";

	api->deleteFile(folderName + L"/" + fileName).wait();

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pdf", std::ios::binary));
	std::shared_ptr<Document> result = api->importFromPdf(fileName, data, L"", folderName).get();
	EXPECT_NE(nullptr, result);
}

TEST_F(CreateTest, appendFromPdf) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";

	size_t slideCount = api->getSlides(fileName, password, folderName).get()->getSlideList().size();

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pdf", std::ios::binary));
	std::shared_ptr<Document> result = api->importFromPdf(fileName, data, password, folderName).get();
	size_t newSlideCount = api->getSlides(fileName, password, folderName).get()->getSlideList().size();
	EXPECT_EQ(slideCount + 4, newSlideCount);
}
