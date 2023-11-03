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


#include <boost/beast/core/detail/base64.hpp>
#include "gtest/gtest.h"

#include "TestUtils.h"
#include "model/AudioFrame.h"
#include "model/VideoFrame.h"
#include "model/OleObjectFrame.h"
#include "model/Table.h"
#include "model/GroupShape.h"
#include "model/Connector.h"
#include "model/ZoomFrame.h"
#include "model/SectionZoomFrame.h"
#include "model/SolidFill.h"
#include "model/MoveToPathSegment.h"
#include "model/LineToPathSegment.h"
#include "model/ClosePathSegment.h"

class ShapesTest : public ::testing::Test
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

TestUtils* ShapesTest::utils = nullptr;

TEST_F(ShapesTest, shapeBase) {
	utils->initialize("", "", "");
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->getShape(L"test.pptx", 1, 1, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<Shape> resultShape = std::static_pointer_cast<Shape>(result);
	EXPECT_EQ(L"1", resultShape->getText());
}

TEST_F(ShapesTest, shapesGet) {
	utils->initialize("", "", "");
	std::shared_ptr<Shapes> result = utils->getSlidesApi()->getShapes(L"test.pptx", 3, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(2, result->getShapesLinks().size());
}

TEST_F(ShapesTest, shapesGetByType) {
	utils->initialize("", "", "");
	std::shared_ptr<Shapes> result = utils->getSlidesApi()->getShapes(L"test.pptx", 3, L"password", L"TempSlidesSDK", L"", L"Chart").get();
	EXPECT_EQ(2, result->getShapesLinks().size());
}

TEST_F(ShapesTest, subshapesGet) {
	utils->initialize("", "", "");
	std::shared_ptr<Shapes> result = utils->getSlidesApi()->getShapes(L"test.pptx", 1, L"password", L"TempSlidesSDK", L"", L"", L"4").get();
	EXPECT_EQ(2, result->getShapesLinks().size());
}

TEST_F(ShapesTest, shapeGet) {
	utils->initialize("", "", "");
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->getShape(L"test.pptx", 3, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"Chart", result->getType());
}

TEST_F(ShapesTest, subshapeGet) {
	utils->initialize("", "", "");
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->getShape(L"test.pptx", 1, 4, L"password", L"TempSlidesSDK", L"", L"1").get();
	EXPECT_EQ(L"Shape", result->getType());
}

TEST_F(ShapesTest, shapeAdd) {
	utils->initialize("", "", "");
	std::shared_ptr<Shape> dto(new Shape());
	dto->setShapeType(L"Callout1");
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"Shape", result->getType());
}

TEST_F(ShapesTest, shapeEmpty) {
	utils->initialize("", "", "");
	std::shared_ptr<Shape> dto(new Shape());
	try
	{
		utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
		FAIL() << "Must have failed";
	}
	catch (ApiException ex)
	{
		EXPECT_EQ(400, ex.error_code().value());
	}
}

TEST_F(ShapesTest, graphicalObjectEmpty) {
	utils->initialize("", "", "");
	std::shared_ptr<Shape> dto(new Shape());
	try
	{
		utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
		FAIL() << "Must have failed";
	}
	catch (ApiException ex)
	{
		EXPECT_EQ(400, ex.error_code().value());
	}
}

TEST_F(ShapesTest, pictureFrameAdd) {
	utils->initialize("", "", "");
	std::shared_ptr<PictureFrame> dto(new PictureFrame());
	std::shared_ptr<PictureFill> fill(new PictureFill());
	fill->setBase64Data(L"iVBORw0KGgoAAAANSUhEUgAAAAEAAAABCAYAAAAfFcSJAAAAAXNSR0IArs4c6QAAAARnQU1BAACxjwv8YQUAAAAJcEhZcwAADsQAAA7EAZUrDhsAAAANSURBVBhXY5g+ffp/AAZTAsWGL27gAAAAAElFTkSuQmCC");
	dto->setPictureFillFormat(fill);
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"PictureFrame", result->getType());
}

TEST_F(ShapesTest, pictureFrameEmpty) {
	utils->initialize("", "", "");
	std::shared_ptr<PictureFrame> dto(new PictureFrame());
	try
	{
		utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
		FAIL() << "Must have failed";
	}
	catch (ApiException ex)
	{
		EXPECT_EQ(400, ex.error_code().value());
	}
}

TEST_F(ShapesTest, audioFrameAdd) {
	utils->initialize("", "", "");
	std::shared_ptr<AudioFrame> dto(new AudioFrame());
	dto->setBase64Data(L"bXAzc2FtcGxl");
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"AudioFrame", result->getType());
}

TEST_F(ShapesTest, audioFrameEmpty) {
	utils->initialize("", "", "");
	std::shared_ptr<AudioFrame> dto(new AudioFrame());
	try
	{
		utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
		FAIL() << "Must have failed";
	}
	catch (ApiException ex)
	{
		EXPECT_EQ(400, ex.error_code().value());
	}
}

TEST_F(ShapesTest, videoFrameAdd) {
	utils->initialize("", "", "");
	std::shared_ptr<VideoFrame> dto(new VideoFrame());
	dto->setBase64Data(L"bXAzc2FtcGxl");
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"VideoFrame", result->getType());
}

TEST_F(ShapesTest, videoFrameEmpty) {
	utils->initialize("", "", "");
	std::shared_ptr<VideoFrame> dto(new VideoFrame());
	try
	{
		utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
		FAIL() << "Must have failed";
	}
	catch (ApiException ex)
	{
		EXPECT_EQ(400, ex.error_code().value());
	}
}

TEST_F(ShapesTest, smartArtAdd) {
	utils->initialize("", "", "");
	std::shared_ptr<SmartArt> dto(new SmartArt());
	dto->setX(0);
	dto->setY(0);
	dto->setWidth(300);
	dto->setHeight(200);
	dto->setLayout(L"BasicProcess");
	dto->setQuickStyle(L"SimpleFill");
	dto->setColorStyle(L"ColoredFillAccent1");
	std::shared_ptr<SmartArtNode> node1(new SmartArtNode());
	node1->setText(L"First");
	node1->setOrgChartLayout(L"Initial");
	std::shared_ptr<SmartArtNode> subnode1(new SmartArtNode());
	subnode1->setText(L"SubFirst");
	subnode1->setOrgChartLayout(L"Initial");
	node1->setNodes({ subnode1 });
	std::shared_ptr<SmartArtNode> node2(new SmartArtNode());
	node2->setText(L"Second");
	node2->setOrgChartLayout(L"Initial");
	dto->setNodes({ node1, node2 });
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"SmartArt", result->getType());
}

TEST_F(ShapesTest, smartArtTextFormatting) {
	utils->initialize("", "", "");
	std::shared_ptr<Portion> dto(new Portion());
	dto->setText(L"New text");
	dto->setFontHeight(24);
	dto->setFontBold(L"True");
	dto->setSpacing(3);
	std::shared_ptr<SolidFill> fillFormat(new SolidFill());
	fillFormat->setColor(L"#FFFFFF00");
	dto->setFillFormat(fillFormat);
	std::shared_ptr<Portion> portion = utils->getSlidesApi()->updatePortion(L"test.pptx", 7, 1, 1, 1, dto, L"password", L"TempSlidesSDK", L"", L"1/nodes/2").get();
	EXPECT_EQ(dto->getText(), portion->getText());
	EXPECT_EQ(dto->getFontHeight(), portion->getFontHeight());
	EXPECT_EQ(dto->getFontBold(), portion->getFontBold());
	EXPECT_EQ(dto->getSpacing(), portion->getSpacing());
	EXPECT_EQ(fillFormat->getColor(), std::static_pointer_cast<SolidFill>(portion->getFillFormat())->getColor());
}

TEST_F(ShapesTest, smartArtEmpty) {
	utils->initialize("", "", "");
	std::shared_ptr<SmartArt> dto(new SmartArt());
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"SmartArt", result->getType());
}

TEST_F(ShapesTest, chartEmpty) {
	utils->initialize("", "", "");
	std::shared_ptr<Chart> dto(new Chart());
	try
	{
		utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
		FAIL() << "Must have failed";
	}
	catch (ApiException ex)
	{
		EXPECT_EQ(500, ex.error_code().value());
	}
}

TEST_F(ShapesTest, tableAdd) {
	utils->initialize("", "", "");
	std::shared_ptr<Table> dto(new Table());
	dto->setX(30);
	dto->setY(20);
	dto->setStyle(L"MediumStyle2Accent1");
	std::shared_ptr<TableRow> row1(new TableRow());
	std::shared_ptr<TableCell> cell11(new TableCell());
	cell11->setText(L"0.1");
	std::shared_ptr<TableCell> cell12(new TableCell());
	cell12->setText(L"0.2");
	std::shared_ptr<TableCell> cell13(new TableCell());
	cell13->setText(L"0.3");
	std::shared_ptr<TableCell> cell14(new TableCell());
	cell14->setText(L"0.4");
	row1->setCells({ cell11, cell12, cell13, cell14 });
	std::shared_ptr<TableRow> row2(new TableRow());
	std::shared_ptr<TableCell> cell21(new TableCell());
	cell21->setText(L"1");
	std::shared_ptr<TableCell> cell22(new TableCell());
	cell22->setText(L"2-3");
	cell22->setColSpan(2);
	cell22->setRowSpan(2);
	std::shared_ptr<TableCell> cell24(new TableCell());
	cell24->setText(L"4");
	row2->setCells({ cell21, cell22, cell24 });
	std::shared_ptr<TableRow> row3(new TableRow());
	std::shared_ptr<TableCell> cell31(new TableCell());
	cell31->setText(L"first");
	std::shared_ptr<TableCell> cell34(new TableCell());
	cell34->setText(L"last");
	row3->setCells({ cell31, cell34 });
	std::shared_ptr<TableRow> row4(new TableRow());
	std::shared_ptr<TableCell> cell41(new TableCell());
	cell41->setText(L"3.1");
	std::shared_ptr<TableCell> cell42(new TableCell());
	cell42->setText(L"3.2");
	std::shared_ptr<TableCell> cell43(new TableCell());
	cell43->setText(L"3.3");
	std::shared_ptr<TableCell> cell44(new TableCell());
	cell44->setText(L"3.4");
	row4->setCells({ cell41, cell42, cell43, cell44 });
	std::shared_ptr<TableRow> row5(new TableRow());
	std::shared_ptr<TableCell> cell51(new TableCell());
	cell51->setText(L"4.1");
	std::shared_ptr<TableCell> cell52(new TableCell());
	cell52->setText(L"4.2");
	std::shared_ptr<TableCell> cell53(new TableCell());
	cell53->setText(L"4.3");
	std::shared_ptr<TableCell> cell54(new TableCell());
	cell54->setText(L"4.4");
	row4->setCells({ cell41, cell42, cell43, cell44 });
	dto->setRows({ row1, row2, row3, row4, row5 });
	std::shared_ptr<TableColumn> column1(new TableColumn());
	column1->setWidth(100);
	std::shared_ptr<TableColumn> column2(new TableColumn());
	column2->setWidth(100);
	std::shared_ptr<TableColumn> column3(new TableColumn());
	column3->setWidth(100);
	std::shared_ptr<TableColumn> column4(new TableColumn());
	column4->setWidth(100);
	dto->setColumns({ column1, column2, column3, column4 });
	dto->setFirstRow(true);
	dto->setHorizontalBanding(true);
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"Table", result->getType());
}

TEST_F(ShapesTest, tableEmpty) {
	utils->initialize("", "", "");
	std::shared_ptr<Table> dto(new Table());
	try
	{
		utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
		FAIL() << "Must have failed";
	}
	catch (ApiException ex)
	{
		EXPECT_EQ(400, ex.error_code().value());
	}
}

TEST_F(ShapesTest, groupShapeEmpty) {
	utils->initialize("", "", "");
	std::shared_ptr<GroupShape> dto(new GroupShape());
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"GroupShape", result->getType());
}

TEST_F(ShapesTest, connectorAdd) {
	utils->initialize("", "", "");
	std::shared_ptr<Connector> dto(new Connector());
	dto->setShapeType(L"BentConnector3");
	std::shared_ptr<ResourceUri> start(new ResourceUri());
	start->setHref(L"https://api.aspose.cloud/v3.0/slides/myPresentation.pptx/slides/1/shapes/1");
	dto->setStartShapeConnectedTo(start);
	std::shared_ptr<ResourceUri> end(new ResourceUri());
	end->setHref(L"https://api.aspose.cloud/v3.0/slides/myPresentation.pptx/slides/1/shapes/2");
	dto->setEndShapeConnectedTo(end);
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"Connector", result->getType());
}

TEST_F(ShapesTest, connectorEmpty) {
	utils->initialize("", "", "");
	std::shared_ptr<Connector> dto(new Connector());
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 1, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"Connector", result->getType());
}

TEST_F(ShapesTest, shapesAlign) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 3;
	int shape1Index = 1;
	int shape2Index = 2;

	std::shared_ptr<ShapeBase> shape11 = utils->getSlidesApi()->getShape(fileName, slideIndex, shape1Index, password, folderName).get();
	std::shared_ptr<ShapeBase> shape12 = utils->getSlidesApi()->getShape(fileName, slideIndex, shape2Index, password, folderName).get();
	EXPECT_NE(shape11->getX(), shape12->getX());
	EXPECT_NE(shape11->getY(), shape12->getY());

	utils->getSlidesApi()->alignShapes(fileName, slideIndex, L"AlignTop", boost::none, {}, password, folderName).get();
	std::shared_ptr<ShapeBase> shape21 = utils->getSlidesApi()->getShape(fileName, slideIndex, shape1Index, password, folderName).get();
	std::shared_ptr<ShapeBase> shape22 = utils->getSlidesApi()->getShape(fileName, slideIndex, shape2Index, password, folderName).get();
	EXPECT_NE(shape21->getX(), shape22->getX());
	EXPECT_LT(abs(shape21->getY() - shape22->getY()), 1);

	utils->getSlidesApi()->alignShapes(fileName, slideIndex, L"AlignLeft", true, { 1, 2 }, password, folderName).get();
	std::shared_ptr<ShapeBase> shape31 = utils->getSlidesApi()->getShape(fileName, slideIndex, shape1Index, password, folderName).get();
	std::shared_ptr<ShapeBase> shape32 = utils->getSlidesApi()->getShape(fileName, slideIndex, shape2Index, password, folderName).get();
	EXPECT_LT(abs(shape31->getX()), 1);
	EXPECT_LT(abs(shape31->getX() - shape32->getX()), 1);
	EXPECT_LT(abs(shape31->getY() - shape32->getY()), 1);
}

TEST_F(ShapesTest, shapesAlignGroup) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;
	int shapeIndex = 4;
	utility::string_t shapeIndexStr = L"4";
	utility::string_t shape1Index = L"1";
	utility::string_t shape2Index = L"2";

	std::shared_ptr<ShapeBase> shape11 = utils->getSlidesApi()->getShape(fileName, slideIndex, shapeIndex, password, folderName, L"", shape1Index).get();
	std::shared_ptr<ShapeBase> shape12 = utils->getSlidesApi()->getShape(fileName, slideIndex, shapeIndex, password, folderName, L"", shape2Index).get();
	EXPECT_NE(shape11->getX(), shape12->getX());
	EXPECT_NE(shape11->getY(), shape12->getY());

	utils->getSlidesApi()->alignShapes(fileName, slideIndex, L"AlignTop", boost::none, {}, password, folderName, L"", shapeIndexStr).get();
	std::shared_ptr<ShapeBase> shape21 = utils->getSlidesApi()->getShape(fileName, slideIndex, shapeIndex, password, folderName, L"", shape1Index).get();
	std::shared_ptr<ShapeBase> shape22 = utils->getSlidesApi()->getShape(fileName, slideIndex, shapeIndex, password, folderName, L"", shape2Index).get();
	EXPECT_NE(shape21->getX(), shape22->getX());
	EXPECT_LT(abs(shape21->getY() - shape22->getY()), 1);

	utils->getSlidesApi()->alignShapes(fileName, slideIndex, L"AlignLeft", true, { 1, 2 }, password, folderName, L"", shapeIndexStr).get();
	std::shared_ptr<ShapeBase> shape31 = utils->getSlidesApi()->getShape(fileName, slideIndex, shapeIndex, password, folderName, L"", shape1Index).get();
	std::shared_ptr<ShapeBase> shape32 = utils->getSlidesApi()->getShape(fileName, slideIndex, shapeIndex, password, folderName, L"", shape2Index).get();
	EXPECT_LT(abs(shape31->getX()), 1);
	EXPECT_LT(abs(shape31->getX() - shape32->getX()), 1);
	EXPECT_LT(abs(shape31->getY() - shape32->getY()), 1);
}

TEST_F(ShapesTest, shapeGeometryGet) {
	utils->initialize("", "", "");
	std::shared_ptr<GeometryPaths> paths = utils->getSlidesApi()->getShapeGeometryPath(L"test.pptx", 4, 2, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, paths->getPaths().size());
}

TEST_F(ShapesTest, shapeGeometrySet) {
	utils->initialize("", "", "");
	std::shared_ptr<GeometryPaths> dto(new GeometryPaths());
	std::shared_ptr<GeometryPath> path(new GeometryPath());
	std::shared_ptr<MoveToPathSegment> start(new MoveToPathSegment());
	start->setX(0);
	start->setY(0);
	std::shared_ptr<LineToPathSegment> line1(new LineToPathSegment());
	line1->setX(0);
	line1->setY(200);
	std::shared_ptr<LineToPathSegment> line2(new LineToPathSegment());
	line2->setX(200);
	line2->setY(300);
	std::shared_ptr<LineToPathSegment> line3(new LineToPathSegment());
	line3->setX(400);
	line3->setY(200);
	std::shared_ptr<LineToPathSegment> line4(new LineToPathSegment());
	line4->setX(400);
	line4->setY(0);
	std::shared_ptr<ClosePathSegment> end(new ClosePathSegment());
	path->setPathData({ start, line1, line2, line3, line4, end });
	dto->setPaths({ path });
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->setShapeGeometryPath(L"test.pptx", 4, 1, dto, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"Shape", result->getType());
}

TEST_F(ShapesTest, zoomFrameAdd) {
	utils->initialize("", "", "");
	std::shared_ptr<ZoomFrame> dto(new ZoomFrame());
	dto->setX(0);
	dto->setY(0);
	dto->setWidth(200);
	dto->setHeight(100);
	dto->setTargetSlideIndex(2);
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 3, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<ZoomFrame> zoomFrame = std::static_pointer_cast<ZoomFrame>(result);
	EXPECT_EQ(2, zoomFrame->getTargetSlideIndex());
}

TEST_F(ShapesTest, zoomFrameAddForSection) {
	utils->initialize("", "", "");
	std::shared_ptr<SectionZoomFrame> dto(new SectionZoomFrame());
	dto->setX(0);
	dto->setY(0);
	dto->setWidth(200);
	dto->setHeight(100);
	dto->setTargetSectionIndex(2);
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 3, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<SectionZoomFrame> zoomFrame = std::static_pointer_cast<SectionZoomFrame>(result);
	EXPECT_EQ(2, zoomFrame->getTargetSectionIndex());
}

TEST_F(ShapesTest, oleObjectFrameAddByLink) {
	utils->initialize("", "", "");
	std::shared_ptr<OleObjectFrame> dto(new OleObjectFrame());
	dto->setX(100);
	dto->setY(100);
	dto->setWidth(200);
	dto->setHeight(200);
	dto->setLinkPath(L"oleObject.xlsx");
	dto->setObjectProgId(L"Excel.Sheet.8");
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 3, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<OleObjectFrame> oleObjectFrame = std::static_pointer_cast<OleObjectFrame>(result);
	EXPECT_EQ(dto->getLinkPath(), oleObjectFrame->getLinkPath());
}

TEST_F(ShapesTest, oleObjectFrameAddEmbedded) {
	utils->initialize("", "", "");
	std::shared_ptr<OleObjectFrame> dto(new OleObjectFrame());
	dto->setX(100);
	dto->setY(100);
	dto->setWidth(200);
	dto->setHeight(200);
	dto->setLinkPath(L"oleObject.xlsx");
	utility::string_t s;
	std::shared_ptr<std::ifstream> stream = std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary);

	dto->setEmbeddedFileBase64Data(utils->getFileDataAsBase64(L"TestData/oleObject.xlsx"));
	dto->setEmbeddedFileExtension(L"xlsx");
	std::shared_ptr<ShapeBase> result = utils->getSlidesApi()->createShape(L"test.pptx", 3, dto, boost::none, boost::none, L"password", L"TempSlidesSDK").get();
	std::shared_ptr<OleObjectFrame> oleObjectFrame = std::static_pointer_cast<OleObjectFrame>(result);
	EXPECT_EQ(dto->getLinkPath(), oleObjectFrame->getLinkPath());
}

TEST_F(ShapesTest, groupShapeAdd) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 5;
	utility::string_t subShape = L"1";
	std::shared_ptr<Shapes> shapes = utils->getSlidesApi()->getShapes(fileName, slideIndex, password, folderName).get();
	EXPECT_EQ(0, shapes->getShapesLinks().size());

	std::shared_ptr<GroupShape> dto(new GroupShape());
	utils->getSlidesApi()->createShape(fileName, slideIndex, dto, boost::none, boost::none, password, folderName).get();

	std::shared_ptr<Shape> shape1(new Shape());
	shape1->setShapeType(L"Rectangle");
	shape1->setX(50);
	shape1->setY(400);
	shape1->setWidth(50);
	shape1->setHeight(50);
	utils->getSlidesApi()->createShape(fileName, slideIndex, shape1, boost::none, boost::none, password, folderName, L"", subShape).get();

	std::shared_ptr<Shape> shape2(new Shape());
	shape2->setShapeType(L"Ellipse");
	shape2->setX(150);
	shape2->setY(400);
	shape2->setWidth(50);
	shape2->setHeight(50);
	utils->getSlidesApi()->createShape(fileName, slideIndex, shape2, boost::none, boost::none, password, folderName, L"", subShape).get();

	std::shared_ptr<Shape> shape3(new Shape());
	shape3->setShapeType(L"Triangle");
	shape3->setX(250);
	shape3->setY(400);
	shape3->setWidth(50);
	shape3->setHeight(50);
	utils->getSlidesApi()->createShape(fileName, slideIndex, shape3, boost::none, boost::none, password, folderName, L"", subShape).get();

	shapes = utils->getSlidesApi()->getShapes(fileName, slideIndex, password, folderName).get();
	EXPECT_EQ(1, shapes->getShapesLinks().size());

	shapes = utils->getSlidesApi()->getShapes(fileName, slideIndex, password, folderName, L"", L"", subShape).get();
	EXPECT_EQ(3, shapes->getShapesLinks().size());
}
