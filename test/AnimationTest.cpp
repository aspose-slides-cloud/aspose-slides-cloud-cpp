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

class AnimationTest : public ::testing::Test
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

TestUtils* AnimationTest::utils = nullptr;

TEST_F(AnimationTest, animationGet) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int32_t slideIndex = 1;

	std::shared_ptr<SlideAnimation> result = utils->getSlidesApi()->getAnimation(fileName, slideIndex, boost::none, boost::none, password, folderName).get();
	EXPECT_EQ(1, result->getMainSequence().size());
	EXPECT_EQ(1, result->getInteractiveSequences().size());

	result = utils->getSlidesApi()->getAnimation(fileName, slideIndex, 3, boost::none, password, folderName).get();
	EXPECT_EQ(1, result->getMainSequence().size());
	EXPECT_EQ(0, result->getInteractiveSequences().size());

	result = utils->getSlidesApi()->getAnimation(fileName, slideIndex, 3, 1, password, folderName).get();
	EXPECT_EQ(0, result->getMainSequence().size());
	EXPECT_EQ(0, result->getInteractiveSequences().size());
}

TEST_F(AnimationTest, animationSet) {
	utils->initialize("", "", "");

	std::shared_ptr<Effect> effect1(new Effect());
	effect1->setType(L"Blink");
	effect1->setShapeIndex(2);
	effect1->setParagraphIndex(1);

	std::shared_ptr<Effect> effect2(new Effect());
	effect2->setType(L"Box");
	effect2->setSubtype(L"In");
	effect2->setPresetClassType(L"Entrance");
	effect2->setShapeIndex(4);

	std::shared_ptr<SlideAnimation> dto(new SlideAnimation());
	std::vector<std::shared_ptr<Effect>> mainSequence = { effect1, effect2 };
	std::vector<std::shared_ptr<InteractiveSequence>> interactiveSequences = {};
	dto->setMainSequence(mainSequence);
	dto->setInteractiveSequences(interactiveSequences);
	std::shared_ptr<SlideAnimation> result = utils->getSlidesApi()->setAnimation(L"test.pptx", 1, dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(dto->getMainSequence().size(), result->getMainSequence().size());
	EXPECT_EQ(1, result->getInteractiveSequences().size());
}

TEST_F(AnimationTest, animationCreateEffect) {
	utils->initialize("", "", "");

	std::shared_ptr<Effect> effect(new Effect());
	effect->setType(L"Blast");
	effect->setShapeIndex(3);

	std::shared_ptr<SlideAnimation> result = utils->getSlidesApi()->createAnimationEffect(L"test.pptx", 1, effect, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(2, result->getMainSequence().size());
	EXPECT_EQ(1, result->getInteractiveSequences().size());
}

TEST_F(AnimationTest, animationCreateInteractiveSequence) {
	utils->initialize("", "", "");

	std::shared_ptr<Effect> effect(new Effect());
	effect->setType(L"Blast");
	effect->setShapeIndex(3);
	std::shared_ptr<InteractiveSequence> interactiveSequence(new InteractiveSequence());
	interactiveSequence->setTriggerShapeIndex(2);
	interactiveSequence->setEffects({ effect });

	std::shared_ptr<SlideAnimation> result = utils->getSlidesApi()->createAnimationInteractiveSequence(L"test.pptx", 1, interactiveSequence, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, result->getMainSequence().size());
	EXPECT_EQ(2, result->getInteractiveSequences().size());
}

TEST_F(AnimationTest, animationCreateInteractiveSequenceEffect) {
	utils->initialize("", "", "");

	std::shared_ptr<Effect> effect(new Effect());
	effect->setType(L"Blast");
	effect->setShapeIndex(3);

	std::shared_ptr<SlideAnimation> result = utils->getSlidesApi()->createAnimationInteractiveSequenceEffect(L"test.pptx", 1, 1, effect, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, result->getMainSequence().size());
	EXPECT_EQ(1, result->getInteractiveSequences().size());
}

TEST_F(AnimationTest, animationUpdateEffect) {
	utils->initialize("", "", "");

	std::shared_ptr<Effect> effect(new Effect());
	effect->setType(L"Blast");
	effect->setShapeIndex(3);

	std::shared_ptr<SlideAnimation> result = utils->getSlidesApi()->updateAnimationEffect(L"test.pptx", 1, 1, effect, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, result->getMainSequence().size());
	EXPECT_EQ(1, result->getInteractiveSequences().size());
}

TEST_F(AnimationTest, animationUpdateInteractiveSequenceEffect) {
	utils->initialize("", "", "");

	std::shared_ptr<Effect> effect(new Effect());
	effect->setType(L"Blast");
	effect->setShapeIndex(3);

	std::shared_ptr<SlideAnimation> result = utils->getSlidesApi()->updateAnimationInteractiveSequenceEffect(L"test.pptx", 1, 1, 1, effect, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, result->getMainSequence().size());
	EXPECT_EQ(1, result->getInteractiveSequences().size());
}

TEST_F(AnimationTest, animationDelete) {
	utils->initialize("", "", "");
	std::shared_ptr<SlideAnimation> result = utils->getSlidesApi()->deleteAnimation(L"test.pptx", 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(0, result->getMainSequence().size());
	EXPECT_EQ(0, result->getInteractiveSequences().size());
}

TEST_F(AnimationTest, animationDeleteMainSequence) {
	utils->initialize("", "", "");
	std::shared_ptr<SlideAnimation> result = utils->getSlidesApi()->deleteAnimationMainSequence(L"test.pptx", 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(0, result->getMainSequence().size());
	EXPECT_EQ(1, result->getInteractiveSequences().size());
}

TEST_F(AnimationTest, animationDeleteMainSequenceEffect) {
	utils->initialize("", "", "");
	std::shared_ptr<SlideAnimation> result = utils->getSlidesApi()->deleteAnimationEffect(L"test.pptx", 1, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(0, result->getMainSequence().size());
	EXPECT_EQ(1, result->getInteractiveSequences().size());
}

TEST_F(AnimationTest, animationDeleteInteracriveSequences) {
	utils->initialize("", "", "");
	std::shared_ptr<SlideAnimation> result = utils->getSlidesApi()->deleteAnimationInteractiveSequences(L"test.pptx", 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, result->getMainSequence().size());
	EXPECT_EQ(0, result->getInteractiveSequences().size());
}

TEST_F(AnimationTest, animationDeleteInteracriveSequence) {
	utils->initialize("", "", "");
	std::shared_ptr<SlideAnimation> result = utils->getSlidesApi()->deleteAnimationInteractiveSequence(L"test.pptx", 1, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, result->getMainSequence().size());
	EXPECT_EQ(0, result->getInteractiveSequences().size());
}

TEST_F(AnimationTest, animationDeleteInteracriveSequenceEffect) {
	utils->initialize("", "", "");
	std::shared_ptr<SlideAnimation> result = utils->getSlidesApi()->deleteAnimationInteractiveSequenceEffect(L"test.pptx", 1, 1, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, result->getMainSequence().size());
	EXPECT_EQ(1, result->getInteractiveSequences().size());
}
