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
#include "model/FractionElement.h"
#include "model/FunctionElement.h"
#include "model/LimitElement.h"
#include "model/TextElement.h"

class MathTest : public ::testing::Test
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

TestUtils* MathTest::utils = nullptr;

TEST_F(MathTest, mathGet) {
	utils->initialize("", "", "");
	std::shared_ptr<Portion> portion = utils->getSlidesApi()->getPortion(L"test.pptx", 2, 3, 1, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, portion->getMathParagraph()->getMathBlockList().size());
	EXPECT_EQ(3, portion->getMathParagraph()->getMathBlockList()[0]->getMathElementList().size());
	EXPECT_EQ(L"Fraction", portion->getMathParagraph()->getMathBlockList()[0]->getMathElementList()[2]->getType());
}

TEST_F(MathTest, mathGetNull) {
	utils->initialize("", "", "");
	std::shared_ptr<Portion> portion = utils->getSlidesApi()->getPortion(L"test.pptx", 2, 1, 1, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(nullptr, portion->getMathParagraph());
}

TEST_F(MathTest, mathCreate) {
	utils->initialize("", "", "");
	std::shared_ptr<Portion> dto(new Portion());
	std::shared_ptr<MathParagraph> mathParagraph(new MathParagraph());
	std::shared_ptr<BlockElement> mathBlock(new BlockElement());
	std::shared_ptr<FunctionElement> functionElement(new FunctionElement());
	std::shared_ptr<LimitElement> limitElement(new LimitElement());
	std::shared_ptr<TextElement> text1(new TextElement());
	text1->setValue(L"lim");
	limitElement->setBase(text1);
	std::shared_ptr<TextElement> text2(new TextElement());
	text2->setValue(L"x->0");
	limitElement->setLimit(text2);
	functionElement->setName(limitElement);
	std::shared_ptr<FractionElement> fractionElement(new FractionElement());
	std::shared_ptr<FunctionElement> sinusElement(new FunctionElement());
	std::shared_ptr<TextElement> text3(new TextElement());
	text3->setValue(L"sin");
	sinusElement->setName(text3);
	std::shared_ptr<TextElement> text4(new TextElement());
	text4->setValue(L"x");
	sinusElement->setBase(text4);
	fractionElement->setNumerator(sinusElement);
	std::shared_ptr<TextElement> text5(new TextElement());
	text5->setValue(L"x");
	fractionElement->setDenominator(text5);
	functionElement->setBase(fractionElement);
	mathBlock->setMathElementList({ functionElement });
	mathParagraph->setMathBlockList({ mathBlock });
	dto->setMathParagraph(mathParagraph);
	std::shared_ptr<Portion> portion = utils->getSlidesApi()->createPortion(L"test.pptx", 1, 1, 1, dto, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, portion->getMathParagraph()->getMathBlockList().size());
	EXPECT_EQ(1, portion->getMathParagraph()->getMathBlockList()[0]->getMathElementList().size());
	EXPECT_EQ(L"Function", portion->getMathParagraph()->getMathBlockList()[0]->getMathElementList()[0]->getType());
}

TEST_F(MathTest, mathUpdate) {
	utils->initialize("", "", "");
	std::shared_ptr<Portion> dto(new Portion());
	std::shared_ptr<MathParagraph> mathParagraph(new MathParagraph());
	std::shared_ptr<BlockElement> mathBlock(new BlockElement());
	std::shared_ptr<FunctionElement> functionElement(new FunctionElement());
	std::shared_ptr<LimitElement> limitElement(new LimitElement());
	std::shared_ptr<TextElement> text1(new TextElement());
	text1->setValue(L"lim");
	limitElement->setBase(text1);
	std::shared_ptr<TextElement> text2(new TextElement());
	text2->setValue(L"x->0");
	limitElement->setLimit(text2);
	functionElement->setName(limitElement);
	std::shared_ptr<FractionElement> fractionElement(new FractionElement());
	std::shared_ptr<FunctionElement> sinusElement(new FunctionElement());
	std::shared_ptr<TextElement> text3(new TextElement());
	text3->setValue(L"sin");
	sinusElement->setName(text3);
	std::shared_ptr<TextElement> text4(new TextElement());
	text4->setValue(L"x");
	sinusElement->setBase(text4);
	fractionElement->setNumerator(sinusElement);
	std::shared_ptr<TextElement> text5(new TextElement());
	text5->setValue(L"x");
	fractionElement->setDenominator(text5);
	functionElement->setBase(fractionElement);
	mathBlock->setMathElementList({ functionElement });
	mathParagraph->setMathBlockList({ mathBlock });
	dto->setMathParagraph(mathParagraph);
	std::shared_ptr<Portion> portion = utils->getSlidesApi()->updatePortion(L"test.pptx", 2, 3, 1, 1, dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, portion->getMathParagraph()->getMathBlockList().size());
	EXPECT_EQ(1, portion->getMathParagraph()->getMathBlockList()[0]->getMathElementList().size());
	EXPECT_EQ(L"Function", portion->getMathParagraph()->getMathBlockList()[0]->getMathElementList()[0]->getType());
}

TEST_F(MathTest, mathDownload) {
	utils->initialize("", "", "");
	HttpContent result = utils->getSlidesApi()->downloadPortionAsMathMl(L"test.pptx", 2, 3, 1, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(MathTest, mathDownloadNull) {
	utils->initialize("", "", "");
	try
	{
		utils->getSlidesApi()->downloadPortionAsMathMl(L"test.pptx", 2, 1, 1, 1, L"password", L"TempSlidesSDK").get();
		FAIL() << "Must have failed";
	}
	catch (ApiException ex)
	{
		EXPECT_EQ(400, ex.error_code().value());
	}
}

TEST_F(MathTest, mathSave) {
	utils->initialize("", "", "");
	utility::string_t outPath = L"TempSlidesSDK/mathml.xml";
	utils->getSlidesApi()->savePortionAsMathMl(L"test.pptx", 2, 3, 1, 1, outPath, L"password", L"TempSlidesSDK").wait();
	std::shared_ptr<ObjectExist> exists = utils->getSlidesApi()->objectExists(outPath).get();
	EXPECT_TRUE(exists->isExists());
}
