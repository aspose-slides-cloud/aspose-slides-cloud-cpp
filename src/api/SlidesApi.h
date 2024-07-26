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

/*
 * SlidesApi.h
 *
 * 
 */

#ifndef ASPOSESLIDESCLOUD_API_SlidesApi_H_
#define ASPOSESLIDESCLOUD_API_SlidesApi_H_

#include <boost/optional.hpp>

#include "../defines.h"
#include "../ApiClient.h"
#include "../JsonBody.h"
#include "../StringBody.h"
#include "../ClassRegistry.h"

#include "../model/ApiInfo.h"
#include "../model/Axis.h"
#include "../model/Chart.h"
#include "../model/ChartCategory.h"
#include "../model/ChartSeriesGroup.h"
#include "../model/ChartWall.h"
#include "../model/ColorScheme.h"
#include "../model/CommentAuthors.h"
#include "../model/DataPoint.h"
#include "../model/DiscUsage.h"
#include "../model/Document.h"
#include "../model/DocumentProperties.h"
#include "../model/DocumentProperty.h"
#include "../model/DocumentReplaceResult.h"
#include "../model/Effect.h"
#include "../model/EntityExists.h"
#include "../model/ExportOptions.h"
#include "../model/FileVersions.h"
#include "../model/FilesList.h"
#include "../model/FilesUploadResult.h"
#include "../model/FontScheme.h"
#include "../model/FontsData.h"
#include "../model/FormatScheme.h"
#include "../model/GeometryPaths.h"
#include "../model/HeaderFooter.h"
#include "../HttpContent.h"
#include "../model/IShapeExportOptions.h"
#include "../model/Images.h"
#include "../model/InteractiveSequence.h"
#include "../model/LayoutSlide.h"
#include "../model/LayoutSlides.h"
#include "../model/Legend.h"
#include "../model/MasterSlide.h"
#include "../model/MasterSlides.h"
#include "../model/NotesSlide.h"
#include "../model/NotesSlideHeaderFooter.h"

#include "../model/ObjectExist.h"
#include "../model/OrderedMergeRequest.h"
#include "../model/Paragraph.h"
#include "../model/Paragraphs.h"
#include "../model/PdfImportOptions.h"
#include "../model/PictureFrame.h"
#include "../model/Pipeline.h"
#include "../model/Placeholder.h"
#include "../model/Placeholders.h"
#include "../model/Portion.h"
#include "../model/PortionFormat.h"
#include "../model/Portions.h"
#include "../model/PresentationsMergeRequest.h"
#include "../model/ProtectionProperties.h"
#include "../model/Sections.h"
#include "../model/Series.h"
#include "../model/Shape.h"
#include "../model/ShapeBase.h"
#include "../model/Shapes.h"
#include "../model/Slide.h"
#include "../model/SlideAnimation.h"
#include "../model/SlideBackground.h"
#include "../model/SlideCommentBase.h"
#include "../model/SlideComments.h"
#include "../model/SlideProperties.h"
#include "../model/SlideReplaceResult.h"
#include "../model/SlideShowProperties.h"
#include "../model/Slides.h"
#include "../model/SmartArt.h"
#include "../model/SplitDocumentResult.h"
#include "../model/StorageExist.h"
#include "../model/Table.h"
#include "../model/TableCell.h"
#include "../model/TableCellMergeOptions.h"
#include "../model/TableRow.h"
#include "../model/TextBounds.h"
#include "../model/TextItems.h"
#include "../model/Theme.h"
#include "../model/VbaModule.h"
#include "../model/VbaProject.h"
#include "../model/ViewProperties.h"
#include <cpprest/details/basic_types.h>

namespace asposeslidescloud {
namespace api {

using namespace asposeslidescloud::model;

class  SlidesApi
{
public:
	ASPOSE_DLL_EXPORT SlidesApi(std::shared_ptr<ApiConfiguration> configuration);
	ASPOSE_DLL_EXPORT SlidesApi(utility::string_t appSid, utility::string_t appKey);
	ASPOSE_DLL_EXPORT virtual ~SlidesApi();

	/// <summary>
	/// Changes the placement of selected shapes on the slide. Aligns shapes to the margins or the edge of the slide or aligns them relative to each other.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> alignShapes(utility::string_t name, int32_t slideIndex, utility::string_t alignmentType, boost::optional<bool> alignToSlide = boost::none, std::vector<int32_t> shapes = std::vector<int32_t>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Changes the placement of selected shapes on the master slide. Aligns shapes to the margins or the edge of the slide or aligns them relative to each other.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> alignSpecialSlideShapes(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t alignmentType, boost::optional<bool> alignToSlide = boost::none, std::vector<int32_t> shapes = std::vector<int32_t>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Compresses embedded fonts by removing unused characters.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> compressEmbeddedFonts(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Compresses embedded fonts by removing unused characters.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> compressEmbeddedFontsOnline(std::shared_ptr<HttpContent> document, utility::string_t password = L"");

	/// <summary>
	/// Convert presentation from request content to format specified.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> convert(std::shared_ptr<HttpContent> document, utility::string_t format, utility::string_t password = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", std::vector<int32_t> slides = std::vector<int32_t>(), std::shared_ptr<ExportOptions> options = std::shared_ptr<ExportOptions>());

	/// <summary>
	/// Convert presentation from request content to format specified.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> convertAndSave(std::shared_ptr<HttpContent> document, utility::string_t format, utility::string_t outPath, utility::string_t password = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", std::vector<int32_t> slides = std::vector<int32_t>(), std::shared_ptr<ExportOptions> options = std::shared_ptr<ExportOptions>());

	/// <summary>
	/// Copy file
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> copyFile(utility::string_t srcPath, utility::string_t destPath, utility::string_t srcStorageName = L"", utility::string_t destStorageName = L"", utility::string_t versionId = L"");

	/// <summary>
	/// Copy folder
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> copyFolder(utility::string_t srcPath, utility::string_t destPath, utility::string_t srcStorageName = L"", utility::string_t destStorageName = L"");

	/// <summary>
	/// Copy layoutSlide from source presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<LayoutSlide>> copyLayoutSlide(utility::string_t name, utility::string_t cloneFrom, int32_t cloneFromPosition, utility::string_t cloneFromPassword = L"", utility::string_t cloneFromStorage = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Copy masterSlide from source presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<MasterSlide>> copyMasterSlide(utility::string_t name, utility::string_t cloneFrom, int32_t cloneFromPosition, utility::string_t cloneFromPassword = L"", utility::string_t cloneFromStorage = L"", boost::optional<bool> applyToAll = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Copy a slide from the current or another presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> copySlide(utility::string_t name, int32_t slideToCopy, boost::optional<int32_t> position = boost::none, utility::string_t source = L"", utility::string_t sourcePassword = L"", utility::string_t sourceStorage = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Add an effect to slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> createAnimationEffect(utility::string_t name, int32_t slideIndex, std::shared_ptr<Effect> effect, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Set slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> createAnimationInteractiveSequence(utility::string_t name, int32_t slideIndex, std::shared_ptr<InteractiveSequence> sequence, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Add an animation effect to a slide interactive sequence.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> createAnimationInteractiveSequenceEffect(utility::string_t name, int32_t slideIndex, int32_t sequenceIndex, std::shared_ptr<Effect> effect, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Add a new category to a chart.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> createChartCategory(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<ChartCategory> category, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Add a new data point to a chart series.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> createChartDataPoint(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t seriesIndex, std::shared_ptr<DataPoint> dataPoint, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Add a new series to a chart.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> createChartSeries(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<Series> series, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Adds the comment on the slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideComments>> createComment(utility::string_t name, int32_t slideIndex, std::shared_ptr<SlideCommentBase> dto, boost::optional<int32_t> shapeIndex = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Adds the comment on the slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> createCommentOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, std::shared_ptr<SlideCommentBase> dto, boost::optional<int32_t> shapeIndex = boost::none, utility::string_t password = L"");

	/// <summary>
	/// Create the folder
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> createFolder(utility::string_t path, utility::string_t storageName = L"");

	/// <summary>
	/// Adds an image watermark to each slide of the presentation.  Image can be provided as a part of the form or withing PictureFrame DTO for detailed customization. Both options are applicable simultaneously. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> createImageWatermark(utility::string_t name, std::shared_ptr<HttpContent> image = std::shared_ptr<HttpContent>(), std::shared_ptr<PictureFrame> pictureFrame = std::shared_ptr<PictureFrame>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Adds an image watermark to each slide of the presentation.  Image can be provided as a part of the form or withing PictureFrame DTO for detailed customization. Both options are applicable simultaneously. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> createImageWatermarkOnline(std::shared_ptr<HttpContent> document, std::shared_ptr<HttpContent> image = std::shared_ptr<HttpContent>(), std::shared_ptr<PictureFrame> pictureFrame = std::shared_ptr<PictureFrame>(), utility::string_t password = L"");

	/// <summary>
	/// Add new notes slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<NotesSlide>> createNotesSlide(utility::string_t name, int32_t slideIndex, std::shared_ptr<NotesSlide> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Creates new paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> createParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<Paragraph> dto, boost::optional<int32_t> position = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Creates new portion.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> createPortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Portion> dto, boost::optional<int32_t> position = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Create a presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> createPresentation(utility::string_t name, std::shared_ptr<HttpContent> data = std::shared_ptr<HttpContent>(), utility::string_t inputPassword = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Create a presentation from an existing source.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> createPresentationFromSource(utility::string_t name, utility::string_t sourcePath = L"", utility::string_t sourcePassword = L"", utility::string_t sourceStorage = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Create a presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> createPresentationFromTemplate(utility::string_t name, utility::string_t templatePath, utility::string_t data = L"", utility::string_t templatePassword = L"", utility::string_t templateStorage = L"", boost::optional<bool> isImageDataEmbedded = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Create a section starting at a specified slide index.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> createSection(utility::string_t name, utility::string_t sectionName, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Create new shape.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> createShape(utility::string_t name, int32_t slideIndex, std::shared_ptr<ShapeBase> dto = std::shared_ptr<ShapeBase>(), boost::optional<int32_t> shapeToClone = boost::none, boost::optional<int32_t> position = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Create a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> createSlide(utility::string_t name, utility::string_t layoutAlias = L"", boost::optional<int32_t> position = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Add SmartArt node
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SmartArt>> createSmartArtNode(utility::string_t name, int32_t slideIndex, int32_t smartArtIndex, utility::string_t subNode = L"", utility::string_t text = L"", boost::optional<int32_t> position = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Add an effect to special slide (master, layout, notes) animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> createSpecialSlideAnimationEffect(utility::string_t name, int32_t slideIndex, utility::string_t slideType, std::shared_ptr<Effect> effect, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Set special slide (master, layout, notes) animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> createSpecialSlideAnimationInteractiveSequence(utility::string_t name, int32_t slideIndex, utility::string_t slideType, std::shared_ptr<InteractiveSequence> sequence, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Add an animation effect to a special slide (master, layout, notes) interactive sequence.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> createSpecialSlideAnimationInteractiveSequenceEffect(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t sequenceIndex, std::shared_ptr<Effect> effect, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Creates new paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> createSpecialSlideParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, std::shared_ptr<Paragraph> dto, boost::optional<int32_t> position = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Creates new portion.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> createSpecialSlidePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Portion> dto, boost::optional<int32_t> position = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Create new shape.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> createSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, std::shared_ptr<ShapeBase> dto, boost::optional<int32_t> shapeToClone = boost::none, boost::optional<int32_t> position = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Creates table cell paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> createTableCellParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, int32_t cellIndex, std::shared_ptr<Paragraph> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Creates table cell portion.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> createTableCellPortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, int32_t cellIndex, int32_t paragraphIndex, std::shared_ptr<Portion> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Inserts the table row in the specified position. If position is not specified, the row add to the end of the table.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<TableRow>> createTableRow(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<TableRow> dto, boost::optional<int32_t> position = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Append module to VBA project             
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<VbaModule>> createVbaModule(utility::string_t name, std::shared_ptr<VbaModule> moduleDto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Adds a text watermark to each slide of the presentation. Text watermark can be setup via method arguments or withing Shape DTO for detailed customization. Both options are applicable simultaneously. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> createWatermark(utility::string_t name, std::shared_ptr<Shape> shape = std::shared_ptr<Shape>(), boost::optional<double> fontHeight = boost::none, utility::string_t text = L"", utility::string_t fontName = L"", utility::string_t fontColor = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Adds a text watermark to each slide of the presentation. Text watermark can be setup via method arguments or withing Shape DTO for detailed customization. Both options are applicable simultaneously. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> createWatermarkOnline(std::shared_ptr<HttpContent> document, std::shared_ptr<Shape> shape = std::shared_ptr<Shape>(), boost::optional<double> fontHeight = boost::none, utility::string_t text = L"", utility::string_t fontName = L"", utility::string_t fontColor = L"", utility::string_t password = L"");

	/// <summary>
	/// Remove animation from a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteAnimation(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Remove an effect from slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteAnimationEffect(utility::string_t name, int32_t slideIndex, int32_t effectIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Remove an interactive sequence from slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteAnimationInteractiveSequence(utility::string_t name, int32_t slideIndex, int32_t sequenceIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Remove an effect from slide animation interactive sequence.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteAnimationInteractiveSequenceEffect(utility::string_t name, int32_t slideIndex, int32_t sequenceIndex, int32_t effectIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Clear all interactive sequences from slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteAnimationInteractiveSequences(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Clear main sequence in slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteAnimationMainSequence(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Remove background from a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideBackground>> deleteBackground(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Delete a category from a chart.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> deleteChartCategory(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t categoryIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Delete a data point from a chart series.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> deleteChartDataPoint(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t seriesIndex, int32_t pointIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Delete a series from a chart.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> deleteChartSeries(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t seriesIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Removes comments of the specified author from the presentation. If author value is not provided all comments will be removed. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> deleteComments(utility::string_t name, utility::string_t author = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Removes comments of the specified author from the presentation. If author value is not provided all comments will be removed. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> deleteCommentsOnline(std::shared_ptr<HttpContent> document, utility::string_t author = L"", utility::string_t password = L"");

	/// <summary>
	/// Clean document properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentProperties>> deleteDocumentProperties(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Delete document property.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentProperties>> deleteDocumentProperty(utility::string_t name, utility::string_t propertyName, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Removes specified embedded font and returns presentation fonts info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FontsData>> deleteEmbeddedFont(utility::string_t name, utility::string_t fontName, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Removes specified embedded font and returns presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> deleteEmbeddedFontOnline(std::shared_ptr<HttpContent> document, utility::string_t fontName, utility::string_t password = L"");

	/// <summary>
	/// Delete file
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> deleteFile(utility::string_t path, utility::string_t storageName = L"", utility::string_t versionId = L"");

	/// <summary>
	/// Delete folder
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> deleteFolder(utility::string_t path, utility::string_t storageName = L"", boost::optional<bool> recursive = boost::none);

	/// <summary>
	/// Remove notes slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slide>> deleteNotesSlide(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Remove a paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> deleteParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Remove a range of paragraphs.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> deleteParagraphs(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::vector<int32_t> paragraphs = std::vector<int32_t>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Deletes cropped areas of a pictire.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> deletePictureCroppedAreas(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Remove a portion.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> deletePortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Remove a range of portions.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> deletePortions(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, std::vector<int32_t> portions = std::vector<int32_t>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Resets all presentation protection settings. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ProtectionProperties>> deleteProtection(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Resets all presentation protection settings. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> deleteProtectionOnline(std::shared_ptr<HttpContent> document, utility::string_t password = L"");

	/// <summary>
	/// Delete a presentation section.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> deleteSection(utility::string_t name, int32_t sectionIndex, boost::optional<bool> withSlides = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Delete presentation sections.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> deleteSections(utility::string_t name, std::vector<int32_t> sections = std::vector<int32_t>(), boost::optional<bool> withSlides = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Remove a shape.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> deleteShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Remove a range of shapes.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> deleteShapes(utility::string_t name, int32_t slideIndex, std::vector<int32_t> shapes = std::vector<int32_t>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Delete a presentation slide by index.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> deleteSlide(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Removes comments of the specified author from the slide. If author value is not provided all comments will be removed. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideComments>> deleteSlideComments(utility::string_t name, int32_t slideIndex, utility::string_t author = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Removes comments of the specified author from the slide. If author value is not provided all comments will be removed.              
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> deleteSlideCommentsOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t author = L"", utility::string_t password = L"");

	/// <summary>
	/// Delete presentation slides.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> deleteSlides(utility::string_t name, std::vector<int32_t> slides = std::vector<int32_t>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Delete SmartArt node
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SmartArt>> deleteSmartArtNode(utility::string_t name, int32_t slideIndex, int32_t smartArtIndex, int32_t nodeIndex, utility::string_t subNode = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Remove animation from a special slide (master, layout, notes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteSpecialSlideAnimation(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Remove an effect from special slide (master, layout, notes) animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteSpecialSlideAnimationEffect(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t effectIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Remove an interactive sequence from special slide (master, layout, notes) animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteSpecialSlideAnimationInteractiveSequence(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t sequenceIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Remove an effect from special slide (master, layout, notes) animation interactive sequence.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteSpecialSlideAnimationInteractiveSequenceEffect(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t sequenceIndex, int32_t effectIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Clear all interactive sequences from special slide (master, layout, notes) animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteSpecialSlideAnimationInteractiveSequences(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Clear main sequence in special slide (master, layout, notes) animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteSpecialSlideAnimationMainSequence(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Remove a paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> deleteSpecialSlideParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Remove a range of paragraphs.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> deleteSpecialSlideParagraphs(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, std::vector<int32_t> paragraphs = std::vector<int32_t>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Remove a portion.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> deleteSpecialSlidePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Remove a range of portions.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> deleteSpecialSlidePortions(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, std::vector<int32_t> portions = std::vector<int32_t>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Remove a shape.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> deleteSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Remove a range of shapes.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> deleteSpecialSlideShapes(utility::string_t name, int32_t slideIndex, utility::string_t slideType, std::vector<int32_t> shapes = std::vector<int32_t>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Delete cell paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> deleteTableCellParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, int32_t cellIndex, int32_t paragraphIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Delete table ell portion.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> deleteTableCellPortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, int32_t cellIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Deletes the table row.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Table>> deleteTableRow(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, boost::optional<bool> withAttachedRows = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Removes unused layout slides.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<LayoutSlides>> deleteUnusedLayoutSlides(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Removes unused layout slides.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> deleteUnusedLayoutSlidesOnline(std::shared_ptr<HttpContent> document, utility::string_t password = L"");

	/// <summary>
	/// Removes unused master slides.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<MasterSlides>> deleteUnusedMasterSlides(utility::string_t name, boost::optional<bool> ignorePreserveField = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Removes unused master slides.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> deleteUnusedMasterSlidesOnline(std::shared_ptr<HttpContent> document, boost::optional<bool> ignorePreserveField = boost::none, utility::string_t password = L"");

	/// <summary>
	/// Delete module from VBA project.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<VbaProject>> deleteVbaModule(utility::string_t name, int32_t moduleIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Removes shapes with name \&quot;watermark\&quot; from the presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> deleteWatermark(utility::string_t name, utility::string_t shapeName = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Removes shapes with name \&quot;watermark\&quot; from the presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> deleteWatermarkOnline(std::shared_ptr<HttpContent> document, utility::string_t shapeName = L"", utility::string_t password = L"");

	/// <summary>
	/// Download file
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadFile(utility::string_t path, utility::string_t storageName = L"", utility::string_t versionId = L"");

	/// <summary>
	/// Get image in specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadImage(utility::string_t name, int32_t index, utility::string_t format, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get image binary data.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadImageDefaultFormat(utility::string_t name, int32_t index, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get image binary data.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadImageDefaultFormatOnline(std::shared_ptr<HttpContent> document, int32_t index, utility::string_t password = L"");

	/// <summary>
	/// Get image in specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadImageOnline(std::shared_ptr<HttpContent> document, int32_t index, utility::string_t format, utility::string_t password = L"");

	/// <summary>
	/// Get all presentation images in specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadImages(utility::string_t name, utility::string_t format, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get all presentation images.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadImagesDefaultFormat(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get all presentation images.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadImagesDefaultFormatOnline(std::shared_ptr<HttpContent> document, utility::string_t password = L"");

	/// <summary>
	/// Get all presentation images in specified format. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadImagesOnline(std::shared_ptr<HttpContent> document, utility::string_t format, utility::string_t password = L"");

	/// <summary>
	/// Convert Mathematical Text to MathML Format
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadMathPortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t format, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Convert notes slide to the specified image format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadNotesSlide(utility::string_t name, int32_t slideIndex, utility::string_t format, boost::optional<int32_t> width = boost::none, boost::optional<int32_t> height = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"");

	/// <summary>
	/// Convert notes slide to the specified image format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadNotesSlideOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t format, boost::optional<int32_t> width = boost::none, boost::optional<int32_t> height = boost::none, utility::string_t password = L"", utility::string_t fontsFolder = L"");

	/// <summary>
	/// Save a presentation to a specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadPresentation(utility::string_t name, utility::string_t format, std::shared_ptr<ExportOptions> options = std::shared_ptr<ExportOptions>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", std::vector<int32_t> slides = std::vector<int32_t>());

	/// <summary>
	/// Render shape to specified picture format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, std::shared_ptr<IShapeExportOptions> options = std::shared_ptr<IShapeExportOptions>(), boost::optional<double> scaleX = boost::none, boost::optional<double> scaleY = boost::none, utility::string_t bounds = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Creates the shape from the DTO and returns the result in the specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadShapeFromDto(utility::string_t format, std::shared_ptr<ShapeBase> dto);

	/// <summary>
	/// Render shape to specified picture format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadShapeOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, boost::optional<double> scaleX = boost::none, boost::optional<double> scaleY = boost::none, utility::string_t bounds = L"", utility::string_t password = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", std::shared_ptr<IShapeExportOptions> options = std::shared_ptr<IShapeExportOptions>());

	/// <summary>
	/// Save a slide to a specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadSlide(utility::string_t name, int32_t slideIndex, utility::string_t format, std::shared_ptr<ExportOptions> options = std::shared_ptr<ExportOptions>(), boost::optional<int32_t> width = boost::none, boost::optional<int32_t> height = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"");

	/// <summary>
	/// Save a slide to a specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadSlideOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t format, boost::optional<int32_t> width = boost::none, boost::optional<int32_t> height = boost::none, utility::string_t password = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", std::shared_ptr<ExportOptions> options = std::shared_ptr<ExportOptions>());

	/// <summary>
	/// Render shape to specified picture format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t format, std::shared_ptr<IShapeExportOptions> options = std::shared_ptr<IShapeExportOptions>(), boost::optional<double> scaleX = boost::none, boost::optional<double> scaleY = boost::none, utility::string_t bounds = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Read slide animation effects.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> getAnimation(utility::string_t name, int32_t slideIndex, boost::optional<int32_t> shapeIndex = boost::none, boost::optional<int32_t> paragraphIndex = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get API info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ApiInfo>> getApiInfo();

	/// <summary>
	/// Returns presentation fonts info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FontsData>> getAvailableFonts(utility::string_t fontsFolder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read slide background info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideBackground>> getBackground(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read slide theme color scheme info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ColorScheme>> getColorScheme(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Lists comment authors.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<CommentAuthors>> getCommentAuthors(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get disc usage
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DiscUsage>> getDiscUsage(utility::string_t storageName = L"");

	/// <summary>
	/// Read presentation document properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentProperties>> getDocumentProperties(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read presentation document property.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentProperty>> getDocumentProperty(utility::string_t name, utility::string_t propertyName, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get file versions
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FileVersions>> getFileVersions(utility::string_t path, utility::string_t storageName = L"");

	/// <summary>
	/// Get all files and folders within a folder
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FilesList>> getFilesList(utility::string_t path, utility::string_t storageName = L"");

	/// <summary>
	/// Read slide theme font scheme info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FontScheme>> getFontScheme(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Returns presentation fonts info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FontsData>> getFonts(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Returns presentation fonts info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FontsData>> getFontsOnline(std::shared_ptr<HttpContent> document, utility::string_t password = L"");

	/// <summary>
	/// Read slide theme format scheme info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FormatScheme>> getFormatScheme(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get default templates for HTML5 export.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> getHtml5Templates();

	/// <summary>
	/// Read presentation layoutSlide info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<LayoutSlide>> getLayoutSlide(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read presentation layoutSlides info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<LayoutSlides>> getLayoutSlides(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read presentation masterSlide info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<MasterSlide>> getMasterSlide(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read presentation masterSlides info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<MasterSlides>> getMasterSlides(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read notes slide info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<NotesSlide>> getNotesSlide(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get header/footer info for the notes slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<NotesSlideHeaderFooter>> getNotesSlideHeaderFooter(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read notes slide info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<NotesSlide>> getNotesSlideOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t password = L"");

	/// <summary>
	/// Read shape paragraph info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> getParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Read effective paragraph info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> getParagraphEffective(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Return coordinates of rect that bounds paragraph. The rect includes all the lines of text in paragraph, including empty ones.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<TextBounds>> getParagraphRectangle(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read shape paragraphs info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> getParagraphs(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Read slide placeholder info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Placeholder>> getPlaceholder(utility::string_t name, int32_t slideIndex, int32_t placeholderIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read slide placeholders info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Placeholders>> getPlaceholders(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read paragraph portion info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> getPortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Read effective portion info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> getPortionEffective(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Return coordinates of rect that bounds paragraph. The rect includes all the lines of text in paragraph, including empty ones.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<TextBounds>> getPortionRectangle(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read paragraph portions info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> getPortions(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Read presentation info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> getPresentation(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read presentation images info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Images>> getPresentationImages(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Extract presentation text items.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<TextItems>> getPresentationTextItems(utility::string_t name, boost::optional<bool> withEmpty = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read presentation protection properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ProtectionProperties>> getProtectionProperties(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read presentation sections info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> getSections(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read slide shape info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> getShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Returns geometry path of the shape
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<GeometryPaths>> getShapeGeometryPath(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read slide shapes info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> getShapes(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t shapeType = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Read presentation slide info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slide>> getSlide(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read presentation slide comments.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideComments>> getSlideComments(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get footer info for the slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<HeaderFooter>> getSlideHeaderFooter(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read slide images info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Images>> getSlideImages(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read presentation slide properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideProperties>> getSlideProperties(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read presentation slide show properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideShowProperties>> getSlideShowProperties(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Extract slide text items.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<TextItems>> getSlideTextItems(utility::string_t name, int32_t slideIndex, boost::optional<bool> withEmpty = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read presentation slides info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> getSlides(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read special slide (master, layout, notes) animation effects.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> getSpecialSlideAnimation(utility::string_t name, int32_t slideIndex, utility::string_t slideType, boost::optional<int32_t> shapeIndex = boost::none, boost::optional<int32_t> paragraphIndex = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read shape paragraph info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> getSpecialSlideParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Read special shape paragraphs info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> getSpecialSlideParagraphs(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Read paragraph portion info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> getSpecialSlidePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Read paragraph portions info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> getSpecialSlidePortions(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Read special slide shape info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> getSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Read special slide shapes info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> getSpecialSlideShapes(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Returns paragraph info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> getTableCellParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, int32_t cellIndex, int32_t paragraphIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Returns table cell paragraphs.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> getTableCellParagraphs(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, int32_t cellIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Returns table cell portion.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> getTableCellPortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, int32_t cellIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Returns table cell portions.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> getTableCellPortions(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, int32_t cellIndex, int32_t paragraphIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read slide theme info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Theme>> getTheme(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get VBA module info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<VbaModule>> getVbaModule(utility::string_t name, int32_t moduleIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get VBA project info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<VbaProject>> getVbaProject(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Read presentation view properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ViewProperties>> getViewProperties(utility::string_t name, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Highlight all matches of sample in text frame text using specified color.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shape>> highlightShapeRegex(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t regex, utility::string_t color, boost::optional<bool> wholeWordsOnly = boost::none, boost::optional<bool> ignoreCase = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Highlight all matches of sample in text frame text using specified color.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shape>> highlightShapeText(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t text, utility::string_t color, boost::optional<bool> wholeWordsOnly = boost::none, boost::optional<bool> ignoreCase = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Create presentation document from html.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> importFromHtml(utility::string_t name, utility::string_t html = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Create presentation document from pdf or append pdf to an existing presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> importFromPdf(utility::string_t name, std::shared_ptr<HttpContent> pdf, std::shared_ptr<PdfImportOptions> options = std::shared_ptr<PdfImportOptions>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Imports shapes from SVG file.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> importShapesFromSvg(utility::string_t name, int32_t slideIndex, std::shared_ptr<HttpContent> image = std::shared_ptr<HttpContent>(), boost::optional<int32_t> x = boost::none, boost::optional<int32_t> y = boost::none, boost::optional<int32_t> width = boost::none, boost::optional<int32_t> height = boost::none, std::vector<int32_t> shapes = std::vector<int32_t>(), boost::optional<bool> group = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Merge the presentation with other presentations specified in the request parameter.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> merge(utility::string_t name, std::shared_ptr<PresentationsMergeRequest> request, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Merges presentations or some of their slides specified in the request parameter. Result will be save in the storage.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> mergeAndSaveOnline(utility::string_t outPath, std::vector<std::shared_ptr<HttpContent>> files = std::vector<std::shared_ptr<HttpContent>>(), std::shared_ptr<OrderedMergeRequest> request = std::shared_ptr<OrderedMergeRequest>(), utility::string_t storage = L"");

	/// <summary>
	/// Merges presentations or some of their slides specified in the request parameter. Returns result file in the response. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> mergeOnline(std::vector<std::shared_ptr<HttpContent>> files = std::vector<std::shared_ptr<HttpContent>>(), std::shared_ptr<OrderedMergeRequest> request = std::shared_ptr<OrderedMergeRequest>(), utility::string_t storage = L"");

	/// <summary>
	/// Merge table cells.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Table>> mergeTableCells(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<TableCellMergeOptions> tableCellMergeOptions, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Move file
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> moveFile(utility::string_t srcPath, utility::string_t destPath, utility::string_t srcStorageName = L"", utility::string_t destStorageName = L"", utility::string_t versionId = L"");

	/// <summary>
	/// Move folder
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> moveFolder(utility::string_t srcPath, utility::string_t destPath, utility::string_t srcStorageName = L"", utility::string_t destStorageName = L"");

	/// <summary>
	/// Move presentation section to a specified position.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> moveSection(utility::string_t name, int32_t sectionIndex, int32_t newPosition, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Reorder presentation slide position.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> moveSlide(utility::string_t name, int32_t slideIndex, int32_t newPosition, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get info whether a notes slide exists.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<EntityExists>> notesSlideExists(utility::string_t name, int32_t slideIndex, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Get info whether a notes slide exists.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<EntityExists>> notesSlideExistsOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t password = L"");

	/// <summary>
	/// Check if file or folder exists
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ObjectExist>> objectExists(utility::string_t path, utility::string_t storageName = L"", utility::string_t versionId = L"");

	/// <summary>
	/// Merge the presentation with other presentations or some of their slides specified in the request parameter.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> orderedMerge(utility::string_t name, std::shared_ptr<OrderedMergeRequest> request, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Performs slides pipeline.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> pipeline(std::shared_ptr<Pipeline> pipeline, std::vector<std::shared_ptr<HttpContent>> files = std::vector<std::shared_ptr<HttpContent>>());

	/// <summary>
	/// Reorder presentation slides positions.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> reorderSlides(utility::string_t name, std::vector<int32_t> oldPositions = std::vector<int32_t>(), std::vector<int32_t> newPositions = std::vector<int32_t>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Replaces specified font and returns presentation fonts info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FontsData>> replaceFont(utility::string_t name, utility::string_t sourceFont, utility::string_t targetFont, boost::optional<bool> embed = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"");

	/// <summary>
	/// Replaces specified font and returns presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> replaceFontOnline(std::shared_ptr<HttpContent> document, utility::string_t sourceFont, utility::string_t targetFont, boost::optional<bool> embed = boost::none, utility::string_t password = L"", utility::string_t fontsFolder = L"");

	/// <summary>
	/// Replaces image by the specified index.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> replaceImage(utility::string_t name, int32_t imageIndex, std::shared_ptr<HttpContent> image, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Replaces image by the specified index and returns updated document. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> replaceImageOnline(std::shared_ptr<HttpContent> document, int32_t imageIndex, std::shared_ptr<HttpContent> image, utility::string_t password = L"");

	/// <summary>
	/// Replace text with a new value.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentReplaceResult>> replacePresentationText(utility::string_t name, utility::string_t oldValue, utility::string_t newValue, boost::optional<bool> ignoreCase = boost::none, boost::optional<bool> wholeWordsOnly = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Replace text with a new value.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> replacePresentationTextOnline(std::shared_ptr<HttpContent> document, utility::string_t oldValue, utility::string_t newValue, boost::optional<bool> ignoreCase = boost::none, boost::optional<bool> wholeWordsOnly = boost::none, utility::string_t password = L"");

	/// <summary>
	/// Replace text with a new value.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideReplaceResult>> replaceSlideText(utility::string_t name, int32_t slideIndex, utility::string_t oldValue, utility::string_t newValue, boost::optional<bool> ignoreCase = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Replace slide text with a new value.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> replaceSlideTextOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t oldValue, utility::string_t newValue, boost::optional<bool> ignoreCase = boost::none, utility::string_t password = L"");

	/// <summary>
	/// Finds and replaces text in presentation with given format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> replaceTextFormatting(utility::string_t name, utility::string_t oldValue, utility::string_t newValue, std::shared_ptr<PortionFormat> portionFormat = std::shared_ptr<PortionFormat>(), boost::optional<bool> withMasters = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Finds and replaces text in presentation with given format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> replaceTextFormattingOnline(std::shared_ptr<HttpContent> document, utility::string_t oldValue, utility::string_t newValue, std::shared_ptr<PortionFormat> portionFormat = std::shared_ptr<PortionFormat>(), boost::optional<bool> withMasters = boost::none, utility::string_t password = L"");

	/// <summary>
	/// Convert Mathematical Text to MathML Format and saves result to the storage
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> saveMathPortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t format, utility::string_t outPath, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Save a presentation to a specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> savePresentation(utility::string_t name, utility::string_t format, utility::string_t outPath, std::shared_ptr<ExportOptions> options = std::shared_ptr<ExportOptions>(), utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", std::vector<int32_t> slides = std::vector<int32_t>());

	/// <summary>
	/// Render shape to specified picture format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> saveShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, utility::string_t outPath, std::shared_ptr<IShapeExportOptions> options = std::shared_ptr<IShapeExportOptions>(), boost::optional<double> scaleX = boost::none, boost::optional<double> scaleY = boost::none, utility::string_t bounds = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Render shape to specified picture format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> saveShapeOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, utility::string_t outPath, boost::optional<double> scaleX = boost::none, boost::optional<double> scaleY = boost::none, utility::string_t bounds = L"", utility::string_t password = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", std::shared_ptr<IShapeExportOptions> options = std::shared_ptr<IShapeExportOptions>());

	/// <summary>
	/// Save a slide to a specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> saveSlide(utility::string_t name, int32_t slideIndex, utility::string_t format, utility::string_t outPath, std::shared_ptr<ExportOptions> options = std::shared_ptr<ExportOptions>(), boost::optional<int32_t> width = boost::none, boost::optional<int32_t> height = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"");

	/// <summary>
	/// Save a slide to a specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> saveSlideOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t format, utility::string_t outPath, boost::optional<int32_t> width = boost::none, boost::optional<int32_t> height = boost::none, utility::string_t password = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", std::shared_ptr<ExportOptions> options = std::shared_ptr<ExportOptions>());

	/// <summary>
	/// Render shape to specified picture format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> saveSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t format, utility::string_t outPath, std::shared_ptr<IShapeExportOptions> options = std::shared_ptr<IShapeExportOptions>(), boost::optional<double> scaleX = boost::none, boost::optional<double> scaleY = boost::none, utility::string_t bounds = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Set slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> setAnimation(utility::string_t name, int32_t slideIndex, std::shared_ptr<SlideAnimation> animation, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Set background for a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideBackground>> setBackground(utility::string_t name, int32_t slideIndex, std::shared_ptr<SlideBackground> background, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Set background color for a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideBackground>> setBackgroundColor(utility::string_t name, int32_t slideIndex, utility::string_t color, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Set chart axis.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Axis>> setChartAxis(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t axisType, std::shared_ptr<Axis> axis, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Set chart axis.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Legend>> setChartLegend(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<Legend> legend, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Set a series group in a chart.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> setChartSeriesGroup(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t seriesGroupIndex, std::shared_ptr<ChartSeriesGroup> seriesGroup, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Set 3D chart wall.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ChartWall>> setChartWall(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t chartWallType, std::shared_ptr<ChartWall> chartWall, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Set document properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentProperties>> setDocumentProperties(utility::string_t name, std::shared_ptr<DocumentProperties> properties, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Set document property.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentProperty>> setDocumentProperty(utility::string_t name, utility::string_t propertyName, std::shared_ptr<DocumentProperty> property, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Embeds specified font and returns presentation fonts info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FontsData>> setEmbeddedFont(utility::string_t name, utility::string_t fontName, boost::optional<bool> onlyUsed = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"");

	/// <summary>
	/// Embeds font from request and returns presentation fonts info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FontsData>> setEmbeddedFontFromRequest(std::shared_ptr<HttpContent> font, utility::string_t name, boost::optional<bool> onlyUsed = boost::none, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Embeds font from request and returns presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> setEmbeddedFontFromRequestOnline(std::shared_ptr<HttpContent> document, std::shared_ptr<HttpContent> font, boost::optional<bool> onlyUsed = boost::none, utility::string_t password = L"");

	/// <summary>
	/// Embeds specified font and returns presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> setEmbeddedFontOnline(std::shared_ptr<HttpContent> document, utility::string_t fontName, boost::optional<bool> onlyUsed = boost::none, utility::string_t password = L"", utility::string_t fontsFolder = L"");

	/// <summary>
	/// Set header/footer the notes slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<NotesSlideHeaderFooter>> setNotesSlideHeaderFooter(utility::string_t name, int32_t slideIndex, std::shared_ptr<NotesSlideHeaderFooter> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Set footers for all slides in a presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> setPresentationHeaderFooter(utility::string_t name, std::shared_ptr<HeaderFooter> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Updates presentation protection properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ProtectionProperties>> setProtection(utility::string_t name, std::shared_ptr<ProtectionProperties> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Sets presentation protection options. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> setProtectionOnline(std::shared_ptr<HttpContent> document, std::shared_ptr<ProtectionProperties> dto, utility::string_t password = L"");

	/// <summary>
	/// Replace existing presentation sections with the ones provided in the sections DTO.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> setSections(utility::string_t name, std::shared_ptr<Sections> sections, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Sets geometry path to the shape
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> setShapeGeometryPath(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<GeometryPaths> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Set footer the slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<HeaderFooter>> setSlideHeaderFooter(utility::string_t name, int32_t slideIndex, std::shared_ptr<HeaderFooter> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Update presentation slide properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideProperties>> setSlideProperties(utility::string_t name, std::shared_ptr<SlideProperties> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Update presentation slide show properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideShowProperties>> setSlideShowProperties(utility::string_t name, std::shared_ptr<SlideShowProperties> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Set special slide (master, layout, notes) animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> setSpecialSlideAnimation(utility::string_t name, int32_t slideIndex, utility::string_t slideType, std::shared_ptr<SlideAnimation> animation, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Update presentation view properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ViewProperties>> setViewProperties(utility::string_t name, std::shared_ptr<ViewProperties> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Splitting presentations. Create one image per slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SplitDocumentResult>> split(utility::string_t name, std::shared_ptr<ExportOptions> options = std::shared_ptr<ExportOptions>(), utility::string_t format = L"", boost::optional<int32_t> width = boost::none, boost::optional<int32_t> height = boost::none, boost::optional<int32_t> from = boost::none, boost::optional<int32_t> to = boost::none, utility::string_t destFolder = L"", utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"");

	/// <summary>
	/// Splits PowerPoint presentation slides from the specified range into separate files and exports them in the specified file format. If the range is not provided all slides will be processed. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SplitDocumentResult>> splitAndSaveOnline(std::shared_ptr<HttpContent> document, utility::string_t format, utility::string_t destFolder = L"", boost::optional<int32_t> width = boost::none, boost::optional<int32_t> height = boost::none, boost::optional<int32_t> from = boost::none, boost::optional<int32_t> to = boost::none, utility::string_t password = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", std::shared_ptr<ExportOptions> options = std::shared_ptr<ExportOptions>());

	/// <summary>
	/// Splits PowerPoint presentation slides from the specified range into separate files and exports them in the specified file format. If the range is not provided all slides will be processed. 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> splitOnline(std::shared_ptr<HttpContent> document, utility::string_t format, boost::optional<int32_t> width = boost::none, boost::optional<int32_t> height = boost::none, boost::optional<int32_t> from = boost::none, boost::optional<int32_t> to = boost::none, utility::string_t password = L"", utility::string_t storage = L"", utility::string_t fontsFolder = L"", std::shared_ptr<ExportOptions> options = std::shared_ptr<ExportOptions>());

	/// <summary>
	/// Split table cell.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Table>> splitTableCell(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, int32_t cellIndex, utility::string_t splitType, double value, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Check if storage exists
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<StorageExist>> storageExists(utility::string_t storageName);

	/// <summary>
	/// Modify an animation effect for a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> updateAnimationEffect(utility::string_t name, int32_t slideIndex, int32_t effectIndex, std::shared_ptr<Effect> effect, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Modify an animation effect for a slide interactive sequence.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> updateAnimationInteractiveSequenceEffect(utility::string_t name, int32_t slideIndex, int32_t sequenceIndex, int32_t effectIndex, std::shared_ptr<Effect> effect, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Update a chart category.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> updateChartCategory(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t categoryIndex, std::shared_ptr<ChartCategory> category, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Update a data point in a chart series.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> updateChartDataPoint(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t seriesIndex, int32_t pointIndex, std::shared_ptr<DataPoint> dataPoint, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Update a series in a chart.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> updateChartSeries(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t seriesIndex, std::shared_ptr<Series> series, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Update a layoutSlide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<LayoutSlide>> updateLayoutSlide(utility::string_t name, int32_t slideIndex, std::shared_ptr<LayoutSlide> slideDto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Update notes slide properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<NotesSlide>> updateNotesSlide(utility::string_t name, int32_t slideIndex, std::shared_ptr<NotesSlide> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Update paragraph properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> updateParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Paragraph> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Update portion properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> updatePortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, std::shared_ptr<Portion> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Update section name.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> updateSection(utility::string_t name, int32_t sectionIndex, utility::string_t sectionName, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Update shape properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> updateShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<ShapeBase> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Update a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slide>> updateSlide(utility::string_t name, int32_t slideIndex, std::shared_ptr<Slide> slideDto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Modify an animation effect for a special slide (master, layout, notes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> updateSpecialSlideAnimationEffect(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t effectIndex, std::shared_ptr<Effect> effect, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Modify an animation effect for a special slide (master, layout, notes) interactive sequence.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> updateSpecialSlideAnimationInteractiveSequenceEffect(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t sequenceIndex, int32_t effectIndex, std::shared_ptr<Effect> effect, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Update paragraph properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> updateSpecialSlideParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Paragraph> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Update portion properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> updateSpecialSlidePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, std::shared_ptr<Portion> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Update shape properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> updateSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, std::shared_ptr<ShapeBase> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"", utility::string_t subShape = L"");

	/// <summary>
	/// Update the table cell.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<TableCell>> updateTableCell(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, int32_t cellIndex, std::shared_ptr<TableCell> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Updates table cell paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> updateTableCellParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, int32_t cellIndex, int32_t paragraphIndex, std::shared_ptr<Paragraph> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Updates table cell portion.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> updateTableCellPortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, int32_t cellIndex, int32_t paragraphIndex, int32_t portionIndex, std::shared_ptr<Portion> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Update the table row.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<TableRow>> updateTableRow(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t rowIndex, std::shared_ptr<TableRow> dto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Update VBA module.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<VbaModule>> updateVbaModule(utility::string_t name, int32_t moduleIndex, std::shared_ptr<VbaModule> moduleDto, utility::string_t password = L"", utility::string_t folder = L"", utility::string_t storage = L"");

	/// <summary>
	/// Upload file
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FilesUploadResult>> uploadFile(utility::string_t path, std::shared_ptr<HttpContent> file, utility::string_t storageName = L"");

protected:
	ApiClient* m_ApiClient;
};

}
}

#endif /* ASPOSESLIDESCLOUD_API_SlidesApi_H_ */
