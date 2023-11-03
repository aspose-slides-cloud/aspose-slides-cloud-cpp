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
#include <boost/regex.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/thread/thread.hpp>

using namespace asposeslidescloud::api;

TestUtils::TestUtils()
{
	initRules();

	std::ifstream rulesFile("testConfig.json");
	std::string rulesString;
	std::ostringstream rulesStream;
	rulesStream << rulesFile.rdbuf();
	rulesString = rulesStream.str();
	web::json::value config = web::json::value::parse(utility::conversions::to_string_t(rulesString));
	std::shared_ptr<ApiConfiguration> configuration = std::make_shared<ApiConfiguration>();
	if (config.has_field(utility::conversions::to_string_t("ClientId")))
	{
		configuration->setAppSid(config[utility::conversions::to_string_t("ClientId")].as_string());
	}
	if (config.has_field(utility::conversions::to_string_t("ClientSecret")))
	{
		configuration->setAppKey(config[utility::conversions::to_string_t("ClientSecret")].as_string());
	}
	if (config.has_field(utility::conversions::to_string_t("BaseUrl")))
	{
		configuration->setBaseUrl(config[utility::conversions::to_string_t("BaseUrl")].as_string());
	}
	if (config.has_field(utility::conversions::to_string_t("AuthBaseUrl")))
	{
		configuration->setBaseAuthUrl(config[utility::conversions::to_string_t("AuthBaseUrl")].as_string());
	}
	if (config.has_field(utility::conversions::to_string_t("Debug")))
	{
		configuration->setDebug(config[utility::conversions::to_string_t("Debug")].as_bool());
	}
	m_SlidesApi = new SlidesApi(configuration);

	std::shared_ptr<ApiConfiguration> asyncConfiguration = std::make_shared<ApiConfiguration>();
	if (config.has_field(utility::conversions::to_string_t("ClientId")))
	{
		asyncConfiguration->setAppSid(config[utility::conversions::to_string_t("ClientId")].as_string());
	}
	if (config.has_field(utility::conversions::to_string_t("ClientSecret")))
	{
		asyncConfiguration->setAppKey(config[utility::conversions::to_string_t("ClientSecret")].as_string());
	}
	if (config.has_field(utility::conversions::to_string_t("AsyncBaseUrl")))
	{
		asyncConfiguration->setBaseUrl(config[utility::conversions::to_string_t("AsyncBaseUrl")].as_string());
	}
	if (config.has_field(utility::conversions::to_string_t("AuthBaseUrl")))
	{
		asyncConfiguration->setBaseAuthUrl(config[utility::conversions::to_string_t("AuthBaseUrl")].as_string());
	}
	if (config.has_field(utility::conversions::to_string_t("Debug")))
	{
		asyncConfiguration->setDebug(config[utility::conversions::to_string_t("Debug")].as_bool());
	}
	m_SlidesAsyncApi = new SlidesAsyncApi(asyncConfiguration);

	initTestFiles();
}

TestUtils::~TestUtils()
{
}

void TestUtils::initialize(std::string functionName, std::string parameterName, std::string parameterType)
{
	initialize(functionName, parameterName, parameterType, L"");
}

void TestUtils::initialize(std::string functionName, std::string parameterName, std::string parameterType, int32_t parameterValue)
{
	initialize(functionName, parameterName, parameterType, L"");
}

void TestUtils::initialize(std::string functionName, std::string parameterName, std::string parameterType, std::vector<int32_t> parameterValue)
{
	initialize(functionName, parameterName, parameterType, L"");
}

void TestUtils::initialize(std::string functionName, std::string parameterName, std::string parameterType, std::vector<std::shared_ptr<HttpContent>> parameterValue)
{
	initialize(functionName, parameterName, parameterType, L"");
}

void TestUtils::initialize(std::string functionName, std::string parameterName, std::string parameterType, utility::string_t parameterValue)
{
	std::map<utility::string_t, web::json::value> files;
	for (web::json::value rule : m_rules[utility::conversions::to_string_t("Files")].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName, parameterType))
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
			m_SlidesApi->copyFile(utility::conversions::to_string_t("TempTests/") + kvp.second[utility::conversions::to_string_t("ActualName")].as_string(), kvp.first).wait();
		}
		else if (boost::iequals(action, "Delete"))
		{
			m_SlidesApi->deleteFile(kvp.first).wait();
		}
	}
}

void TestUtils::ensureOperationId()
{
	if (s_operationId.empty())
	{
		std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
		data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
		s_operationId = m_SlidesAsyncApi->startConvert(data, L"pdf", L"password").get();
		boost::this_thread::sleep(boost::posix_time::seconds(10));
	}
}

SlidesApi* TestUtils::getSlidesApi()
{
	return m_SlidesApi;
}

SlidesAsyncApi* TestUtils::getSlidesAsyncApi()
{
	return m_SlidesAsyncApi;
}

bool TestUtils::mustFail(std::string functionName, std::string parameterName, std::string parameterType)
{
	for (web::json::value rule : m_rules[utility::conversions::to_string_t("OKToNotFail")].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName, parameterType))
		{
			return false;
		}
	}
	return true;
}

bool TestUtils::getBoolTestValue(std::string functionName, std::string parameterName, std::string parameterType)
{
	web::json::value* value = getTestJsonValue(functionName, parameterName, parameterType);
	if (value == nullptr || value->is_null())
	{
		return true;
	}
	return value->as_bool();
}

boost::optional<bool> TestUtils::getOptionalBoolTestValue(std::string functionName, std::string parameterName, std::string parameterType)
{
	web::json::value* value = getTestJsonValue(functionName, parameterName, parameterType);
	boost::optional<bool> boolValue = boost::optional<bool>();
	if (value != nullptr && !value->is_null())
	{
		boolValue = value->as_bool();
	}
	return boolValue;
}

int32_t TestUtils::getIntTestValue(std::string functionName, std::string parameterName, std::string parameterType)
{
	return std::stoi(getTestValue(functionName, parameterName, parameterType));
}

boost::optional<int32_t> TestUtils::getOptionalIntTestValue(std::string functionName, std::string parameterName, std::string parameterType)
{
	web::json::value* value = getTestJsonValue(functionName, parameterName, parameterType);
	boost::optional<int32_t> intValue = boost::optional<int32_t>();
	if (value != nullptr && !value->is_null())
	{
		intValue = value->as_integer();
	}
	return intValue;
}

std::vector<int32_t> TestUtils::getIntVectorTestValue(std::string functionName, std::string parameterName, std::string parameterType)
{
	std::vector<int> value;
	web::json::value* jsonValue = getTestJsonValue(functionName, parameterName, parameterType);
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

double TestUtils::getDoubleTestValue(std::string functionName, std::string parameterName, std::string parameterType)
{
	return 1;
}

boost::optional<double> TestUtils::getOptionalDoubleTestValue(std::string functionName, std::string parameterName, std::string parameterType)
{
	return boost::optional<double>();
}

std::shared_ptr<HttpContent> TestUtils::getBinaryTestValue(std::string functionName, std::string parameterName, std::string parameterType)
{
	std::shared_ptr<HttpContent> uploadContent = std::make_shared<HttpContent>();
	utility::string_t path = L"TestData/" + getTestValue(functionName, parameterName, parameterType);
	uploadContent->setData(std::make_shared<std::ifstream>(path, std::ios::binary));
	return uploadContent;
}

std::vector<std::shared_ptr<HttpContent>> TestUtils::getBinArrayTestValue(std::string functionName, std::string parameterName, std::string parameterType)
{
	std::vector<std::shared_ptr<HttpContent>> value;
	utility::string_t testValue = getTestValue(functionName, parameterName, parameterType);
	std::vector<utility::string_t> paths;
	boost::split(paths, testValue, boost::is_any_of(","));
	for (std::vector<utility::string_t>::iterator it = paths.begin(); it != paths.end(); ++it)
	{
		std::shared_ptr<HttpContent> uploadContent = std::make_shared<HttpContent>();
		utility::string_t path = L"TestData/" + *it;
		uploadContent->setData(std::make_shared<std::ifstream>(path, std::ios::binary));
		value.push_back(uploadContent);
	}
	return value;
}

utility::string_t TestUtils::getTestValue(std::string functionName, std::string parameterName, std::string parameterType)
{
	utility::string_t value = L"";
	for (web::json::value rule : m_rules[utility::conversions::to_string_t("Values")].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName, parameterType) && rule.has_field(L"Value"))
		{
			web::json::value jsonValue = rule[utility::conversions::to_string_t("Value")];
			if (jsonValue.is_null())
			{
				value = utility::conversions::to_string_t("");
			}
			else if (jsonValue.is_string())
			{
				value = jsonValue.as_string();
				if (value == L"#OperationId")
				{
					ensureOperationId();
					return s_operationId;
				}
				if (boost::algorithm::starts_with(value, L"@"))
				{
					value = value.substr(1, value.length() - 1);
					if (boost::algorithm::starts_with(value, L"("))
					{
						value = value.substr(1, value.length() - 2);
					}
				}
			}
			else
			{
				value = jsonValue.serialize();
			}
		}
	}
	boost::replace_all(value, "%n", parameterName);
	return value;
}

web::json::value* TestUtils::getTestJsonValue(std::string functionName, std::string parameterName, std::string parameterType)
{
	web::json::value* value = nullptr;
	for (web::json::value& rule : m_rules[L"Values"].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName, parameterType) && rule.has_field(L"Value"))
		{
			value = &rule[L"Value"];
		}
	}
	return value;
}

boost::optional<bool> TestUtils::getInvalidBoolTestValue(std::string functionName, std::string parameterName, std::string parameterType, boost::optional<bool> value)
{
	return false;
}

boost::optional<int32_t> TestUtils::getInvalidIntTestValue(std::string functionName, std::string parameterName, std::string parameterType, boost::optional<int32_t> value)
{
	web::json::value* ivalueJson = getInvalidTestValue(functionName, parameterName, parameterType);
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

std::shared_ptr<HttpContent> TestUtils::getInvalidBinaryTestValue(std::string functionName, std::string parameterName, std::string parameterType, std::shared_ptr<HttpContent> value)
{
	return nullptr;
}

std::vector<std::shared_ptr<HttpContent>> TestUtils::getInvalidBinArrayTestValue(std::string functionName, std::string parameterName, std::string parameterType, std::vector<std::shared_ptr<HttpContent>> value)
{
	return value;
}

std::vector<int32_t> TestUtils::getInvalidIntVectorTestValue(std::string functionName, std::string parameterName, std::string parameterType, std::vector<int32_t> value)
{
	web::json::value* jsonValue = getInvalidTestValue(functionName, parameterName, parameterType);
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

boost::optional<double> TestUtils::getInvalidDoubleTestValue(std::string functionName, std::string parameterName, std::string parameterType, boost::optional<double> value)
{
	web::json::value* ivalueJson = getInvalidTestValue(functionName, parameterName, parameterType);
	if (ivalueJson == nullptr)
	{
		return value;
	}
	else if (ivalueJson->is_null())
	{
		return 0;
	}
	else if (ivalueJson->is_double())
	{
		return ivalueJson->as_double();
	}
	return ivalueJson->as_integer();
}

utility::string_t TestUtils::getInvalidTestValue(std::string functionName, std::string parameterName, std::string parameterType, utility::string_t value)
{
	web::json::value* ivalueJson = getInvalidTestValue(functionName, parameterName, parameterType);
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
		if (ivalue == L"#NewId")
		{
			return L"e1613f6e-3cf0-4a40-a7b4-2575eb6529b0";
		}
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

web::json::value* TestUtils::getInvalidTestValue(std::string functionName, std::string parameterName, std::string parameterType)
{
	web::json::value* ivalue = nullptr;
	for (web::json::value& rule : m_rules[L"Values"].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName, parameterType) && rule.has_field(L"InvalidValue"))
		{
			ivalue = &rule[L"InvalidValue"];
		}
	}
	return ivalue;
}

int TestUtils::getExpectedCode(std::string functionName, std::string parameterName, std::string parameterType)
{
	int code = 0;
	for (web::json::value rule : m_rules[L"Results"].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName, parameterType) && rule.has_field(L"Code"))
		{
			code = rule[L"Code"].as_integer();
		}
	}
	return code;
}

utility::string_t TestUtils::getExpectedMessage(std::string functionName, std::string parameterName, std::string parameterType, int32_t value)
{
	std::stringstream valueAsStringStream;
	valueAsStringStream << value;
	return getExpectedMessage(functionName, parameterName, parameterType, utility::conversions::to_string_t(valueAsStringStream.str()));
}

utility::string_t TestUtils::getExpectedMessage(std::string functionName, std::string parameterName, std::string parameterType, std::vector<int32_t> value)
{
	return getExpectedMessage(functionName, parameterName, parameterType, L"");
}

utility::string_t TestUtils::getExpectedMessage(std::string functionName, std::string parameterName, std::string parameterType, std::vector<std::shared_ptr<HttpContent>> value)
{
	return getExpectedMessage(functionName, parameterName, parameterType, L"");
}

utility::string_t TestUtils::getExpectedMessage(std::string functionName, std::string parameterName, std::string parameterType, utility::string_t value)
{
	utility::string_t message = L"Unexpected message";
	for (web::json::value rule : m_rules[L"Results"].as_array())
	{
		if (isGoodRule(rule, functionName, parameterName, parameterType) && rule.has_field(L"Message"))
		{
			message = rule[L"Message"].as_string();
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
		m_SlidesApi->downloadFile(utility::conversions::to_string_t("TempTests/version.txt")).get().writeTo(versionStream);
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
			m_SlidesApi->uploadFile(utility::conversions::to_string_t("TempTests/" + itr->path().filename().string()), uploadContent).wait();
		}
		std::shared_ptr<HttpContent> uploadContent = std::make_shared<HttpContent>();
		uploadContent->setData(std::make_shared<std::stringstream>(TEST_DATA_VERSION));
		m_SlidesApi->uploadFile(utility::conversions::to_string_t("TempTests/version.txt"), uploadContent).wait();
	}
}

bool TestUtils::isGoodRule(web::json::value rule, std::string functionName, std::string parameterName, std::string parameterType)
{
	return isGoodRuleKey(rule, L"Parameter", parameterName)
		&& (!rule.has_field(utility::conversions::to_string_t("Invalid"))
			|| (rule[utility::conversions::to_string_t("Invalid")].as_bool() != parameterName.empty()))
		&& isGoodRuleKey(rule, L"Method", functionName)
		&& isGoodRuleKey(rule, L"Language", "C++")
		&& isGoodRuleType(rule, parameterType);
}

bool TestUtils::isGoodRuleKey(web::json::value rule, utility::string_t key, std::string parameterValue)
{
	if (!rule.has_field(key)) return true;
	utility::string_t value = rule[key].as_string();
	if (boost::algorithm::starts_with(value, L"/") && boost::algorithm::ends_with(value, L"/"))
	{
		value = value.substr(1, value.length() - 2);
		boost::regex expression(utility::conversions::to_utf8string(value), boost::regex::icase);
		return boost::regex_search(parameterValue, expression);
	}
	return boost::iequals(value, parameterValue);
}

bool TestUtils::isGoodRuleType(web::json::value rule, std::string parameterType)
{
	if (!rule.has_field(L"Type")) return true;
	utility::string_t ruleType = rule[L"Type"].as_string();
	if (boost::iequals(ruleType, "number")) return boost::iequals(parameterType, "int32_t") || boost::iequals(parameterType, "double");
	if (boost::iequals(ruleType, "int")) return boost::iequals(parameterType, "int32_t");
	if (boost::iequals(ruleType, "bool")) return boost::iequals(parameterType, "bool");
	if (boost::iequals(ruleType, "int[]")) return boost::iequals(parameterType, "std::vector<int32_t>");
	if (boost::iequals(ruleType, "stream")) return boost::iequals(parameterType, "std::shared_ptr<HttpContent>");
	if (boost::iequals(ruleType, "stream[]")) return boost::iequals(parameterType, "std::vector<std::shared_ptr<HttpContent>>");
	if (boost::iequals(ruleType, "model")) return boost::algorithm::starts_with(parameterType, L"std::shared_ptr") && !boost::iequals(parameterType, "std::shared_ptr<HttpContent>");
	if (ClassRegistry::isClass(ruleType)) return boost::algorithm::starts_with(parameterType, L"std::shared_ptr") && ClassRegistry::isSubclass(ruleType, utility::conversions::to_string_t(parameterType.substr(16, parameterType.length() - 17)));
	return false;
}

utility::string_t TestUtils::getFileDataAsBase64(utility::string_t path)
{
	std::ifstream infile;
	infile.open(path, std::ios::binary);
	infile.seekg(0, std::ios::end);
	size_t file_size_in_byte = infile.tellg();
	std::vector<char> data; // used to store text data
	data.resize(file_size_in_byte);
	infile.seekg(0, std::ios::beg);
	infile.read(&data[0], file_size_in_byte);
	std::vector<unsigned char> udata(data.begin(), data.end());
	return utility::conversions::to_base64(udata);
}

utility::string_t TestUtils::s_operationId;
const std::string TestUtils::TEST_DATA_VERSION = "1";
