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

class HeaderFooterTest : public ::testing::Test
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

TestUtils* HeaderFooterTest::utils = nullptr;

TEST_F(HeaderFooterTest, headerFooterAllSlides) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";

	std::shared_ptr<HeaderFooter> dto(new HeaderFooter());
	dto->setIsFooterVisible(true);
	dto->setFooterText(L"footer");
	dto->setIsDateTimeVisible(false);
	utils->getSlidesApi()->setPresentationHeaderFooter(fileName, dto, password, folderName).get();
	std::shared_ptr<HeaderFooter> headerFooter = utils->getSlidesApi()->getSlideHeaderFooter(fileName, 1, password, folderName).get();
	EXPECT_TRUE(headerFooter->isIsFooterVisible());
	EXPECT_FALSE(headerFooter->isIsDateTimeVisible());
}

TEST_F(HeaderFooterTest, headerFooterSlide) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;

	std::shared_ptr<HeaderFooter> dto(new HeaderFooter());
	dto->setIsFooterVisible(true);
	dto->setFooterText(L"footer");
	dto->setIsDateTimeVisible(false);
	std::shared_ptr<HeaderFooter> headerFooter = utils->getSlidesApi()->setSlideHeaderFooter(fileName, slideIndex, dto, password, folderName).get();
	EXPECT_TRUE(headerFooter->isIsFooterVisible());
	EXPECT_FALSE(headerFooter->isIsDateTimeVisible());
	headerFooter = utils->getSlidesApi()->getSlideHeaderFooter(fileName, 1, password, folderName).get();
	EXPECT_TRUE(headerFooter->isIsFooterVisible());
	EXPECT_FALSE(headerFooter->isIsDateTimeVisible());
}

TEST_F(HeaderFooterTest, headerFooterNotesSlide) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;

	std::shared_ptr<NotesSlideHeaderFooter> dto(new NotesSlideHeaderFooter());
	dto->setIsHeaderVisible(true);
	dto->setFooterText(L"footer");
	dto->setIsDateTimeVisible(false);
	std::shared_ptr<NotesSlideHeaderFooter> headerFooter = utils->getSlidesApi()->setNotesSlideHeaderFooter(fileName, slideIndex, dto, password, folderName).get();
	EXPECT_TRUE(headerFooter->isIsHeaderVisible());
	EXPECT_FALSE(headerFooter->isIsDateTimeVisible());
	headerFooter = utils->getSlidesApi()->getNotesSlideHeaderFooter(fileName, 1, password, folderName).get();
	EXPECT_TRUE(headerFooter->isIsHeaderVisible());
	EXPECT_FALSE(headerFooter->isIsDateTimeVisible());
}
