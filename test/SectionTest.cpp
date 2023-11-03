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

class SectionTest : public ::testing::Test
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

TestUtils* SectionTest::utils = nullptr;

TEST_F(SectionTest, sectionsGet) {
	utils->initialize("", "", "");
	std::shared_ptr<Sections> result = utils->getSlidesApi()->getSections(L"test.pptx", L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(3, result->getSectionList().size());
}

TEST_F(SectionTest, sectionsReplace) {
	utils->initialize("", "", "");

	std::shared_ptr<Sections> dto(new Sections());
	std::shared_ptr<Section> section1(new Section());
	section1->setName(L"Section1");
	section1->setFirstSlideIndex(1);
	std::shared_ptr<Section> section2(new Section());
	section2->setName(L"Section2");
	section2->setFirstSlideIndex(3);
	dto->setSectionList({ section1, section2 });
	std::shared_ptr<Sections> result = utils->getSlidesApi()->setSections(L"test.pptx", dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(dto->getSectionList().size(), result->getSectionList().size());
	EXPECT_EQ(section2->getFirstSlideIndex() - section1->getFirstSlideIndex(), result->getSectionList()[0]->getSlideList().size());
}

TEST_F(SectionTest, sectionsPost) {
	utils->initialize("", "", "");
	std::shared_ptr<Sections> result = utils->getSlidesApi()->createSection(L"test.pptx", L"NewSection", 5, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(4, result->getSectionList().size());
}

TEST_F(SectionTest, sectionsPut) {
	utils->initialize("", "", "");
	int sectionIndex = 2;
	utility::string_t sectionName = L"UpdatedSection";
	std::shared_ptr<Sections> result = utils->getSlidesApi()->updateSection(L"test.pptx", sectionIndex, sectionName, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(3, result->getSectionList().size());
	EXPECT_EQ(sectionName, result->getSectionList()[sectionIndex - 1]->getName());
}

TEST_F(SectionTest, sectionsMove) {
	utils->initialize("", "", "");
	std::shared_ptr<Sections> result = utils->getSlidesApi()->moveSection(L"test.pptx", 1, 2, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(3, result->getSectionList().size());
}

TEST_F(SectionTest, sectionsClear) {
	utils->initialize("", "", "");
	std::shared_ptr<Sections> result = utils->getSlidesApi()->deleteSections(L"test.pptx", {}, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(0, result->getSectionList().size());
}

TEST_F(SectionTest, sectionsDeleteMany) {
	utils->initialize("", "", "");
	std::shared_ptr<Sections> result = utils->getSlidesApi()->deleteSections(L"test.pptx", { 2, 3 }, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, result->getSectionList().size());
}

TEST_F(SectionTest, sectionsDelete) {
	utils->initialize("", "", "");
	std::shared_ptr<Sections> result = utils->getSlidesApi()->deleteSection(L"test.pptx", 2, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(2, result->getSectionList().size());
}
