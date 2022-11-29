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
#include "model/SolidFill.h"

using namespace asposeslidescloud::api;

class PropertyTest : public ::testing::Test
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

SlidesApi* PropertyTest::api = nullptr;
TestUtils* PropertyTest::utils = nullptr;

TEST_F(PropertyTest, propertyBuiltin) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	utility::string_t propertyName = L"Author";
	utility::string_t updatedPropertyValue = L"New Value";
	std::shared_ptr<DocumentProperty> result = api->getDocumentProperty(fileName, propertyName, password, folderName).get();
	EXPECT_EQ(propertyName, result->getName());
	EXPECT_TRUE(result->isBuiltIn());

	std::shared_ptr<DocumentProperty> property(new DocumentProperty());
	property->setValue(updatedPropertyValue);
	result = api->setDocumentProperty(fileName, propertyName, property, password, folderName).get();
	EXPECT_EQ(propertyName, result->getName());
	EXPECT_EQ(updatedPropertyValue, result->getValue());
	EXPECT_TRUE(result->isBuiltIn());
	api->deleteDocumentProperty(fileName, propertyName, password, folderName).wait();
	result = api->getDocumentProperty(fileName, propertyName, password, folderName).get();
	// built-in property is not actually deleted
	EXPECT_EQ(propertyName, result->getName());
	EXPECT_NE(updatedPropertyValue, result->getValue());
	EXPECT_TRUE(result->isBuiltIn());
}

TEST_F(PropertyTest, propertyCustom) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	utility::string_t propertyName = L"CustomProperty2";
	utility::string_t updatedPropertyValue = L"New Value";

	std::shared_ptr<DocumentProperty> property(new DocumentProperty());
	property->setValue(updatedPropertyValue);
	std::shared_ptr<DocumentProperty> result = api->setDocumentProperty(fileName, propertyName, property, password, folderName).get();
	EXPECT_EQ(propertyName, result->getName());
	EXPECT_EQ(updatedPropertyValue, result->getValue());
	EXPECT_FALSE(result->isBuiltIn());
	api->deleteDocumentProperty(fileName, propertyName, password, folderName).wait();
	try
	{
		api->getDocumentProperty(fileName, propertyName, password, folderName).wait();
		FAIL() << "Must have failed";
	}
	catch (ApiException ex)
	{
		EXPECT_EQ(404, ex.error_code().value());
	}
}

TEST_F(PropertyTest, propertyBulkUpdate) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	utility::string_t propertyName = L"Author";
	utility::string_t customPropertyName = L"CustomProperty2";
	utility::string_t updatedPropertyValue = L"New Value";
	std::shared_ptr<DocumentProperties> result = api->getDocumentProperties(fileName, password, folderName).get();
	size_t count = result->getList().size();

	std::shared_ptr<DocumentProperty> property1(new DocumentProperty());
	property1->setName(propertyName);
	property1->setValue(updatedPropertyValue);
	std::shared_ptr<DocumentProperty> property2(new DocumentProperty());
	property2->setName(customPropertyName);
	property2->setValue(updatedPropertyValue);
	std::shared_ptr<DocumentProperties> properties(new DocumentProperties());
	properties->setList({ property1, property2 });
	result = api->setDocumentProperties(fileName, properties, password, folderName).get();
	EXPECT_EQ(count + 1, result->getList().size());

	result = api->deleteDocumentProperties(fileName, password, folderName).get();
	EXPECT_EQ(count - 1, result->getList().size());
}

TEST_F(PropertyTest, propertySlideProperties) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	std::shared_ptr<SlideProperties> getResult = api->getSlideProperties(fileName, password, folderName).get();

	std::shared_ptr<SlideProperties> dto(new SlideProperties());
	dto->setFirstSlideNumber(getResult->getFirstSlideNumber() + 2);
	std::shared_ptr<SlideProperties> putResult = api->setSlideProperties(fileName, dto, password, folderName).get();
	EXPECT_EQ(getResult->getOrientation(), putResult->getOrientation());
	EXPECT_NE(getResult->getFirstSlideNumber(), putResult->getFirstSlideNumber());
}

TEST_F(PropertyTest, propertySlideSizePreset) {
	utils->initialize("", "");
	std::shared_ptr<SlideProperties> dto(new SlideProperties());
	dto->setSizeType(L"B4IsoPaper");
	std::shared_ptr<SlideProperties> result = api->setSlideProperties(L"test.pptx", dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"B4IsoPaper", result->getSizeType());
	EXPECT_EQ(852, result->getWidth());
	EXPECT_EQ(639, result->getHeight());
}

TEST_F(PropertyTest, propertySlideSizeCustom) {
	utils->initialize("", "");
	std::shared_ptr<SlideProperties> dto(new SlideProperties());
	dto->setWidth(800);
	dto->setHeight(500);
	std::shared_ptr<SlideProperties> result = api->setSlideProperties(L"test.pptx", dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"Custom", result->getSizeType());
	EXPECT_EQ(dto->getWidth(), result->getWidth());
	EXPECT_EQ(dto->getHeight(), result->getHeight());
}

TEST_F(PropertyTest, protection) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	std::shared_ptr<ProtectionProperties> getResult = api->getProtectionProperties(fileName, password, folderName).get();

	std::shared_ptr<ProtectionProperties> dto(new ProtectionProperties());
	dto->setReadOnlyRecommended(!getResult->isReadOnlyRecommended());
	std::shared_ptr<ProtectionProperties> putResult = api->setProtection(fileName, dto, password, folderName).get();
	EXPECT_EQ(getResult->isEncryptDocumentProperties(), putResult->isEncryptDocumentProperties());
	EXPECT_NE(getResult->isReadOnlyRecommended(), putResult->isReadOnlyRecommended());
}

TEST_F(PropertyTest, protectionDelete) {
	utils->initialize("", "");
	std::shared_ptr<ProtectionProperties> result = api->deleteProtection(L"test.pptx", L"password", L"TempSlidesSDK").get();
	EXPECT_FALSE(result->isIsEncrypted());
	EXPECT_FALSE(result->isReadOnlyRecommended());
	EXPECT_EQ(L"", result->getReadPassword());
}

TEST_F(PropertyTest, protectionOnline) {
	utils->initialize("", "");

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	std::shared_ptr<ProtectionProperties> dto(new ProtectionProperties());
	dto->setReadPassword(L"newPassword");
	HttpContent result = api->setProtectionOnline(data, dto, L"password").get();
	int resultSize = 0;
	do {
		resultSize++;
	} while (result.getData()->get() != EOF);
	int inputSize = 0;
	do {
		inputSize++;
	} while (data->getData()->get() != EOF);
	EXPECT_NE(resultSize, inputSize);
}

TEST_F(PropertyTest, protectionDeleteOnline) {
	utils->initialize("", "");

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	HttpContent result = api->deleteProtectionOnline(data, L"password").get();
	int resultSize = 0;
	do {
		resultSize++;
	} while (result.getData()->get() != EOF);
	int inputSize = 0;
	do {
		inputSize++;
	} while (data->getData()->get() != EOF);
	EXPECT_NE(resultSize, inputSize);
}

TEST_F(PropertyTest, viewPropertiesGet) {
	utils->initialize("", "");
	std::shared_ptr<ViewProperties> result = api->getViewProperties(L"test.pptx", L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"True", result->getShowComments());
}

TEST_F(PropertyTest, viewPropertiesSet) {
	utils->initialize("", "");
	std::shared_ptr<ViewProperties> dto(new ViewProperties());
	dto->setShowComments(L"False");
	std::shared_ptr<CommonSlideViewProperties> slideDto(new CommonSlideViewProperties());
	slideDto->setScale(50);
	dto->setSlideViewProperties(slideDto);
	std::shared_ptr<ViewProperties> result = api->setViewProperties(L"test.pptx", dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"False", result->getShowComments());
	EXPECT_EQ(50, result->getSlideViewProperties()->getScale());
}

TEST_F(PropertyTest, protectionCheck) {
	utils->initialize("", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	std::shared_ptr<ProtectionProperties> result = api->getProtectionProperties(fileName, L"", folderName).get();
	EXPECT_TRUE(result->isIsEncrypted());
	EXPECT_EQ(L"", result->getReadPassword());

	result = api->getProtectionProperties(fileName, L"password", folderName).get();
	EXPECT_TRUE(result->isIsEncrypted());
	EXPECT_NE(L"", result->getReadPassword());
}
