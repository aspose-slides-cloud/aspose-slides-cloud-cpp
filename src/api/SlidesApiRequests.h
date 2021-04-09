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

#ifndef _SlidesApiRequests_H_
#define _SlidesApiRequests_H_

#include "../defines.h"

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

class  CopyFileRequest
{
public:
	ASPOSE_DLL_EXPORT CopyFileRequest();
	ASPOSE_DLL_EXPORT virtual ~CopyFileRequest();

	ASPOSE_DLL_EXPORT utility::string_t getSrcPath() const;
	ASPOSE_DLL_EXPORT void setSrcPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getDestPath() const;
	ASPOSE_DLL_EXPORT void setDestPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getSrcStorageName() const;
	ASPOSE_DLL_EXPORT void setSrcStorageName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getDestStorageName() const;
	ASPOSE_DLL_EXPORT void setDestStorageName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getVersionId() const;
	ASPOSE_DLL_EXPORT void setVersionId(utility::string_t value);
protected:
	utility::string_t m_srcPath;
	utility::string_t m_destPath;
	utility::string_t m_srcStorageName;
	utility::string_t m_destStorageName;
	utility::string_t m_versionId;
};

class  CopyFolderRequest
{
public:
	ASPOSE_DLL_EXPORT CopyFolderRequest();
	ASPOSE_DLL_EXPORT virtual ~CopyFolderRequest();

	ASPOSE_DLL_EXPORT utility::string_t getSrcPath() const;
	ASPOSE_DLL_EXPORT void setSrcPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getDestPath() const;
	ASPOSE_DLL_EXPORT void setDestPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getSrcStorageName() const;
	ASPOSE_DLL_EXPORT void setSrcStorageName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getDestStorageName() const;
	ASPOSE_DLL_EXPORT void setDestStorageName(utility::string_t value);
protected:
	utility::string_t m_srcPath;
	utility::string_t m_destPath;
	utility::string_t m_srcStorageName;
	utility::string_t m_destStorageName;
};

class  CreateFolderRequest
{
public:
	ASPOSE_DLL_EXPORT CreateFolderRequest();
	ASPOSE_DLL_EXPORT virtual ~CreateFolderRequest();

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorageName() const;
	ASPOSE_DLL_EXPORT void setStorageName(utility::string_t value);
protected:
	utility::string_t m_path;
	utility::string_t m_storageName;
};

class  DeleteChartCategoryRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteChartCategoryRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteChartCategoryRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getCategoryIndex() const;
	ASPOSE_DLL_EXPORT void setCategoryIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_categoryIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteChartDataPointRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteChartDataPointRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteChartDataPointRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getSeriesIndex() const;
	ASPOSE_DLL_EXPORT void setSeriesIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getPointIndex() const;
	ASPOSE_DLL_EXPORT void setPointIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_seriesIndex;
	int32_t m_pointIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteChartSeriesRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteChartSeriesRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteChartSeriesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getSeriesIndex() const;
	ASPOSE_DLL_EXPORT void setSeriesIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_seriesIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteFileRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteFileRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteFileRequest();

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorageName() const;
	ASPOSE_DLL_EXPORT void setStorageName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getVersionId() const;
	ASPOSE_DLL_EXPORT void setVersionId(utility::string_t value);
protected:
	utility::string_t m_path;
	utility::string_t m_storageName;
	utility::string_t m_versionId;
};

class  DeleteFolderRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteFolderRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteFolderRequest();

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorageName() const;
	ASPOSE_DLL_EXPORT void setStorageName(utility::string_t value);

	ASPOSE_DLL_EXPORT bool getRecursive() const;
	ASPOSE_DLL_EXPORT void setRecursive(bool value);
	ASPOSE_DLL_EXPORT bool recursiveIsSet() const;
	ASPOSE_DLL_EXPORT void unsetRecursive();
protected:
	utility::string_t m_path;
	utility::string_t m_storageName;
	bool m_recursive;
	bool m_recursiveIsSet;
};

class  DeleteNotesSlideRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteNotesSlideRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteNotesSlideRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteNotesSlideParagraphRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteNotesSlideParagraphRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteNotesSlideParagraphRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteNotesSlideParagraphsRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteNotesSlideParagraphsRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteNotesSlideParagraphsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::vector<int32_t> getParagraphs() const;
	ASPOSE_DLL_EXPORT void setParagraphs(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	std::vector<int32_t> m_paragraphs;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteNotesSlidePortionRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteNotesSlidePortionRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteNotesSlidePortionRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getPortionIndex() const;
	ASPOSE_DLL_EXPORT void setPortionIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	int32_t m_portionIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteNotesSlidePortionsRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteNotesSlidePortionsRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteNotesSlidePortionsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::vector<int32_t> getPortions() const;
	ASPOSE_DLL_EXPORT void setPortions(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	std::vector<int32_t> m_portions;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteNotesSlideShapeRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteNotesSlideShapeRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteNotesSlideShapeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteNotesSlideShapesRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteNotesSlideShapesRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteNotesSlideShapesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::vector<int32_t> getShapes() const;
	ASPOSE_DLL_EXPORT void setShapes(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::vector<int32_t> m_shapes;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteParagraphRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteParagraphRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteParagraphRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteParagraphsRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteParagraphsRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteParagraphsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::vector<int32_t> getParagraphs() const;
	ASPOSE_DLL_EXPORT void setParagraphs(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	std::vector<int32_t> m_paragraphs;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeletePortionRequest
{
public:
	ASPOSE_DLL_EXPORT DeletePortionRequest();
	ASPOSE_DLL_EXPORT virtual ~DeletePortionRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getPortionIndex() const;
	ASPOSE_DLL_EXPORT void setPortionIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	int32_t m_portionIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeletePortionsRequest
{
public:
	ASPOSE_DLL_EXPORT DeletePortionsRequest();
	ASPOSE_DLL_EXPORT virtual ~DeletePortionsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::vector<int32_t> getPortions() const;
	ASPOSE_DLL_EXPORT void setPortions(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	std::vector<int32_t> m_portions;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSectionRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSectionRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSectionRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSectionIndex() const;
	ASPOSE_DLL_EXPORT void setSectionIndex(int32_t value);

	ASPOSE_DLL_EXPORT bool getWithSlides() const;
	ASPOSE_DLL_EXPORT void setWithSlides(bool value);
	ASPOSE_DLL_EXPORT bool withSlidesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWithSlides();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_sectionIndex;
	bool m_withSlides;
	bool m_withSlidesIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSectionsRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSectionsRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSectionsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::vector<int32_t> getSections() const;
	ASPOSE_DLL_EXPORT void setSections(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT bool getWithSlides() const;
	ASPOSE_DLL_EXPORT void setWithSlides(bool value);
	ASPOSE_DLL_EXPORT bool withSlidesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWithSlides();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	std::vector<int32_t> m_sections;
	bool m_withSlides;
	bool m_withSlidesIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlideAnimationRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlideAnimationRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlideAnimationRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlideAnimationEffectRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlideAnimationEffectRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlideAnimationEffectRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getEffectIndex() const;
	ASPOSE_DLL_EXPORT void setEffectIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_effectIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlideAnimationInteractiveSequenceRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlideAnimationInteractiveSequenceRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlideAnimationInteractiveSequenceRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getSequenceIndex() const;
	ASPOSE_DLL_EXPORT void setSequenceIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_sequenceIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlideAnimationInteractiveSequenceEffectRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlideAnimationInteractiveSequenceEffectRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlideAnimationInteractiveSequenceEffectRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getSequenceIndex() const;
	ASPOSE_DLL_EXPORT void setSequenceIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getEffectIndex() const;
	ASPOSE_DLL_EXPORT void setEffectIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_sequenceIndex;
	int32_t m_effectIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlideAnimationInteractiveSequencesRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlideAnimationInteractiveSequencesRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlideAnimationInteractiveSequencesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlideAnimationMainSequenceRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlideAnimationMainSequenceRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlideAnimationMainSequenceRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlideByIndexRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlideByIndexRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlideByIndexRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlideShapeRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlideShapeRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlideShapeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlideShapesRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlideShapesRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlideShapesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::vector<int32_t> getShapes() const;
	ASPOSE_DLL_EXPORT void setShapes(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::vector<int32_t> m_shapes;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlideSubshapeRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlideSubshapeRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlideSubshapeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlideSubshapesRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlideSubshapesRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlideSubshapesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT std::vector<int32_t> getShapes() const;
	ASPOSE_DLL_EXPORT void setShapes(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	std::vector<int32_t> m_shapes;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlidesCleanSlidesListRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlidesCleanSlidesListRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlidesCleanSlidesListRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::vector<int32_t> getSlides() const;
	ASPOSE_DLL_EXPORT void setSlides(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	std::vector<int32_t> m_slides;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlidesDocumentPropertiesRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlidesDocumentPropertiesRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlidesDocumentPropertiesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlidesDocumentPropertyRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlidesDocumentPropertyRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlidesDocumentPropertyRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPropertyName() const;
	ASPOSE_DLL_EXPORT void setPropertyName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_propertyName;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSlidesSlideBackgroundRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSlidesSlideBackgroundRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSlidesSlideBackgroundRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSubshapeParagraphRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSubshapeParagraphRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSubshapeParagraphRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSubshapeParagraphsRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSubshapeParagraphsRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSubshapeParagraphsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::vector<int32_t> getParagraphs() const;
	ASPOSE_DLL_EXPORT void setParagraphs(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	std::vector<int32_t> m_paragraphs;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSubshapePortionRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSubshapePortionRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSubshapePortionRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getPortionIndex() const;
	ASPOSE_DLL_EXPORT void setPortionIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	int32_t m_portionIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DeleteSubshapePortionsRequest
{
public:
	ASPOSE_DLL_EXPORT DeleteSubshapePortionsRequest();
	ASPOSE_DLL_EXPORT virtual ~DeleteSubshapePortionsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::vector<int32_t> getPortions() const;
	ASPOSE_DLL_EXPORT void setPortions(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	std::vector<int32_t> m_portions;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  DownloadFileRequest
{
public:
	ASPOSE_DLL_EXPORT DownloadFileRequest();
	ASPOSE_DLL_EXPORT virtual ~DownloadFileRequest();

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorageName() const;
	ASPOSE_DLL_EXPORT void setStorageName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getVersionId() const;
	ASPOSE_DLL_EXPORT void setVersionId(utility::string_t value);
protected:
	utility::string_t m_path;
	utility::string_t m_storageName;
	utility::string_t m_versionId;
};

class  GetDiscUsageRequest
{
public:
	ASPOSE_DLL_EXPORT GetDiscUsageRequest();
	ASPOSE_DLL_EXPORT virtual ~GetDiscUsageRequest();

	ASPOSE_DLL_EXPORT utility::string_t getStorageName() const;
	ASPOSE_DLL_EXPORT void setStorageName(utility::string_t value);
protected:
	utility::string_t m_storageName;
};

class  GetFileVersionsRequest
{
public:
	ASPOSE_DLL_EXPORT GetFileVersionsRequest();
	ASPOSE_DLL_EXPORT virtual ~GetFileVersionsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorageName() const;
	ASPOSE_DLL_EXPORT void setStorageName(utility::string_t value);
protected:
	utility::string_t m_path;
	utility::string_t m_storageName;
};

class  GetFilesListRequest
{
public:
	ASPOSE_DLL_EXPORT GetFilesListRequest();
	ASPOSE_DLL_EXPORT virtual ~GetFilesListRequest();

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorageName() const;
	ASPOSE_DLL_EXPORT void setStorageName(utility::string_t value);
protected:
	utility::string_t m_path;
	utility::string_t m_storageName;
};

class  GetLayoutSlideRequest
{
public:
	ASPOSE_DLL_EXPORT GetLayoutSlideRequest();
	ASPOSE_DLL_EXPORT virtual ~GetLayoutSlideRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetLayoutSlidesListRequest
{
public:
	ASPOSE_DLL_EXPORT GetLayoutSlidesListRequest();
	ASPOSE_DLL_EXPORT virtual ~GetLayoutSlidesListRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetMasterSlideRequest
{
public:
	ASPOSE_DLL_EXPORT GetMasterSlideRequest();
	ASPOSE_DLL_EXPORT virtual ~GetMasterSlideRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetMasterSlidesListRequest
{
public:
	ASPOSE_DLL_EXPORT GetMasterSlidesListRequest();
	ASPOSE_DLL_EXPORT virtual ~GetMasterSlidesListRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetNotesSlideRequest
{
public:
	ASPOSE_DLL_EXPORT GetNotesSlideRequest();
	ASPOSE_DLL_EXPORT virtual ~GetNotesSlideRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetNotesSlideExistsRequest
{
public:
	ASPOSE_DLL_EXPORT GetNotesSlideExistsRequest();
	ASPOSE_DLL_EXPORT virtual ~GetNotesSlideExistsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetNotesSlideHeaderFooterRequest
{
public:
	ASPOSE_DLL_EXPORT GetNotesSlideHeaderFooterRequest();
	ASPOSE_DLL_EXPORT virtual ~GetNotesSlideHeaderFooterRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetNotesSlideShapeRequest
{
public:
	ASPOSE_DLL_EXPORT GetNotesSlideShapeRequest();
	ASPOSE_DLL_EXPORT virtual ~GetNotesSlideShapeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetNotesSlideShapeParagraphRequest
{
public:
	ASPOSE_DLL_EXPORT GetNotesSlideShapeParagraphRequest();
	ASPOSE_DLL_EXPORT virtual ~GetNotesSlideShapeParagraphRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetNotesSlideShapeParagraphsRequest
{
public:
	ASPOSE_DLL_EXPORT GetNotesSlideShapeParagraphsRequest();
	ASPOSE_DLL_EXPORT virtual ~GetNotesSlideShapeParagraphsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetNotesSlideShapePortionRequest
{
public:
	ASPOSE_DLL_EXPORT GetNotesSlideShapePortionRequest();
	ASPOSE_DLL_EXPORT virtual ~GetNotesSlideShapePortionRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getPortionIndex() const;
	ASPOSE_DLL_EXPORT void setPortionIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	int32_t m_portionIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetNotesSlideShapePortionsRequest
{
public:
	ASPOSE_DLL_EXPORT GetNotesSlideShapePortionsRequest();
	ASPOSE_DLL_EXPORT virtual ~GetNotesSlideShapePortionsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetNotesSlideShapesRequest
{
public:
	ASPOSE_DLL_EXPORT GetNotesSlideShapesRequest();
	ASPOSE_DLL_EXPORT virtual ~GetNotesSlideShapesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetNotesSlideWithFormatRequest
{
public:
	ASPOSE_DLL_EXPORT GetNotesSlideWithFormatRequest();
	ASPOSE_DLL_EXPORT virtual ~GetNotesSlideWithFormatRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();

	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_format;
	int32_t m_width;
	bool m_widthIsSet;
	int32_t m_height;
	bool m_heightIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  GetParagraphPortionRequest
{
public:
	ASPOSE_DLL_EXPORT GetParagraphPortionRequest();
	ASPOSE_DLL_EXPORT virtual ~GetParagraphPortionRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getPortionIndex() const;
	ASPOSE_DLL_EXPORT void setPortionIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	int32_t m_portionIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetParagraphPortionsRequest
{
public:
	ASPOSE_DLL_EXPORT GetParagraphPortionsRequest();
	ASPOSE_DLL_EXPORT virtual ~GetParagraphPortionsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSectionsRequest
{
public:
	ASPOSE_DLL_EXPORT GetSectionsRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSectionsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlideAnimationRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlideAnimationRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlideAnimationRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);
	ASPOSE_DLL_EXPORT bool shapeIndexIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShapeIndex();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	bool m_shapeIndexIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlideHeaderFooterRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlideHeaderFooterRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlideHeaderFooterRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlideShapeRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlideShapeRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlideShapeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlideShapeParagraphRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlideShapeParagraphRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlideShapeParagraphRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlideShapeParagraphsRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlideShapeParagraphsRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlideShapeParagraphsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlideShapesRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlideShapesRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlideShapesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlideSubshapeRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlideSubshapeRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlideSubshapeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlideSubshapeParagraphRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlideSubshapeParagraphRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlideSubshapeParagraphRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlideSubshapeParagraphsRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlideSubshapeParagraphsRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlideSubshapeParagraphsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlideSubshapesRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlideSubshapesRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlideSubshapesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesDocumentRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesDocumentRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesDocumentRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesDocumentPropertiesRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesDocumentPropertiesRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesDocumentPropertiesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesDocumentPropertyRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesDocumentPropertyRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesDocumentPropertyRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPropertyName() const;
	ASPOSE_DLL_EXPORT void setPropertyName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_propertyName;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesImageWithDefaultFormatRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesImageWithDefaultFormatRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesImageWithDefaultFormatRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getIndex() const;
	ASPOSE_DLL_EXPORT void setIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_index;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesImageWithFormatRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesImageWithFormatRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesImageWithFormatRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getIndex() const;
	ASPOSE_DLL_EXPORT void setIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_index;
	utility::string_t m_format;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesImagesRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesImagesRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesImagesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesPlaceholderRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesPlaceholderRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesPlaceholderRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getPlaceholderIndex() const;
	ASPOSE_DLL_EXPORT void setPlaceholderIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_placeholderIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesPlaceholdersRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesPlaceholdersRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesPlaceholdersRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesPresentationTextItemsRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesPresentationTextItemsRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesPresentationTextItemsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT bool getWithEmpty() const;
	ASPOSE_DLL_EXPORT void setWithEmpty(bool value);
	ASPOSE_DLL_EXPORT bool withEmptyIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWithEmpty();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	bool m_withEmpty;
	bool m_withEmptyIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesProtectionPropertiesRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesProtectionPropertiesRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesProtectionPropertiesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesSlideRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesSlideRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesSlideRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesSlideBackgroundRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesSlideBackgroundRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesSlideBackgroundRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesSlideCommentsRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesSlideCommentsRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesSlideCommentsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesSlideImagesRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesSlideImagesRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesSlideImagesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesSlidePropertiesRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesSlidePropertiesRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesSlidePropertiesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesSlideTextItemsRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesSlideTextItemsRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesSlideTextItemsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT bool getWithEmpty() const;
	ASPOSE_DLL_EXPORT void setWithEmpty(bool value);
	ASPOSE_DLL_EXPORT bool withEmptyIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWithEmpty();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	bool m_withEmpty;
	bool m_withEmptyIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesSlidesListRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesSlidesListRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesSlidesListRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesThemeRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesThemeRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesThemeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesThemeColorSchemeRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesThemeColorSchemeRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesThemeColorSchemeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesThemeFontSchemeRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesThemeFontSchemeRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesThemeFontSchemeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesThemeFormatSchemeRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesThemeFormatSchemeRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesThemeFormatSchemeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSlidesViewPropertiesRequest
{
public:
	ASPOSE_DLL_EXPORT GetSlidesViewPropertiesRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSlidesViewPropertiesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSubshapeParagraphPortionRequest
{
public:
	ASPOSE_DLL_EXPORT GetSubshapeParagraphPortionRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSubshapeParagraphPortionRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getPortionIndex() const;
	ASPOSE_DLL_EXPORT void setPortionIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	int32_t m_portionIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  GetSubshapeParagraphPortionsRequest
{
public:
	ASPOSE_DLL_EXPORT GetSubshapeParagraphPortionsRequest();
	ASPOSE_DLL_EXPORT virtual ~GetSubshapeParagraphPortionsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  MoveFileRequest
{
public:
	ASPOSE_DLL_EXPORT MoveFileRequest();
	ASPOSE_DLL_EXPORT virtual ~MoveFileRequest();

	ASPOSE_DLL_EXPORT utility::string_t getSrcPath() const;
	ASPOSE_DLL_EXPORT void setSrcPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getDestPath() const;
	ASPOSE_DLL_EXPORT void setDestPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getSrcStorageName() const;
	ASPOSE_DLL_EXPORT void setSrcStorageName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getDestStorageName() const;
	ASPOSE_DLL_EXPORT void setDestStorageName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getVersionId() const;
	ASPOSE_DLL_EXPORT void setVersionId(utility::string_t value);
protected:
	utility::string_t m_srcPath;
	utility::string_t m_destPath;
	utility::string_t m_srcStorageName;
	utility::string_t m_destStorageName;
	utility::string_t m_versionId;
};

class  MoveFolderRequest
{
public:
	ASPOSE_DLL_EXPORT MoveFolderRequest();
	ASPOSE_DLL_EXPORT virtual ~MoveFolderRequest();

	ASPOSE_DLL_EXPORT utility::string_t getSrcPath() const;
	ASPOSE_DLL_EXPORT void setSrcPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getDestPath() const;
	ASPOSE_DLL_EXPORT void setDestPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getSrcStorageName() const;
	ASPOSE_DLL_EXPORT void setSrcStorageName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getDestStorageName() const;
	ASPOSE_DLL_EXPORT void setDestStorageName(utility::string_t value);
protected:
	utility::string_t m_srcPath;
	utility::string_t m_destPath;
	utility::string_t m_srcStorageName;
	utility::string_t m_destStorageName;
};

class  ObjectExistsRequest
{
public:
	ASPOSE_DLL_EXPORT ObjectExistsRequest();
	ASPOSE_DLL_EXPORT virtual ~ObjectExistsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorageName() const;
	ASPOSE_DLL_EXPORT void setStorageName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getVersionId() const;
	ASPOSE_DLL_EXPORT void setVersionId(utility::string_t value);
protected:
	utility::string_t m_path;
	utility::string_t m_storageName;
	utility::string_t m_versionId;
};

class  PostAddNewParagraphRequest
{
public:
	ASPOSE_DLL_EXPORT PostAddNewParagraphRequest();
	ASPOSE_DLL_EXPORT virtual ~PostAddNewParagraphRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Paragraph> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<Paragraph> value);

	ASPOSE_DLL_EXPORT int32_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(int32_t value);
	ASPOSE_DLL_EXPORT bool positionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPosition();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	std::shared_ptr<Paragraph> m_dto;
	int32_t m_position;
	bool m_positionIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostAddNewPortionRequest
{
public:
	ASPOSE_DLL_EXPORT PostAddNewPortionRequest();
	ASPOSE_DLL_EXPORT virtual ~PostAddNewPortionRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Portion> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<Portion> value);

	ASPOSE_DLL_EXPORT int32_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(int32_t value);
	ASPOSE_DLL_EXPORT bool positionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPosition();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	std::shared_ptr<Portion> m_dto;
	int32_t m_position;
	bool m_positionIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostAddNewShapeRequest
{
public:
	ASPOSE_DLL_EXPORT PostAddNewShapeRequest();
	ASPOSE_DLL_EXPORT virtual ~PostAddNewShapeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ShapeBase> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<ShapeBase> value);

	ASPOSE_DLL_EXPORT int32_t getShapeToClone() const;
	ASPOSE_DLL_EXPORT void setShapeToClone(int32_t value);
	ASPOSE_DLL_EXPORT bool shapeToCloneIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShapeToClone();

	ASPOSE_DLL_EXPORT int32_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(int32_t value);
	ASPOSE_DLL_EXPORT bool positionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPosition();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::shared_ptr<ShapeBase> m_dto;
	int32_t m_shapeToClone;
	bool m_shapeToCloneIsSet;
	int32_t m_position;
	bool m_positionIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostAddNewSubshapeRequest
{
public:
	ASPOSE_DLL_EXPORT PostAddNewSubshapeRequest();
	ASPOSE_DLL_EXPORT virtual ~PostAddNewSubshapeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ShapeBase> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<ShapeBase> value);

	ASPOSE_DLL_EXPORT int32_t getShapeToClone() const;
	ASPOSE_DLL_EXPORT void setShapeToClone(int32_t value);
	ASPOSE_DLL_EXPORT bool shapeToCloneIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShapeToClone();

	ASPOSE_DLL_EXPORT int32_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(int32_t value);
	ASPOSE_DLL_EXPORT bool positionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPosition();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	std::shared_ptr<ShapeBase> m_dto;
	int32_t m_shapeToClone;
	bool m_shapeToCloneIsSet;
	int32_t m_position;
	bool m_positionIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostAddNewSubshapeParagraphRequest
{
public:
	ASPOSE_DLL_EXPORT PostAddNewSubshapeParagraphRequest();
	ASPOSE_DLL_EXPORT virtual ~PostAddNewSubshapeParagraphRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Paragraph> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<Paragraph> value);

	ASPOSE_DLL_EXPORT int32_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(int32_t value);
	ASPOSE_DLL_EXPORT bool positionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPosition();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	std::shared_ptr<Paragraph> m_dto;
	int32_t m_position;
	bool m_positionIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostAddNewSubshapePortionRequest
{
public:
	ASPOSE_DLL_EXPORT PostAddNewSubshapePortionRequest();
	ASPOSE_DLL_EXPORT virtual ~PostAddNewSubshapePortionRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Portion> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<Portion> value);

	ASPOSE_DLL_EXPORT int32_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(int32_t value);
	ASPOSE_DLL_EXPORT bool positionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPosition();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	std::shared_ptr<Portion> m_dto;
	int32_t m_position;
	bool m_positionIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostAddNotesSlideRequest
{
public:
	ASPOSE_DLL_EXPORT PostAddNotesSlideRequest();
	ASPOSE_DLL_EXPORT virtual ~PostAddNotesSlideRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<NotesSlide> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<NotesSlide> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::shared_ptr<NotesSlide> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostAlignShapesRequest
{
public:
	ASPOSE_DLL_EXPORT PostAlignShapesRequest();
	ASPOSE_DLL_EXPORT virtual ~PostAlignShapesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getAlignmentType() const;
	ASPOSE_DLL_EXPORT void setAlignmentType(utility::string_t value);

	ASPOSE_DLL_EXPORT bool getAlignToSlide() const;
	ASPOSE_DLL_EXPORT void setAlignToSlide(bool value);
	ASPOSE_DLL_EXPORT bool alignToSlideIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAlignToSlide();

	ASPOSE_DLL_EXPORT std::vector<int32_t> getShapes() const;
	ASPOSE_DLL_EXPORT void setShapes(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_alignmentType;
	bool m_alignToSlide;
	bool m_alignToSlideIsSet;
	std::vector<int32_t> m_shapes;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostChartCategoryRequest
{
public:
	ASPOSE_DLL_EXPORT PostChartCategoryRequest();
	ASPOSE_DLL_EXPORT virtual ~PostChartCategoryRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ChartCategory> getCategory() const;
	ASPOSE_DLL_EXPORT void setCategory(std::shared_ptr<ChartCategory> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	std::shared_ptr<ChartCategory> m_category;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostChartDataPointRequest
{
public:
	ASPOSE_DLL_EXPORT PostChartDataPointRequest();
	ASPOSE_DLL_EXPORT virtual ~PostChartDataPointRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getSeriesIndex() const;
	ASPOSE_DLL_EXPORT void setSeriesIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<DataPoint> getDataPoint() const;
	ASPOSE_DLL_EXPORT void setDataPoint(std::shared_ptr<DataPoint> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_seriesIndex;
	std::shared_ptr<DataPoint> m_dataPoint;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostChartSeriesRequest
{
public:
	ASPOSE_DLL_EXPORT PostChartSeriesRequest();
	ASPOSE_DLL_EXPORT virtual ~PostChartSeriesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Series> getSeries() const;
	ASPOSE_DLL_EXPORT void setSeries(std::shared_ptr<Series> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	std::shared_ptr<Series> m_series;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostCopyLayoutSlideFromSourcePresentationRequest
{
public:
	ASPOSE_DLL_EXPORT PostCopyLayoutSlideFromSourcePresentationRequest();
	ASPOSE_DLL_EXPORT virtual ~PostCopyLayoutSlideFromSourcePresentationRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getCloneFrom() const;
	ASPOSE_DLL_EXPORT void setCloneFrom(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getCloneFromPosition() const;
	ASPOSE_DLL_EXPORT void setCloneFromPosition(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getCloneFromPassword() const;
	ASPOSE_DLL_EXPORT void setCloneFromPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getCloneFromStorage() const;
	ASPOSE_DLL_EXPORT void setCloneFromStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_cloneFrom;
	int32_t m_cloneFromPosition;
	utility::string_t m_cloneFromPassword;
	utility::string_t m_cloneFromStorage;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostCopyMasterSlideFromSourcePresentationRequest
{
public:
	ASPOSE_DLL_EXPORT PostCopyMasterSlideFromSourcePresentationRequest();
	ASPOSE_DLL_EXPORT virtual ~PostCopyMasterSlideFromSourcePresentationRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getCloneFrom() const;
	ASPOSE_DLL_EXPORT void setCloneFrom(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getCloneFromPosition() const;
	ASPOSE_DLL_EXPORT void setCloneFromPosition(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getCloneFromPassword() const;
	ASPOSE_DLL_EXPORT void setCloneFromPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getCloneFromStorage() const;
	ASPOSE_DLL_EXPORT void setCloneFromStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT bool getApplyToAll() const;
	ASPOSE_DLL_EXPORT void setApplyToAll(bool value);
	ASPOSE_DLL_EXPORT bool applyToAllIsSet() const;
	ASPOSE_DLL_EXPORT void unsetApplyToAll();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_cloneFrom;
	int32_t m_cloneFromPosition;
	utility::string_t m_cloneFromPassword;
	utility::string_t m_cloneFromStorage;
	bool m_applyToAll;
	bool m_applyToAllIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostExportImageWithDefaultFormatRequest
{
public:
	ASPOSE_DLL_EXPORT PostExportImageWithDefaultFormatRequest();
	ASPOSE_DLL_EXPORT virtual ~PostExportImageWithDefaultFormatRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT int32_t getIndex() const;
	ASPOSE_DLL_EXPORT void setIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	int32_t m_index;
	utility::string_t m_password;
};

class  PostExportImageWithFormatRequest
{
public:
	ASPOSE_DLL_EXPORT PostExportImageWithFormatRequest();
	ASPOSE_DLL_EXPORT virtual ~PostExportImageWithFormatRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT int32_t getIndex() const;
	ASPOSE_DLL_EXPORT void setIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	int32_t m_index;
	utility::string_t m_format;
	utility::string_t m_password;
};

class  PostExportImagesFromRequestWithFormatRequest
{
public:
	ASPOSE_DLL_EXPORT PostExportImagesFromRequestWithFormatRequest();
	ASPOSE_DLL_EXPORT virtual ~PostExportImagesFromRequestWithFormatRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	utility::string_t m_format;
	utility::string_t m_password;
};

class  PostExportImagesWithDefaultFormatRequest
{
public:
	ASPOSE_DLL_EXPORT PostExportImagesWithDefaultFormatRequest();
	ASPOSE_DLL_EXPORT virtual ~PostExportImagesWithDefaultFormatRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostExportImagesWithFormatRequest
{
public:
	ASPOSE_DLL_EXPORT PostExportImagesWithFormatRequest();
	ASPOSE_DLL_EXPORT virtual ~PostExportImagesWithFormatRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_format;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostExportShapeRequest
{
public:
	ASPOSE_DLL_EXPORT PostExportShapeRequest();
	ASPOSE_DLL_EXPORT virtual ~PostExportShapeRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT double getScaleX() const;
	ASPOSE_DLL_EXPORT void setScaleX(double value);
	ASPOSE_DLL_EXPORT bool scaleXIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleX();

	ASPOSE_DLL_EXPORT double getScaleY() const;
	ASPOSE_DLL_EXPORT void setScaleY(double value);
	ASPOSE_DLL_EXPORT bool scaleYIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleY();

	ASPOSE_DLL_EXPORT utility::string_t getBounds() const;
	ASPOSE_DLL_EXPORT void setBounds(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	utility::string_t m_format;
	utility::string_t m_password;
	utility::string_t m_storage;
	double m_scaleX;
	bool m_scaleXIsSet;
	double m_scaleY;
	bool m_scaleYIsSet;
	utility::string_t m_bounds;
	utility::string_t m_fontsFolder;
};

class  PostExportSlideRequest
{
public:
	ASPOSE_DLL_EXPORT PostExportSlideRequest();
	ASPOSE_DLL_EXPORT virtual ~PostExportSlideRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();

	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	int32_t m_slideIndex;
	utility::string_t m_format;
	int32_t m_width;
	bool m_widthIsSet;
	int32_t m_height;
	bool m_heightIsSet;
	utility::string_t m_password;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PostGetNotesSlideRequest
{
public:
	ASPOSE_DLL_EXPORT PostGetNotesSlideRequest();
	ASPOSE_DLL_EXPORT virtual ~PostGetNotesSlideRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	int32_t m_slideIndex;
	utility::string_t m_password;
};

class  PostGetNotesSlideExistsRequest
{
public:
	ASPOSE_DLL_EXPORT PostGetNotesSlideExistsRequest();
	ASPOSE_DLL_EXPORT virtual ~PostGetNotesSlideExistsRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	int32_t m_slideIndex;
	utility::string_t m_password;
};

class  PostGetNotesSlideWithFormatRequest
{
public:
	ASPOSE_DLL_EXPORT PostGetNotesSlideWithFormatRequest();
	ASPOSE_DLL_EXPORT virtual ~PostGetNotesSlideWithFormatRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();

	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	int32_t m_slideIndex;
	utility::string_t m_format;
	int32_t m_width;
	bool m_widthIsSet;
	int32_t m_height;
	bool m_heightIsSet;
	utility::string_t m_password;
	utility::string_t m_fontsFolder;
};

class  PostImagesFromRequestWithDefaultFormatRequest
{
public:
	ASPOSE_DLL_EXPORT PostImagesFromRequestWithDefaultFormatRequest();
	ASPOSE_DLL_EXPORT virtual ~PostImagesFromRequestWithDefaultFormatRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	utility::string_t m_password;
};

class  PostNotesSlideAddNewParagraphRequest
{
public:
	ASPOSE_DLL_EXPORT PostNotesSlideAddNewParagraphRequest();
	ASPOSE_DLL_EXPORT virtual ~PostNotesSlideAddNewParagraphRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Paragraph> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<Paragraph> value);

	ASPOSE_DLL_EXPORT int32_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(int32_t value);
	ASPOSE_DLL_EXPORT bool positionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPosition();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	std::shared_ptr<Paragraph> m_dto;
	int32_t m_position;
	bool m_positionIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostNotesSlideAddNewPortionRequest
{
public:
	ASPOSE_DLL_EXPORT PostNotesSlideAddNewPortionRequest();
	ASPOSE_DLL_EXPORT virtual ~PostNotesSlideAddNewPortionRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Portion> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<Portion> value);

	ASPOSE_DLL_EXPORT int32_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(int32_t value);
	ASPOSE_DLL_EXPORT bool positionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPosition();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	std::shared_ptr<Portion> m_dto;
	int32_t m_position;
	bool m_positionIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostNotesSlideAddNewShapeRequest
{
public:
	ASPOSE_DLL_EXPORT PostNotesSlideAddNewShapeRequest();
	ASPOSE_DLL_EXPORT virtual ~PostNotesSlideAddNewShapeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ShapeBase> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<ShapeBase> value);

	ASPOSE_DLL_EXPORT int32_t getShapeToClone() const;
	ASPOSE_DLL_EXPORT void setShapeToClone(int32_t value);
	ASPOSE_DLL_EXPORT bool shapeToCloneIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShapeToClone();

	ASPOSE_DLL_EXPORT int32_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(int32_t value);
	ASPOSE_DLL_EXPORT bool positionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPosition();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::shared_ptr<ShapeBase> m_dto;
	int32_t m_shapeToClone;
	bool m_shapeToCloneIsSet;
	int32_t m_position;
	bool m_positionIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostNotesSlideShapeSaveAsRequest
{
public:
	ASPOSE_DLL_EXPORT PostNotesSlideShapeSaveAsRequest();
	ASPOSE_DLL_EXPORT virtual ~PostNotesSlideShapeSaveAsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<IShapeExportOptions> getOptions() const;
	ASPOSE_DLL_EXPORT void setOptions(std::shared_ptr<IShapeExportOptions> value);

	ASPOSE_DLL_EXPORT double getScaleX() const;
	ASPOSE_DLL_EXPORT void setScaleX(double value);
	ASPOSE_DLL_EXPORT bool scaleXIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleX();

	ASPOSE_DLL_EXPORT double getScaleY() const;
	ASPOSE_DLL_EXPORT void setScaleY(double value);
	ASPOSE_DLL_EXPORT bool scaleYIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleY();

	ASPOSE_DLL_EXPORT utility::string_t getBounds() const;
	ASPOSE_DLL_EXPORT void setBounds(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	utility::string_t m_format;
	std::shared_ptr<IShapeExportOptions> m_options;
	double m_scaleX;
	bool m_scaleXIsSet;
	double m_scaleY;
	bool m_scaleYIsSet;
	utility::string_t m_bounds;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PostPresentationMergeRequest
{
public:
	ASPOSE_DLL_EXPORT PostPresentationMergeRequest();
	ASPOSE_DLL_EXPORT virtual ~PostPresentationMergeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<PresentationsMergeRequest> getRequest() const;
	ASPOSE_DLL_EXPORT void setRequest(std::shared_ptr<PresentationsMergeRequest> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	std::shared_ptr<PresentationsMergeRequest> m_request;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostPresentationReplaceTextRequest
{
public:
	ASPOSE_DLL_EXPORT PostPresentationReplaceTextRequest();
	ASPOSE_DLL_EXPORT virtual ~PostPresentationReplaceTextRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT utility::string_t getOldValue() const;
	ASPOSE_DLL_EXPORT void setOldValue(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getNewValue() const;
	ASPOSE_DLL_EXPORT void setNewValue(utility::string_t value);

	ASPOSE_DLL_EXPORT bool getIgnoreCase() const;
	ASPOSE_DLL_EXPORT void setIgnoreCase(bool value);
	ASPOSE_DLL_EXPORT bool ignoreCaseIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIgnoreCase();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	utility::string_t m_oldValue;
	utility::string_t m_newValue;
	bool m_ignoreCase;
	bool m_ignoreCaseIsSet;
	utility::string_t m_password;
};

class  PostPresentationSplitRequest
{
public:
	ASPOSE_DLL_EXPORT PostPresentationSplitRequest();
	ASPOSE_DLL_EXPORT virtual ~PostPresentationSplitRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();

	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();

	ASPOSE_DLL_EXPORT int32_t getFrom() const;
	ASPOSE_DLL_EXPORT void setFrom(int32_t value);
	ASPOSE_DLL_EXPORT bool fromIsSet() const;
	ASPOSE_DLL_EXPORT void unsetFrom();

	ASPOSE_DLL_EXPORT int32_t getTo() const;
	ASPOSE_DLL_EXPORT void setTo(int32_t value);
	ASPOSE_DLL_EXPORT bool toIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTo();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	utility::string_t m_format;
	int32_t m_width;
	bool m_widthIsSet;
	int32_t m_height;
	bool m_heightIsSet;
	int32_t m_from;
	bool m_fromIsSet;
	int32_t m_to;
	bool m_toIsSet;
	utility::string_t m_password;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PostSectionRequest
{
public:
	ASPOSE_DLL_EXPORT PostSectionRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSectionRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getSectionName() const;
	ASPOSE_DLL_EXPORT void setSectionName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_sectionName;
	int32_t m_slideIndex;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSectionMoveRequest
{
public:
	ASPOSE_DLL_EXPORT PostSectionMoveRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSectionMoveRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSectionIndex() const;
	ASPOSE_DLL_EXPORT void setSectionIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getNewPosition() const;
	ASPOSE_DLL_EXPORT void setNewPosition(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_sectionIndex;
	int32_t m_newPosition;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostShapeSaveAsRequest
{
public:
	ASPOSE_DLL_EXPORT PostShapeSaveAsRequest();
	ASPOSE_DLL_EXPORT virtual ~PostShapeSaveAsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<IShapeExportOptions> getOptions() const;
	ASPOSE_DLL_EXPORT void setOptions(std::shared_ptr<IShapeExportOptions> value);

	ASPOSE_DLL_EXPORT double getScaleX() const;
	ASPOSE_DLL_EXPORT void setScaleX(double value);
	ASPOSE_DLL_EXPORT bool scaleXIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleX();

	ASPOSE_DLL_EXPORT double getScaleY() const;
	ASPOSE_DLL_EXPORT void setScaleY(double value);
	ASPOSE_DLL_EXPORT bool scaleYIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleY();

	ASPOSE_DLL_EXPORT utility::string_t getBounds() const;
	ASPOSE_DLL_EXPORT void setBounds(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	utility::string_t m_format;
	std::shared_ptr<IShapeExportOptions> m_options;
	double m_scaleX;
	bool m_scaleXIsSet;
	double m_scaleY;
	bool m_scaleYIsSet;
	utility::string_t m_bounds;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PostSlideAnimationEffectRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlideAnimationEffectRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlideAnimationEffectRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Effect> getEffect() const;
	ASPOSE_DLL_EXPORT void setEffect(std::shared_ptr<Effect> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::shared_ptr<Effect> m_effect;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlideAnimationInteractiveSequenceRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlideAnimationInteractiveSequenceRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlideAnimationInteractiveSequenceRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<InteractiveSequence> getSequence() const;
	ASPOSE_DLL_EXPORT void setSequence(std::shared_ptr<InteractiveSequence> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::shared_ptr<InteractiveSequence> m_sequence;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlideAnimationInteractiveSequenceEffectRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlideAnimationInteractiveSequenceEffectRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlideAnimationInteractiveSequenceEffectRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getSequenceIndex() const;
	ASPOSE_DLL_EXPORT void setSequenceIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Effect> getEffect() const;
	ASPOSE_DLL_EXPORT void setEffect(std::shared_ptr<Effect> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_sequenceIndex;
	std::shared_ptr<Effect> m_effect;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlideReplaceTextRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlideReplaceTextRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlideReplaceTextRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getOldValue() const;
	ASPOSE_DLL_EXPORT void setOldValue(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getNewValue() const;
	ASPOSE_DLL_EXPORT void setNewValue(utility::string_t value);

	ASPOSE_DLL_EXPORT bool getIgnoreCase() const;
	ASPOSE_DLL_EXPORT void setIgnoreCase(bool value);
	ASPOSE_DLL_EXPORT bool ignoreCaseIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIgnoreCase();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	int32_t m_slideIndex;
	utility::string_t m_oldValue;
	utility::string_t m_newValue;
	bool m_ignoreCase;
	bool m_ignoreCaseIsSet;
	utility::string_t m_password;
};

class  PostSlideSaveAsRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlideSaveAsRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlideSaveAsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ExportOptions> getOptions() const;
	ASPOSE_DLL_EXPORT void setOptions(std::shared_ptr<ExportOptions> value);

	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();

	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_format;
	std::shared_ptr<ExportOptions> m_options;
	int32_t m_width;
	bool m_widthIsSet;
	int32_t m_height;
	bool m_heightIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PostSlidesAddRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesAddRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesAddRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getLayoutAlias() const;
	ASPOSE_DLL_EXPORT void setLayoutAlias(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(int32_t value);
	ASPOSE_DLL_EXPORT bool positionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPosition();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_layoutAlias;
	int32_t m_position;
	bool m_positionIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlidesConvertRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesConvertRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesConvertRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	utility::string_t m_format;
	utility::string_t m_password;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PostSlidesCopyRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesCopyRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesCopyRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideToCopy() const;
	ASPOSE_DLL_EXPORT void setSlideToCopy(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(int32_t value);
	ASPOSE_DLL_EXPORT bool positionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPosition();

	ASPOSE_DLL_EXPORT utility::string_t getSource() const;
	ASPOSE_DLL_EXPORT void setSource(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getSourcePassword() const;
	ASPOSE_DLL_EXPORT void setSourcePassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getSourceStorage() const;
	ASPOSE_DLL_EXPORT void setSourceStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideToCopy;
	int32_t m_position;
	bool m_positionIsSet;
	utility::string_t m_source;
	utility::string_t m_sourcePassword;
	utility::string_t m_sourceStorage;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlidesDocumentRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesDocumentRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesDocumentRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getData() const;
	ASPOSE_DLL_EXPORT void setData(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT utility::string_t getInputPassword() const;
	ASPOSE_DLL_EXPORT void setInputPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	std::shared_ptr<HttpContent> m_data;
	utility::string_t m_inputPassword;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlidesDocumentFromHtmlRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesDocumentFromHtmlRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesDocumentFromHtmlRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getHtml() const;
	ASPOSE_DLL_EXPORT void setHtml(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_html;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlidesDocumentFromPdfRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesDocumentFromPdfRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesDocumentFromPdfRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getPdf() const;
	ASPOSE_DLL_EXPORT void setPdf(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	std::shared_ptr<HttpContent> m_pdf;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlidesDocumentFromSourceRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesDocumentFromSourceRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesDocumentFromSourceRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getSourcePath() const;
	ASPOSE_DLL_EXPORT void setSourcePath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getSourcePassword() const;
	ASPOSE_DLL_EXPORT void setSourcePassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getSourceStorage() const;
	ASPOSE_DLL_EXPORT void setSourceStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_sourcePath;
	utility::string_t m_sourcePassword;
	utility::string_t m_sourceStorage;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlidesDocumentFromTemplateRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesDocumentFromTemplateRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesDocumentFromTemplateRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getTemplatePath() const;
	ASPOSE_DLL_EXPORT void setTemplatePath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getData() const;
	ASPOSE_DLL_EXPORT void setData(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getTemplatePassword() const;
	ASPOSE_DLL_EXPORT void setTemplatePassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getTemplateStorage() const;
	ASPOSE_DLL_EXPORT void setTemplateStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT bool getIsImageDataEmbedded() const;
	ASPOSE_DLL_EXPORT void setIsImageDataEmbedded(bool value);
	ASPOSE_DLL_EXPORT bool isImageDataEmbeddedIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsImageDataEmbedded();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_templatePath;
	utility::string_t m_data;
	utility::string_t m_templatePassword;
	utility::string_t m_templateStorage;
	bool m_isImageDataEmbedded;
	bool m_isImageDataEmbeddedIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlidesMergeRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesMergeRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesMergeRequest();

	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<HttpContent>> getFiles() const;
	ASPOSE_DLL_EXPORT void setFiles(std::vector<std::shared_ptr<HttpContent>> value);

	ASPOSE_DLL_EXPORT std::shared_ptr<OrderedMergeRequest> getRequest() const;
	ASPOSE_DLL_EXPORT void setRequest(std::shared_ptr<OrderedMergeRequest> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);
protected:
	std::vector<std::shared_ptr<HttpContent>> m_files;
	std::shared_ptr<OrderedMergeRequest> m_request;
	utility::string_t m_password;
};

class  PostSlidesPipelineRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesPipelineRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesPipelineRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<Pipeline> getPipeline() const;
	ASPOSE_DLL_EXPORT void setPipeline(std::shared_ptr<Pipeline> value);

	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<HttpContent>> getFiles() const;
	ASPOSE_DLL_EXPORT void setFiles(std::vector<std::shared_ptr<HttpContent>> value);
protected:
	std::shared_ptr<Pipeline> m_pipeline;
	std::vector<std::shared_ptr<HttpContent>> m_files;
};

class  PostSlidesPresentationReplaceTextRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesPresentationReplaceTextRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesPresentationReplaceTextRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getOldValue() const;
	ASPOSE_DLL_EXPORT void setOldValue(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getNewValue() const;
	ASPOSE_DLL_EXPORT void setNewValue(utility::string_t value);

	ASPOSE_DLL_EXPORT bool getIgnoreCase() const;
	ASPOSE_DLL_EXPORT void setIgnoreCase(bool value);
	ASPOSE_DLL_EXPORT bool ignoreCaseIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIgnoreCase();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_oldValue;
	utility::string_t m_newValue;
	bool m_ignoreCase;
	bool m_ignoreCaseIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlidesReorderRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesReorderRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesReorderRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getNewPosition() const;
	ASPOSE_DLL_EXPORT void setNewPosition(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_newPosition;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlidesReorderManyRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesReorderManyRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesReorderManyRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::vector<int32_t> getOldPositions() const;
	ASPOSE_DLL_EXPORT void setOldPositions(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT std::vector<int32_t> getNewPositions() const;
	ASPOSE_DLL_EXPORT void setNewPositions(std::vector<int32_t> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	std::vector<int32_t> m_oldPositions;
	std::vector<int32_t> m_newPositions;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlidesSaveAsRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesSaveAsRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesSaveAsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ExportOptions> getOptions() const;
	ASPOSE_DLL_EXPORT void setOptions(std::shared_ptr<ExportOptions> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_format;
	std::shared_ptr<ExportOptions> m_options;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PostSlidesSetDocumentPropertiesRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesSetDocumentPropertiesRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesSetDocumentPropertiesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<DocumentProperties> getProperties() const;
	ASPOSE_DLL_EXPORT void setProperties(std::shared_ptr<DocumentProperties> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	std::shared_ptr<DocumentProperties> m_properties;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlidesSlideReplaceTextRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesSlideReplaceTextRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesSlideReplaceTextRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getOldValue() const;
	ASPOSE_DLL_EXPORT void setOldValue(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getNewValue() const;
	ASPOSE_DLL_EXPORT void setNewValue(utility::string_t value);

	ASPOSE_DLL_EXPORT bool getIgnoreCase() const;
	ASPOSE_DLL_EXPORT void setIgnoreCase(bool value);
	ASPOSE_DLL_EXPORT bool ignoreCaseIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIgnoreCase();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_oldValue;
	utility::string_t m_newValue;
	bool m_ignoreCase;
	bool m_ignoreCaseIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PostSlidesSplitRequest
{
public:
	ASPOSE_DLL_EXPORT PostSlidesSplitRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSlidesSplitRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ExportOptions> getOptions() const;
	ASPOSE_DLL_EXPORT void setOptions(std::shared_ptr<ExportOptions> value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();

	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();

	ASPOSE_DLL_EXPORT int32_t getFrom() const;
	ASPOSE_DLL_EXPORT void setFrom(int32_t value);
	ASPOSE_DLL_EXPORT bool fromIsSet() const;
	ASPOSE_DLL_EXPORT void unsetFrom();

	ASPOSE_DLL_EXPORT int32_t getTo() const;
	ASPOSE_DLL_EXPORT void setTo(int32_t value);
	ASPOSE_DLL_EXPORT bool toIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTo();

	ASPOSE_DLL_EXPORT utility::string_t getDestFolder() const;
	ASPOSE_DLL_EXPORT void setDestFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	utility::string_t m_name;
	std::shared_ptr<ExportOptions> m_options;
	utility::string_t m_format;
	int32_t m_width;
	bool m_widthIsSet;
	int32_t m_height;
	bool m_heightIsSet;
	int32_t m_from;
	bool m_fromIsSet;
	int32_t m_to;
	bool m_toIsSet;
	utility::string_t m_destFolder;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PostSubshapeSaveAsRequest
{
public:
	ASPOSE_DLL_EXPORT PostSubshapeSaveAsRequest();
	ASPOSE_DLL_EXPORT virtual ~PostSubshapeSaveAsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<IShapeExportOptions> getOptions() const;
	ASPOSE_DLL_EXPORT void setOptions(std::shared_ptr<IShapeExportOptions> value);

	ASPOSE_DLL_EXPORT double getScaleX() const;
	ASPOSE_DLL_EXPORT void setScaleX(double value);
	ASPOSE_DLL_EXPORT bool scaleXIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleX();

	ASPOSE_DLL_EXPORT double getScaleY() const;
	ASPOSE_DLL_EXPORT void setScaleY(double value);
	ASPOSE_DLL_EXPORT bool scaleYIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleY();

	ASPOSE_DLL_EXPORT utility::string_t getBounds() const;
	ASPOSE_DLL_EXPORT void setBounds(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	utility::string_t m_format;
	std::shared_ptr<IShapeExportOptions> m_options;
	double m_scaleX;
	bool m_scaleXIsSet;
	double m_scaleY;
	bool m_scaleYIsSet;
	utility::string_t m_bounds;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PutChartCategoryRequest
{
public:
	ASPOSE_DLL_EXPORT PutChartCategoryRequest();
	ASPOSE_DLL_EXPORT virtual ~PutChartCategoryRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getCategoryIndex() const;
	ASPOSE_DLL_EXPORT void setCategoryIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ChartCategory> getCategory() const;
	ASPOSE_DLL_EXPORT void setCategory(std::shared_ptr<ChartCategory> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_categoryIndex;
	std::shared_ptr<ChartCategory> m_category;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutChartDataPointRequest
{
public:
	ASPOSE_DLL_EXPORT PutChartDataPointRequest();
	ASPOSE_DLL_EXPORT virtual ~PutChartDataPointRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getSeriesIndex() const;
	ASPOSE_DLL_EXPORT void setSeriesIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getPointIndex() const;
	ASPOSE_DLL_EXPORT void setPointIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<DataPoint> getDataPoint() const;
	ASPOSE_DLL_EXPORT void setDataPoint(std::shared_ptr<DataPoint> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_seriesIndex;
	int32_t m_pointIndex;
	std::shared_ptr<DataPoint> m_dataPoint;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutChartSeriesRequest
{
public:
	ASPOSE_DLL_EXPORT PutChartSeriesRequest();
	ASPOSE_DLL_EXPORT virtual ~PutChartSeriesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getSeriesIndex() const;
	ASPOSE_DLL_EXPORT void setSeriesIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Series> getSeries() const;
	ASPOSE_DLL_EXPORT void setSeries(std::shared_ptr<Series> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_seriesIndex;
	std::shared_ptr<Series> m_series;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutExportShapeRequest
{
public:
	ASPOSE_DLL_EXPORT PutExportShapeRequest();
	ASPOSE_DLL_EXPORT virtual ~PutExportShapeRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getOutPath() const;
	ASPOSE_DLL_EXPORT void setOutPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT double getScaleX() const;
	ASPOSE_DLL_EXPORT void setScaleX(double value);
	ASPOSE_DLL_EXPORT bool scaleXIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleX();

	ASPOSE_DLL_EXPORT double getScaleY() const;
	ASPOSE_DLL_EXPORT void setScaleY(double value);
	ASPOSE_DLL_EXPORT bool scaleYIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleY();

	ASPOSE_DLL_EXPORT utility::string_t getBounds() const;
	ASPOSE_DLL_EXPORT void setBounds(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	utility::string_t m_format;
	utility::string_t m_outPath;
	utility::string_t m_password;
	utility::string_t m_storage;
	double m_scaleX;
	bool m_scaleXIsSet;
	double m_scaleY;
	bool m_scaleYIsSet;
	utility::string_t m_bounds;
	utility::string_t m_fontsFolder;
};

class  PutExportSlideRequest
{
public:
	ASPOSE_DLL_EXPORT PutExportSlideRequest();
	ASPOSE_DLL_EXPORT virtual ~PutExportSlideRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getOutPath() const;
	ASPOSE_DLL_EXPORT void setOutPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();

	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	int32_t m_slideIndex;
	utility::string_t m_format;
	utility::string_t m_outPath;
	int32_t m_width;
	bool m_widthIsSet;
	int32_t m_height;
	bool m_heightIsSet;
	utility::string_t m_password;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PutLayoutSlideRequest
{
public:
	ASPOSE_DLL_EXPORT PutLayoutSlideRequest();
	ASPOSE_DLL_EXPORT virtual ~PutLayoutSlideRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<LayoutSlide> getSlideDto() const;
	ASPOSE_DLL_EXPORT void setSlideDto(std::shared_ptr<LayoutSlide> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::shared_ptr<LayoutSlide> m_slideDto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutNotesSlideHeaderFooterRequest
{
public:
	ASPOSE_DLL_EXPORT PutNotesSlideHeaderFooterRequest();
	ASPOSE_DLL_EXPORT virtual ~PutNotesSlideHeaderFooterRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<NotesSlideHeaderFooter> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<NotesSlideHeaderFooter> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::shared_ptr<NotesSlideHeaderFooter> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutNotesSlideShapeSaveAsRequest
{
public:
	ASPOSE_DLL_EXPORT PutNotesSlideShapeSaveAsRequest();
	ASPOSE_DLL_EXPORT virtual ~PutNotesSlideShapeSaveAsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getOutPath() const;
	ASPOSE_DLL_EXPORT void setOutPath(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<IShapeExportOptions> getOptions() const;
	ASPOSE_DLL_EXPORT void setOptions(std::shared_ptr<IShapeExportOptions> value);

	ASPOSE_DLL_EXPORT double getScaleX() const;
	ASPOSE_DLL_EXPORT void setScaleX(double value);
	ASPOSE_DLL_EXPORT bool scaleXIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleX();

	ASPOSE_DLL_EXPORT double getScaleY() const;
	ASPOSE_DLL_EXPORT void setScaleY(double value);
	ASPOSE_DLL_EXPORT bool scaleYIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleY();

	ASPOSE_DLL_EXPORT utility::string_t getBounds() const;
	ASPOSE_DLL_EXPORT void setBounds(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	utility::string_t m_format;
	utility::string_t m_outPath;
	std::shared_ptr<IShapeExportOptions> m_options;
	double m_scaleX;
	bool m_scaleXIsSet;
	double m_scaleY;
	bool m_scaleYIsSet;
	utility::string_t m_bounds;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PutPresentationMergeRequest
{
public:
	ASPOSE_DLL_EXPORT PutPresentationMergeRequest();
	ASPOSE_DLL_EXPORT virtual ~PutPresentationMergeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<OrderedMergeRequest> getRequest() const;
	ASPOSE_DLL_EXPORT void setRequest(std::shared_ptr<OrderedMergeRequest> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	std::shared_ptr<OrderedMergeRequest> m_request;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutPresentationSplitRequest
{
public:
	ASPOSE_DLL_EXPORT PutPresentationSplitRequest();
	ASPOSE_DLL_EXPORT virtual ~PutPresentationSplitRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getDestFolder() const;
	ASPOSE_DLL_EXPORT void setDestFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();

	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();

	ASPOSE_DLL_EXPORT int32_t getFrom() const;
	ASPOSE_DLL_EXPORT void setFrom(int32_t value);
	ASPOSE_DLL_EXPORT bool fromIsSet() const;
	ASPOSE_DLL_EXPORT void unsetFrom();

	ASPOSE_DLL_EXPORT int32_t getTo() const;
	ASPOSE_DLL_EXPORT void setTo(int32_t value);
	ASPOSE_DLL_EXPORT bool toIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTo();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	utility::string_t m_format;
	utility::string_t m_destFolder;
	int32_t m_width;
	bool m_widthIsSet;
	int32_t m_height;
	bool m_heightIsSet;
	int32_t m_from;
	bool m_fromIsSet;
	int32_t m_to;
	bool m_toIsSet;
	utility::string_t m_password;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PutSectionRequest
{
public:
	ASPOSE_DLL_EXPORT PutSectionRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSectionRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSectionIndex() const;
	ASPOSE_DLL_EXPORT void setSectionIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getSectionName() const;
	ASPOSE_DLL_EXPORT void setSectionName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_sectionIndex;
	utility::string_t m_sectionName;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSectionsRequest
{
public:
	ASPOSE_DLL_EXPORT PutSectionsRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSectionsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Sections> getSections() const;
	ASPOSE_DLL_EXPORT void setSections(std::shared_ptr<Sections> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	std::shared_ptr<Sections> m_sections;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSetParagraphPortionPropertiesRequest
{
public:
	ASPOSE_DLL_EXPORT PutSetParagraphPortionPropertiesRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSetParagraphPortionPropertiesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getPortionIndex() const;
	ASPOSE_DLL_EXPORT void setPortionIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Portion> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<Portion> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	int32_t m_portionIndex;
	std::shared_ptr<Portion> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSetParagraphPropertiesRequest
{
public:
	ASPOSE_DLL_EXPORT PutSetParagraphPropertiesRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSetParagraphPropertiesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Paragraph> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<Paragraph> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	std::shared_ptr<Paragraph> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSetSubshapeParagraphPortionPropertiesRequest
{
public:
	ASPOSE_DLL_EXPORT PutSetSubshapeParagraphPortionPropertiesRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSetSubshapeParagraphPortionPropertiesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getPortionIndex() const;
	ASPOSE_DLL_EXPORT void setPortionIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Portion> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<Portion> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	int32_t m_portionIndex;
	std::shared_ptr<Portion> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSetSubshapeParagraphPropertiesRequest
{
public:
	ASPOSE_DLL_EXPORT PutSetSubshapeParagraphPropertiesRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSetSubshapeParagraphPropertiesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Paragraph> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<Paragraph> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	std::shared_ptr<Paragraph> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutShapeSaveAsRequest
{
public:
	ASPOSE_DLL_EXPORT PutShapeSaveAsRequest();
	ASPOSE_DLL_EXPORT virtual ~PutShapeSaveAsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getOutPath() const;
	ASPOSE_DLL_EXPORT void setOutPath(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<IShapeExportOptions> getOptions() const;
	ASPOSE_DLL_EXPORT void setOptions(std::shared_ptr<IShapeExportOptions> value);

	ASPOSE_DLL_EXPORT double getScaleX() const;
	ASPOSE_DLL_EXPORT void setScaleX(double value);
	ASPOSE_DLL_EXPORT bool scaleXIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleX();

	ASPOSE_DLL_EXPORT double getScaleY() const;
	ASPOSE_DLL_EXPORT void setScaleY(double value);
	ASPOSE_DLL_EXPORT bool scaleYIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleY();

	ASPOSE_DLL_EXPORT utility::string_t getBounds() const;
	ASPOSE_DLL_EXPORT void setBounds(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	utility::string_t m_format;
	utility::string_t m_outPath;
	std::shared_ptr<IShapeExportOptions> m_options;
	double m_scaleX;
	bool m_scaleXIsSet;
	double m_scaleY;
	bool m_scaleYIsSet;
	utility::string_t m_bounds;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PutSlideAnimationRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlideAnimationRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlideAnimationRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<SlideAnimation> getAnimation() const;
	ASPOSE_DLL_EXPORT void setAnimation(std::shared_ptr<SlideAnimation> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::shared_ptr<SlideAnimation> m_animation;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlideAnimationEffectRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlideAnimationEffectRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlideAnimationEffectRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getEffectIndex() const;
	ASPOSE_DLL_EXPORT void setEffectIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Effect> getEffect() const;
	ASPOSE_DLL_EXPORT void setEffect(std::shared_ptr<Effect> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_effectIndex;
	std::shared_ptr<Effect> m_effect;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlideAnimationInteractiveSequenceEffectRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlideAnimationInteractiveSequenceEffectRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlideAnimationInteractiveSequenceEffectRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getSequenceIndex() const;
	ASPOSE_DLL_EXPORT void setSequenceIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getEffectIndex() const;
	ASPOSE_DLL_EXPORT void setEffectIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Effect> getEffect() const;
	ASPOSE_DLL_EXPORT void setEffect(std::shared_ptr<Effect> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_sequenceIndex;
	int32_t m_effectIndex;
	std::shared_ptr<Effect> m_effect;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlideHeaderFooterRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlideHeaderFooterRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlideHeaderFooterRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<HeaderFooter> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<HeaderFooter> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::shared_ptr<HeaderFooter> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlideSaveAsRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlideSaveAsRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlideSaveAsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getOutPath() const;
	ASPOSE_DLL_EXPORT void setOutPath(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ExportOptions> getOptions() const;
	ASPOSE_DLL_EXPORT void setOptions(std::shared_ptr<ExportOptions> value);

	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();

	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_format;
	utility::string_t m_outPath;
	std::shared_ptr<ExportOptions> m_options;
	int32_t m_width;
	bool m_widthIsSet;
	int32_t m_height;
	bool m_heightIsSet;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PutSlideShapeInfoRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlideShapeInfoRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlideShapeInfoRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ShapeBase> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<ShapeBase> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	std::shared_ptr<ShapeBase> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlideSubshapeInfoRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlideSubshapeInfoRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlideSubshapeInfoRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ShapeBase> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<ShapeBase> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	std::shared_ptr<ShapeBase> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlidesConvertRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlidesConvertRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlidesConvertRequest();

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getDocument() const;
	ASPOSE_DLL_EXPORT void setDocument(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getOutPath() const;
	ASPOSE_DLL_EXPORT void setOutPath(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	std::shared_ptr<HttpContent> m_document;
	utility::string_t m_format;
	utility::string_t m_outPath;
	utility::string_t m_password;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PutSlidesDocumentFromHtmlRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlidesDocumentFromHtmlRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlidesDocumentFromHtmlRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getHtml() const;
	ASPOSE_DLL_EXPORT void setHtml(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_html;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlidesHeaderFooterRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlidesHeaderFooterRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlidesHeaderFooterRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<HeaderFooter> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<HeaderFooter> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	std::shared_ptr<HeaderFooter> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlidesMergeRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlidesMergeRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlidesMergeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getOutPath() const;
	ASPOSE_DLL_EXPORT void setOutPath(utility::string_t value);

	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<HttpContent>> getFiles() const;
	ASPOSE_DLL_EXPORT void setFiles(std::vector<std::shared_ptr<HttpContent>> value);

	ASPOSE_DLL_EXPORT std::shared_ptr<OrderedMergeRequest> getRequest() const;
	ASPOSE_DLL_EXPORT void setRequest(std::shared_ptr<OrderedMergeRequest> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_outPath;
	std::vector<std::shared_ptr<HttpContent>> m_files;
	std::shared_ptr<OrderedMergeRequest> m_request;
	utility::string_t m_password;
	utility::string_t m_storage;
};

class  PutSlidesProtectionPropertiesRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlidesProtectionPropertiesRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlidesProtectionPropertiesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ProtectionProperties> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<ProtectionProperties> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	std::shared_ptr<ProtectionProperties> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlidesSaveAsRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlidesSaveAsRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlidesSaveAsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getOutPath() const;
	ASPOSE_DLL_EXPORT void setOutPath(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ExportOptions> getOptions() const;
	ASPOSE_DLL_EXPORT void setOptions(std::shared_ptr<ExportOptions> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_format;
	utility::string_t m_outPath;
	std::shared_ptr<ExportOptions> m_options;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PutSlidesSetDocumentPropertyRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlidesSetDocumentPropertyRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlidesSetDocumentPropertyRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPropertyName() const;
	ASPOSE_DLL_EXPORT void setPropertyName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<DocumentProperty> getProperty() const;
	ASPOSE_DLL_EXPORT void setProperty(std::shared_ptr<DocumentProperty> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	utility::string_t m_propertyName;
	std::shared_ptr<DocumentProperty> m_property;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlidesSlideRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlidesSlideRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlidesSlideRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Slide> getSlideDto() const;
	ASPOSE_DLL_EXPORT void setSlideDto(std::shared_ptr<Slide> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::shared_ptr<Slide> m_slideDto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlidesSlideBackgroundRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlidesSlideBackgroundRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlidesSlideBackgroundRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<SlideBackground> getBackground() const;
	ASPOSE_DLL_EXPORT void setBackground(std::shared_ptr<SlideBackground> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::shared_ptr<SlideBackground> m_background;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlidesSlideBackgroundColorRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlidesSlideBackgroundColorRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlidesSlideBackgroundColorRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getColor() const;
	ASPOSE_DLL_EXPORT void setColor(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_color;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlidesSlidePropertiesRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlidesSlidePropertiesRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlidesSlidePropertiesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<SlideProperties> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<SlideProperties> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	std::shared_ptr<SlideProperties> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlidesSlideSizeRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlidesSlideSizeRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlidesSlideSizeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();

	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();

	ASPOSE_DLL_EXPORT utility::string_t getSizeType() const;
	ASPOSE_DLL_EXPORT void setSizeType(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getScaleType() const;
	ASPOSE_DLL_EXPORT void setScaleType(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_width;
	bool m_widthIsSet;
	int32_t m_height;
	bool m_heightIsSet;
	utility::string_t m_sizeType;
	utility::string_t m_scaleType;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSlidesViewPropertiesRequest
{
public:
	ASPOSE_DLL_EXPORT PutSlidesViewPropertiesRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSlidesViewPropertiesRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ViewProperties> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<ViewProperties> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	std::shared_ptr<ViewProperties> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutSubshapeSaveAsRequest
{
public:
	ASPOSE_DLL_EXPORT PutSubshapeSaveAsRequest();
	ASPOSE_DLL_EXPORT virtual ~PutSubshapeSaveAsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getOutPath() const;
	ASPOSE_DLL_EXPORT void setOutPath(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<IShapeExportOptions> getOptions() const;
	ASPOSE_DLL_EXPORT void setOptions(std::shared_ptr<IShapeExportOptions> value);

	ASPOSE_DLL_EXPORT double getScaleX() const;
	ASPOSE_DLL_EXPORT void setScaleX(double value);
	ASPOSE_DLL_EXPORT bool scaleXIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleX();

	ASPOSE_DLL_EXPORT double getScaleY() const;
	ASPOSE_DLL_EXPORT void setScaleY(double value);
	ASPOSE_DLL_EXPORT bool scaleYIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleY();

	ASPOSE_DLL_EXPORT utility::string_t getBounds() const;
	ASPOSE_DLL_EXPORT void setBounds(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFontsFolder() const;
	ASPOSE_DLL_EXPORT void setFontsFolder(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	utility::string_t m_path;
	int32_t m_shapeIndex;
	utility::string_t m_format;
	utility::string_t m_outPath;
	std::shared_ptr<IShapeExportOptions> m_options;
	double m_scaleX;
	bool m_scaleXIsSet;
	double m_scaleY;
	bool m_scaleYIsSet;
	utility::string_t m_bounds;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
	utility::string_t m_fontsFolder;
};

class  PutUpdateNotesSlideRequest
{
public:
	ASPOSE_DLL_EXPORT PutUpdateNotesSlideRequest();
	ASPOSE_DLL_EXPORT virtual ~PutUpdateNotesSlideRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<NotesSlide> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<NotesSlide> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	std::shared_ptr<NotesSlide> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutUpdateNotesSlideShapeRequest
{
public:
	ASPOSE_DLL_EXPORT PutUpdateNotesSlideShapeRequest();
	ASPOSE_DLL_EXPORT virtual ~PutUpdateNotesSlideShapeRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<ShapeBase> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<ShapeBase> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	std::shared_ptr<ShapeBase> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutUpdateNotesSlideShapeParagraphRequest
{
public:
	ASPOSE_DLL_EXPORT PutUpdateNotesSlideShapeParagraphRequest();
	ASPOSE_DLL_EXPORT virtual ~PutUpdateNotesSlideShapeParagraphRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Paragraph> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<Paragraph> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	std::shared_ptr<Paragraph> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  PutUpdateNotesSlideShapePortionRequest
{
public:
	ASPOSE_DLL_EXPORT PutUpdateNotesSlideShapePortionRequest();
	ASPOSE_DLL_EXPORT virtual ~PutUpdateNotesSlideShapePortionRequest();

	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getParagraphIndex() const;
	ASPOSE_DLL_EXPORT void setParagraphIndex(int32_t value);

	ASPOSE_DLL_EXPORT int32_t getPortionIndex() const;
	ASPOSE_DLL_EXPORT void setPortionIndex(int32_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<Portion> getDto() const;
	ASPOSE_DLL_EXPORT void setDto(std::shared_ptr<Portion> value);

	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getFolder() const;
	ASPOSE_DLL_EXPORT void setFolder(utility::string_t value);

	ASPOSE_DLL_EXPORT utility::string_t getStorage() const;
	ASPOSE_DLL_EXPORT void setStorage(utility::string_t value);
protected:
	utility::string_t m_name;
	int32_t m_slideIndex;
	int32_t m_shapeIndex;
	int32_t m_paragraphIndex;
	int32_t m_portionIndex;
	std::shared_ptr<Portion> m_dto;
	utility::string_t m_password;
	utility::string_t m_folder;
	utility::string_t m_storage;
};

class  StorageExistsRequest
{
public:
	ASPOSE_DLL_EXPORT StorageExistsRequest();
	ASPOSE_DLL_EXPORT virtual ~StorageExistsRequest();

	ASPOSE_DLL_EXPORT utility::string_t getStorageName() const;
	ASPOSE_DLL_EXPORT void setStorageName(utility::string_t value);
protected:
	utility::string_t m_storageName;
};

class  UploadFileRequest
{
public:
	ASPOSE_DLL_EXPORT UploadFileRequest();
	ASPOSE_DLL_EXPORT virtual ~UploadFileRequest();

	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

	ASPOSE_DLL_EXPORT std::shared_ptr<HttpContent> getFile() const;
	ASPOSE_DLL_EXPORT void setFile(std::shared_ptr<HttpContent> value);

	ASPOSE_DLL_EXPORT utility::string_t getStorageName() const;
	ASPOSE_DLL_EXPORT void setStorageName(utility::string_t value);
protected:
	utility::string_t m_path;
	std::shared_ptr<HttpContent> m_file;
	utility::string_t m_storageName;
};

}
}

#endif /* _SlidesApi_H_ */
