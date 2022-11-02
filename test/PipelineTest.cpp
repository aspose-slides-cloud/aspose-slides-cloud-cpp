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
#include "model/OutputFile.h"
#include "model/RequestInputFile.h"
#include "model/Save.h"

using namespace asposeslidescloud::api;

class PipelineTest : public ::testing::Test
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

SlidesApi* PipelineTest::api = nullptr;
TestUtils* PipelineTest::utils = nullptr;

TEST_F(PipelineTest, nullableProperties) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";

	std::shared_ptr<RequestInputFile> file1(new RequestInputFile());
	file1->setType(L"Request");
	file1->setIndex(0);

	std::shared_ptr<RequestInputFile> file2(new RequestInputFile());
	file2->setType(L"Request");
	file2->setIndex(1);

	std::shared_ptr<Input> input(new Input());
	input->setTemplateData(file1);
	input->setTemplate(file2);

	std::shared_ptr<OutputFile> output(new OutputFile());
	output->setType(L"Response");

	std::shared_ptr<Save> task(new Save());
	task->setFormat(L"Pptx");
	task->setOutput(output);
	task->setType(L"Save");

	std::shared_ptr<Pipeline> pipeline(new Pipeline());
	pipeline->setInput(input);
	pipeline->setTasks({ task });

	std::shared_ptr<HttpContent> doc1 = std::make_shared<HttpContent>();
	doc1->setData(std::make_shared<std::ifstream>(L"TestData/TemplatingCVDataWithBase64.xml", std::ios::binary));

	std::shared_ptr<HttpContent> doc2 = std::make_shared<HttpContent>();
	doc2->setData(std::make_shared<std::ifstream>(L"TestData/TemplateCV.pptx", std::ios::binary));

	HttpContent result = api->pipeline(pipeline, { doc1, doc2 }).get();
	EXPECT_NE(nullptr, result.getData());
}
