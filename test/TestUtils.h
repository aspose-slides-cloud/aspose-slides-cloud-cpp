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

#ifndef _TestUtils_H_
#define _TestUtils_H_

#include <boost/optional/optional_io.hpp>

#include "api/SlidesApi.h"
#include "model/ScatterChartDataPoint.h"

using namespace asposeslidescloud::api;

class TestUtils
{
public:
	TestUtils(SlidesApi* api);
	virtual ~TestUtils();

	void initialize(std::string functionName, std::string parameterName);
	void initialize(std::string functionName, std::string parameterName, int32_t parameterValue);
	void initialize(std::string functionName, std::string parameterName, std::vector<int32_t> parameterValue);
	void initialize(std::string functionName, std::string parameterName, std::vector<std::shared_ptr<HttpContent>> parameterValue);
	void initialize(std::string functionName, std::string parameterName, utility::string_t parameterValue);

	template<typename T>
	void initialize(std::string functionName, std::string parameterName, boost::optional<T> parameterValue);

	template<typename T>
	void initialize(std::string functionName, std::string parameterName, std::shared_ptr<T> parameterValue);

	bool mustFail(std::string functionName, std::string parameterName);

	bool getBoolTestValue(std::string functionName, std::string parameterName);
	boost::optional<bool> getOptionalBoolTestValue(std::string functionName, std::string parameterName);
	std::shared_ptr<HttpContent> getBinaryTestValue(std::string functionName, std::string parameterName);
	std::vector<std::shared_ptr<HttpContent>> getBinArrayTestValue(std::string functionName, std::string parameterName);
	int32_t getIntTestValue(std::string functionName, std::string parameterName);
	boost::optional<int32_t> getOptionalIntTestValue(std::string functionName, std::string parameterName);
	double getDoubleTestValue(std::string functionName, std::string parameterName);
	boost::optional<double> getOptionalDoubleTestValue(std::string functionName, std::string parameterName);
	std::vector<int32_t> getIntVectorTestValue(std::string functionName, std::string parameterName);
	utility::string_t getTestValue(std::string functionName, std::string parameterName);
	web::json::value* getTestJsonValue(std::string functionName, std::string parameterName);

	template<typename T>
	std::shared_ptr<T> getTestValueForClass(std::string functionName, std::string parameterName);

	boost::optional<bool> getInvalidBoolTestValue(std::string functionName, std::string parameterName, boost::optional<bool> value);
	std::shared_ptr<HttpContent> getInvalidBinaryTestValue(std::string functionName, std::string parameterName, std::shared_ptr<HttpContent> value);
	std::vector<std::shared_ptr<HttpContent>> getInvalidBinArrayTestValue(std::string functionName, std::string parameterName, std::vector<std::shared_ptr<HttpContent>> value);
	boost::optional<int32_t> getInvalidIntTestValue(std::string functionName, std::string parameterName, boost::optional<int32_t> value);
	std::vector<int32_t> getInvalidIntVectorTestValue(std::string functionName, std::string parameterName, std::vector<int32_t> value);
	boost::optional<double> getInvalidDoubleTestValue(std::string functionName, std::string parameterName, boost::optional<double> value);
	utility::string_t getInvalidTestValue(std::string functionName, std::string parameterName, utility::string_t value);
	web::json::value* getInvalidTestValue(std::string functionName, std::string parameterName);

	template<typename T>
	std::shared_ptr<T> getInvalidTestValueForClass(std::string functionName, std::string parameterName, std::shared_ptr<T> value);

	int getExpectedCode(std::string functionName, std::string parameterName);

	utility::string_t getExpectedMessage(std::string functionName, std::string parameterName, int32_t value);
	utility::string_t getExpectedMessage(std::string functionName, std::string parameterName, std::vector<int32_t> value);
	utility::string_t getExpectedMessage(std::string functionName, std::string parameterName, std::vector<std::shared_ptr<HttpContent>> value);
	utility::string_t getExpectedMessage(std::string functionName, std::string parameterName, utility::string_t value);

	template<typename T>
	utility::string_t getExpectedMessage(std::string functionName, std::string parameterName, std::shared_ptr<T> value);

	template<typename T>
	utility::string_t getExpectedMessage(std::string functionName, std::string parameterName, boost::optional<T> value);

private:
	void initRules();
	void initTestFiles();
	bool isGoodRule(web::json::value rule, std::string functionName, std::string parameterName);

	web::json::value m_rules;
	SlidesApi* m_api;

	static const std::string TEST_DATA_VERSION;
};

template<typename T>
void TestUtils::initialize(std::string functionName, std::string parameterName, std::shared_ptr<T> value)
{
	initialize(functionName, parameterName, utility::conversions::to_string_t(""));
}

template<typename T>
void TestUtils::initialize(std::string functionName, std::string parameterName, boost::optional<T> parameterValue)
{
	initialize(functionName, parameterName, utility::conversions::to_string_t(""));
}

template<typename T>
std::shared_ptr<T> TestUtils::getTestValueForClass(std::string functionName, std::string parameterName)
{
	web::json::value* jsonValue = getTestJsonValue(functionName, parameterName);
	if (jsonValue == nullptr)
	{
		return nullptr;
	}
	std::shared_ptr<T> value(new T());
	value->fromJson(*jsonValue);
	return value;
}

template<typename T>
std::shared_ptr<T> TestUtils::getInvalidTestValueForClass(std::string functionName, std::string parameterName, std::shared_ptr<T> value)
{
	return nullptr;
}

template<typename T>
utility::string_t TestUtils::getExpectedMessage(std::string functionName, std::string parameterName, std::shared_ptr<T> value)
{
	return getExpectedMessage(functionName, parameterName, utility::conversions::to_string_t(""));
}

template<typename T>
utility::string_t TestUtils::getExpectedMessage(std::string functionName, std::string parameterName, boost::optional<T> value)
{
	std::stringstream valueAsStringStream;
	valueAsStringStream << value;
	return getExpectedMessage(functionName, parameterName, utility::conversions::to_string_t(valueAsStringStream.str()));
}

#endif /* _TestUtils_H_ */
