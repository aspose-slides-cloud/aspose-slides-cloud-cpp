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

class SlidesAsyncApiTest : public ::testing::Test
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

TestUtils* SlidesAsyncApiTest::utils = nullptr;

TEST_F(SlidesAsyncApiTest, getOperationResult) {
	utility::string_t paramId = utils->getTestValue("getOperationResult", "id", "utility::string_t");
	utils->initialize("getOperationResult", "", "");
	HttpContent result = utils->getSlidesAsyncApi()->getOperationResult(paramId).get();
	EXPECT_FALSE(result.getData()->eof());
}

TEST_F(SlidesAsyncApiTest, getOperationResultInvalidId) {
	utility::string_t paramId = utils->getTestValue("getOperationResult", "id", "utility::string_t");
	paramId = utils->getInvalidTestValue("getOperationResult", "id", "utility::string_t", paramId);
	utils->initialize("getOperationResult", "id", "utility::string_t", paramId);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->getOperationResult(paramId).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("getOperationResult", "id", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("getOperationResult", "id", "utility::string_t", paramId);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("getOperationResult", "id", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("getOperationResult", "id", "utility::string_t", paramId);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("getOperationResult", "id", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, getOperationStatus) {
	utility::string_t paramId = utils->getTestValue("getOperationStatus", "id", "utility::string_t");
	utils->initialize("getOperationStatus", "", "");
	std::shared_ptr<Operation> result = utils->getSlidesAsyncApi()->getOperationStatus(paramId).get();
	EXPECT_NE(nullptr, result);
}

TEST_F(SlidesAsyncApiTest, getOperationStatusInvalidId) {
	utility::string_t paramId = utils->getTestValue("getOperationStatus", "id", "utility::string_t");
	paramId = utils->getInvalidTestValue("getOperationStatus", "id", "utility::string_t", paramId);
	utils->initialize("getOperationStatus", "id", "utility::string_t", paramId);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->getOperationStatus(paramId).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("getOperationStatus", "id", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("getOperationStatus", "id", "utility::string_t", paramId);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("getOperationStatus", "id", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("getOperationStatus", "id", "utility::string_t", paramId);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("getOperationStatus", "id", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvert) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvert", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvert", "format", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvert", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvert", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvert", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvert", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvert", "options", "std::shared_ptr<ExportOptions>");
	utils->initialize("startConvert", "", "");
	utility::string_t result = utils->getSlidesAsyncApi()->startConvert(paramDocument, paramFormat, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).get();
	EXPECT_NE(L"", result);
}

TEST_F(SlidesAsyncApiTest, startConvertInvalidDocument) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvert", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvert", "format", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvert", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvert", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvert", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvert", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvert", "options", "std::shared_ptr<ExportOptions>");
	paramDocument = utils->getInvalidBinaryTestValue("startConvert", "document", "std::shared_ptr<HttpContent>", paramDocument);
	utils->initialize("startConvert", "document", "std::shared_ptr<HttpContent>", paramDocument);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvert(paramDocument, paramFormat, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvert", "document", "std::shared_ptr<HttpContent>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvert", "document", "std::shared_ptr<HttpContent>", paramDocument);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvert", "document", "std::shared_ptr<HttpContent>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvert", "document", "std::shared_ptr<HttpContent>", paramDocument);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvert", "document", "std::shared_ptr<HttpContent>"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertInvalidFormat) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvert", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvert", "format", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvert", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvert", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvert", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvert", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvert", "options", "std::shared_ptr<ExportOptions>");
	paramFormat = utils->getInvalidTestValue("startConvert", "format", "utility::string_t", paramFormat);
	utils->initialize("startConvert", "format", "utility::string_t", paramFormat);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvert(paramDocument, paramFormat, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvert", "format", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvert", "format", "utility::string_t", paramFormat);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvert", "format", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvert", "format", "utility::string_t", paramFormat);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvert", "format", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertInvalidPassword) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvert", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvert", "format", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvert", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvert", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvert", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvert", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvert", "options", "std::shared_ptr<ExportOptions>");
	paramPassword = utils->getInvalidTestValue("startConvert", "password", "utility::string_t", paramPassword);
	utils->initialize("startConvert", "password", "utility::string_t", paramPassword);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvert(paramDocument, paramFormat, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvert", "password", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvert", "password", "utility::string_t", paramPassword);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvert", "password", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvert", "password", "utility::string_t", paramPassword);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvert", "password", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertInvalidStorage) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvert", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvert", "format", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvert", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvert", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvert", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvert", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvert", "options", "std::shared_ptr<ExportOptions>");
	paramStorage = utils->getInvalidTestValue("startConvert", "storage", "utility::string_t", paramStorage);
	utils->initialize("startConvert", "storage", "utility::string_t", paramStorage);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvert(paramDocument, paramFormat, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvert", "storage", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvert", "storage", "utility::string_t", paramStorage);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvert", "storage", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvert", "storage", "utility::string_t", paramStorage);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvert", "storage", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertInvalidFontsFolder) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvert", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvert", "format", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvert", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvert", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvert", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvert", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvert", "options", "std::shared_ptr<ExportOptions>");
	paramFontsFolder = utils->getInvalidTestValue("startConvert", "fontsFolder", "utility::string_t", paramFontsFolder);
	utils->initialize("startConvert", "fontsFolder", "utility::string_t", paramFontsFolder);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvert(paramDocument, paramFormat, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvert", "fontsFolder", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvert", "fontsFolder", "utility::string_t", paramFontsFolder);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvert", "fontsFolder", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvert", "fontsFolder", "utility::string_t", paramFontsFolder);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvert", "fontsFolder", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertInvalidSlides) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvert", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvert", "format", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvert", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvert", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvert", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvert", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvert", "options", "std::shared_ptr<ExportOptions>");
	paramSlides = utils->getInvalidIntVectorTestValue("startConvert", "slides", "std::vector<int32_t>", paramSlides);
	utils->initialize("startConvert", "slides", "std::vector<int32_t>", paramSlides);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvert(paramDocument, paramFormat, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvert", "slides", "std::vector<int32_t>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvert", "slides", "std::vector<int32_t>", paramSlides);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvert", "slides", "std::vector<int32_t>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvert", "slides", "std::vector<int32_t>", paramSlides);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvert", "slides", "std::vector<int32_t>"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertInvalidOptions) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvert", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvert", "format", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvert", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvert", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvert", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvert", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvert", "options", "std::shared_ptr<ExportOptions>");
	paramOptions = utils->getInvalidTestValueForClass<>("startConvert", "options", "std::shared_ptr<ExportOptions>", paramOptions);
	utils->initialize("startConvert", "options", "std::shared_ptr<ExportOptions>", paramOptions);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvert(paramDocument, paramFormat, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvert", "options", "std::shared_ptr<ExportOptions>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvert", "options", "std::shared_ptr<ExportOptions>", paramOptions);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvert", "options", "std::shared_ptr<ExportOptions>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvert", "options", "std::shared_ptr<ExportOptions>", paramOptions);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvert", "options", "std::shared_ptr<ExportOptions>"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertAndSave) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvertAndSave", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvertAndSave", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startConvertAndSave", "outPath", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvertAndSave", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvertAndSave", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvertAndSave", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvertAndSave", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>");
	utils->initialize("startConvertAndSave", "", "");
	utility::string_t result = utils->getSlidesAsyncApi()->startConvertAndSave(paramDocument, paramFormat, paramOutPath, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).get();
	EXPECT_NE(L"", result);
}

TEST_F(SlidesAsyncApiTest, startConvertAndSaveInvalidDocument) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvertAndSave", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvertAndSave", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startConvertAndSave", "outPath", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvertAndSave", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvertAndSave", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvertAndSave", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvertAndSave", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>");
	paramDocument = utils->getInvalidBinaryTestValue("startConvertAndSave", "document", "std::shared_ptr<HttpContent>", paramDocument);
	utils->initialize("startConvertAndSave", "document", "std::shared_ptr<HttpContent>", paramDocument);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvertAndSave(paramDocument, paramFormat, paramOutPath, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "document", "std::shared_ptr<HttpContent>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "document", "std::shared_ptr<HttpContent>", paramDocument);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "document", "std::shared_ptr<HttpContent>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "document", "std::shared_ptr<HttpContent>", paramDocument);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvertAndSave", "document", "std::shared_ptr<HttpContent>"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertAndSaveInvalidFormat) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvertAndSave", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvertAndSave", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startConvertAndSave", "outPath", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvertAndSave", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvertAndSave", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvertAndSave", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvertAndSave", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>");
	paramFormat = utils->getInvalidTestValue("startConvertAndSave", "format", "utility::string_t", paramFormat);
	utils->initialize("startConvertAndSave", "format", "utility::string_t", paramFormat);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvertAndSave(paramDocument, paramFormat, paramOutPath, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "format", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "format", "utility::string_t", paramFormat);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "format", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "format", "utility::string_t", paramFormat);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvertAndSave", "format", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertAndSaveInvalidOutPath) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvertAndSave", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvertAndSave", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startConvertAndSave", "outPath", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvertAndSave", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvertAndSave", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvertAndSave", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvertAndSave", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>");
	paramOutPath = utils->getInvalidTestValue("startConvertAndSave", "outPath", "utility::string_t", paramOutPath);
	utils->initialize("startConvertAndSave", "outPath", "utility::string_t", paramOutPath);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvertAndSave(paramDocument, paramFormat, paramOutPath, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "outPath", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "outPath", "utility::string_t", paramOutPath);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "outPath", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "outPath", "utility::string_t", paramOutPath);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvertAndSave", "outPath", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertAndSaveInvalidPassword) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvertAndSave", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvertAndSave", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startConvertAndSave", "outPath", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvertAndSave", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvertAndSave", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvertAndSave", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvertAndSave", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>");
	paramPassword = utils->getInvalidTestValue("startConvertAndSave", "password", "utility::string_t", paramPassword);
	utils->initialize("startConvertAndSave", "password", "utility::string_t", paramPassword);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvertAndSave(paramDocument, paramFormat, paramOutPath, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "password", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "password", "utility::string_t", paramPassword);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "password", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "password", "utility::string_t", paramPassword);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvertAndSave", "password", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertAndSaveInvalidStorage) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvertAndSave", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvertAndSave", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startConvertAndSave", "outPath", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvertAndSave", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvertAndSave", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvertAndSave", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvertAndSave", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>");
	paramStorage = utils->getInvalidTestValue("startConvertAndSave", "storage", "utility::string_t", paramStorage);
	utils->initialize("startConvertAndSave", "storage", "utility::string_t", paramStorage);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvertAndSave(paramDocument, paramFormat, paramOutPath, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "storage", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "storage", "utility::string_t", paramStorage);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "storage", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "storage", "utility::string_t", paramStorage);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvertAndSave", "storage", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertAndSaveInvalidFontsFolder) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvertAndSave", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvertAndSave", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startConvertAndSave", "outPath", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvertAndSave", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvertAndSave", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvertAndSave", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvertAndSave", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>");
	paramFontsFolder = utils->getInvalidTestValue("startConvertAndSave", "fontsFolder", "utility::string_t", paramFontsFolder);
	utils->initialize("startConvertAndSave", "fontsFolder", "utility::string_t", paramFontsFolder);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvertAndSave(paramDocument, paramFormat, paramOutPath, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "fontsFolder", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "fontsFolder", "utility::string_t", paramFontsFolder);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "fontsFolder", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "fontsFolder", "utility::string_t", paramFontsFolder);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvertAndSave", "fontsFolder", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertAndSaveInvalidSlides) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvertAndSave", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvertAndSave", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startConvertAndSave", "outPath", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvertAndSave", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvertAndSave", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvertAndSave", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvertAndSave", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>");
	paramSlides = utils->getInvalidIntVectorTestValue("startConvertAndSave", "slides", "std::vector<int32_t>", paramSlides);
	utils->initialize("startConvertAndSave", "slides", "std::vector<int32_t>", paramSlides);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvertAndSave(paramDocument, paramFormat, paramOutPath, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "slides", "std::vector<int32_t>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "slides", "std::vector<int32_t>", paramSlides);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "slides", "std::vector<int32_t>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "slides", "std::vector<int32_t>", paramSlides);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvertAndSave", "slides", "std::vector<int32_t>"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startConvertAndSaveInvalidOptions) {
	std::shared_ptr<HttpContent> paramDocument = utils->getBinaryTestValue("startConvertAndSave", "document", "std::shared_ptr<HttpContent>");
	utility::string_t paramFormat = utils->getTestValue("startConvertAndSave", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startConvertAndSave", "outPath", "utility::string_t");
	utility::string_t paramPassword = utils->getTestValue("startConvertAndSave", "password", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startConvertAndSave", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startConvertAndSave", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startConvertAndSave", "slides", "std::vector<int32_t>");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>");
	paramOptions = utils->getInvalidTestValueForClass<>("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>", paramOptions);
	utils->initialize("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>", paramOptions);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startConvertAndSave(paramDocument, paramFormat, paramOutPath, paramPassword, paramStorage, paramFontsFolder, paramSlides, paramOptions).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>", paramOptions);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>", paramOptions);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startConvertAndSave", "options", "std::shared_ptr<ExportOptions>"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startDownloadPresentation) {
	utility::string_t paramName = utils->getTestValue("startDownloadPresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startDownloadPresentation", "format", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startDownloadPresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startDownloadPresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startDownloadPresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startDownloadPresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startDownloadPresentation", "slides", "std::vector<int32_t>");
	utils->initialize("startDownloadPresentation", "", "");
	utility::string_t result = utils->getSlidesAsyncApi()->startDownloadPresentation(paramName, paramFormat, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).get();
	EXPECT_NE(L"", result);
}

TEST_F(SlidesAsyncApiTest, startDownloadPresentationInvalidName) {
	utility::string_t paramName = utils->getTestValue("startDownloadPresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startDownloadPresentation", "format", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startDownloadPresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startDownloadPresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startDownloadPresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startDownloadPresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startDownloadPresentation", "slides", "std::vector<int32_t>");
	paramName = utils->getInvalidTestValue("startDownloadPresentation", "name", "utility::string_t", paramName);
	utils->initialize("startDownloadPresentation", "name", "utility::string_t", paramName);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startDownloadPresentation(paramName, paramFormat, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "name", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "name", "utility::string_t", paramName);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "name", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "name", "utility::string_t", paramName);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startDownloadPresentation", "name", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startDownloadPresentationInvalidFormat) {
	utility::string_t paramName = utils->getTestValue("startDownloadPresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startDownloadPresentation", "format", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startDownloadPresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startDownloadPresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startDownloadPresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startDownloadPresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startDownloadPresentation", "slides", "std::vector<int32_t>");
	paramFormat = utils->getInvalidTestValue("startDownloadPresentation", "format", "utility::string_t", paramFormat);
	utils->initialize("startDownloadPresentation", "format", "utility::string_t", paramFormat);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startDownloadPresentation(paramName, paramFormat, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "format", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "format", "utility::string_t", paramFormat);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "format", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "format", "utility::string_t", paramFormat);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startDownloadPresentation", "format", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startDownloadPresentationInvalidOptions) {
	utility::string_t paramName = utils->getTestValue("startDownloadPresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startDownloadPresentation", "format", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startDownloadPresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startDownloadPresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startDownloadPresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startDownloadPresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startDownloadPresentation", "slides", "std::vector<int32_t>");
	paramOptions = utils->getInvalidTestValueForClass<>("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>", paramOptions);
	utils->initialize("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>", paramOptions);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startDownloadPresentation(paramName, paramFormat, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>", paramOptions);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>", paramOptions);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startDownloadPresentationInvalidPassword) {
	utility::string_t paramName = utils->getTestValue("startDownloadPresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startDownloadPresentation", "format", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startDownloadPresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startDownloadPresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startDownloadPresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startDownloadPresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startDownloadPresentation", "slides", "std::vector<int32_t>");
	paramPassword = utils->getInvalidTestValue("startDownloadPresentation", "password", "utility::string_t", paramPassword);
	utils->initialize("startDownloadPresentation", "password", "utility::string_t", paramPassword);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startDownloadPresentation(paramName, paramFormat, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "password", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "password", "utility::string_t", paramPassword);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "password", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "password", "utility::string_t", paramPassword);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startDownloadPresentation", "password", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startDownloadPresentationInvalidFolder) {
	utility::string_t paramName = utils->getTestValue("startDownloadPresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startDownloadPresentation", "format", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startDownloadPresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startDownloadPresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startDownloadPresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startDownloadPresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startDownloadPresentation", "slides", "std::vector<int32_t>");
	paramFolder = utils->getInvalidTestValue("startDownloadPresentation", "folder", "utility::string_t", paramFolder);
	utils->initialize("startDownloadPresentation", "folder", "utility::string_t", paramFolder);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startDownloadPresentation(paramName, paramFormat, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "folder", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "folder", "utility::string_t", paramFolder);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "folder", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "folder", "utility::string_t", paramFolder);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startDownloadPresentation", "folder", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startDownloadPresentationInvalidStorage) {
	utility::string_t paramName = utils->getTestValue("startDownloadPresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startDownloadPresentation", "format", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startDownloadPresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startDownloadPresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startDownloadPresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startDownloadPresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startDownloadPresentation", "slides", "std::vector<int32_t>");
	paramStorage = utils->getInvalidTestValue("startDownloadPresentation", "storage", "utility::string_t", paramStorage);
	utils->initialize("startDownloadPresentation", "storage", "utility::string_t", paramStorage);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startDownloadPresentation(paramName, paramFormat, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "storage", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "storage", "utility::string_t", paramStorage);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "storage", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "storage", "utility::string_t", paramStorage);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startDownloadPresentation", "storage", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startDownloadPresentationInvalidFontsFolder) {
	utility::string_t paramName = utils->getTestValue("startDownloadPresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startDownloadPresentation", "format", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startDownloadPresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startDownloadPresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startDownloadPresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startDownloadPresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startDownloadPresentation", "slides", "std::vector<int32_t>");
	paramFontsFolder = utils->getInvalidTestValue("startDownloadPresentation", "fontsFolder", "utility::string_t", paramFontsFolder);
	utils->initialize("startDownloadPresentation", "fontsFolder", "utility::string_t", paramFontsFolder);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startDownloadPresentation(paramName, paramFormat, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "fontsFolder", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "fontsFolder", "utility::string_t", paramFontsFolder);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "fontsFolder", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "fontsFolder", "utility::string_t", paramFontsFolder);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startDownloadPresentation", "fontsFolder", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startDownloadPresentationInvalidSlides) {
	utility::string_t paramName = utils->getTestValue("startDownloadPresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startDownloadPresentation", "format", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startDownloadPresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startDownloadPresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startDownloadPresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startDownloadPresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startDownloadPresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startDownloadPresentation", "slides", "std::vector<int32_t>");
	paramSlides = utils->getInvalidIntVectorTestValue("startDownloadPresentation", "slides", "std::vector<int32_t>", paramSlides);
	utils->initialize("startDownloadPresentation", "slides", "std::vector<int32_t>", paramSlides);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startDownloadPresentation(paramName, paramFormat, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "slides", "std::vector<int32_t>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "slides", "std::vector<int32_t>", paramSlides);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startDownloadPresentation", "slides", "std::vector<int32_t>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startDownloadPresentation", "slides", "std::vector<int32_t>", paramSlides);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startDownloadPresentation", "slides", "std::vector<int32_t>"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startMerge) {
	std::vector<std::shared_ptr<HttpContent>> paramFiles = utils->getBinArrayTestValue("startMerge", "files", "std::vector<std::shared_ptr<HttpContent>>");
	std::shared_ptr<OrderedMergeRequest> paramRequest = utils->getTestValueForClass<OrderedMergeRequest>("startMerge", "request", "std::shared_ptr<OrderedMergeRequest>");
	utility::string_t paramStorage = utils->getTestValue("startMerge", "storage", "utility::string_t");
	utils->initialize("startMerge", "", "");
	utility::string_t result = utils->getSlidesAsyncApi()->startMerge(paramFiles, paramRequest, paramStorage).get();
	EXPECT_NE(L"", result);
}

TEST_F(SlidesAsyncApiTest, startMergeInvalidFiles) {
	std::vector<std::shared_ptr<HttpContent>> paramFiles = utils->getBinArrayTestValue("startMerge", "files", "std::vector<std::shared_ptr<HttpContent>>");
	std::shared_ptr<OrderedMergeRequest> paramRequest = utils->getTestValueForClass<OrderedMergeRequest>("startMerge", "request", "std::shared_ptr<OrderedMergeRequest>");
	utility::string_t paramStorage = utils->getTestValue("startMerge", "storage", "utility::string_t");
	paramFiles = utils->getInvalidBinArrayTestValue("startMerge", "files", "std::vector<std::shared_ptr<HttpContent>>", paramFiles);
	utils->initialize("startMerge", "files", "std::vector<std::shared_ptr<HttpContent>>", paramFiles);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startMerge(paramFiles, paramRequest, paramStorage).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startMerge", "files", "std::vector<std::shared_ptr<HttpContent>>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startMerge", "files", "std::vector<std::shared_ptr<HttpContent>>", paramFiles);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startMerge", "files", "std::vector<std::shared_ptr<HttpContent>>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startMerge", "files", "std::vector<std::shared_ptr<HttpContent>>", paramFiles);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startMerge", "files", "std::vector<std::shared_ptr<HttpContent>>"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startMergeInvalidRequest) {
	std::vector<std::shared_ptr<HttpContent>> paramFiles = utils->getBinArrayTestValue("startMerge", "files", "std::vector<std::shared_ptr<HttpContent>>");
	std::shared_ptr<OrderedMergeRequest> paramRequest = utils->getTestValueForClass<OrderedMergeRequest>("startMerge", "request", "std::shared_ptr<OrderedMergeRequest>");
	utility::string_t paramStorage = utils->getTestValue("startMerge", "storage", "utility::string_t");
	paramRequest = utils->getInvalidTestValueForClass<>("startMerge", "request", "std::shared_ptr<OrderedMergeRequest>", paramRequest);
	utils->initialize("startMerge", "request", "std::shared_ptr<OrderedMergeRequest>", paramRequest);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startMerge(paramFiles, paramRequest, paramStorage).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startMerge", "request", "std::shared_ptr<OrderedMergeRequest>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startMerge", "request", "std::shared_ptr<OrderedMergeRequest>", paramRequest);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startMerge", "request", "std::shared_ptr<OrderedMergeRequest>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startMerge", "request", "std::shared_ptr<OrderedMergeRequest>", paramRequest);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startMerge", "request", "std::shared_ptr<OrderedMergeRequest>"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startMergeInvalidStorage) {
	std::vector<std::shared_ptr<HttpContent>> paramFiles = utils->getBinArrayTestValue("startMerge", "files", "std::vector<std::shared_ptr<HttpContent>>");
	std::shared_ptr<OrderedMergeRequest> paramRequest = utils->getTestValueForClass<OrderedMergeRequest>("startMerge", "request", "std::shared_ptr<OrderedMergeRequest>");
	utility::string_t paramStorage = utils->getTestValue("startMerge", "storage", "utility::string_t");
	paramStorage = utils->getInvalidTestValue("startMerge", "storage", "utility::string_t", paramStorage);
	utils->initialize("startMerge", "storage", "utility::string_t", paramStorage);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startMerge(paramFiles, paramRequest, paramStorage).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startMerge", "storage", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startMerge", "storage", "utility::string_t", paramStorage);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startMerge", "storage", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startMerge", "storage", "utility::string_t", paramStorage);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startMerge", "storage", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startMergeAndSave) {
	utility::string_t paramOutPath = utils->getTestValue("startMergeAndSave", "outPath", "utility::string_t");
	std::vector<std::shared_ptr<HttpContent>> paramFiles = utils->getBinArrayTestValue("startMergeAndSave", "files", "std::vector<std::shared_ptr<HttpContent>>");
	std::shared_ptr<OrderedMergeRequest> paramRequest = utils->getTestValueForClass<OrderedMergeRequest>("startMergeAndSave", "request", "std::shared_ptr<OrderedMergeRequest>");
	utility::string_t paramStorage = utils->getTestValue("startMergeAndSave", "storage", "utility::string_t");
	utils->initialize("startMergeAndSave", "", "");
	utility::string_t result = utils->getSlidesAsyncApi()->startMergeAndSave(paramOutPath, paramFiles, paramRequest, paramStorage).get();
	EXPECT_NE(L"", result);
}

TEST_F(SlidesAsyncApiTest, startMergeAndSaveInvalidOutPath) {
	utility::string_t paramOutPath = utils->getTestValue("startMergeAndSave", "outPath", "utility::string_t");
	std::vector<std::shared_ptr<HttpContent>> paramFiles = utils->getBinArrayTestValue("startMergeAndSave", "files", "std::vector<std::shared_ptr<HttpContent>>");
	std::shared_ptr<OrderedMergeRequest> paramRequest = utils->getTestValueForClass<OrderedMergeRequest>("startMergeAndSave", "request", "std::shared_ptr<OrderedMergeRequest>");
	utility::string_t paramStorage = utils->getTestValue("startMergeAndSave", "storage", "utility::string_t");
	paramOutPath = utils->getInvalidTestValue("startMergeAndSave", "outPath", "utility::string_t", paramOutPath);
	utils->initialize("startMergeAndSave", "outPath", "utility::string_t", paramOutPath);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startMergeAndSave(paramOutPath, paramFiles, paramRequest, paramStorage).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startMergeAndSave", "outPath", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startMergeAndSave", "outPath", "utility::string_t", paramOutPath);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startMergeAndSave", "outPath", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startMergeAndSave", "outPath", "utility::string_t", paramOutPath);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startMergeAndSave", "outPath", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startMergeAndSaveInvalidFiles) {
	utility::string_t paramOutPath = utils->getTestValue("startMergeAndSave", "outPath", "utility::string_t");
	std::vector<std::shared_ptr<HttpContent>> paramFiles = utils->getBinArrayTestValue("startMergeAndSave", "files", "std::vector<std::shared_ptr<HttpContent>>");
	std::shared_ptr<OrderedMergeRequest> paramRequest = utils->getTestValueForClass<OrderedMergeRequest>("startMergeAndSave", "request", "std::shared_ptr<OrderedMergeRequest>");
	utility::string_t paramStorage = utils->getTestValue("startMergeAndSave", "storage", "utility::string_t");
	paramFiles = utils->getInvalidBinArrayTestValue("startMergeAndSave", "files", "std::vector<std::shared_ptr<HttpContent>>", paramFiles);
	utils->initialize("startMergeAndSave", "files", "std::vector<std::shared_ptr<HttpContent>>", paramFiles);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startMergeAndSave(paramOutPath, paramFiles, paramRequest, paramStorage).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startMergeAndSave", "files", "std::vector<std::shared_ptr<HttpContent>>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startMergeAndSave", "files", "std::vector<std::shared_ptr<HttpContent>>", paramFiles);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startMergeAndSave", "files", "std::vector<std::shared_ptr<HttpContent>>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startMergeAndSave", "files", "std::vector<std::shared_ptr<HttpContent>>", paramFiles);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startMergeAndSave", "files", "std::vector<std::shared_ptr<HttpContent>>"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startMergeAndSaveInvalidRequest) {
	utility::string_t paramOutPath = utils->getTestValue("startMergeAndSave", "outPath", "utility::string_t");
	std::vector<std::shared_ptr<HttpContent>> paramFiles = utils->getBinArrayTestValue("startMergeAndSave", "files", "std::vector<std::shared_ptr<HttpContent>>");
	std::shared_ptr<OrderedMergeRequest> paramRequest = utils->getTestValueForClass<OrderedMergeRequest>("startMergeAndSave", "request", "std::shared_ptr<OrderedMergeRequest>");
	utility::string_t paramStorage = utils->getTestValue("startMergeAndSave", "storage", "utility::string_t");
	paramRequest = utils->getInvalidTestValueForClass<>("startMergeAndSave", "request", "std::shared_ptr<OrderedMergeRequest>", paramRequest);
	utils->initialize("startMergeAndSave", "request", "std::shared_ptr<OrderedMergeRequest>", paramRequest);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startMergeAndSave(paramOutPath, paramFiles, paramRequest, paramStorage).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startMergeAndSave", "request", "std::shared_ptr<OrderedMergeRequest>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startMergeAndSave", "request", "std::shared_ptr<OrderedMergeRequest>", paramRequest);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startMergeAndSave", "request", "std::shared_ptr<OrderedMergeRequest>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startMergeAndSave", "request", "std::shared_ptr<OrderedMergeRequest>", paramRequest);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startMergeAndSave", "request", "std::shared_ptr<OrderedMergeRequest>"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startMergeAndSaveInvalidStorage) {
	utility::string_t paramOutPath = utils->getTestValue("startMergeAndSave", "outPath", "utility::string_t");
	std::vector<std::shared_ptr<HttpContent>> paramFiles = utils->getBinArrayTestValue("startMergeAndSave", "files", "std::vector<std::shared_ptr<HttpContent>>");
	std::shared_ptr<OrderedMergeRequest> paramRequest = utils->getTestValueForClass<OrderedMergeRequest>("startMergeAndSave", "request", "std::shared_ptr<OrderedMergeRequest>");
	utility::string_t paramStorage = utils->getTestValue("startMergeAndSave", "storage", "utility::string_t");
	paramStorage = utils->getInvalidTestValue("startMergeAndSave", "storage", "utility::string_t", paramStorage);
	utils->initialize("startMergeAndSave", "storage", "utility::string_t", paramStorage);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startMergeAndSave(paramOutPath, paramFiles, paramRequest, paramStorage).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startMergeAndSave", "storage", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startMergeAndSave", "storage", "utility::string_t", paramStorage);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startMergeAndSave", "storage", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startMergeAndSave", "storage", "utility::string_t", paramStorage);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startMergeAndSave", "storage", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startSavePresentation) {
	utility::string_t paramName = utils->getTestValue("startSavePresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startSavePresentation", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startSavePresentation", "outPath", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startSavePresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startSavePresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startSavePresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startSavePresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startSavePresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startSavePresentation", "slides", "std::vector<int32_t>");
	utils->initialize("startSavePresentation", "", "");
	utility::string_t result = utils->getSlidesAsyncApi()->startSavePresentation(paramName, paramFormat, paramOutPath, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).get();
	EXPECT_NE(L"", result);
}

TEST_F(SlidesAsyncApiTest, startSavePresentationInvalidName) {
	utility::string_t paramName = utils->getTestValue("startSavePresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startSavePresentation", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startSavePresentation", "outPath", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startSavePresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startSavePresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startSavePresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startSavePresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startSavePresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startSavePresentation", "slides", "std::vector<int32_t>");
	paramName = utils->getInvalidTestValue("startSavePresentation", "name", "utility::string_t", paramName);
	utils->initialize("startSavePresentation", "name", "utility::string_t", paramName);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startSavePresentation(paramName, paramFormat, paramOutPath, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "name", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "name", "utility::string_t", paramName);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "name", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "name", "utility::string_t", paramName);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startSavePresentation", "name", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startSavePresentationInvalidFormat) {
	utility::string_t paramName = utils->getTestValue("startSavePresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startSavePresentation", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startSavePresentation", "outPath", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startSavePresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startSavePresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startSavePresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startSavePresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startSavePresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startSavePresentation", "slides", "std::vector<int32_t>");
	paramFormat = utils->getInvalidTestValue("startSavePresentation", "format", "utility::string_t", paramFormat);
	utils->initialize("startSavePresentation", "format", "utility::string_t", paramFormat);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startSavePresentation(paramName, paramFormat, paramOutPath, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "format", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "format", "utility::string_t", paramFormat);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "format", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "format", "utility::string_t", paramFormat);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startSavePresentation", "format", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startSavePresentationInvalidOutPath) {
	utility::string_t paramName = utils->getTestValue("startSavePresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startSavePresentation", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startSavePresentation", "outPath", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startSavePresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startSavePresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startSavePresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startSavePresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startSavePresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startSavePresentation", "slides", "std::vector<int32_t>");
	paramOutPath = utils->getInvalidTestValue("startSavePresentation", "outPath", "utility::string_t", paramOutPath);
	utils->initialize("startSavePresentation", "outPath", "utility::string_t", paramOutPath);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startSavePresentation(paramName, paramFormat, paramOutPath, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "outPath", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "outPath", "utility::string_t", paramOutPath);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "outPath", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "outPath", "utility::string_t", paramOutPath);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startSavePresentation", "outPath", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startSavePresentationInvalidOptions) {
	utility::string_t paramName = utils->getTestValue("startSavePresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startSavePresentation", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startSavePresentation", "outPath", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startSavePresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startSavePresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startSavePresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startSavePresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startSavePresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startSavePresentation", "slides", "std::vector<int32_t>");
	paramOptions = utils->getInvalidTestValueForClass<>("startSavePresentation", "options", "std::shared_ptr<ExportOptions>", paramOptions);
	utils->initialize("startSavePresentation", "options", "std::shared_ptr<ExportOptions>", paramOptions);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startSavePresentation(paramName, paramFormat, paramOutPath, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "options", "std::shared_ptr<ExportOptions>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "options", "std::shared_ptr<ExportOptions>", paramOptions);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "options", "std::shared_ptr<ExportOptions>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "options", "std::shared_ptr<ExportOptions>", paramOptions);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startSavePresentation", "options", "std::shared_ptr<ExportOptions>"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startSavePresentationInvalidPassword) {
	utility::string_t paramName = utils->getTestValue("startSavePresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startSavePresentation", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startSavePresentation", "outPath", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startSavePresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startSavePresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startSavePresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startSavePresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startSavePresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startSavePresentation", "slides", "std::vector<int32_t>");
	paramPassword = utils->getInvalidTestValue("startSavePresentation", "password", "utility::string_t", paramPassword);
	utils->initialize("startSavePresentation", "password", "utility::string_t", paramPassword);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startSavePresentation(paramName, paramFormat, paramOutPath, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "password", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "password", "utility::string_t", paramPassword);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "password", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "password", "utility::string_t", paramPassword);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startSavePresentation", "password", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startSavePresentationInvalidFolder) {
	utility::string_t paramName = utils->getTestValue("startSavePresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startSavePresentation", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startSavePresentation", "outPath", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startSavePresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startSavePresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startSavePresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startSavePresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startSavePresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startSavePresentation", "slides", "std::vector<int32_t>");
	paramFolder = utils->getInvalidTestValue("startSavePresentation", "folder", "utility::string_t", paramFolder);
	utils->initialize("startSavePresentation", "folder", "utility::string_t", paramFolder);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startSavePresentation(paramName, paramFormat, paramOutPath, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "folder", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "folder", "utility::string_t", paramFolder);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "folder", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "folder", "utility::string_t", paramFolder);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startSavePresentation", "folder", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startSavePresentationInvalidStorage) {
	utility::string_t paramName = utils->getTestValue("startSavePresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startSavePresentation", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startSavePresentation", "outPath", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startSavePresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startSavePresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startSavePresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startSavePresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startSavePresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startSavePresentation", "slides", "std::vector<int32_t>");
	paramStorage = utils->getInvalidTestValue("startSavePresentation", "storage", "utility::string_t", paramStorage);
	utils->initialize("startSavePresentation", "storage", "utility::string_t", paramStorage);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startSavePresentation(paramName, paramFormat, paramOutPath, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "storage", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "storage", "utility::string_t", paramStorage);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "storage", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "storage", "utility::string_t", paramStorage);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startSavePresentation", "storage", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startSavePresentationInvalidFontsFolder) {
	utility::string_t paramName = utils->getTestValue("startSavePresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startSavePresentation", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startSavePresentation", "outPath", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startSavePresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startSavePresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startSavePresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startSavePresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startSavePresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startSavePresentation", "slides", "std::vector<int32_t>");
	paramFontsFolder = utils->getInvalidTestValue("startSavePresentation", "fontsFolder", "utility::string_t", paramFontsFolder);
	utils->initialize("startSavePresentation", "fontsFolder", "utility::string_t", paramFontsFolder);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startSavePresentation(paramName, paramFormat, paramOutPath, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "fontsFolder", "utility::string_t");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "fontsFolder", "utility::string_t", paramFontsFolder);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "fontsFolder", "utility::string_t");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "fontsFolder", "utility::string_t", paramFontsFolder);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startSavePresentation", "fontsFolder", "utility::string_t"))
	{
		FAIL() << "Must have failed";
	}
}

TEST_F(SlidesAsyncApiTest, startSavePresentationInvalidSlides) {
	utility::string_t paramName = utils->getTestValue("startSavePresentation", "name", "utility::string_t");
	utility::string_t paramFormat = utils->getTestValue("startSavePresentation", "format", "utility::string_t");
	utility::string_t paramOutPath = utils->getTestValue("startSavePresentation", "outPath", "utility::string_t");
	std::shared_ptr<ExportOptions> paramOptions = utils->getTestValueForClass<ExportOptions>("startSavePresentation", "options", "std::shared_ptr<ExportOptions>");
	utility::string_t paramPassword = utils->getTestValue("startSavePresentation", "password", "utility::string_t");
	utility::string_t paramFolder = utils->getTestValue("startSavePresentation", "folder", "utility::string_t");
	utility::string_t paramStorage = utils->getTestValue("startSavePresentation", "storage", "utility::string_t");
	utility::string_t paramFontsFolder = utils->getTestValue("startSavePresentation", "fontsFolder", "utility::string_t");
	std::vector<int32_t> paramSlides = utils->getIntVectorTestValue("startSavePresentation", "slides", "std::vector<int32_t>");
	paramSlides = utils->getInvalidIntVectorTestValue("startSavePresentation", "slides", "std::vector<int32_t>", paramSlides);
	utils->initialize("startSavePresentation", "slides", "std::vector<int32_t>", paramSlides);

	bool failed = true;
	try
	{
		utils->getSlidesAsyncApi()->startSavePresentation(paramName, paramFormat, paramOutPath, paramOptions, paramPassword, paramFolder, paramStorage, paramFontsFolder, paramSlides).wait();
		failed = false;
	}
	catch (ApiException ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "slides", "std::vector<int32_t>");
		EXPECT_EQ(code, ex.error_code().value());

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "slides", "std::vector<int32_t>", paramSlides);
		std::string contentString;
		std::ostringstream contentStream;
		contentStream << ex.getContent()->rdbuf();
		EXPECT_TRUE(boost::contains(contentStream.str(), message));
	}
	catch (std::invalid_argument ex)
	{
		int code = utils->getExpectedCode("startSavePresentation", "slides", "std::vector<int32_t>");
		EXPECT_EQ(code, 400);

		utility::string_t message = utils->getExpectedMessage("startSavePresentation", "slides", "std::vector<int32_t>", paramSlides);
		EXPECT_TRUE(boost::contains(ex.what(), message));
	}
	if (!failed && utils->mustFail("startSavePresentation", "slides", "std::vector<int32_t>"))
	{
		FAIL() << "Must have failed";
	}
}
