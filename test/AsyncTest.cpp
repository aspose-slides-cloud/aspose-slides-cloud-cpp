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
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/thread/thread.hpp>

class AsyncTest : public ::testing::Test
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

TestUtils* AsyncTest::utils = nullptr;

TEST_F(AsyncTest, asyncConvert) {
	const int maxTries = 10;
	const int sleepTimeout = 3;
	utils->initialize("", "", "");
	utility::string_t password = L"password";

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	utility::string_t operationId = utils->getSlidesAsyncApi()->startConvert(data, L"pdf", password).get();

	std::shared_ptr<Operation> operation = nullptr;
	for (int i = 0; i < maxTries; i++)
	{
		boost::this_thread::sleep(boost::posix_time::seconds(sleepTimeout));
		operation = utils->getSlidesAsyncApi()->getOperationStatus(operationId).get();
		if (operation->getStatus() != L"Created" && operation->getStatus() != L"Enqueued" && operation->getStatus() != L"Started")
		{
			break;
		}
	}
	EXPECT_EQ(L"Finished", operation->getStatus());
	EXPECT_EQ(L"", operation->getError());

	HttpContent converted = utils->getSlidesAsyncApi()->getOperationResult(operationId).get();
	int convertedSize = 0;
	do {
		convertedSize++;
	} while (converted.getData()->get() != EOF);
	EXPECT_GT(convertedSize, 0);
}

TEST_F(AsyncTest, asyncDownloadPresentation) {
	const int maxTries = 10;
	const int sleepTimeout = 3;
	utils->initialize("", "", "");
	utility::string_t operationId = utils->getSlidesAsyncApi()->startDownloadPresentation(L"test.pptx", L"pdf", nullptr, L"password", L"TempSlidesSDK").get();

	std::shared_ptr<Operation> operation = nullptr;
	for (int i = 0; i < maxTries; i++)
	{
		boost::this_thread::sleep(boost::posix_time::seconds(sleepTimeout));
		operation = utils->getSlidesAsyncApi()->getOperationStatus(operationId).get();
		if (operation->getStatus() != L"Created" && operation->getStatus() != L"Enqueued" && operation->getStatus() != L"Started")
		{
			break;
		}
	}
	EXPECT_EQ(L"Finished", operation->getStatus());
	EXPECT_EQ(L"", operation->getError());

	HttpContent converted = utils->getSlidesAsyncApi()->getOperationResult(operationId).get();
	int convertedSize = 0;
	do {
		convertedSize++;
	} while (converted.getData()->get() != EOF);
	EXPECT_GT(convertedSize, 0);
}

TEST_F(AsyncTest, asyncBadOperation) {
	const int maxTries = 10;
	const int sleepTimeout = 3;
	utils->initialize("", "", "");
	utility::string_t operationId = utils->getSlidesAsyncApi()->startDownloadPresentation(L"IDoNotExist.pptx", L"pdf").get();

	std::shared_ptr<Operation> operation = nullptr;
	for (int i = 0; i < maxTries; i++)
	{
		boost::this_thread::sleep(boost::posix_time::seconds(sleepTimeout));
		operation = utils->getSlidesAsyncApi()->getOperationStatus(operationId).get();
		if (operation->getStatus() != L"Created" && operation->getStatus() != L"Enqueued" && operation->getStatus() != L"Started")
		{
			break;
		}
	}
	EXPECT_EQ(L"Failed", operation->getStatus());
	EXPECT_NE(L"", operation->getError());
}
