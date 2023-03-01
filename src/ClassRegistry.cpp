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


#include "ClassRegistry.h"

#include "model/AccentElement.h"
#include "model/AccessPermissions.h"
#include "model/AddLayoutSlide.h"
#include "model/AddMasterSlide.h"
#include "model/AddShape.h"
#include "model/AddSlide.h"
#include "model/AlphaBiLevelEffect.h"
#include "model/AlphaCeilingEffect.h"
#include "model/AlphaFloorEffect.h"
#include "model/AlphaInverseEffect.h"
#include "model/AlphaModulateEffect.h"
#include "model/AlphaModulateFixedEffect.h"
#include "model/AlphaReplaceEffect.h"
#include "model/ApiInfo.h"
#include "model/ArcToPathSegment.h"
#include "model/ArrayElement.h"
#include "model/ArrowHeadProperties.h"
#include "model/AudioFrame.h"
#include "model/Axes.h"
#include "model/Axis.h"
#include "model/AxisType.h"
#include "model/BarElement.h"
#include "model/Base64InputFile.h"
#include "model/BiLevelEffect.h"
#include "model/BlockElement.h"
#include "model/BlurEffect.h"
#include "model/BlurImageEffect.h"
#include "model/BorderBoxElement.h"
#include "model/BoxElement.h"
#include "model/BubbleChartDataPoint.h"
#include "model/BubbleSeries.h"
#include "model/Camera.h"
#include "model/Chart.h"
#include "model/ChartCategory.h"
#include "model/ChartLinesFormat.h"
#include "model/ChartSeriesGroup.h"
#include "model/ChartTitle.h"
#include "model/ChartWall.h"
#include "model/ChartWallType.h"
#include "model/ClosePathSegment.h"
#include "model/ColorChangeEffect.h"
#include "model/ColorReplaceEffect.h"
#include "model/ColorScheme.h"
#include "model/CommonSlideViewProperties.h"
#include "model/Connector.h"
#include "model/CubicBezierToPathSegment.h"
#include "model/CustomDashPattern.h"
#include "model/DataPoint.h"
#include "model/DataSource.h"
#include "model/DelimiterElement.h"
#include "model/DiscUsage.h"
#include "model/Document.h"
#include "model/DocumentProperties.h"
#include "model/DocumentProperty.h"
#include "model/DocumentReplaceResult.h"
#include "model/DuotoneEffect.h"
#include "model/Effect.h"
#include "model/EffectFormat.h"
#include "model/EntityExists.h"
#include "model/Error.h"
#include "model/ErrorDetails.h"
#include "model/ExportFormat.h"
#include "model/ExportOptions.h"
#include "model/FileVersion.h"
#include "model/FileVersions.h"
#include "model/FilesList.h"
#include "model/FilesUploadResult.h"
#include "model/FillFormat.h"
#include "model/FillOverlayEffect.h"
#include "model/FillOverlayImageEffect.h"
#include "model/FontData.h"
#include "model/FontFallbackRule.h"
#include "model/FontScheme.h"
#include "model/FontSet.h"
#include "model/FontSubstRule.h"
#include "model/FontsData.h"
#include "model/FormatScheme.h"
#include "model/FractionElement.h"
#include "model/FunctionElement.h"
#include "model/GeometryPath.h"
#include "model/GeometryPaths.h"
#include "model/GeometryShape.h"
#include "model/GifExportOptions.h"
#include "model/GlowEffect.h"
#include "model/GradientFill.h"
#include "model/GradientFillStop.h"
#include "model/GraphicalObject.h"
#include "model/GrayScaleEffect.h"
#include "model/GroupShape.h"
#include "model/GroupingCharacterElement.h"
#include "model/HeaderFooter.h"
#include "model/HslEffect.h"
#include "model/Html5ExportOptions.h"
#include "model/HtmlExportOptions.h"
#include "model/Hyperlink.h"
#include "model/IShapeExportOptions.h"
#include "model/Image.h"
#include "model/ImageExportFormat.h"
#include "model/ImageExportOptions.h"
#include "model/ImageExportOptionsBase.h"
#include "model/ImageTransformEffect.h"
#include "model/Images.h"
#include "model/InnerShadowEffect.h"
#include "model/Input.h"
#include "model/InputFile.h"
#include "model/InteractiveSequence.h"
#include "model/LayoutSlide.h"
#include "model/LayoutSlides.h"
#include "model/LeftSubSuperscriptElement.h"
#include "model/Legend.h"
#include "model/LightRig.h"
#include "model/LimitElement.h"
#include "model/LineFormat.h"
#include "model/LineToPathSegment.h"
#include "model/Literals.h"
#include "model/LuminanceEffect.h"
#include "model/MasterSlide.h"
#include "model/MasterSlides.h"
#include "model/MathElement.h"
#include "model/MathParagraph.h"
#include "model/MatrixElement.h"
#include "model/Merge.h"
#include "model/MergingSource.h"
#include "model/MoveToPathSegment.h"
#include "model/NaryOperatorElement.h"
#include "model/NoFill.h"
#include "model/NormalViewRestoredProperties.h"
#include "model/NotesSlide.h"
#include "model/NotesSlideExportFormat.h"
#include "model/NotesSlideHeaderFooter.h"
#include "model/ObjectExist.h"
#include "model/OleObjectFrame.h"
#include "model/OneValueChartDataPoint.h"
#include "model/OneValueSeries.h"
#include "model/OrderedMergeRequest.h"
#include "model/OuterShadowEffect.h"
#include "model/OutputFile.h"
#include "model/Paragraph.h"
#include "model/ParagraphFormat.h"
#include "model/Paragraphs.h"
#include "model/PathInputFile.h"
#include "model/PathOutputFile.h"
#include "model/PathSegment.h"
#include "model/PatternFill.h"
#include "model/PdfExportOptions.h"
#include "model/PictureFill.h"
#include "model/PictureFrame.h"
#include "model/Pipeline.h"
#include "model/Placeholder.h"
#include "model/Placeholders.h"
#include "model/PlotArea.h"
#include "model/Portion.h"
#include "model/PortionFormat.h"
#include "model/Portions.h"
#include "model/PptxExportOptions.h"
#include "model/PresentationToMerge.h"
#include "model/PresentationsMergeRequest.h"
#include "model/PresetShadowEffect.h"
#include "model/ProtectionProperties.h"
#include "model/QuadraticBezierToPathSegment.h"
#include "model/RadicalElement.h"
#include "model/ReflectionEffect.h"
#include "model/RemoveShape.h"
#include "model/RemoveSlide.h"
#include "model/ReorderSlide.h"
#include "model/ReplaceText.h"
#include "model/RequestInputFile.h"
#include "model/ResetSlide.h"
#include "model/ResourceBase.h"
#include "model/ResourceUri.h"
#include "model/ResponseOutputFile.h"
#include "model/RightSubSuperscriptElement.h"
#include "model/Save.h"
#include "model/SaveShape.h"
#include "model/SaveSlide.h"
#include "model/ScatterChartDataPoint.h"
#include "model/ScatterSeries.h"
#include "model/Section.h"
#include "model/SectionZoomFrame.h"
#include "model/Sections.h"
#include "model/Series.h"
#include "model/SeriesMarker.h"
#include "model/Shape.h"
#include "model/ShapeBase.h"
#include "model/ShapeBevel.h"
#include "model/ShapeExportFormat.h"
#include "model/ShapeImageExportOptions.h"
#include "model/ShapeThumbnailBounds.h"
#include "model/ShapeType.h"
#include "model/Shapes.h"
#include "model/ShapesAlignmentType.h"
#include "model/Slide.h"
#include "model/SlideAnimation.h"
#include "model/SlideBackground.h"
#include "model/SlideComment.h"
#include "model/SlideCommentBase.h"
#include "model/SlideComments.h"
#include "model/SlideExportFormat.h"
#include "model/SlideModernComment.h"
#include "model/SlideProperties.h"
#include "model/SlideReplaceResult.h"
#include "model/SlideShowProperties.h"
#include "model/Slides.h"
#include "model/SmartArt.h"
#include "model/SmartArtNode.h"
#include "model/SmartArtShape.h"
#include "model/SoftEdgeEffect.h"
#include "model/SolidFill.h"
#include "model/SpecialSlideType.h"
#include "model/SplitDocumentResult.h"
#include "model/StorageExist.h"
#include "model/StorageFile.h"
#include "model/SubscriptElement.h"
#include "model/SummaryZoomFrame.h"
#include "model/SummaryZoomSection.h"
#include "model/SuperscriptElement.h"
#include "model/SvgExportOptions.h"
#include "model/SwfExportOptions.h"
#include "model/Table.h"
#include "model/TableCell.h"
#include "model/TableColumn.h"
#include "model/TableRow.h"
#include "model/Task.h"
#include "model/TextBounds.h"
#include "model/TextElement.h"
#include "model/TextFrameFormat.h"
#include "model/TextItem.h"
#include "model/TextItems.h"
#include "model/Theme.h"
#include "model/ThreeDFormat.h"
#include "model/TiffExportOptions.h"
#include "model/TintEffect.h"
#include "model/UpdateBackground.h"
#include "model/UpdateShape.h"
#include "model/VideoExportOptions.h"
#include "model/VideoFrame.h"
#include "model/ViewProperties.h"
#include "model/Workbook.h"
#include "model/XYSeries.h"
#include "model/XamlExportOptions.h"
#include "model/XpsExportOptions.h"
#include "model/ZoomFrame.h"
#include "model/ZoomObject.h"

namespace asposeslidescloud {
namespace api {

using namespace asposeslidescloud::model;

std::shared_ptr<void> ClassRegistry::deserialize(utility::string_t className, web::json::value json)
{
	utility::string_t subclassName = getSubclass(className, json);
	if (subclassName.empty())
	{
		subclassName = className;
	}
	return deserializeSubclass(subclassName, json);
}

utility::string_t ClassRegistry::getSubclass(utility::string_t className, web::json::value json)
{
	std::map<utility::string_t, utility::string_t>::iterator itHierarchy;
	for (itHierarchy = s_hierarchy.begin(); itHierarchy != s_hierarchy.end(); itHierarchy++)
	{
		if (itHierarchy->second == className)
		{
			utility::string_t subclassName = getSubclass(itHierarchy->first, json);
			if (!subclassName.empty())
			{
				return subclassName;
			}
		}
	}
	if (s_determiners.count(className) && !s_determiners[className].empty())
	{
		bool isGoodClass = true;
		std::map<utility::string_t, utility::string_t>::iterator itDeterminers;
		for (itDeterminers = s_determiners[className].begin(); isGoodClass && itDeterminers != s_determiners[className].end(); itDeterminers++)
		{
			if (!json.has_field(itDeterminers->first) || json[itDeterminers->first].as_string() != itDeterminers->second)
			{
				utility::string_t keyLower = boost::to_lower_copy(itDeterminers->first.substr(0, 1)) + itDeterminers->first.substr(1);
				if (!json.has_field(keyLower) || json[keyLower].as_string() != itDeterminers->second)
				{
					isGoodClass = false;
				}
			}
		}
		if (isGoodClass)
		{
			return className;
		}
	}
	return L"";
}

std::shared_ptr<void> ClassRegistry::deserializeSubclass(utility::string_t className, web::json::value json)
{
	if (className == L"AccentElement")
	{
		std::shared_ptr<AccentElement> result(new AccentElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"AccessPermissions")
	{
		std::shared_ptr<AccessPermissions> result(new AccessPermissions());
		result->fromJson(json);
		return result;
	}
	if (className == L"AddLayoutSlide")
	{
		std::shared_ptr<AddLayoutSlide> result(new AddLayoutSlide());
		result->fromJson(json);
		return result;
	}
	if (className == L"AddMasterSlide")
	{
		std::shared_ptr<AddMasterSlide> result(new AddMasterSlide());
		result->fromJson(json);
		return result;
	}
	if (className == L"AddShape")
	{
		std::shared_ptr<AddShape> result(new AddShape());
		result->fromJson(json);
		return result;
	}
	if (className == L"AddSlide")
	{
		std::shared_ptr<AddSlide> result(new AddSlide());
		result->fromJson(json);
		return result;
	}
	if (className == L"AlphaBiLevelEffect")
	{
		std::shared_ptr<AlphaBiLevelEffect> result(new AlphaBiLevelEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"AlphaCeilingEffect")
	{
		std::shared_ptr<AlphaCeilingEffect> result(new AlphaCeilingEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"AlphaFloorEffect")
	{
		std::shared_ptr<AlphaFloorEffect> result(new AlphaFloorEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"AlphaInverseEffect")
	{
		std::shared_ptr<AlphaInverseEffect> result(new AlphaInverseEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"AlphaModulateEffect")
	{
		std::shared_ptr<AlphaModulateEffect> result(new AlphaModulateEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"AlphaModulateFixedEffect")
	{
		std::shared_ptr<AlphaModulateFixedEffect> result(new AlphaModulateFixedEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"AlphaReplaceEffect")
	{
		std::shared_ptr<AlphaReplaceEffect> result(new AlphaReplaceEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"ApiInfo")
	{
		std::shared_ptr<ApiInfo> result(new ApiInfo());
		result->fromJson(json);
		return result;
	}
	if (className == L"ArcToPathSegment")
	{
		std::shared_ptr<ArcToPathSegment> result(new ArcToPathSegment());
		result->fromJson(json);
		return result;
	}
	if (className == L"ArrayElement")
	{
		std::shared_ptr<ArrayElement> result(new ArrayElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"ArrowHeadProperties")
	{
		std::shared_ptr<ArrowHeadProperties> result(new ArrowHeadProperties());
		result->fromJson(json);
		return result;
	}
	if (className == L"AudioFrame")
	{
		std::shared_ptr<AudioFrame> result(new AudioFrame());
		result->fromJson(json);
		return result;
	}
	if (className == L"Axes")
	{
		std::shared_ptr<Axes> result(new Axes());
		result->fromJson(json);
		return result;
	}
	if (className == L"Axis")
	{
		std::shared_ptr<Axis> result(new Axis());
		result->fromJson(json);
		return result;
	}
	if (className == L"AxisType")
	{
		std::shared_ptr<AxisType> result(new AxisType());
		result->fromJson(json);
		return result;
	}
	if (className == L"BarElement")
	{
		std::shared_ptr<BarElement> result(new BarElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"Base64InputFile")
	{
		std::shared_ptr<Base64InputFile> result(new Base64InputFile());
		result->fromJson(json);
		return result;
	}
	if (className == L"BiLevelEffect")
	{
		std::shared_ptr<BiLevelEffect> result(new BiLevelEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"BlockElement")
	{
		std::shared_ptr<BlockElement> result(new BlockElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"BlurEffect")
	{
		std::shared_ptr<BlurEffect> result(new BlurEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"BlurImageEffect")
	{
		std::shared_ptr<BlurImageEffect> result(new BlurImageEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"BorderBoxElement")
	{
		std::shared_ptr<BorderBoxElement> result(new BorderBoxElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"BoxElement")
	{
		std::shared_ptr<BoxElement> result(new BoxElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"BubbleChartDataPoint")
	{
		std::shared_ptr<BubbleChartDataPoint> result(new BubbleChartDataPoint());
		result->fromJson(json);
		return result;
	}
	if (className == L"BubbleSeries")
	{
		std::shared_ptr<BubbleSeries> result(new BubbleSeries());
		result->fromJson(json);
		return result;
	}
	if (className == L"Camera")
	{
		std::shared_ptr<Camera> result(new Camera());
		result->fromJson(json);
		return result;
	}
	if (className == L"Chart")
	{
		std::shared_ptr<Chart> result(new Chart());
		result->fromJson(json);
		return result;
	}
	if (className == L"ChartCategory")
	{
		std::shared_ptr<ChartCategory> result(new ChartCategory());
		result->fromJson(json);
		return result;
	}
	if (className == L"ChartLinesFormat")
	{
		std::shared_ptr<ChartLinesFormat> result(new ChartLinesFormat());
		result->fromJson(json);
		return result;
	}
	if (className == L"ChartSeriesGroup")
	{
		std::shared_ptr<ChartSeriesGroup> result(new ChartSeriesGroup());
		result->fromJson(json);
		return result;
	}
	if (className == L"ChartTitle")
	{
		std::shared_ptr<ChartTitle> result(new ChartTitle());
		result->fromJson(json);
		return result;
	}
	if (className == L"ChartWall")
	{
		std::shared_ptr<ChartWall> result(new ChartWall());
		result->fromJson(json);
		return result;
	}
	if (className == L"ChartWallType")
	{
		std::shared_ptr<ChartWallType> result(new ChartWallType());
		result->fromJson(json);
		return result;
	}
	if (className == L"ClosePathSegment")
	{
		std::shared_ptr<ClosePathSegment> result(new ClosePathSegment());
		result->fromJson(json);
		return result;
	}
	if (className == L"ColorChangeEffect")
	{
		std::shared_ptr<ColorChangeEffect> result(new ColorChangeEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"ColorReplaceEffect")
	{
		std::shared_ptr<ColorReplaceEffect> result(new ColorReplaceEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"ColorScheme")
	{
		std::shared_ptr<ColorScheme> result(new ColorScheme());
		result->fromJson(json);
		return result;
	}
	if (className == L"CommonSlideViewProperties")
	{
		std::shared_ptr<CommonSlideViewProperties> result(new CommonSlideViewProperties());
		result->fromJson(json);
		return result;
	}
	if (className == L"Connector")
	{
		std::shared_ptr<Connector> result(new Connector());
		result->fromJson(json);
		return result;
	}
	if (className == L"CubicBezierToPathSegment")
	{
		std::shared_ptr<CubicBezierToPathSegment> result(new CubicBezierToPathSegment());
		result->fromJson(json);
		return result;
	}
	if (className == L"CustomDashPattern")
	{
		std::shared_ptr<CustomDashPattern> result(new CustomDashPattern());
		result->fromJson(json);
		return result;
	}
	if (className == L"DataPoint")
	{
		std::shared_ptr<DataPoint> result(new DataPoint());
		result->fromJson(json);
		return result;
	}
	if (className == L"DataSource")
	{
		std::shared_ptr<DataSource> result(new DataSource());
		result->fromJson(json);
		return result;
	}
	if (className == L"DelimiterElement")
	{
		std::shared_ptr<DelimiterElement> result(new DelimiterElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"DiscUsage")
	{
		std::shared_ptr<DiscUsage> result(new DiscUsage());
		result->fromJson(json);
		return result;
	}
	if (className == L"Document")
	{
		std::shared_ptr<Document> result(new Document());
		result->fromJson(json);
		return result;
	}
	if (className == L"DocumentProperties")
	{
		std::shared_ptr<DocumentProperties> result(new DocumentProperties());
		result->fromJson(json);
		return result;
	}
	if (className == L"DocumentProperty")
	{
		std::shared_ptr<DocumentProperty> result(new DocumentProperty());
		result->fromJson(json);
		return result;
	}
	if (className == L"DocumentReplaceResult")
	{
		std::shared_ptr<DocumentReplaceResult> result(new DocumentReplaceResult());
		result->fromJson(json);
		return result;
	}
	if (className == L"DuotoneEffect")
	{
		std::shared_ptr<DuotoneEffect> result(new DuotoneEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"Effect")
	{
		std::shared_ptr<Effect> result(new Effect());
		result->fromJson(json);
		return result;
	}
	if (className == L"EffectFormat")
	{
		std::shared_ptr<EffectFormat> result(new EffectFormat());
		result->fromJson(json);
		return result;
	}
	if (className == L"EntityExists")
	{
		std::shared_ptr<EntityExists> result(new EntityExists());
		result->fromJson(json);
		return result;
	}
	if (className == L"Error")
	{
		std::shared_ptr<Error> result(new Error());
		result->fromJson(json);
		return result;
	}
	if (className == L"ErrorDetails")
	{
		std::shared_ptr<ErrorDetails> result(new ErrorDetails());
		result->fromJson(json);
		return result;
	}
	if (className == L"ExportFormat")
	{
		std::shared_ptr<ExportFormat> result(new ExportFormat());
		result->fromJson(json);
		return result;
	}
	if (className == L"ExportOptions")
	{
		std::shared_ptr<ExportOptions> result(new ExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"FileVersion")
	{
		std::shared_ptr<FileVersion> result(new FileVersion());
		result->fromJson(json);
		return result;
	}
	if (className == L"FileVersions")
	{
		std::shared_ptr<FileVersions> result(new FileVersions());
		result->fromJson(json);
		return result;
	}
	if (className == L"FilesList")
	{
		std::shared_ptr<FilesList> result(new FilesList());
		result->fromJson(json);
		return result;
	}
	if (className == L"FilesUploadResult")
	{
		std::shared_ptr<FilesUploadResult> result(new FilesUploadResult());
		result->fromJson(json);
		return result;
	}
	if (className == L"FillFormat")
	{
		std::shared_ptr<FillFormat> result(new FillFormat());
		result->fromJson(json);
		return result;
	}
	if (className == L"FillOverlayEffect")
	{
		std::shared_ptr<FillOverlayEffect> result(new FillOverlayEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"FillOverlayImageEffect")
	{
		std::shared_ptr<FillOverlayImageEffect> result(new FillOverlayImageEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"FontData")
	{
		std::shared_ptr<FontData> result(new FontData());
		result->fromJson(json);
		return result;
	}
	if (className == L"FontFallbackRule")
	{
		std::shared_ptr<FontFallbackRule> result(new FontFallbackRule());
		result->fromJson(json);
		return result;
	}
	if (className == L"FontScheme")
	{
		std::shared_ptr<FontScheme> result(new FontScheme());
		result->fromJson(json);
		return result;
	}
	if (className == L"FontSet")
	{
		std::shared_ptr<FontSet> result(new FontSet());
		result->fromJson(json);
		return result;
	}
	if (className == L"FontSubstRule")
	{
		std::shared_ptr<FontSubstRule> result(new FontSubstRule());
		result->fromJson(json);
		return result;
	}
	if (className == L"FontsData")
	{
		std::shared_ptr<FontsData> result(new FontsData());
		result->fromJson(json);
		return result;
	}
	if (className == L"FormatScheme")
	{
		std::shared_ptr<FormatScheme> result(new FormatScheme());
		result->fromJson(json);
		return result;
	}
	if (className == L"FractionElement")
	{
		std::shared_ptr<FractionElement> result(new FractionElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"FunctionElement")
	{
		std::shared_ptr<FunctionElement> result(new FunctionElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"GeometryPath")
	{
		std::shared_ptr<GeometryPath> result(new GeometryPath());
		result->fromJson(json);
		return result;
	}
	if (className == L"GeometryPaths")
	{
		std::shared_ptr<GeometryPaths> result(new GeometryPaths());
		result->fromJson(json);
		return result;
	}
	if (className == L"GeometryShape")
	{
		std::shared_ptr<GeometryShape> result(new GeometryShape());
		result->fromJson(json);
		return result;
	}
	if (className == L"GifExportOptions")
	{
		std::shared_ptr<GifExportOptions> result(new GifExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"GlowEffect")
	{
		std::shared_ptr<GlowEffect> result(new GlowEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"GradientFill")
	{
		std::shared_ptr<GradientFill> result(new GradientFill());
		result->fromJson(json);
		return result;
	}
	if (className == L"GradientFillStop")
	{
		std::shared_ptr<GradientFillStop> result(new GradientFillStop());
		result->fromJson(json);
		return result;
	}
	if (className == L"GraphicalObject")
	{
		std::shared_ptr<GraphicalObject> result(new GraphicalObject());
		result->fromJson(json);
		return result;
	}
	if (className == L"GrayScaleEffect")
	{
		std::shared_ptr<GrayScaleEffect> result(new GrayScaleEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"GroupShape")
	{
		std::shared_ptr<GroupShape> result(new GroupShape());
		result->fromJson(json);
		return result;
	}
	if (className == L"GroupingCharacterElement")
	{
		std::shared_ptr<GroupingCharacterElement> result(new GroupingCharacterElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"HeaderFooter")
	{
		std::shared_ptr<HeaderFooter> result(new HeaderFooter());
		result->fromJson(json);
		return result;
	}
	if (className == L"HslEffect")
	{
		std::shared_ptr<HslEffect> result(new HslEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"Html5ExportOptions")
	{
		std::shared_ptr<Html5ExportOptions> result(new Html5ExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"HtmlExportOptions")
	{
		std::shared_ptr<HtmlExportOptions> result(new HtmlExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"Hyperlink")
	{
		std::shared_ptr<Hyperlink> result(new Hyperlink());
		result->fromJson(json);
		return result;
	}
	if (className == L"IShapeExportOptions")
	{
		std::shared_ptr<IShapeExportOptions> result(new IShapeExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"Image")
	{
		std::shared_ptr<Image> result(new Image());
		result->fromJson(json);
		return result;
	}
	if (className == L"ImageExportFormat")
	{
		std::shared_ptr<ImageExportFormat> result(new ImageExportFormat());
		result->fromJson(json);
		return result;
	}
	if (className == L"ImageExportOptions")
	{
		std::shared_ptr<ImageExportOptions> result(new ImageExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"ImageExportOptionsBase")
	{
		std::shared_ptr<ImageExportOptionsBase> result(new ImageExportOptionsBase());
		result->fromJson(json);
		return result;
	}
	if (className == L"ImageTransformEffect")
	{
		std::shared_ptr<ImageTransformEffect> result(new ImageTransformEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"Images")
	{
		std::shared_ptr<Images> result(new Images());
		result->fromJson(json);
		return result;
	}
	if (className == L"InnerShadowEffect")
	{
		std::shared_ptr<InnerShadowEffect> result(new InnerShadowEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"Input")
	{
		std::shared_ptr<Input> result(new Input());
		result->fromJson(json);
		return result;
	}
	if (className == L"InputFile")
	{
		std::shared_ptr<InputFile> result(new InputFile());
		result->fromJson(json);
		return result;
	}
	if (className == L"InteractiveSequence")
	{
		std::shared_ptr<InteractiveSequence> result(new InteractiveSequence());
		result->fromJson(json);
		return result;
	}
	if (className == L"LayoutSlide")
	{
		std::shared_ptr<LayoutSlide> result(new LayoutSlide());
		result->fromJson(json);
		return result;
	}
	if (className == L"LayoutSlides")
	{
		std::shared_ptr<LayoutSlides> result(new LayoutSlides());
		result->fromJson(json);
		return result;
	}
	if (className == L"LeftSubSuperscriptElement")
	{
		std::shared_ptr<LeftSubSuperscriptElement> result(new LeftSubSuperscriptElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"Legend")
	{
		std::shared_ptr<Legend> result(new Legend());
		result->fromJson(json);
		return result;
	}
	if (className == L"LightRig")
	{
		std::shared_ptr<LightRig> result(new LightRig());
		result->fromJson(json);
		return result;
	}
	if (className == L"LimitElement")
	{
		std::shared_ptr<LimitElement> result(new LimitElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"LineFormat")
	{
		std::shared_ptr<LineFormat> result(new LineFormat());
		result->fromJson(json);
		return result;
	}
	if (className == L"LineToPathSegment")
	{
		std::shared_ptr<LineToPathSegment> result(new LineToPathSegment());
		result->fromJson(json);
		return result;
	}
	if (className == L"Literals")
	{
		std::shared_ptr<Literals> result(new Literals());
		result->fromJson(json);
		return result;
	}
	if (className == L"LuminanceEffect")
	{
		std::shared_ptr<LuminanceEffect> result(new LuminanceEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"MasterSlide")
	{
		std::shared_ptr<MasterSlide> result(new MasterSlide());
		result->fromJson(json);
		return result;
	}
	if (className == L"MasterSlides")
	{
		std::shared_ptr<MasterSlides> result(new MasterSlides());
		result->fromJson(json);
		return result;
	}
	if (className == L"MathElement")
	{
		std::shared_ptr<MathElement> result(new MathElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"MathParagraph")
	{
		std::shared_ptr<MathParagraph> result(new MathParagraph());
		result->fromJson(json);
		return result;
	}
	if (className == L"MatrixElement")
	{
		std::shared_ptr<MatrixElement> result(new MatrixElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"Merge")
	{
		std::shared_ptr<Merge> result(new Merge());
		result->fromJson(json);
		return result;
	}
	if (className == L"MergingSource")
	{
		std::shared_ptr<MergingSource> result(new MergingSource());
		result->fromJson(json);
		return result;
	}
	if (className == L"MoveToPathSegment")
	{
		std::shared_ptr<MoveToPathSegment> result(new MoveToPathSegment());
		result->fromJson(json);
		return result;
	}
	if (className == L"NaryOperatorElement")
	{
		std::shared_ptr<NaryOperatorElement> result(new NaryOperatorElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"NoFill")
	{
		std::shared_ptr<NoFill> result(new NoFill());
		result->fromJson(json);
		return result;
	}
	if (className == L"NormalViewRestoredProperties")
	{
		std::shared_ptr<NormalViewRestoredProperties> result(new NormalViewRestoredProperties());
		result->fromJson(json);
		return result;
	}
	if (className == L"NotesSlide")
	{
		std::shared_ptr<NotesSlide> result(new NotesSlide());
		result->fromJson(json);
		return result;
	}
	if (className == L"NotesSlideExportFormat")
	{
		std::shared_ptr<NotesSlideExportFormat> result(new NotesSlideExportFormat());
		result->fromJson(json);
		return result;
	}
	if (className == L"NotesSlideHeaderFooter")
	{
		std::shared_ptr<NotesSlideHeaderFooter> result(new NotesSlideHeaderFooter());
		result->fromJson(json);
		return result;
	}
	if (className == L"ObjectExist")
	{
		std::shared_ptr<ObjectExist> result(new ObjectExist());
		result->fromJson(json);
		return result;
	}
	if (className == L"OleObjectFrame")
	{
		std::shared_ptr<OleObjectFrame> result(new OleObjectFrame());
		result->fromJson(json);
		return result;
	}
	if (className == L"OneValueChartDataPoint")
	{
		std::shared_ptr<OneValueChartDataPoint> result(new OneValueChartDataPoint());
		result->fromJson(json);
		return result;
	}
	if (className == L"OneValueSeries")
	{
		std::shared_ptr<OneValueSeries> result(new OneValueSeries());
		result->fromJson(json);
		return result;
	}
	if (className == L"OrderedMergeRequest")
	{
		std::shared_ptr<OrderedMergeRequest> result(new OrderedMergeRequest());
		result->fromJson(json);
		return result;
	}
	if (className == L"OuterShadowEffect")
	{
		std::shared_ptr<OuterShadowEffect> result(new OuterShadowEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"OutputFile")
	{
		std::shared_ptr<OutputFile> result(new OutputFile());
		result->fromJson(json);
		return result;
	}
	if (className == L"Paragraph")
	{
		std::shared_ptr<Paragraph> result(new Paragraph());
		result->fromJson(json);
		return result;
	}
	if (className == L"ParagraphFormat")
	{
		std::shared_ptr<ParagraphFormat> result(new ParagraphFormat());
		result->fromJson(json);
		return result;
	}
	if (className == L"Paragraphs")
	{
		std::shared_ptr<Paragraphs> result(new Paragraphs());
		result->fromJson(json);
		return result;
	}
	if (className == L"PathInputFile")
	{
		std::shared_ptr<PathInputFile> result(new PathInputFile());
		result->fromJson(json);
		return result;
	}
	if (className == L"PathOutputFile")
	{
		std::shared_ptr<PathOutputFile> result(new PathOutputFile());
		result->fromJson(json);
		return result;
	}
	if (className == L"PathSegment")
	{
		std::shared_ptr<PathSegment> result(new PathSegment());
		result->fromJson(json);
		return result;
	}
	if (className == L"PatternFill")
	{
		std::shared_ptr<PatternFill> result(new PatternFill());
		result->fromJson(json);
		return result;
	}
	if (className == L"PdfExportOptions")
	{
		std::shared_ptr<PdfExportOptions> result(new PdfExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"PictureFill")
	{
		std::shared_ptr<PictureFill> result(new PictureFill());
		result->fromJson(json);
		return result;
	}
	if (className == L"PictureFrame")
	{
		std::shared_ptr<PictureFrame> result(new PictureFrame());
		result->fromJson(json);
		return result;
	}
	if (className == L"Pipeline")
	{
		std::shared_ptr<Pipeline> result(new Pipeline());
		result->fromJson(json);
		return result;
	}
	if (className == L"Placeholder")
	{
		std::shared_ptr<Placeholder> result(new Placeholder());
		result->fromJson(json);
		return result;
	}
	if (className == L"Placeholders")
	{
		std::shared_ptr<Placeholders> result(new Placeholders());
		result->fromJson(json);
		return result;
	}
	if (className == L"PlotArea")
	{
		std::shared_ptr<PlotArea> result(new PlotArea());
		result->fromJson(json);
		return result;
	}
	if (className == L"Portion")
	{
		std::shared_ptr<Portion> result(new Portion());
		result->fromJson(json);
		return result;
	}
	if (className == L"PortionFormat")
	{
		std::shared_ptr<PortionFormat> result(new PortionFormat());
		result->fromJson(json);
		return result;
	}
	if (className == L"Portions")
	{
		std::shared_ptr<Portions> result(new Portions());
		result->fromJson(json);
		return result;
	}
	if (className == L"PptxExportOptions")
	{
		std::shared_ptr<PptxExportOptions> result(new PptxExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"PresentationToMerge")
	{
		std::shared_ptr<PresentationToMerge> result(new PresentationToMerge());
		result->fromJson(json);
		return result;
	}
	if (className == L"PresentationsMergeRequest")
	{
		std::shared_ptr<PresentationsMergeRequest> result(new PresentationsMergeRequest());
		result->fromJson(json);
		return result;
	}
	if (className == L"PresetShadowEffect")
	{
		std::shared_ptr<PresetShadowEffect> result(new PresetShadowEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"ProtectionProperties")
	{
		std::shared_ptr<ProtectionProperties> result(new ProtectionProperties());
		result->fromJson(json);
		return result;
	}
	if (className == L"QuadraticBezierToPathSegment")
	{
		std::shared_ptr<QuadraticBezierToPathSegment> result(new QuadraticBezierToPathSegment());
		result->fromJson(json);
		return result;
	}
	if (className == L"RadicalElement")
	{
		std::shared_ptr<RadicalElement> result(new RadicalElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"ReflectionEffect")
	{
		std::shared_ptr<ReflectionEffect> result(new ReflectionEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"RemoveShape")
	{
		std::shared_ptr<RemoveShape> result(new RemoveShape());
		result->fromJson(json);
		return result;
	}
	if (className == L"RemoveSlide")
	{
		std::shared_ptr<RemoveSlide> result(new RemoveSlide());
		result->fromJson(json);
		return result;
	}
	if (className == L"ReorderSlide")
	{
		std::shared_ptr<ReorderSlide> result(new ReorderSlide());
		result->fromJson(json);
		return result;
	}
	if (className == L"ReplaceText")
	{
		std::shared_ptr<ReplaceText> result(new ReplaceText());
		result->fromJson(json);
		return result;
	}
	if (className == L"RequestInputFile")
	{
		std::shared_ptr<RequestInputFile> result(new RequestInputFile());
		result->fromJson(json);
		return result;
	}
	if (className == L"ResetSlide")
	{
		std::shared_ptr<ResetSlide> result(new ResetSlide());
		result->fromJson(json);
		return result;
	}
	if (className == L"ResourceBase")
	{
		std::shared_ptr<ResourceBase> result(new ResourceBase());
		result->fromJson(json);
		return result;
	}
	if (className == L"ResourceUri")
	{
		std::shared_ptr<ResourceUri> result(new ResourceUri());
		result->fromJson(json);
		return result;
	}
	if (className == L"ResponseOutputFile")
	{
		std::shared_ptr<ResponseOutputFile> result(new ResponseOutputFile());
		result->fromJson(json);
		return result;
	}
	if (className == L"RightSubSuperscriptElement")
	{
		std::shared_ptr<RightSubSuperscriptElement> result(new RightSubSuperscriptElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"Save")
	{
		std::shared_ptr<Save> result(new Save());
		result->fromJson(json);
		return result;
	}
	if (className == L"SaveShape")
	{
		std::shared_ptr<SaveShape> result(new SaveShape());
		result->fromJson(json);
		return result;
	}
	if (className == L"SaveSlide")
	{
		std::shared_ptr<SaveSlide> result(new SaveSlide());
		result->fromJson(json);
		return result;
	}
	if (className == L"ScatterChartDataPoint")
	{
		std::shared_ptr<ScatterChartDataPoint> result(new ScatterChartDataPoint());
		result->fromJson(json);
		return result;
	}
	if (className == L"ScatterSeries")
	{
		std::shared_ptr<ScatterSeries> result(new ScatterSeries());
		result->fromJson(json);
		return result;
	}
	if (className == L"Section")
	{
		std::shared_ptr<Section> result(new Section());
		result->fromJson(json);
		return result;
	}
	if (className == L"SectionZoomFrame")
	{
		std::shared_ptr<SectionZoomFrame> result(new SectionZoomFrame());
		result->fromJson(json);
		return result;
	}
	if (className == L"Sections")
	{
		std::shared_ptr<Sections> result(new Sections());
		result->fromJson(json);
		return result;
	}
	if (className == L"Series")
	{
		std::shared_ptr<Series> result(new Series());
		result->fromJson(json);
		return result;
	}
	if (className == L"SeriesMarker")
	{
		std::shared_ptr<SeriesMarker> result(new SeriesMarker());
		result->fromJson(json);
		return result;
	}
	if (className == L"Shape")
	{
		std::shared_ptr<Shape> result(new Shape());
		result->fromJson(json);
		return result;
	}
	if (className == L"ShapeBase")
	{
		std::shared_ptr<ShapeBase> result(new ShapeBase());
		result->fromJson(json);
		return result;
	}
	if (className == L"ShapeBevel")
	{
		std::shared_ptr<ShapeBevel> result(new ShapeBevel());
		result->fromJson(json);
		return result;
	}
	if (className == L"ShapeExportFormat")
	{
		std::shared_ptr<ShapeExportFormat> result(new ShapeExportFormat());
		result->fromJson(json);
		return result;
	}
	if (className == L"ShapeImageExportOptions")
	{
		std::shared_ptr<ShapeImageExportOptions> result(new ShapeImageExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"ShapeThumbnailBounds")
	{
		std::shared_ptr<ShapeThumbnailBounds> result(new ShapeThumbnailBounds());
		result->fromJson(json);
		return result;
	}
	if (className == L"ShapeType")
	{
		std::shared_ptr<ShapeType> result(new ShapeType());
		result->fromJson(json);
		return result;
	}
	if (className == L"Shapes")
	{
		std::shared_ptr<Shapes> result(new Shapes());
		result->fromJson(json);
		return result;
	}
	if (className == L"ShapesAlignmentType")
	{
		std::shared_ptr<ShapesAlignmentType> result(new ShapesAlignmentType());
		result->fromJson(json);
		return result;
	}
	if (className == L"Slide")
	{
		std::shared_ptr<Slide> result(new Slide());
		result->fromJson(json);
		return result;
	}
	if (className == L"SlideAnimation")
	{
		std::shared_ptr<SlideAnimation> result(new SlideAnimation());
		result->fromJson(json);
		return result;
	}
	if (className == L"SlideBackground")
	{
		std::shared_ptr<SlideBackground> result(new SlideBackground());
		result->fromJson(json);
		return result;
	}
	if (className == L"SlideComment")
	{
		std::shared_ptr<SlideComment> result(new SlideComment());
		result->fromJson(json);
		return result;
	}
	if (className == L"SlideCommentBase")
	{
		std::shared_ptr<SlideCommentBase> result(new SlideCommentBase());
		result->fromJson(json);
		return result;
	}
	if (className == L"SlideComments")
	{
		std::shared_ptr<SlideComments> result(new SlideComments());
		result->fromJson(json);
		return result;
	}
	if (className == L"SlideExportFormat")
	{
		std::shared_ptr<SlideExportFormat> result(new SlideExportFormat());
		result->fromJson(json);
		return result;
	}
	if (className == L"SlideModernComment")
	{
		std::shared_ptr<SlideModernComment> result(new SlideModernComment());
		result->fromJson(json);
		return result;
	}
	if (className == L"SlideProperties")
	{
		std::shared_ptr<SlideProperties> result(new SlideProperties());
		result->fromJson(json);
		return result;
	}
	if (className == L"SlideReplaceResult")
	{
		std::shared_ptr<SlideReplaceResult> result(new SlideReplaceResult());
		result->fromJson(json);
		return result;
	}
	if (className == L"SlideShowProperties")
	{
		std::shared_ptr<SlideShowProperties> result(new SlideShowProperties());
		result->fromJson(json);
		return result;
	}
	if (className == L"Slides")
	{
		std::shared_ptr<Slides> result(new Slides());
		result->fromJson(json);
		return result;
	}
	if (className == L"SmartArt")
	{
		std::shared_ptr<SmartArt> result(new SmartArt());
		result->fromJson(json);
		return result;
	}
	if (className == L"SmartArtNode")
	{
		std::shared_ptr<SmartArtNode> result(new SmartArtNode());
		result->fromJson(json);
		return result;
	}
	if (className == L"SmartArtShape")
	{
		std::shared_ptr<SmartArtShape> result(new SmartArtShape());
		result->fromJson(json);
		return result;
	}
	if (className == L"SoftEdgeEffect")
	{
		std::shared_ptr<SoftEdgeEffect> result(new SoftEdgeEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"SolidFill")
	{
		std::shared_ptr<SolidFill> result(new SolidFill());
		result->fromJson(json);
		return result;
	}
	if (className == L"SpecialSlideType")
	{
		std::shared_ptr<SpecialSlideType> result(new SpecialSlideType());
		result->fromJson(json);
		return result;
	}
	if (className == L"SplitDocumentResult")
	{
		std::shared_ptr<SplitDocumentResult> result(new SplitDocumentResult());
		result->fromJson(json);
		return result;
	}
	if (className == L"StorageExist")
	{
		std::shared_ptr<StorageExist> result(new StorageExist());
		result->fromJson(json);
		return result;
	}
	if (className == L"StorageFile")
	{
		std::shared_ptr<StorageFile> result(new StorageFile());
		result->fromJson(json);
		return result;
	}
	if (className == L"SubscriptElement")
	{
		std::shared_ptr<SubscriptElement> result(new SubscriptElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"SummaryZoomFrame")
	{
		std::shared_ptr<SummaryZoomFrame> result(new SummaryZoomFrame());
		result->fromJson(json);
		return result;
	}
	if (className == L"SummaryZoomSection")
	{
		std::shared_ptr<SummaryZoomSection> result(new SummaryZoomSection());
		result->fromJson(json);
		return result;
	}
	if (className == L"SuperscriptElement")
	{
		std::shared_ptr<SuperscriptElement> result(new SuperscriptElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"SvgExportOptions")
	{
		std::shared_ptr<SvgExportOptions> result(new SvgExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"SwfExportOptions")
	{
		std::shared_ptr<SwfExportOptions> result(new SwfExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"Table")
	{
		std::shared_ptr<Table> result(new Table());
		result->fromJson(json);
		return result;
	}
	if (className == L"TableCell")
	{
		std::shared_ptr<TableCell> result(new TableCell());
		result->fromJson(json);
		return result;
	}
	if (className == L"TableColumn")
	{
		std::shared_ptr<TableColumn> result(new TableColumn());
		result->fromJson(json);
		return result;
	}
	if (className == L"TableRow")
	{
		std::shared_ptr<TableRow> result(new TableRow());
		result->fromJson(json);
		return result;
	}
	if (className == L"Task")
	{
		std::shared_ptr<Task> result(new Task());
		result->fromJson(json);
		return result;
	}
	if (className == L"TextBounds")
	{
		std::shared_ptr<TextBounds> result(new TextBounds());
		result->fromJson(json);
		return result;
	}
	if (className == L"TextElement")
	{
		std::shared_ptr<TextElement> result(new TextElement());
		result->fromJson(json);
		return result;
	}
	if (className == L"TextFrameFormat")
	{
		std::shared_ptr<TextFrameFormat> result(new TextFrameFormat());
		result->fromJson(json);
		return result;
	}
	if (className == L"TextItem")
	{
		std::shared_ptr<TextItem> result(new TextItem());
		result->fromJson(json);
		return result;
	}
	if (className == L"TextItems")
	{
		std::shared_ptr<TextItems> result(new TextItems());
		result->fromJson(json);
		return result;
	}
	if (className == L"Theme")
	{
		std::shared_ptr<Theme> result(new Theme());
		result->fromJson(json);
		return result;
	}
	if (className == L"ThreeDFormat")
	{
		std::shared_ptr<ThreeDFormat> result(new ThreeDFormat());
		result->fromJson(json);
		return result;
	}
	if (className == L"TiffExportOptions")
	{
		std::shared_ptr<TiffExportOptions> result(new TiffExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"TintEffect")
	{
		std::shared_ptr<TintEffect> result(new TintEffect());
		result->fromJson(json);
		return result;
	}
	if (className == L"UpdateBackground")
	{
		std::shared_ptr<UpdateBackground> result(new UpdateBackground());
		result->fromJson(json);
		return result;
	}
	if (className == L"UpdateShape")
	{
		std::shared_ptr<UpdateShape> result(new UpdateShape());
		result->fromJson(json);
		return result;
	}
	if (className == L"VideoExportOptions")
	{
		std::shared_ptr<VideoExportOptions> result(new VideoExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"VideoFrame")
	{
		std::shared_ptr<VideoFrame> result(new VideoFrame());
		result->fromJson(json);
		return result;
	}
	if (className == L"ViewProperties")
	{
		std::shared_ptr<ViewProperties> result(new ViewProperties());
		result->fromJson(json);
		return result;
	}
	if (className == L"Workbook")
	{
		std::shared_ptr<Workbook> result(new Workbook());
		result->fromJson(json);
		return result;
	}
	if (className == L"XYSeries")
	{
		std::shared_ptr<XYSeries> result(new XYSeries());
		result->fromJson(json);
		return result;
	}
	if (className == L"XamlExportOptions")
	{
		std::shared_ptr<XamlExportOptions> result(new XamlExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"XpsExportOptions")
	{
		std::shared_ptr<XpsExportOptions> result(new XpsExportOptions());
		result->fromJson(json);
		return result;
	}
	if (className == L"ZoomFrame")
	{
		std::shared_ptr<ZoomFrame> result(new ZoomFrame());
		result->fromJson(json);
		return result;
	}
	if (className == L"ZoomObject")
	{
		std::shared_ptr<ZoomObject> result(new ZoomObject());
		result->fromJson(json);
		return result;
	}
	return std::make_shared<int>();
}

std::map<utility::string_t, utility::string_t> ClassRegistry::s_hierarchy =
{
	{ L"AccentElement", L"MathElement" },
	{ L"AddLayoutSlide", L"Task" },
	{ L"AddMasterSlide", L"Task" },
	{ L"AddShape", L"Task" },
	{ L"AddSlide", L"Task" },
	{ L"AlphaBiLevelEffect", L"ImageTransformEffect" },
	{ L"AlphaCeilingEffect", L"ImageTransformEffect" },
	{ L"AlphaFloorEffect", L"ImageTransformEffect" },
	{ L"AlphaInverseEffect", L"ImageTransformEffect" },
	{ L"AlphaModulateEffect", L"ImageTransformEffect" },
	{ L"AlphaModulateFixedEffect", L"ImageTransformEffect" },
	{ L"AlphaReplaceEffect", L"ImageTransformEffect" },
	{ L"ArcToPathSegment", L"PathSegment" },
	{ L"ArrayElement", L"MathElement" },
	{ L"AudioFrame", L"GeometryShape" },
	{ L"BarElement", L"MathElement" },
	{ L"Base64InputFile", L"InputFile" },
	{ L"BiLevelEffect", L"ImageTransformEffect" },
	{ L"BlockElement", L"MathElement" },
	{ L"BlurImageEffect", L"ImageTransformEffect" },
	{ L"BorderBoxElement", L"MathElement" },
	{ L"BoxElement", L"MathElement" },
	{ L"BubbleChartDataPoint", L"ScatterChartDataPoint" },
	{ L"BubbleSeries", L"XYSeries" },
	{ L"Chart", L"ShapeBase" },
	{ L"ClosePathSegment", L"PathSegment" },
	{ L"ColorChangeEffect", L"ImageTransformEffect" },
	{ L"ColorReplaceEffect", L"ImageTransformEffect" },
	{ L"ColorScheme", L"ResourceBase" },
	{ L"Connector", L"GeometryShape" },
	{ L"CubicBezierToPathSegment", L"PathSegment" },
	{ L"DelimiterElement", L"MathElement" },
	{ L"Document", L"ResourceBase" },
	{ L"DocumentProperties", L"ResourceBase" },
	{ L"DocumentProperty", L"ResourceBase" },
	{ L"DocumentReplaceResult", L"Document" },
	{ L"DuotoneEffect", L"ImageTransformEffect" },
	{ L"FileVersion", L"StorageFile" },
	{ L"FillOverlayImageEffect", L"ImageTransformEffect" },
	{ L"FontScheme", L"ResourceBase" },
	{ L"FormatScheme", L"ResourceBase" },
	{ L"FractionElement", L"MathElement" },
	{ L"FunctionElement", L"MathElement" },
	{ L"GeometryShape", L"ShapeBase" },
	{ L"GifExportOptions", L"ImageExportOptionsBase" },
	{ L"GradientFill", L"FillFormat" },
	{ L"GraphicalObject", L"ShapeBase" },
	{ L"GrayScaleEffect", L"ImageTransformEffect" },
	{ L"GroupShape", L"ShapeBase" },
	{ L"GroupingCharacterElement", L"MathElement" },
	{ L"HeaderFooter", L"ResourceBase" },
	{ L"HslEffect", L"ImageTransformEffect" },
	{ L"Html5ExportOptions", L"ExportOptions" },
	{ L"HtmlExportOptions", L"ExportOptions" },
	{ L"Image", L"ResourceBase" },
	{ L"ImageExportOptions", L"ImageExportOptionsBase" },
	{ L"ImageExportOptionsBase", L"ExportOptions" },
	{ L"Images", L"ResourceBase" },
	{ L"LayoutSlide", L"ResourceBase" },
	{ L"LayoutSlides", L"ResourceBase" },
	{ L"LeftSubSuperscriptElement", L"MathElement" },
	{ L"LimitElement", L"MathElement" },
	{ L"LineToPathSegment", L"PathSegment" },
	{ L"Literals", L"DataSource" },
	{ L"LuminanceEffect", L"ImageTransformEffect" },
	{ L"MasterSlide", L"ResourceBase" },
	{ L"MasterSlides", L"ResourceBase" },
	{ L"MatrixElement", L"MathElement" },
	{ L"Merge", L"Task" },
	{ L"MoveToPathSegment", L"PathSegment" },
	{ L"NaryOperatorElement", L"MathElement" },
	{ L"NoFill", L"FillFormat" },
	{ L"NotesSlide", L"ResourceBase" },
	{ L"NotesSlideHeaderFooter", L"ResourceBase" },
	{ L"OleObjectFrame", L"ShapeBase" },
	{ L"OneValueChartDataPoint", L"DataPoint" },
	{ L"OneValueSeries", L"Series" },
	{ L"Paragraph", L"ResourceBase" },
	{ L"Paragraphs", L"ResourceBase" },
	{ L"PathInputFile", L"InputFile" },
	{ L"PathOutputFile", L"OutputFile" },
	{ L"PatternFill", L"FillFormat" },
	{ L"PdfExportOptions", L"ExportOptions" },
	{ L"PictureFill", L"FillFormat" },
	{ L"PictureFrame", L"GeometryShape" },
	{ L"Placeholder", L"ResourceBase" },
	{ L"Placeholders", L"ResourceBase" },
	{ L"Portion", L"ResourceBase" },
	{ L"Portions", L"ResourceBase" },
	{ L"PptxExportOptions", L"ExportOptions" },
	{ L"ProtectionProperties", L"ResourceBase" },
	{ L"QuadraticBezierToPathSegment", L"PathSegment" },
	{ L"RadicalElement", L"MathElement" },
	{ L"RemoveShape", L"Task" },
	{ L"RemoveSlide", L"Task" },
	{ L"ReorderSlide", L"Task" },
	{ L"ReplaceText", L"Task" },
	{ L"RequestInputFile", L"InputFile" },
	{ L"ResetSlide", L"Task" },
	{ L"ResponseOutputFile", L"OutputFile" },
	{ L"RightSubSuperscriptElement", L"MathElement" },
	{ L"Save", L"Task" },
	{ L"SaveShape", L"Task" },
	{ L"SaveSlide", L"Task" },
	{ L"ScatterChartDataPoint", L"DataPoint" },
	{ L"ScatterSeries", L"XYSeries" },
	{ L"Section", L"ResourceBase" },
	{ L"SectionZoomFrame", L"ZoomObject" },
	{ L"Sections", L"ResourceBase" },
	{ L"Shape", L"GeometryShape" },
	{ L"ShapeBase", L"ResourceBase" },
	{ L"Shapes", L"ResourceBase" },
	{ L"Slide", L"ResourceBase" },
	{ L"SlideAnimation", L"ResourceBase" },
	{ L"SlideBackground", L"ResourceBase" },
	{ L"SlideComment", L"SlideCommentBase" },
	{ L"SlideComments", L"ResourceBase" },
	{ L"SlideModernComment", L"SlideCommentBase" },
	{ L"SlideProperties", L"ResourceBase" },
	{ L"SlideReplaceResult", L"Slide" },
	{ L"SlideShowProperties", L"ResourceBase" },
	{ L"Slides", L"ResourceBase" },
	{ L"SmartArt", L"ShapeBase" },
	{ L"SmartArtShape", L"GeometryShape" },
	{ L"SolidFill", L"FillFormat" },
	{ L"SplitDocumentResult", L"ResourceBase" },
	{ L"SubscriptElement", L"MathElement" },
	{ L"SummaryZoomFrame", L"ShapeBase" },
	{ L"SummaryZoomSection", L"SectionZoomFrame" },
	{ L"SuperscriptElement", L"MathElement" },
	{ L"SvgExportOptions", L"ExportOptions" },
	{ L"SwfExportOptions", L"ExportOptions" },
	{ L"Table", L"ShapeBase" },
	{ L"TextElement", L"MathElement" },
	{ L"TextItems", L"ResourceBase" },
	{ L"Theme", L"ResourceBase" },
	{ L"TiffExportOptions", L"ImageExportOptionsBase" },
	{ L"TintEffect", L"ImageTransformEffect" },
	{ L"UpdateBackground", L"Task" },
	{ L"UpdateShape", L"Task" },
	{ L"VideoExportOptions", L"ExportOptions" },
	{ L"VideoFrame", L"GeometryShape" },
	{ L"ViewProperties", L"ResourceBase" },
	{ L"Workbook", L"DataSource" },
	{ L"XYSeries", L"Series" },
	{ L"XamlExportOptions", L"ExportOptions" },
	{ L"XpsExportOptions", L"ExportOptions" },
	{ L"ZoomFrame", L"ZoomObject" },
	{ L"ZoomObject", L"ShapeBase" },
};

std::map<utility::string_t, std::map<utility::string_t, utility::string_t>> ClassRegistry::s_determiners =
{
	{ L"AccentElement", { { L"Type", L"Accent" }, } },
	{ L"AccessPermissions", { } },
	{ L"AddLayoutSlide", { { L"Type", L"AddLayoutSlide" }, } },
	{ L"AddMasterSlide", { { L"Type", L"AddMasterSlide" }, } },
	{ L"AddShape", { { L"Type", L"AddShape" }, } },
	{ L"AddSlide", { { L"Type", L"AddSlide" }, } },
	{ L"AlphaBiLevelEffect", { { L"Type", L"AlphaBiLevel" }, } },
	{ L"AlphaCeilingEffect", { { L"Type", L"AlphaCeiling" }, } },
	{ L"AlphaFloorEffect", { { L"Type", L"AlphaFloor" }, } },
	{ L"AlphaInverseEffect", { { L"Type", L"AlphaInverse" }, } },
	{ L"AlphaModulateEffect", { { L"Type", L"AlphaModulate" }, } },
	{ L"AlphaModulateFixedEffect", { { L"Type", L"AlphaModulateFixed" }, } },
	{ L"AlphaReplaceEffect", { { L"Type", L"AlphaReplace" }, } },
	{ L"ApiInfo", { } },
	{ L"ArcToPathSegment", { { L"Type", L"ArcTo" }, } },
	{ L"ArrayElement", { { L"Type", L"Array" }, } },
	{ L"ArrowHeadProperties", { } },
	{ L"AudioFrame", { { L"Type", L"AudioFrame" }, } },
	{ L"Axes", { } },
	{ L"Axis", { } },
	{ L"AxisType", { } },
	{ L"BarElement", { { L"Type", L"Bar" }, } },
	{ L"Base64InputFile", { { L"Type", L"Base64" }, } },
	{ L"BiLevelEffect", { { L"Type", L"BiLevel" }, } },
	{ L"BlockElement", { { L"Type", L"Block" }, } },
	{ L"BlurEffect", { } },
	{ L"BlurImageEffect", { { L"Type", L"Blur" }, } },
	{ L"BorderBoxElement", { { L"Type", L"BorderBox" }, } },
	{ L"BoxElement", { { L"Type", L"Box" }, } },
	{ L"BubbleChartDataPoint", { { L"Type", L"Bubble" }, } },
	{ L"BubbleSeries", { { L"DataPointType", L"Bubble" }, } },
	{ L"Camera", { } },
	{ L"Chart", { { L"Type", L"Chart" }, } },
	{ L"ChartCategory", { } },
	{ L"ChartLinesFormat", { } },
	{ L"ChartSeriesGroup", { } },
	{ L"ChartTitle", { } },
	{ L"ChartWall", { } },
	{ L"ChartWallType", { } },
	{ L"ClosePathSegment", { { L"Type", L"Close" }, } },
	{ L"ColorChangeEffect", { { L"Type", L"ColorChange" }, } },
	{ L"ColorReplaceEffect", { { L"Type", L"ColorReplace" }, } },
	{ L"ColorScheme", { } },
	{ L"CommonSlideViewProperties", { } },
	{ L"Connector", { { L"Type", L"Connector" }, } },
	{ L"CubicBezierToPathSegment", { { L"Type", L"CubicBezierTo" }, } },
	{ L"CustomDashPattern", { } },
	{ L"DataPoint", { } },
	{ L"DataSource", { } },
	{ L"DelimiterElement", { { L"Type", L"Delimiter" }, } },
	{ L"DiscUsage", { } },
	{ L"Document", { } },
	{ L"DocumentProperties", { } },
	{ L"DocumentProperty", { } },
	{ L"DocumentReplaceResult", { } },
	{ L"DuotoneEffect", { { L"Type", L"Duotone" }, } },
	{ L"Effect", { } },
	{ L"EffectFormat", { } },
	{ L"EntityExists", { } },
	{ L"Error", { } },
	{ L"ErrorDetails", { } },
	{ L"ExportFormat", { } },
	{ L"ExportOptions", { } },
	{ L"FileVersion", { } },
	{ L"FileVersions", { } },
	{ L"FilesList", { } },
	{ L"FilesUploadResult", { } },
	{ L"FillFormat", { } },
	{ L"FillOverlayEffect", { } },
	{ L"FillOverlayImageEffect", { { L"Type", L"FillOverlay" }, } },
	{ L"FontData", { } },
	{ L"FontFallbackRule", { } },
	{ L"FontScheme", { } },
	{ L"FontSet", { } },
	{ L"FontSubstRule", { } },
	{ L"FontsData", { } },
	{ L"FormatScheme", { } },
	{ L"FractionElement", { { L"Type", L"Fraction" }, } },
	{ L"FunctionElement", { { L"Type", L"Function" }, } },
	{ L"GeometryPath", { } },
	{ L"GeometryPaths", { } },
	{ L"GeometryShape", { } },
	{ L"GifExportOptions", { { L"Format", L"gif" }, } },
	{ L"GlowEffect", { } },
	{ L"GradientFill", { { L"Type", L"Gradient" }, } },
	{ L"GradientFillStop", { } },
	{ L"GraphicalObject", { { L"Type", L"GraphicalObject" }, } },
	{ L"GrayScaleEffect", { { L"Type", L"GrayScale" }, } },
	{ L"GroupShape", { { L"Type", L"GroupShape" }, } },
	{ L"GroupingCharacterElement", { { L"Type", L"GroupingCharacter" }, } },
	{ L"HeaderFooter", { } },
	{ L"HslEffect", { { L"Type", L"Hsl" }, } },
	{ L"Html5ExportOptions", { { L"Format", L"html5" }, } },
	{ L"HtmlExportOptions", { { L"Format", L"html" }, } },
	{ L"Hyperlink", { } },
	{ L"IShapeExportOptions", { } },
	{ L"Image", { } },
	{ L"ImageExportFormat", { } },
	{ L"ImageExportOptions", { { L"Format", L"image" }, } },
	{ L"ImageExportOptionsBase", { } },
	{ L"ImageTransformEffect", { } },
	{ L"Images", { } },
	{ L"InnerShadowEffect", { } },
	{ L"Input", { } },
	{ L"InputFile", { } },
	{ L"InteractiveSequence", { } },
	{ L"LayoutSlide", { } },
	{ L"LayoutSlides", { } },
	{ L"LeftSubSuperscriptElement", { { L"Type", L"LeftSubSuperscriptElement" }, } },
	{ L"Legend", { } },
	{ L"LightRig", { } },
	{ L"LimitElement", { { L"Type", L"Limit" }, } },
	{ L"LineFormat", { } },
	{ L"LineToPathSegment", { { L"Type", L"LineTo" }, } },
	{ L"Literals", { { L"Type", L"Literals" }, } },
	{ L"LuminanceEffect", { { L"Type", L"Luminance" }, } },
	{ L"MasterSlide", { } },
	{ L"MasterSlides", { } },
	{ L"MathElement", { } },
	{ L"MathParagraph", { } },
	{ L"MatrixElement", { { L"Type", L"Matrix" }, } },
	{ L"Merge", { { L"Type", L"Merge" }, } },
	{ L"MergingSource", { } },
	{ L"MoveToPathSegment", { { L"Type", L"MoveTo" }, } },
	{ L"NaryOperatorElement", { { L"Type", L"NaryOperator" }, } },
	{ L"NoFill", { { L"Type", L"NoFill" }, } },
	{ L"NormalViewRestoredProperties", { } },
	{ L"NotesSlide", { } },
	{ L"NotesSlideExportFormat", { } },
	{ L"NotesSlideHeaderFooter", { } },
	{ L"ObjectExist", { } },
	{ L"OleObjectFrame", { { L"Type", L"OleObjectFrame" }, } },
	{ L"OneValueChartDataPoint", { { L"Type", L"OneValue" }, } },
	{ L"OneValueSeries", { { L"DataPointType", L"OneValue" }, } },
	{ L"OrderedMergeRequest", { } },
	{ L"OuterShadowEffect", { } },
	{ L"OutputFile", { } },
	{ L"Paragraph", { } },
	{ L"ParagraphFormat", { } },
	{ L"Paragraphs", { } },
	{ L"PathInputFile", { { L"Type", L"Path" }, } },
	{ L"PathOutputFile", { { L"Type", L"Path" }, } },
	{ L"PathSegment", { } },
	{ L"PatternFill", { { L"Type", L"Pattern" }, } },
	{ L"PdfExportOptions", { { L"Format", L"pdf" }, } },
	{ L"PictureFill", { { L"Type", L"Picture" }, } },
	{ L"PictureFrame", { { L"Type", L"PictureFrame" }, } },
	{ L"Pipeline", { } },
	{ L"Placeholder", { } },
	{ L"Placeholders", { } },
	{ L"PlotArea", { } },
	{ L"Portion", { } },
	{ L"PortionFormat", { } },
	{ L"Portions", { } },
	{ L"PptxExportOptions", { { L"Format", L"pptx" }, } },
	{ L"PresentationToMerge", { } },
	{ L"PresentationsMergeRequest", { } },
	{ L"PresetShadowEffect", { } },
	{ L"ProtectionProperties", { } },
	{ L"QuadraticBezierToPathSegment", { { L"Type", L"QuadBezierTo" }, } },
	{ L"RadicalElement", { { L"Type", L"Radical" }, } },
	{ L"ReflectionEffect", { } },
	{ L"RemoveShape", { { L"Type", L"RemoveShape" }, } },
	{ L"RemoveSlide", { { L"Type", L"RemoveSlide" }, } },
	{ L"ReorderSlide", { { L"Type", L"ReoderSlide" }, } },
	{ L"ReplaceText", { { L"Type", L"ReplaceText" }, } },
	{ L"RequestInputFile", { { L"Type", L"Request" }, } },
	{ L"ResetSlide", { { L"Type", L"ResetSlide" }, } },
	{ L"ResourceBase", { } },
	{ L"ResourceUri", { } },
	{ L"ResponseOutputFile", { { L"Type", L"Response" }, } },
	{ L"RightSubSuperscriptElement", { { L"Type", L"RightSubSuperscriptElement" }, } },
	{ L"Save", { { L"Type", L"Save" }, } },
	{ L"SaveShape", { { L"Type", L"SaveShape" }, } },
	{ L"SaveSlide", { { L"Type", L"SaveSlide" }, } },
	{ L"ScatterChartDataPoint", { { L"Type", L"Scatter" }, } },
	{ L"ScatterSeries", { { L"DataPointType", L"Scatter" }, } },
	{ L"Section", { } },
	{ L"SectionZoomFrame", { { L"Type", L"SectionZoomFrame" }, } },
	{ L"Sections", { } },
	{ L"Series", { } },
	{ L"SeriesMarker", { } },
	{ L"Shape", { { L"Type", L"Shape" }, } },
	{ L"ShapeBase", { } },
	{ L"ShapeBevel", { } },
	{ L"ShapeExportFormat", { } },
	{ L"ShapeImageExportOptions", { } },
	{ L"ShapeThumbnailBounds", { } },
	{ L"ShapeType", { } },
	{ L"Shapes", { } },
	{ L"ShapesAlignmentType", { } },
	{ L"Slide", { } },
	{ L"SlideAnimation", { } },
	{ L"SlideBackground", { } },
	{ L"SlideComment", { { L"Type", L"Regular" }, } },
	{ L"SlideCommentBase", { } },
	{ L"SlideComments", { } },
	{ L"SlideExportFormat", { } },
	{ L"SlideModernComment", { { L"Type", L"Modern" }, } },
	{ L"SlideProperties", { } },
	{ L"SlideReplaceResult", { } },
	{ L"SlideShowProperties", { } },
	{ L"Slides", { } },
	{ L"SmartArt", { { L"Type", L"SmartArt" }, } },
	{ L"SmartArtNode", { } },
	{ L"SmartArtShape", { { L"Type", L"SmartArtShape" }, } },
	{ L"SoftEdgeEffect", { } },
	{ L"SolidFill", { { L"Type", L"Solid" }, } },
	{ L"SpecialSlideType", { } },
	{ L"SplitDocumentResult", { } },
	{ L"StorageExist", { } },
	{ L"StorageFile", { } },
	{ L"SubscriptElement", { { L"Type", L"SubscriptElement" }, } },
	{ L"SummaryZoomFrame", { { L"Type", L"SummaryZoomFrame" }, } },
	{ L"SummaryZoomSection", { { L"Type", L"SummaryZoomSection" }, } },
	{ L"SuperscriptElement", { { L"Type", L"SuperscriptElement" }, } },
	{ L"SvgExportOptions", { { L"Format", L"svg" }, } },
	{ L"SwfExportOptions", { { L"Format", L"swf" }, } },
	{ L"Table", { { L"Type", L"Table" }, } },
	{ L"TableCell", { } },
	{ L"TableColumn", { } },
	{ L"TableRow", { } },
	{ L"Task", { } },
	{ L"TextBounds", { } },
	{ L"TextElement", { { L"Type", L"Text" }, } },
	{ L"TextFrameFormat", { } },
	{ L"TextItem", { } },
	{ L"TextItems", { } },
	{ L"Theme", { } },
	{ L"ThreeDFormat", { } },
	{ L"TiffExportOptions", { { L"Format", L"tiff" }, } },
	{ L"TintEffect", { { L"Type", L"Tint" }, } },
	{ L"UpdateBackground", { { L"Type", L"UpdateBackground" }, } },
	{ L"UpdateShape", { { L"Type", L"UpdateShape" }, } },
	{ L"VideoExportOptions", { { L"Format", L"mpeg4" }, } },
	{ L"VideoFrame", { { L"Type", L"VideoFrame" }, } },
	{ L"ViewProperties", { } },
	{ L"Workbook", { { L"Type", L"Workbook" }, } },
	{ L"XYSeries", { } },
	{ L"XamlExportOptions", { { L"Format", L"xaml" }, } },
	{ L"XpsExportOptions", { { L"Format", L"xps" }, } },
	{ L"ZoomFrame", { { L"Type", L"ZoomFrame" }, } },
	{ L"ZoomObject", { } },
};

}
}
