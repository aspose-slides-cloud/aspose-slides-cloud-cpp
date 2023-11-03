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

class ShapeFormatTest : public ::testing::Test
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

TestUtils* ShapeFormatTest::utils = nullptr;

TEST_F(ShapeFormatTest, shapeFormatLine) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeIndex = 1;
	std::shared_ptr<Shape> dto(new Shape());
	std::shared_ptr<LineFormat> lineFormat(new LineFormat());
	lineFormat->setStyle(L"ThickThin");
	lineFormat->setWidth(7);
	lineFormat->setDashStyle(L"Dash");
	dto->setLineFormat(lineFormat);
	utils->getSlidesApi()->updateShape(fileName, slideIndex, shapeIndex, dto, password, folderName).wait();
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->getShape(fileName, slideIndex, shapeIndex, password, folderName).get();
	EXPECT_EQ(dto->getLineFormat()->getWidth(), result->getLineFormat()->getWidth());
}

TEST_F(ShapeFormatTest, shapeFormatFill) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeIndex = 1;
	std::shared_ptr<Shape> dto(new Shape());
	std::shared_ptr<SolidFill> fillFormat(new SolidFill());
	fillFormat->setColor(L"#FFFFFF00");
	dto->setFillFormat(fillFormat);
	utils->getSlidesApi()->updateShape(fileName, slideIndex, shapeIndex, dto, password, folderName).wait();
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->getShape(fileName, slideIndex, shapeIndex, password, folderName).get();
	EXPECT_EQ(std::static_pointer_cast<SolidFill>(dto->getFillFormat())->getColor(), std::static_pointer_cast<SolidFill>(result->getFillFormat())->getColor());
}

TEST_F(ShapeFormatTest, shapeFormatEffect) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeIndex = 1;
	std::shared_ptr<Shape> dto(new Shape());
	std::shared_ptr<EffectFormat> effectFormat(new EffectFormat());
	std::shared_ptr<InnerShadowEffect> innerShadow(new InnerShadowEffect());
	innerShadow->setDirection(35);
	innerShadow->setBlurRadius(30);
	innerShadow->setDistance(40);
	innerShadow->setShadowColor(L"#FFFFFF00");
	effectFormat->setInnerShadow(innerShadow);
	dto->setEffectFormat(effectFormat);
	utils->getSlidesApi()->updateShape(fileName, slideIndex, shapeIndex, dto, password, folderName).wait();
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->getShape(fileName, slideIndex, shapeIndex, password, folderName).get();
	EXPECT_EQ(dto->getEffectFormat()->getInnerShadow()->getDirection(), result->getEffectFormat()->getInnerShadow()->getDirection());
}

TEST_F(ShapeFormatTest, shapeFormat3D) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeIndex = 1;
	std::shared_ptr<Shape> dto(new Shape());
	std::shared_ptr<ThreeDFormat> threeDFormat(new ThreeDFormat());
	threeDFormat->setDepth(4);
	std::shared_ptr<ShapeBevel> bevelTop(new ShapeBevel());
	bevelTop->setBevelType(L"Circle");
	bevelTop->setHeight(6);
	bevelTop->setWidth(6);
	threeDFormat->setBevelTop(bevelTop);
	std::shared_ptr<Camera> camera(new Camera());
	camera->setCameraType(L"OrthographicFront");
	threeDFormat->setCamera(camera);
	std::shared_ptr<LightRig> lightRig(new LightRig());
	lightRig->setLightType(L"ThreePt");
	lightRig->setDirection(L"Top");
	threeDFormat->setLightRig(lightRig);
	dto->setThreeDFormat(threeDFormat);
	utils->getSlidesApi()->updateShape(fileName, slideIndex, shapeIndex, dto, password, folderName).wait();
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->getShape(fileName, slideIndex, shapeIndex, password, folderName).get();
	EXPECT_EQ(dto->getThreeDFormat()->getDepth(), result->getThreeDFormat()->getDepth());
}
