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

#include "TestUtils.h"
#include <boost/filesystem.hpp>

using namespace asposeslidescloud::api;

TestUtils::TestUtils(SlidesApi* api)
{
	initRules();
	m_api = api;
	initTestFiles();
}

TestUtils::~TestUtils()
{
}

void TestUtils::initialize(std::string functionName, std::string parameterName)
{
	initialize(functionName, parameterName, utility::conversions::to_string_t(""));
}

void TestUtils::initialize(std::string functionName, std::string parameterName, bool parameterValue)
{
	initialize(functionName, parameterName, utility::conversions::to_string_t(""));
}

void TestUtils::initialize(std::string functionName, std::string parameterName, std::vector<int32_t> parameterValue)
{
	initialize(functionName, parameterName, utility::conversions::to_string_t(""));
}

void TestUtils::initialize(std::string functionName, std::string parameterName, std::vector<utility::string_t> parameterValue)
{
	initialize(functionName, parameterName, utility::conversions::to_string_t(""));
}

void TestUtils::initialize(std::string functionName, std::string parameterName, utility::string_t parameterValue)
{
	std::map<utility::string_t, web::json::value> files;
	for (web::json::value rule : m_rules[utility::conversions::to_string_t("Files")].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName))
		{
			utility::string_t actualName = rule[utility::conversions::to_string_t("File")].as_string();
			boost::replace_all(actualName, "%v", parameterValue);
			utility::string_t path = utility::conversions::to_string_t("TempSlidesSDK");
			if (rule.has_field(utility::conversions::to_string_t("Folder")))
			{
				path = rule[utility::conversions::to_string_t("Folder")].as_string();
				boost::replace_all(path, "%v", parameterValue);
			}
			path = path + utility::conversions::to_string_t("/") + actualName;
			files[path] = rule;
			files[path][utility::conversions::to_string_t("ActualName")] = web::json::value::string(actualName);
		}
	}
	for (auto& kvp : files)
	{
		utility::string_t action = kvp.second[utility::conversions::to_string_t("Action")].as_string();
		if (boost::iequals(action, "Put"))
		{
			std::shared_ptr<CopyFileRequest> copyRequest = std::make_shared<CopyFileRequest>();
			copyRequest->setSrcPath(
				utility::conversions::to_string_t("TempTests/") + kvp.second[utility::conversions::to_string_t("ActualName")].as_string());
			copyRequest->setDestPath(kvp.first);
			m_api->copyFile(copyRequest).wait();
		}
		else if (boost::iequals(action, "Delete"))
		{
			std::shared_ptr<DeleteFileRequest> deleteRequest = std::make_shared<DeleteFileRequest>();
			deleteRequest->setPath(kvp.first);
			m_api->deleteFile(deleteRequest).wait();
		}
	}
}

bool TestUtils::mustFail(std::string functionName, std::string parameterName)
{
	for (web::json::value rule : m_rules[utility::conversions::to_string_t("OKToNotFail")].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName))
		{
			return false;
		}
	}
	return true;
}

bool TestUtils::getBoolTestValue(std::string functionName, std::string parameterName)
{
	web::json::value* value = getTestJsonValue(functionName, parameterName);
	if (value == nullptr || value->is_null())
	{
		return true;
	}
	return value->as_bool();
}

bool* TestUtils::getOptionalBoolTestValue(std::string functionName, std::string parameterName)
{
	web::json::value* value = getTestJsonValue(functionName, parameterName);
	if (value == nullptr || value->is_null())
	{
		return nullptr;
	}
	bool* boolValue;
	boolValue = new bool(value->as_bool());
	return boolValue;
}

int32_t TestUtils::getIntTestValue(std::string functionName, std::string parameterName)
{
	return std::stoi(getTestValue(functionName, parameterName));
}

int32_t* TestUtils::getOptionalIntTestValue(std::string functionName, std::string parameterName)
{
	web::json::value* value = getTestJsonValue(functionName, parameterName);
	if (value == nullptr || value->is_null())
	{
		return nullptr;
	}
	int32_t* intValue;
	intValue = new int32_t(value->as_integer());
	return intValue;
}

std::vector<int32_t> TestUtils::getIntVectorTestValue(std::string functionName, std::string parameterName)
{
	std::vector<int> value;
	web::json::value* jsonValue = getTestJsonValue(functionName, parameterName);
	if (jsonValue != nullptr && jsonValue->is_array())
	{
		web::json::array jsonArray = jsonValue->as_array();
		for (auto el = jsonArray.cbegin(); el != jsonArray.cend(); ++el)
		{
			value.push_back(el->as_integer());
		}
	}
	return value;
}

double TestUtils::getDoubleTestValue(std::string functionName, std::string parameterName)
{
	return 1;
}

double* TestUtils::getOptionalDoubleTestValue(std::string functionName, std::string parameterName)
{
	return nullptr;
}

std::shared_ptr<HttpContent> TestUtils::getBinaryTestValue(std::string functionName, std::string parameterName)
{
	std::shared_ptr<HttpContent> uploadContent = std::make_shared<HttpContent>();
	utility::string_t path = utility::conversions::to_string_t("TestData/test.pptx");
	if (boost::iequals(utility::conversions::to_string_t("PostSlidesDocumentFromPdf"), functionName)) {
		path = utility::conversions::to_string_t("TestData/test.pdf");
	}
	uploadContent->setData(std::make_shared<std::ifstream>(path, std::ios::binary));
	return uploadContent;
}

std::vector<utility::string_t> TestUtils::getBinArrayTestValue(std::string functionName, std::string parameterName)
{
	std::vector<utility::string_t> value;
	return value;
}

utility::string_t TestUtils::getTestValue(std::string functionName, std::string parameterName)
{
	utility::string_t value = utility::conversions::to_string_t("testValue");
	for (web::json::value rule : m_rules[utility::conversions::to_string_t("Values")].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName) && rule.has_field(utility::conversions::to_string_t("Value")))
		{
			web::json::value jsonValue = rule[utility::conversions::to_string_t("Value")];
			if (jsonValue.is_null())
			{
				value = utility::conversions::to_string_t("");
			}
			else if (jsonValue.is_string())
			{
				value = jsonValue.as_string();
			}
			else
			{
				value = jsonValue.serialize();
			}
		}
	}
	return value;
}

web::json::value* TestUtils::getTestJsonValue(std::string functionName, std::string parameterName)
{
	web::json::value* value = nullptr;
	for (web::json::value& rule : m_rules[utility::conversions::to_string_t("Values")].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName) && rule.has_field(utility::conversions::to_string_t("Value")))
		{
			value = &rule[utility::conversions::to_string_t("Value")];
		}
	}
	return value;
}

bool TestUtils::getInvalidBoolTestValue(std::string functionName, std::string parameterName, bool value)
{
	return true;
}

int32_t TestUtils::getInvalidIntTestValue(std::string functionName, std::string parameterName, int32_t value)
{
	web::json::value* ivalueJson = getInvalidTestValue(functionName, parameterName);
	if (ivalueJson == nullptr)
	{
		return value;
	}
	else if (ivalueJson->is_null())
	{
		return 0;
	}
	return ivalueJson->as_integer();
}

std::shared_ptr<HttpContent> TestUtils::getInvalidBinaryTestValue(std::string functionName, std::string parameterName, std::shared_ptr<HttpContent> value)
{
	return nullptr;
}

std::vector<utility::string_t> TestUtils::getInvalidBinArrayTestValue(std::string functionName, std::string parameterName, std::vector<utility::string_t> value)
{
	return value;
}

std::vector<int32_t> TestUtils::getInvalidIntVectorTestValue(std::string functionName, std::string parameterName, std::vector<int32_t> value)
{
	web::json::value* jsonValue = getInvalidTestValue(functionName, parameterName);
	if (jsonValue != nullptr)
	{
		std::vector<int> ivalue;
		if (jsonValue->is_array())
		{
			web::json::array jsonArray = jsonValue->as_array();
			for (auto el = jsonArray.cbegin(); el != jsonArray.cend(); ++el)
			{
				ivalue.push_back(el->as_integer());
			}
		}
		return ivalue;
	}
	return value;
}

double TestUtils::getInvalidDoubleTestValue(std::string functionName, std::string parameterName, double value)
{
	return 1;
}

utility::string_t TestUtils::getInvalidTestValue(std::string functionName, std::string parameterName, utility::string_t value)
{
	web::json::value* ivalueJson = getInvalidTestValue(functionName, parameterName);
	if (ivalueJson == nullptr)
	{
		return value;
	}
	else if (ivalueJson->is_null())
	{
		return utility::conversions::to_string_t("");
	}
	utility::string_t ivalue = ivalueJson->as_string();
	boost::replace_all(ivalue, "%v", value);
	return ivalue;
}

web::json::value* TestUtils::getInvalidTestValue(std::string functionName, std::string parameterName)
{
	web::json::value* ivalue = nullptr;
	for (web::json::value& rule : m_rules[utility::conversions::to_string_t("Values")].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName) && rule.has_field(utility::conversions::to_string_t("InvalidValue")))
		{
			ivalue = &rule[utility::conversions::to_string_t("InvalidValue")];
		}
	}
	return ivalue;
}

int TestUtils::getExpectedCode(std::string functionName, std::string parameterName)
{
	int code = 0;
	for (web::json::value rule : m_rules[utility::conversions::to_string_t("Results")].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName) && rule.has_field(utility::conversions::to_string_t("Code")))
		{
			code = rule[utility::conversions::to_string_t("Code")].as_integer();
		}
	}
	return code;
}

utility::string_t TestUtils::getExpectedMessage(std::string functionName, std::string parameterName, int32_t value)
{
	std::stringstream valueAsStringStream;
	valueAsStringStream << value;
	return getExpectedMessage(functionName, parameterName, utility::conversions::to_string_t(valueAsStringStream.str()));
}

utility::string_t TestUtils::getExpectedMessage(std::string functionName, std::string parameterName, std::vector<int32_t> value)
{
	return getExpectedMessage(functionName, parameterName, utility::conversions::to_string_t(""));
}

utility::string_t TestUtils::getExpectedMessage(std::string functionName, std::string parameterName, std::vector<utility::string_t> value)
{
	return getExpectedMessage(functionName, parameterName, utility::conversions::to_string_t(""));
}

utility::string_t TestUtils::getExpectedMessage(std::string functionName, std::string parameterName, utility::string_t value)
{
	utility::string_t message = utility::conversions::to_string_t("Unexpected message");
	for (web::json::value rule : m_rules[utility::conversions::to_string_t("Results")].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName) && rule.has_field(utility::conversions::to_string_t("Message")))
		{
			message = rule[utility::conversions::to_string_t("Message")].as_string();
		}
	}
	boost::replace_all(message, "%v", value);
	return message;
}

void TestUtils::initRules()
{
	std::ifstream rulesFile("testRules.json");
	std::string rulesString;
	std::ostringstream rulesStream;
	rulesStream << rulesFile.rdbuf();
	rulesString = rulesStream.str();
	m_rules = web::json::value::parse(utility::conversions::to_string_t(rulesString));
}

void TestUtils::initTestFiles()
{
	std::shared_ptr<DownloadFileRequest> downloadRequest = std::make_shared<DownloadFileRequest>();
	downloadRequest->setPath(utility::conversions::to_string_t("TempTests/version.txt"));
	std::string version = "";
	std::ostringstream versionStream;
	try {
		m_api->downloadFile(downloadRequest).get().writeTo(versionStream);
		version = versionStream.str();
	}
	catch (...) {
		//ignore the exception: it just means that version file is not there
	}
	if (version != TEST_DATA_VERSION)
	{
		boost::filesystem::path p("TestData");
		boost::filesystem::directory_iterator end_itr;
		for (boost::filesystem::directory_iterator itr(p); itr != end_itr; ++itr)
		{
			std::shared_ptr<UploadFileRequest> uploadRequest = std::make_shared<UploadFileRequest>();
			uploadRequest->setPath(utility::conversions::to_string_t("TempTests/" + itr->path().filename().string()));
			std::shared_ptr<HttpContent> uploadContent = std::make_shared<HttpContent>();
			uploadContent->setData(std::make_shared<std::ifstream>(itr->path().string(), std::ios::binary));
			uploadRequest->setFile(uploadContent);
			m_api->uploadFile(uploadRequest).wait();
		}
		std::shared_ptr<UploadFileRequest> uploadRequest = std::make_shared<UploadFileRequest>();
		uploadRequest->setPath(utility::conversions::to_string_t("TempTests/version.txt"));
		std::shared_ptr<HttpContent> uploadContent = std::make_shared<HttpContent>();
		uploadContent->setData(std::make_shared<std::stringstream>(TEST_DATA_VERSION));
		uploadRequest->setFile(uploadContent);
		m_api->uploadFile(uploadRequest).wait();
	}
}

bool TestUtils::isGoodRule(web::json::value rule, std::string functionName, std::string parameterName)
{
	return (!rule.has_field(utility::conversions::to_string_t("Parameter"))
			|| boost::iequals(rule[utility::conversions::to_string_t("Parameter")].as_string(), parameterName))
		&& (!rule.has_field(utility::conversions::to_string_t("Invalid"))
			|| (rule[utility::conversions::to_string_t("Invalid")].as_bool() != parameterName.empty()))
		&& (!rule.has_field(utility::conversions::to_string_t("Method"))
			|| boost::iequals(rule[utility::conversions::to_string_t("Method")].as_string(), functionName))
		&& (!rule.has_field(utility::conversions::to_string_t("Language"))
			|| boost::iequals(rule[utility::conversions::to_string_t("Language")].as_string(), "CPP"));
}

const std::string TestUtils::TEST_DATA_VERSION = "1";
