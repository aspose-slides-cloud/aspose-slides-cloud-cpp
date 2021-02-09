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

#ifndef _SlidesApi_H_
#define _SlidesApi_H_

#include "../defines.h"
#include "SlidesApiRequests.h"
#include "../ApiClient.h"
#include "../JsonBody.h"
#include "../StringBody.h"

#include "../model/ApiInfo.h"
#include "../model/Chart.h"
#include "../model/ChartCategory.h"
#include "../model/ColorScheme.h"
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
#include "../model/FormatScheme.h"
#include "../model/HeaderFooter.h"
#include "../HttpContent.h"
#include "../model/IShapeExportOptions.h"
#include "../model/Images.h"
#include "../model/InteractiveSequence.h"
#include "../model/LayoutSlide.h"
#include "../model/LayoutSlides.h"
#include "../model/MasterSlide.h"
#include "../model/MasterSlides.h"
#include "../model/NotesSlide.h"
#include "../model/NotesSlideHeaderFooter.h"
#include "../model/ObjectExist.h"
#include "../model/OrderedMergeRequest.h"
#include "../model/Paragraph.h"
#include "../model/Paragraphs.h"
#include "../model/Pipeline.h"
#include "../model/Placeholder.h"
#include "../model/Placeholders.h"
#include "../model/Portion.h"
#include "../model/Portions.h"
#include "../model/PresentationsMergeRequest.h"
#include "../model/ProtectionProperties.h"
#include "../model/Sections.h"
#include "../model/Series.h"
#include "../model/ShapeBase.h"
#include "../model/Shapes.h"
#include "../model/Slide.h"
#include "../model/SlideAnimation.h"
#include "../model/SlideBackground.h"
#include "../model/SlideComments.h"
#include "../model/SlideProperties.h"
#include "../model/SlideReplaceResult.h"
#include "../model/Slides.h"
#include "../model/SplitDocumentResult.h"
#include "../model/StorageExist.h"
#include "../model/TextItems.h"
#include "../model/Theme.h"
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
	/// Copy file
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> copyFile(std::shared_ptr<CopyFileRequest> request);

	/// <summary>
	/// Copy folder
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> copyFolder(std::shared_ptr<CopyFolderRequest> request);

	/// <summary>
	/// Create the folder
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> createFolder(std::shared_ptr<CreateFolderRequest> request);

	/// <summary>
	/// Delete a category from a chart.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> deleteChartCategory(std::shared_ptr<DeleteChartCategoryRequest> request);

	/// <summary>
	/// Delete a data point from a chart series.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> deleteChartDataPoint(std::shared_ptr<DeleteChartDataPointRequest> request);

	/// <summary>
	/// Delete a series from a chart.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> deleteChartSeries(std::shared_ptr<DeleteChartSeriesRequest> request);

	/// <summary>
	/// Delete file
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> deleteFile(std::shared_ptr<DeleteFileRequest> request);

	/// <summary>
	/// Delete folder
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> deleteFolder(std::shared_ptr<DeleteFolderRequest> request);

	/// <summary>
	/// Remove notes slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slide>> deleteNotesSlide(std::shared_ptr<DeleteNotesSlideRequest> request);

	/// <summary>
	/// Remove a paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> deleteNotesSlideParagraph(std::shared_ptr<DeleteNotesSlideParagraphRequest> request);

	/// <summary>
	/// Remove a range of paragraphs.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> deleteNotesSlideParagraphs(std::shared_ptr<DeleteNotesSlideParagraphsRequest> request);

	/// <summary>
	/// Remove a portion.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> deleteNotesSlidePortion(std::shared_ptr<DeleteNotesSlidePortionRequest> request);

	/// <summary>
	/// Remove a range of portions.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> deleteNotesSlidePortions(std::shared_ptr<DeleteNotesSlidePortionsRequest> request);

	/// <summary>
	/// Remove a shape.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> deleteNotesSlideShape(std::shared_ptr<DeleteNotesSlideShapeRequest> request);

	/// <summary>
	/// Remove a range of shapes.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> deleteNotesSlideShapes(std::shared_ptr<DeleteNotesSlideShapesRequest> request);

	/// <summary>
	/// Remove a paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> deleteParagraph(std::shared_ptr<DeleteParagraphRequest> request);

	/// <summary>
	/// Remove a range of paragraphs.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> deleteParagraphs(std::shared_ptr<DeleteParagraphsRequest> request);

	/// <summary>
	/// Remove a portion.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> deletePortion(std::shared_ptr<DeletePortionRequest> request);

	/// <summary>
	/// Remove a range of portions.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> deletePortions(std::shared_ptr<DeletePortionsRequest> request);

	/// <summary>
	/// Delete a presentation section.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> deleteSection(std::shared_ptr<DeleteSectionRequest> request);

	/// <summary>
	/// Delete presentation sections.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> deleteSections(std::shared_ptr<DeleteSectionsRequest> request);

	/// <summary>
	/// Remove animation from a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteSlideAnimation(std::shared_ptr<DeleteSlideAnimationRequest> request);

	/// <summary>
	/// Remove an effect from slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteSlideAnimationEffect(std::shared_ptr<DeleteSlideAnimationEffectRequest> request);

	/// <summary>
	/// Remove an interactive sequence from slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteSlideAnimationInteractiveSequence(std::shared_ptr<DeleteSlideAnimationInteractiveSequenceRequest> request);

	/// <summary>
	/// Remove an effect from slide animation interactive sequence.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteSlideAnimationInteractiveSequenceEffect(std::shared_ptr<DeleteSlideAnimationInteractiveSequenceEffectRequest> request);

	/// <summary>
	/// Clear all interactive sequences from slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteSlideAnimationInteractiveSequences(std::shared_ptr<DeleteSlideAnimationInteractiveSequencesRequest> request);

	/// <summary>
	/// Clear main sequence in slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> deleteSlideAnimationMainSequence(std::shared_ptr<DeleteSlideAnimationMainSequenceRequest> request);

	/// <summary>
	/// Delete a presentation slide by index.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> deleteSlideByIndex(std::shared_ptr<DeleteSlideByIndexRequest> request);

	/// <summary>
	/// Remove a shape.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> deleteSlideShape(std::shared_ptr<DeleteSlideShapeRequest> request);

	/// <summary>
	/// Remove a range of shapes.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> deleteSlideShapes(std::shared_ptr<DeleteSlideShapesRequest> request);

	/// <summary>
	/// Remove a shape (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> deleteSlideSubshape(std::shared_ptr<DeleteSlideSubshapeRequest> request);

	/// <summary>
	/// Remove a range of shapes (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> deleteSlideSubshapes(std::shared_ptr<DeleteSlideSubshapesRequest> request);

	/// <summary>
	/// Delete presentation slides.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> deleteSlidesCleanSlidesList(std::shared_ptr<DeleteSlidesCleanSlidesListRequest> request);

	/// <summary>
	/// Clean document properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentProperties>> deleteSlidesDocumentProperties(std::shared_ptr<DeleteSlidesDocumentPropertiesRequest> request);

	/// <summary>
	/// Delete document property.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentProperties>> deleteSlidesDocumentProperty(std::shared_ptr<DeleteSlidesDocumentPropertyRequest> request);

	/// <summary>
	/// Remove background from a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideBackground>> deleteSlidesSlideBackground(std::shared_ptr<DeleteSlidesSlideBackgroundRequest> request);

	/// <summary>
	/// Remove a paragraph (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> deleteSubshapeParagraph(std::shared_ptr<DeleteSubshapeParagraphRequest> request);

	/// <summary>
	/// Remove a range of paragraphs (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> deleteSubshapeParagraphs(std::shared_ptr<DeleteSubshapeParagraphsRequest> request);

	/// <summary>
	/// Remove a portion (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> deleteSubshapePortion(std::shared_ptr<DeleteSubshapePortionRequest> request);

	/// <summary>
	/// Remove a range of portions (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> deleteSubshapePortions(std::shared_ptr<DeleteSubshapePortionsRequest> request);

	/// <summary>
	/// Download file
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> downloadFile(std::shared_ptr<DownloadFileRequest> request);

	/// <summary>
	/// Get disc usage
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DiscUsage>> getDiscUsage(std::shared_ptr<GetDiscUsageRequest> request);

	/// <summary>
	/// Get file versions
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FileVersions>> getFileVersions(std::shared_ptr<GetFileVersionsRequest> request);

	/// <summary>
	/// Get all files and folders within a folder
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FilesList>> getFilesList(std::shared_ptr<GetFilesListRequest> request);

	/// <summary>
	/// Read presentation layoutSlide info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<LayoutSlide>> getLayoutSlide(std::shared_ptr<GetLayoutSlideRequest> request);

	/// <summary>
	/// Read presentation layoutSlides info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<LayoutSlides>> getLayoutSlidesList(std::shared_ptr<GetLayoutSlidesListRequest> request);

	/// <summary>
	/// Read presentation masterSlide info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<MasterSlide>> getMasterSlide(std::shared_ptr<GetMasterSlideRequest> request);

	/// <summary>
	/// Read presentation masterSlides info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<MasterSlides>> getMasterSlidesList(std::shared_ptr<GetMasterSlidesListRequest> request);

	/// <summary>
	/// Read notes slide info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<NotesSlide>> getNotesSlide(std::shared_ptr<GetNotesSlideRequest> request);

	/// <summary>
	/// Get info whether a notes slide exists.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<EntityExists>> getNotesSlideExists(std::shared_ptr<GetNotesSlideExistsRequest> request);

	/// <summary>
	/// Get header/footer info for the notes slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<NotesSlideHeaderFooter>> getNotesSlideHeaderFooter(std::shared_ptr<GetNotesSlideHeaderFooterRequest> request);

	/// <summary>
	/// Read slide shape info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> getNotesSlideShape(std::shared_ptr<GetNotesSlideShapeRequest> request);

	/// <summary>
	/// Read shape paragraph info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> getNotesSlideShapeParagraph(std::shared_ptr<GetNotesSlideShapeParagraphRequest> request);

	/// <summary>
	/// Read shape paragraphs info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> getNotesSlideShapeParagraphs(std::shared_ptr<GetNotesSlideShapeParagraphsRequest> request);

	/// <summary>
	/// Read paragraph portion info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> getNotesSlideShapePortion(std::shared_ptr<GetNotesSlideShapePortionRequest> request);

	/// <summary>
	/// Read paragraph portions info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> getNotesSlideShapePortions(std::shared_ptr<GetNotesSlideShapePortionsRequest> request);

	/// <summary>
	/// Read slide shapes info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> getNotesSlideShapes(std::shared_ptr<GetNotesSlideShapesRequest> request);

	/// <summary>
	/// Convert notes slide to the specified image format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> getNotesSlideWithFormat(std::shared_ptr<GetNotesSlideWithFormatRequest> request);

	/// <summary>
	/// Read paragraph portion info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> getParagraphPortion(std::shared_ptr<GetParagraphPortionRequest> request);

	/// <summary>
	/// Read paragraph portions info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> getParagraphPortions(std::shared_ptr<GetParagraphPortionsRequest> request);

	/// <summary>
	/// Read presentation sections info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> getSections(std::shared_ptr<GetSectionsRequest> request);

	/// <summary>
	/// Read slide animation effects.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> getSlideAnimation(std::shared_ptr<GetSlideAnimationRequest> request);

	/// <summary>
	/// Get footer info for the slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<HeaderFooter>> getSlideHeaderFooter(std::shared_ptr<GetSlideHeaderFooterRequest> request);

	/// <summary>
	/// Read slide shape info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> getSlideShape(std::shared_ptr<GetSlideShapeRequest> request);

	/// <summary>
	/// Read shape paragraph info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> getSlideShapeParagraph(std::shared_ptr<GetSlideShapeParagraphRequest> request);

	/// <summary>
	/// Read shape paragraphs info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> getSlideShapeParagraphs(std::shared_ptr<GetSlideShapeParagraphsRequest> request);

	/// <summary>
	/// Read slide shapes info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> getSlideShapes(std::shared_ptr<GetSlideShapesRequest> request);

	/// <summary>
	/// Read slide shape info (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> getSlideSubshape(std::shared_ptr<GetSlideSubshapeRequest> request);

	/// <summary>
	/// Read shape paragraph info (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> getSlideSubshapeParagraph(std::shared_ptr<GetSlideSubshapeParagraphRequest> request);

	/// <summary>
	/// Read shape paragraphs info (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraphs>> getSlideSubshapeParagraphs(std::shared_ptr<GetSlideSubshapeParagraphsRequest> request);

	/// <summary>
	/// Read slide shapes info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Shapes>> getSlideSubshapes(std::shared_ptr<GetSlideSubshapesRequest> request);

	/// <summary>
	/// Get API info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ApiInfo>> getSlidesApiInfo();

	/// <summary>
	/// Read presentation info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> getSlidesDocument(std::shared_ptr<GetSlidesDocumentRequest> request);

	/// <summary>
	/// Read presentation document properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentProperties>> getSlidesDocumentProperties(std::shared_ptr<GetSlidesDocumentPropertiesRequest> request);

	/// <summary>
	/// Read presentation document property.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentProperty>> getSlidesDocumentProperty(std::shared_ptr<GetSlidesDocumentPropertyRequest> request);

	/// <summary>
	/// Get image binary data.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> getSlidesImageWithDefaultFormat(std::shared_ptr<GetSlidesImageWithDefaultFormatRequest> request);

	/// <summary>
	/// Get image in specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> getSlidesImageWithFormat(std::shared_ptr<GetSlidesImageWithFormatRequest> request);

	/// <summary>
	/// Read presentation images info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Images>> getSlidesImages(std::shared_ptr<GetSlidesImagesRequest> request);

	/// <summary>
	/// Read slide placeholder info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Placeholder>> getSlidesPlaceholder(std::shared_ptr<GetSlidesPlaceholderRequest> request);

	/// <summary>
	/// Read slide placeholders info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Placeholders>> getSlidesPlaceholders(std::shared_ptr<GetSlidesPlaceholdersRequest> request);

	/// <summary>
	/// Extract presentation text items.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<TextItems>> getSlidesPresentationTextItems(std::shared_ptr<GetSlidesPresentationTextItemsRequest> request);

	/// <summary>
	/// Read presentation protection properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ProtectionProperties>> getSlidesProtectionProperties(std::shared_ptr<GetSlidesProtectionPropertiesRequest> request);

	/// <summary>
	/// Read presentation slide info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slide>> getSlidesSlide(std::shared_ptr<GetSlidesSlideRequest> request);

	/// <summary>
	/// Read slide background info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideBackground>> getSlidesSlideBackground(std::shared_ptr<GetSlidesSlideBackgroundRequest> request);

	/// <summary>
	/// Read presentation slide comments.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideComments>> getSlidesSlideComments(std::shared_ptr<GetSlidesSlideCommentsRequest> request);

	/// <summary>
	/// Read slide images info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Images>> getSlidesSlideImages(std::shared_ptr<GetSlidesSlideImagesRequest> request);

	/// <summary>
	/// Read presentation slide properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideProperties>> getSlidesSlideProperties(std::shared_ptr<GetSlidesSlidePropertiesRequest> request);

	/// <summary>
	/// Extract slide text items.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<TextItems>> getSlidesSlideTextItems(std::shared_ptr<GetSlidesSlideTextItemsRequest> request);

	/// <summary>
	/// Read presentation slides info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> getSlidesSlidesList(std::shared_ptr<GetSlidesSlidesListRequest> request);

	/// <summary>
	/// Read slide theme info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Theme>> getSlidesTheme(std::shared_ptr<GetSlidesThemeRequest> request);

	/// <summary>
	/// Read slide theme color scheme info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ColorScheme>> getSlidesThemeColorScheme(std::shared_ptr<GetSlidesThemeColorSchemeRequest> request);

	/// <summary>
	/// Read slide theme font scheme info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FontScheme>> getSlidesThemeFontScheme(std::shared_ptr<GetSlidesThemeFontSchemeRequest> request);

	/// <summary>
	/// Read slide theme format scheme info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FormatScheme>> getSlidesThemeFormatScheme(std::shared_ptr<GetSlidesThemeFormatSchemeRequest> request);

	/// <summary>
	/// Read presentation document properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ViewProperties>> getSlidesViewProperties(std::shared_ptr<GetSlidesViewPropertiesRequest> request);

	/// <summary>
	/// Read paragraph portion info (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> getSubshapeParagraphPortion(std::shared_ptr<GetSubshapeParagraphPortionRequest> request);

	/// <summary>
	/// Read paragraph portions info (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portions>> getSubshapeParagraphPortions(std::shared_ptr<GetSubshapeParagraphPortionsRequest> request);

	/// <summary>
	/// Move file
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> moveFile(std::shared_ptr<MoveFileRequest> request);

	/// <summary>
	/// Move folder
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> moveFolder(std::shared_ptr<MoveFolderRequest> request);

	/// <summary>
	/// Check if file or folder exists
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ObjectExist>> objectExists(std::shared_ptr<ObjectExistsRequest> request);

	/// <summary>
	/// Creates new paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> postAddNewParagraph(std::shared_ptr<PostAddNewParagraphRequest> request);

	/// <summary>
	/// Creates new portion.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> postAddNewPortion(std::shared_ptr<PostAddNewPortionRequest> request);

	/// <summary>
	/// Create new shape.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> postAddNewShape(std::shared_ptr<PostAddNewShapeRequest> request);

	/// <summary>
	/// Create new shape (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> postAddNewSubshape(std::shared_ptr<PostAddNewSubshapeRequest> request);

	/// <summary>
	/// Creates new paragraph (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> postAddNewSubshapeParagraph(std::shared_ptr<PostAddNewSubshapeParagraphRequest> request);

	/// <summary>
	/// Creates new portion (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> postAddNewSubshapePortion(std::shared_ptr<PostAddNewSubshapePortionRequest> request);

	/// <summary>
	/// Add new notes slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<NotesSlide>> postAddNotesSlide(std::shared_ptr<PostAddNotesSlideRequest> request);

	/// <summary>
	/// Add a new category to a chart.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> postChartCategory(std::shared_ptr<PostChartCategoryRequest> request);

	/// <summary>
	/// Add a new data point to a chart series.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> postChartDataPoint(std::shared_ptr<PostChartDataPointRequest> request);

	/// <summary>
	/// Add a new series to a chart.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> postChartSeries(std::shared_ptr<PostChartSeriesRequest> request);

	/// <summary>
	/// Copy layoutSlide from source presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<LayoutSlide>> postCopyLayoutSlideFromSourcePresentation(std::shared_ptr<PostCopyLayoutSlideFromSourcePresentationRequest> request);

	/// <summary>
	/// Copy masterSlide from source presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<MasterSlide>> postCopyMasterSlideFromSourcePresentation(std::shared_ptr<PostCopyMasterSlideFromSourcePresentationRequest> request);

	/// <summary>
	/// Read notes slide info.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<NotesSlide>> postGetNotesSlide(std::shared_ptr<PostGetNotesSlideRequest> request);

	/// <summary>
	/// Get info whether a notes slide exists.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<EntityExists>> postGetNotesSlideExists(std::shared_ptr<PostGetNotesSlideExistsRequest> request);

	/// <summary>
	/// Convert notes slide to the specified image format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> postGetNotesSlideWithFormat(std::shared_ptr<PostGetNotesSlideWithFormatRequest> request);

	/// <summary>
	/// Creates new paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> postNotesSlideAddNewParagraph(std::shared_ptr<PostNotesSlideAddNewParagraphRequest> request);

	/// <summary>
	/// Creates new portion.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> postNotesSlideAddNewPortion(std::shared_ptr<PostNotesSlideAddNewPortionRequest> request);

	/// <summary>
	/// Create new shape.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> postNotesSlideAddNewShape(std::shared_ptr<PostNotesSlideAddNewShapeRequest> request);

	/// <summary>
	/// Render shape to specified picture format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> postNotesSlideShapeSaveAs(std::shared_ptr<PostNotesSlideShapeSaveAsRequest> request);

	/// <summary>
	/// Merge the presentation with other presentations specified in the request parameter.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> postPresentationMerge(std::shared_ptr<PostPresentationMergeRequest> request);

	/// <summary>
	/// Create a section starting at a specified slide index.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> postSection(std::shared_ptr<PostSectionRequest> request);

	/// <summary>
	/// Move presentation section to a specified position.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> postSectionMove(std::shared_ptr<PostSectionMoveRequest> request);

	/// <summary>
	/// Render shape to specified picture format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> postShapeSaveAs(std::shared_ptr<PostShapeSaveAsRequest> request);

	/// <summary>
	/// Add an effect to slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> postSlideAnimationEffect(std::shared_ptr<PostSlideAnimationEffectRequest> request);

	/// <summary>
	/// Set slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> postSlideAnimationInteractiveSequence(std::shared_ptr<PostSlideAnimationInteractiveSequenceRequest> request);

	/// <summary>
	/// Add an animation effect to a slide interactive sequence.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> postSlideAnimationInteractiveSequenceEffect(std::shared_ptr<PostSlideAnimationInteractiveSequenceEffectRequest> request);

	/// <summary>
	/// Save a slide to a specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> postSlideSaveAs(std::shared_ptr<PostSlideSaveAsRequest> request);

	/// <summary>
	/// Create a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> postSlidesAdd(std::shared_ptr<PostSlidesAddRequest> request);

	/// <summary>
	/// Convert presentation from request content to format specified.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> postSlidesConvert(std::shared_ptr<PostSlidesConvertRequest> request);

	/// <summary>
	/// Copy a slide from the current or another presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> postSlidesCopy(std::shared_ptr<PostSlidesCopyRequest> request);

	/// <summary>
	/// Create a presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> postSlidesDocument(std::shared_ptr<PostSlidesDocumentRequest> request);

	/// <summary>
	/// Create presentation document from html.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> postSlidesDocumentFromHtml(std::shared_ptr<PostSlidesDocumentFromHtmlRequest> request);

	/// <summary>
	/// Create presentation document from pdf or append pdf to an existing presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> postSlidesDocumentFromPdf(std::shared_ptr<PostSlidesDocumentFromPdfRequest> request);

	/// <summary>
	/// Create a presentation from an existing source.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> postSlidesDocumentFromSource(std::shared_ptr<PostSlidesDocumentFromSourceRequest> request);

	/// <summary>
	/// Create a presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> postSlidesDocumentFromTemplate(std::shared_ptr<PostSlidesDocumentFromTemplateRequest> request);

	/// <summary>
	/// Performs slides pipeline.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> postSlidesPipeline(std::shared_ptr<PostSlidesPipelineRequest> request);

	/// <summary>
	/// Replace text with a new value.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentReplaceResult>> postSlidesPresentationReplaceText(std::shared_ptr<PostSlidesPresentationReplaceTextRequest> request);

	/// <summary>
	/// Reorder presentation slide position.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> postSlidesReorder(std::shared_ptr<PostSlidesReorderRequest> request);

	/// <summary>
	/// Reorder presentation slides positions.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slides>> postSlidesReorderMany(std::shared_ptr<PostSlidesReorderManyRequest> request);

	/// <summary>
	/// Save a presentation to a specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> postSlidesSaveAs(std::shared_ptr<PostSlidesSaveAsRequest> request);

	/// <summary>
	/// Set document properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentProperties>> postSlidesSetDocumentProperties(std::shared_ptr<PostSlidesSetDocumentPropertiesRequest> request);

	/// <summary>
	/// Replace text with a new value.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideReplaceResult>> postSlidesSlideReplaceText(std::shared_ptr<PostSlidesSlideReplaceTextRequest> request);

	/// <summary>
	/// Splitting presentations. Create one image per slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SplitDocumentResult>> postSlidesSplit(std::shared_ptr<PostSlidesSplitRequest> request);

	/// <summary>
	/// Render shape to specified picture format (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> postSubshapeSaveAs(std::shared_ptr<PostSubshapeSaveAsRequest> request);

	/// <summary>
	/// Update a chart category.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> putChartCategory(std::shared_ptr<PutChartCategoryRequest> request);

	/// <summary>
	/// Update a data point in a chart series.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> putChartDataPoint(std::shared_ptr<PutChartDataPointRequest> request);

	/// <summary>
	/// Update a series in a chart.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Chart>> putChartSeries(std::shared_ptr<PutChartSeriesRequest> request);

	/// <summary>
	/// Update a layoutSlide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<LayoutSlide>> putLayoutSlide(std::shared_ptr<PutLayoutSlideRequest> request);

	/// <summary>
	/// Set header/footer the notes slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<NotesSlideHeaderFooter>> putNotesSlideHeaderFooter(std::shared_ptr<PutNotesSlideHeaderFooterRequest> request);

	/// <summary>
	/// Render shape to specified picture format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> putNotesSlideShapeSaveAs(std::shared_ptr<PutNotesSlideShapeSaveAsRequest> request);

	/// <summary>
	/// Merge the presentation with other presentations or some of their slides specified in the request parameter.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> putPresentationMerge(std::shared_ptr<PutPresentationMergeRequest> request);

	/// <summary>
	/// Update section name.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> putSection(std::shared_ptr<PutSectionRequest> request);

	/// <summary>
	/// Replace existing presentation sections with the ones provided in the sections DTO.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Sections>> putSections(std::shared_ptr<PutSectionsRequest> request);

	/// <summary>
	/// Update portion properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> putSetParagraphPortionProperties(std::shared_ptr<PutSetParagraphPortionPropertiesRequest> request);

	/// <summary>
	/// Update paragraph properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> putSetParagraphProperties(std::shared_ptr<PutSetParagraphPropertiesRequest> request);

	/// <summary>
	/// Update portion properties (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> putSetSubshapeParagraphPortionProperties(std::shared_ptr<PutSetSubshapeParagraphPortionPropertiesRequest> request);

	/// <summary>
	/// Update paragraph properties (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> putSetSubshapeParagraphProperties(std::shared_ptr<PutSetSubshapeParagraphPropertiesRequest> request);

	/// <summary>
	/// Render shape to specified picture format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> putShapeSaveAs(std::shared_ptr<PutShapeSaveAsRequest> request);

	/// <summary>
	/// Set slide animation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> putSlideAnimation(std::shared_ptr<PutSlideAnimationRequest> request);

	/// <summary>
	/// Modify an animation effect for a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> putSlideAnimationEffect(std::shared_ptr<PutSlideAnimationEffectRequest> request);

	/// <summary>
	/// Modify an animation effect for a slide interactive sequence.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideAnimation>> putSlideAnimationInteractiveSequenceEffect(std::shared_ptr<PutSlideAnimationInteractiveSequenceEffectRequest> request);

	/// <summary>
	/// Set footer the slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<HeaderFooter>> putSlideHeaderFooter(std::shared_ptr<PutSlideHeaderFooterRequest> request);

	/// <summary>
	/// Save a slide to a specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> putSlideSaveAs(std::shared_ptr<PutSlideSaveAsRequest> request);

	/// <summary>
	/// Update shape properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> putSlideShapeInfo(std::shared_ptr<PutSlideShapeInfoRequest> request);

	/// <summary>
	/// Update shape properties (for smart art and group shapes).
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> putSlideSubshapeInfo(std::shared_ptr<PutSlideSubshapeInfoRequest> request);

	/// <summary>
	/// Convert presentation from request content to format specified.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> putSlidesConvert(std::shared_ptr<PutSlidesConvertRequest> request);

	/// <summary>
	/// Update presentation document from html.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> putSlidesDocumentFromHtml(std::shared_ptr<PutSlidesDocumentFromHtmlRequest> request);

	/// <summary>
	/// Set footers for all slides in a presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> putSlidesHeaderFooter(std::shared_ptr<PutSlidesHeaderFooterRequest> request);

	/// <summary>
	/// Update presentation protection properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ProtectionProperties>> putSlidesProtectionProperties(std::shared_ptr<PutSlidesProtectionPropertiesRequest> request);

	/// <summary>
	/// Save a presentation to a specified format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> putSlidesSaveAs(std::shared_ptr<PutSlidesSaveAsRequest> request);

	/// <summary>
	/// Set document property.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<DocumentProperty>> putSlidesSetDocumentProperty(std::shared_ptr<PutSlidesSetDocumentPropertyRequest> request);

	/// <summary>
	/// Update a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Slide>> putSlidesSlide(std::shared_ptr<PutSlidesSlideRequest> request);

	/// <summary>
	/// Set background for a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideBackground>> putSlidesSlideBackground(std::shared_ptr<PutSlidesSlideBackgroundRequest> request);

	/// <summary>
	/// Set background color for a slide.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideBackground>> putSlidesSlideBackgroundColor(std::shared_ptr<PutSlidesSlideBackgroundColorRequest> request);

	/// <summary>
	/// Update presentation slide properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<SlideProperties>> putSlidesSlideProperties(std::shared_ptr<PutSlidesSlidePropertiesRequest> request);

	/// <summary>
	/// Set slide size for a presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Document>> putSlidesSlideSize(std::shared_ptr<PutSlidesSlideSizeRequest> request);

	/// <summary>
	/// Update presentation document properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ViewProperties>> putSlidesViewProperties(std::shared_ptr<PutSlidesViewPropertiesRequest> request);

	/// <summary>
	/// Render shape to specified picture format.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<void> putSubshapeSaveAs(std::shared_ptr<PutSubshapeSaveAsRequest> request);

	/// <summary>
	/// Update notes slide properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<NotesSlide>> putUpdateNotesSlide(std::shared_ptr<PutUpdateNotesSlideRequest> request);

	/// <summary>
	/// Update shape properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<ShapeBase>> putUpdateNotesSlideShape(std::shared_ptr<PutUpdateNotesSlideShapeRequest> request);

	/// <summary>
	/// Update paragraph properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Paragraph>> putUpdateNotesSlideShapeParagraph(std::shared_ptr<PutUpdateNotesSlideShapeParagraphRequest> request);

	/// <summary>
	/// Update portion properties.
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Portion>> putUpdateNotesSlideShapePortion(std::shared_ptr<PutUpdateNotesSlideShapePortionRequest> request);

	/// <summary>
	/// Check if storage exists
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<StorageExist>> storageExists(std::shared_ptr<StorageExistsRequest> request);

	/// <summary>
	/// Upload file
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<FilesUploadResult>> uploadFile(std::shared_ptr<UploadFileRequest> request);

protected:
	ApiClient* m_ApiClient;
};

}
}

#endif /* _SlidesApi_H_ */
