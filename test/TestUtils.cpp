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

void TestUtils::initialize(std::string functionName, std::string parameterName, int32_t parameterValue)
{
	initialize(functionName, parameterName, utility::conversions::to_string_t(""));
}

void TestUtils::initialize(std::string functionName, std::string parameterName, std::vector<int32_t> parameterValue)
{
	initialize(functionName, parameterName, utility::conversions::to_string_t(""));
}

void TestUtils::initialize(std::string functionName, std::string parameterName, std::vector<std::shared_ptr<HttpContent>> parameterValue)
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
			m_api->copyFile(utility::conversions::to_string_t("TempTests/") + kvp.second[utility::conversions::to_string_t("ActualName")].as_string(), kvp.first).wait();
		}
		else if (boost::iequals(action, "Delete"))
		{
			m_api->deleteFile(kvp.first).wait();
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

boost::optional<bool> TestUtils::getOptionalBoolTestValue(std::string functionName, std::string parameterName)
{
	web::json::value* value = getTestJsonValue(functionName, parameterName);
	boost::optional<bool> boolValue = boost::optional<bool>();
	if (value != nullptr && !value->is_null())
	{
		boolValue = value->as_bool();
	}
	return boolValue;
}

int32_t TestUtils::getIntTestValue(std::string functionName, std::string parameterName)
{
	return std::stoi(getTestValue(functionName, parameterName));
}

boost::optional<int32_t> TestUtils::getOptionalIntTestValue(std::string functionName, std::string parameterName)
{
	web::json::value* value = getTestJsonValue(functionName, parameterName);
	boost::optional<int32_t> intValue = boost::optional<int32_t>();
	if (value != nullptr && !value->is_null())
	{
		intValue = value->as_integer();
	}
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

boost::optional<double> TestUtils::getOptionalDoubleTestValue(std::string functionName, std::string parameterName)
{
	return boost::optional<double>();
}

std::shared_ptr<HttpContent> TestUtils::getBinaryTestValue(std::string functionName, std::string parameterName)
{
	std::shared_ptr<HttpContent> uploadContent = std::make_shared<HttpContent>();
	utility::string_t path = utility::conversions::to_string_t("TestData/test.pptx");
	if (boost::iequals(utility::conversions::to_string_t("ImportFromPdf"), functionName)) {
		path = utility::conversions::to_string_t("TestData/test.pdf");
	} else if (boost::iequals(utility::conversions::to_string_t("image"), parameterName)) {
		path = utility::conversions::to_string_t("TestData/watermark.png");
	}
	uploadContent->setData(std::make_shared<std::ifstream>(path, std::ios::binary));
	return uploadContent;
}

std::vector<std::shared_ptr<HttpContent>> TestUtils::getBinArrayTestValue(std::string functionName, std::string parameterName)
{
	std::vector<std::shared_ptr<HttpContent>> value;
	std::shared_ptr<HttpContent> file1 = std::make_shared<HttpContent>();
	utility::string_t path = utility::conversions::to_string_t("TestData/test.pptx");
	file1->setData(std::make_shared<std::ifstream>(path, std::ios::binary));
	value.push_back(file1);
	std::shared_ptr<HttpContent> file2 = std::make_shared<HttpContent>();
	path = utility::conversions::to_string_t("TestData/test-unprotected.pptx");
	file2->setData(std::make_shared<std::ifstream>(path, std::ios::binary));
	value.push_back(file2);
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

boost::optional<bool> TestUtils::getInvalidBoolTestValue(std::string functionName, std::string parameterName, boost::optional<bool> value)
{
	return true;
}

boost::optional<int32_t> TestUtils::getInvalidIntTestValue(std::string functionName, std::string parameterName, boost::optional<int32_t> value)
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

std::vector<std::shared_ptr<HttpContent>> TestUtils::getInvalidBinArrayTestValue(std::string functionName, std::string parameterName, std::vector<std::shared_ptr<HttpContent>> value)
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

boost::optional<double> TestUtils::getInvalidDoubleTestValue(std::string functionName, std::string parameterName, boost::optional<double> value)
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
	else if (ivalueJson->is_string())
	{
		utility::string_t ivalue = ivalueJson->as_string();
		boost::replace_all(ivalue, "%v", value);
		return ivalue;
	}
	else
	{
		utility::string_t ivalue = ivalueJson->serialize();
		boost::replace_all(ivalue, "%v", value);
		return ivalue;
	}
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

utility::string_t TestUtils::getExpectedMessage(std::string functionName, std::string parameterName, std::vector<std::shared_ptr<HttpContent>> value)
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
	std::string version = "";
	std::ostringstream versionStream;
	try {
		m_api->downloadFile(utility::conversions::to_string_t("TempTests/version.txt")).get().writeTo(versionStream);
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
			std::shared_ptr<HttpContent> uploadContent = std::make_shared<HttpContent>();
			uploadContent->setData(std::make_shared<std::ifstream>(itr->path().string(), std::ios::binary));
			m_api->uploadFile(utility::conversions::to_string_t("TempTests/" + itr->path().filename().string()), uploadContent).wait();
		}
		std::shared_ptr<HttpContent> uploadContent = std::make_shared<HttpContent>();
		uploadContent->setData(std::make_shared<std::stringstream>(TEST_DATA_VERSION));
		m_api->uploadFile(utility::conversions::to_string_t("TempTests/version.txt"), uploadContent).wait();
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
