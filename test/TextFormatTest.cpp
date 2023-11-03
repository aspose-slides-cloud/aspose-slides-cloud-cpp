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

class TextFormatTest : public ::testing::Test
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

TestUtils* TextFormatTest::utils = nullptr;

TEST_F(TextFormatTest, textFormat3D) {
	utils->initialize("", "", "");
	std::shared_ptr<Shape> dto(new Shape());
	dto->setShapeType(L"Rectangle");
	dto->setX(100);
	dto->setY(100);
	dto->setHeight(100);
	dto->setWidth(200);
	dto->setText(L"Sample text");
	std::shared_ptr<TextFrameFormat> textFrameFormat(new TextFrameFormat());
	textFrameFormat->setTransform(L"ArchUpPour");
	std::shared_ptr<ThreeDFormat> threeDFormat(new ThreeDFormat());
	threeDFormat->setDepth(3);
	threeDFormat->setExtrusionColor(L"#FF008000");
	threeDFormat->setExtrusionHeight(6);
	threeDFormat->setContourColor(L"#FF25353D");
	threeDFormat->setContourWidth(1.5);
	threeDFormat->setMaterial(L"Plastic");
	std::shared_ptr<ShapeBevel> bevelBottom(new ShapeBevel());
	bevelBottom->setBevelType(L"Circle");
	bevelBottom->setHeight(3.5);
	bevelBottom->setWidth(3.5);
	threeDFormat->setBevelBottom(bevelBottom);
	std::shared_ptr<ShapeBevel> bevelTop(new ShapeBevel());
	bevelTop->setBevelType(L"Circle");
	bevelTop->setHeight(4);
	bevelTop->setWidth(4);
	threeDFormat->setBevelTop(bevelTop);
	std::shared_ptr<Camera> camera(new Camera());
	camera->setCameraType(L"PerspectiveContrastingRightFacing");
	threeDFormat->setCamera(camera);
	std::shared_ptr<LightRig> lightRig(new LightRig());
	lightRig->setLightType(L"balanced");
	lightRig->setDirection(L"Top");
	lightRig->setXRotation(0);
	lightRig->setYRotation(0);
	lightRig->setZRotation(40);
	threeDFormat->setLightRig(lightRig);
	textFrameFormat->setThreeDFormat(threeDFormat);
	dto->setTextFrameFormat(textFrameFormat);
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(dto->getTextFrameFormat()->getThreeDFormat()->getDepth(), (std::static_pointer_cast<Shape>(result))->getTextFrameFormat()->getThreeDFormat()->getDepth());
}
