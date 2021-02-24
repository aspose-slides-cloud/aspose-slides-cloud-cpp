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


#include "SlidesApiRequests.h"

namespace asposeslidescloud {
namespace api {

CopyFileRequest::CopyFileRequest()
{
}

CopyFileRequest::~CopyFileRequest()
{
}

utility::string_t CopyFileRequest::getSrcPath() const
{
	return m_srcPath;
}

void CopyFileRequest::setSrcPath(utility::string_t value)
{
	m_srcPath = value;
}

utility::string_t CopyFileRequest::getDestPath() const
{
	return m_destPath;
}

void CopyFileRequest::setDestPath(utility::string_t value)
{
	m_destPath = value;
}

utility::string_t CopyFileRequest::getSrcStorageName() const
{
	return m_srcStorageName;
}

void CopyFileRequest::setSrcStorageName(utility::string_t value)
{
	m_srcStorageName = value;
}

utility::string_t CopyFileRequest::getDestStorageName() const
{
	return m_destStorageName;
}

void CopyFileRequest::setDestStorageName(utility::string_t value)
{
	m_destStorageName = value;
}

utility::string_t CopyFileRequest::getVersionId() const
{
	return m_versionId;
}

void CopyFileRequest::setVersionId(utility::string_t value)
{
	m_versionId = value;
}

CopyFolderRequest::CopyFolderRequest()
{
}

CopyFolderRequest::~CopyFolderRequest()
{
}

utility::string_t CopyFolderRequest::getSrcPath() const
{
	return m_srcPath;
}

void CopyFolderRequest::setSrcPath(utility::string_t value)
{
	m_srcPath = value;
}

utility::string_t CopyFolderRequest::getDestPath() const
{
	return m_destPath;
}

void CopyFolderRequest::setDestPath(utility::string_t value)
{
	m_destPath = value;
}

utility::string_t CopyFolderRequest::getSrcStorageName() const
{
	return m_srcStorageName;
}

void CopyFolderRequest::setSrcStorageName(utility::string_t value)
{
	m_srcStorageName = value;
}

utility::string_t CopyFolderRequest::getDestStorageName() const
{
	return m_destStorageName;
}

void CopyFolderRequest::setDestStorageName(utility::string_t value)
{
	m_destStorageName = value;
}

CreateFolderRequest::CreateFolderRequest()
{
}

CreateFolderRequest::~CreateFolderRequest()
{
}

utility::string_t CreateFolderRequest::getPath() const
{
	return m_path;
}

void CreateFolderRequest::setPath(utility::string_t value)
{
	m_path = value;
}

utility::string_t CreateFolderRequest::getStorageName() const
{
	return m_storageName;
}

void CreateFolderRequest::setStorageName(utility::string_t value)
{
	m_storageName = value;
}

DeleteChartCategoryRequest::DeleteChartCategoryRequest()
{
}

DeleteChartCategoryRequest::~DeleteChartCategoryRequest()
{
}

utility::string_t DeleteChartCategoryRequest::getName() const
{
	return m_name;
}

void DeleteChartCategoryRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteChartCategoryRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteChartCategoryRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteChartCategoryRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteChartCategoryRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t DeleteChartCategoryRequest::getCategoryIndex() const
{
	return m_categoryIndex;
}

void DeleteChartCategoryRequest::setCategoryIndex(int32_t value)
{
	m_categoryIndex = value;
}

utility::string_t DeleteChartCategoryRequest::getPassword() const
{
	return m_password;
}

void DeleteChartCategoryRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteChartCategoryRequest::getFolder() const
{
	return m_folder;
}

void DeleteChartCategoryRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteChartCategoryRequest::getStorage() const
{
	return m_storage;
}

void DeleteChartCategoryRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteChartDataPointRequest::DeleteChartDataPointRequest()
{
}

DeleteChartDataPointRequest::~DeleteChartDataPointRequest()
{
}

utility::string_t DeleteChartDataPointRequest::getName() const
{
	return m_name;
}

void DeleteChartDataPointRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteChartDataPointRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteChartDataPointRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteChartDataPointRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteChartDataPointRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t DeleteChartDataPointRequest::getSeriesIndex() const
{
	return m_seriesIndex;
}

void DeleteChartDataPointRequest::setSeriesIndex(int32_t value)
{
	m_seriesIndex = value;
}

int32_t DeleteChartDataPointRequest::getPointIndex() const
{
	return m_pointIndex;
}

void DeleteChartDataPointRequest::setPointIndex(int32_t value)
{
	m_pointIndex = value;
}

utility::string_t DeleteChartDataPointRequest::getPassword() const
{
	return m_password;
}

void DeleteChartDataPointRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteChartDataPointRequest::getFolder() const
{
	return m_folder;
}

void DeleteChartDataPointRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteChartDataPointRequest::getStorage() const
{
	return m_storage;
}

void DeleteChartDataPointRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteChartSeriesRequest::DeleteChartSeriesRequest()
{
}

DeleteChartSeriesRequest::~DeleteChartSeriesRequest()
{
}

utility::string_t DeleteChartSeriesRequest::getName() const
{
	return m_name;
}

void DeleteChartSeriesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteChartSeriesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteChartSeriesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteChartSeriesRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteChartSeriesRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t DeleteChartSeriesRequest::getSeriesIndex() const
{
	return m_seriesIndex;
}

void DeleteChartSeriesRequest::setSeriesIndex(int32_t value)
{
	m_seriesIndex = value;
}

utility::string_t DeleteChartSeriesRequest::getPassword() const
{
	return m_password;
}

void DeleteChartSeriesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteChartSeriesRequest::getFolder() const
{
	return m_folder;
}

void DeleteChartSeriesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteChartSeriesRequest::getStorage() const
{
	return m_storage;
}

void DeleteChartSeriesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteFileRequest::DeleteFileRequest()
{
}

DeleteFileRequest::~DeleteFileRequest()
{
}

utility::string_t DeleteFileRequest::getPath() const
{
	return m_path;
}

void DeleteFileRequest::setPath(utility::string_t value)
{
	m_path = value;
}

utility::string_t DeleteFileRequest::getStorageName() const
{
	return m_storageName;
}

void DeleteFileRequest::setStorageName(utility::string_t value)
{
	m_storageName = value;
}

utility::string_t DeleteFileRequest::getVersionId() const
{
	return m_versionId;
}

void DeleteFileRequest::setVersionId(utility::string_t value)
{
	m_versionId = value;
}

DeleteFolderRequest::DeleteFolderRequest()
{
	m_recursiveIsSet = false;
}

DeleteFolderRequest::~DeleteFolderRequest()
{
}

utility::string_t DeleteFolderRequest::getPath() const
{
	return m_path;
}

void DeleteFolderRequest::setPath(utility::string_t value)
{
	m_path = value;
}

utility::string_t DeleteFolderRequest::getStorageName() const
{
	return m_storageName;
}

void DeleteFolderRequest::setStorageName(utility::string_t value)
{
	m_storageName = value;
}

bool DeleteFolderRequest::getRecursive() const
{
	return m_recursive;
}

void DeleteFolderRequest::setRecursive(bool value)
{
	m_recursive = value;
	m_recursiveIsSet = true;
}

bool DeleteFolderRequest::recursiveIsSet() const
{
	return m_recursiveIsSet;
}

void DeleteFolderRequest::unsetRecursive()
{
	m_recursiveIsSet = false;
}

DeleteNotesSlideRequest::DeleteNotesSlideRequest()
{
}

DeleteNotesSlideRequest::~DeleteNotesSlideRequest()
{
}

utility::string_t DeleteNotesSlideRequest::getName() const
{
	return m_name;
}

void DeleteNotesSlideRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteNotesSlideRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteNotesSlideRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t DeleteNotesSlideRequest::getPassword() const
{
	return m_password;
}

void DeleteNotesSlideRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteNotesSlideRequest::getFolder() const
{
	return m_folder;
}

void DeleteNotesSlideRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteNotesSlideRequest::getStorage() const
{
	return m_storage;
}

void DeleteNotesSlideRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteNotesSlideParagraphRequest::DeleteNotesSlideParagraphRequest()
{
}

DeleteNotesSlideParagraphRequest::~DeleteNotesSlideParagraphRequest()
{
}

utility::string_t DeleteNotesSlideParagraphRequest::getName() const
{
	return m_name;
}

void DeleteNotesSlideParagraphRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteNotesSlideParagraphRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteNotesSlideParagraphRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteNotesSlideParagraphRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteNotesSlideParagraphRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t DeleteNotesSlideParagraphRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void DeleteNotesSlideParagraphRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

utility::string_t DeleteNotesSlideParagraphRequest::getPassword() const
{
	return m_password;
}

void DeleteNotesSlideParagraphRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteNotesSlideParagraphRequest::getFolder() const
{
	return m_folder;
}

void DeleteNotesSlideParagraphRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteNotesSlideParagraphRequest::getStorage() const
{
	return m_storage;
}

void DeleteNotesSlideParagraphRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteNotesSlideParagraphsRequest::DeleteNotesSlideParagraphsRequest()
{
}

DeleteNotesSlideParagraphsRequest::~DeleteNotesSlideParagraphsRequest()
{
}

utility::string_t DeleteNotesSlideParagraphsRequest::getName() const
{
	return m_name;
}

void DeleteNotesSlideParagraphsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteNotesSlideParagraphsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteNotesSlideParagraphsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteNotesSlideParagraphsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteNotesSlideParagraphsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

std::vector<int32_t> DeleteNotesSlideParagraphsRequest::getParagraphs() const
{
	return m_paragraphs;
}

void DeleteNotesSlideParagraphsRequest::setParagraphs(std::vector<int32_t> value)
{
	m_paragraphs = value;
}

utility::string_t DeleteNotesSlideParagraphsRequest::getPassword() const
{
	return m_password;
}

void DeleteNotesSlideParagraphsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteNotesSlideParagraphsRequest::getFolder() const
{
	return m_folder;
}

void DeleteNotesSlideParagraphsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteNotesSlideParagraphsRequest::getStorage() const
{
	return m_storage;
}

void DeleteNotesSlideParagraphsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteNotesSlidePortionRequest::DeleteNotesSlidePortionRequest()
{
}

DeleteNotesSlidePortionRequest::~DeleteNotesSlidePortionRequest()
{
}

utility::string_t DeleteNotesSlidePortionRequest::getName() const
{
	return m_name;
}

void DeleteNotesSlidePortionRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteNotesSlidePortionRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteNotesSlidePortionRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteNotesSlidePortionRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteNotesSlidePortionRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t DeleteNotesSlidePortionRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void DeleteNotesSlidePortionRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

int32_t DeleteNotesSlidePortionRequest::getPortionIndex() const
{
	return m_portionIndex;
}

void DeleteNotesSlidePortionRequest::setPortionIndex(int32_t value)
{
	m_portionIndex = value;
}

utility::string_t DeleteNotesSlidePortionRequest::getPassword() const
{
	return m_password;
}

void DeleteNotesSlidePortionRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteNotesSlidePortionRequest::getFolder() const
{
	return m_folder;
}

void DeleteNotesSlidePortionRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteNotesSlidePortionRequest::getStorage() const
{
	return m_storage;
}

void DeleteNotesSlidePortionRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteNotesSlidePortionsRequest::DeleteNotesSlidePortionsRequest()
{
}

DeleteNotesSlidePortionsRequest::~DeleteNotesSlidePortionsRequest()
{
}

utility::string_t DeleteNotesSlidePortionsRequest::getName() const
{
	return m_name;
}

void DeleteNotesSlidePortionsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteNotesSlidePortionsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteNotesSlidePortionsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteNotesSlidePortionsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteNotesSlidePortionsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t DeleteNotesSlidePortionsRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void DeleteNotesSlidePortionsRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

std::vector<int32_t> DeleteNotesSlidePortionsRequest::getPortions() const
{
	return m_portions;
}

void DeleteNotesSlidePortionsRequest::setPortions(std::vector<int32_t> value)
{
	m_portions = value;
}

utility::string_t DeleteNotesSlidePortionsRequest::getPassword() const
{
	return m_password;
}

void DeleteNotesSlidePortionsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteNotesSlidePortionsRequest::getFolder() const
{
	return m_folder;
}

void DeleteNotesSlidePortionsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteNotesSlidePortionsRequest::getStorage() const
{
	return m_storage;
}

void DeleteNotesSlidePortionsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteNotesSlideShapeRequest::DeleteNotesSlideShapeRequest()
{
}

DeleteNotesSlideShapeRequest::~DeleteNotesSlideShapeRequest()
{
}

utility::string_t DeleteNotesSlideShapeRequest::getName() const
{
	return m_name;
}

void DeleteNotesSlideShapeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteNotesSlideShapeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteNotesSlideShapeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteNotesSlideShapeRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteNotesSlideShapeRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t DeleteNotesSlideShapeRequest::getPassword() const
{
	return m_password;
}

void DeleteNotesSlideShapeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteNotesSlideShapeRequest::getFolder() const
{
	return m_folder;
}

void DeleteNotesSlideShapeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteNotesSlideShapeRequest::getStorage() const
{
	return m_storage;
}

void DeleteNotesSlideShapeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteNotesSlideShapesRequest::DeleteNotesSlideShapesRequest()
{
}

DeleteNotesSlideShapesRequest::~DeleteNotesSlideShapesRequest()
{
}

utility::string_t DeleteNotesSlideShapesRequest::getName() const
{
	return m_name;
}

void DeleteNotesSlideShapesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteNotesSlideShapesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteNotesSlideShapesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::vector<int32_t> DeleteNotesSlideShapesRequest::getShapes() const
{
	return m_shapes;
}

void DeleteNotesSlideShapesRequest::setShapes(std::vector<int32_t> value)
{
	m_shapes = value;
}

utility::string_t DeleteNotesSlideShapesRequest::getPassword() const
{
	return m_password;
}

void DeleteNotesSlideShapesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteNotesSlideShapesRequest::getFolder() const
{
	return m_folder;
}

void DeleteNotesSlideShapesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteNotesSlideShapesRequest::getStorage() const
{
	return m_storage;
}

void DeleteNotesSlideShapesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteParagraphRequest::DeleteParagraphRequest()
{
}

DeleteParagraphRequest::~DeleteParagraphRequest()
{
}

utility::string_t DeleteParagraphRequest::getName() const
{
	return m_name;
}

void DeleteParagraphRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteParagraphRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteParagraphRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteParagraphRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteParagraphRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t DeleteParagraphRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void DeleteParagraphRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

utility::string_t DeleteParagraphRequest::getPassword() const
{
	return m_password;
}

void DeleteParagraphRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteParagraphRequest::getFolder() const
{
	return m_folder;
}

void DeleteParagraphRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteParagraphRequest::getStorage() const
{
	return m_storage;
}

void DeleteParagraphRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteParagraphsRequest::DeleteParagraphsRequest()
{
}

DeleteParagraphsRequest::~DeleteParagraphsRequest()
{
}

utility::string_t DeleteParagraphsRequest::getName() const
{
	return m_name;
}

void DeleteParagraphsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteParagraphsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteParagraphsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteParagraphsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteParagraphsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

std::vector<int32_t> DeleteParagraphsRequest::getParagraphs() const
{
	return m_paragraphs;
}

void DeleteParagraphsRequest::setParagraphs(std::vector<int32_t> value)
{
	m_paragraphs = value;
}

utility::string_t DeleteParagraphsRequest::getPassword() const
{
	return m_password;
}

void DeleteParagraphsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteParagraphsRequest::getFolder() const
{
	return m_folder;
}

void DeleteParagraphsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteParagraphsRequest::getStorage() const
{
	return m_storage;
}

void DeleteParagraphsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeletePortionRequest::DeletePortionRequest()
{
}

DeletePortionRequest::~DeletePortionRequest()
{
}

utility::string_t DeletePortionRequest::getName() const
{
	return m_name;
}

void DeletePortionRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeletePortionRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeletePortionRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeletePortionRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeletePortionRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t DeletePortionRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void DeletePortionRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

int32_t DeletePortionRequest::getPortionIndex() const
{
	return m_portionIndex;
}

void DeletePortionRequest::setPortionIndex(int32_t value)
{
	m_portionIndex = value;
}

utility::string_t DeletePortionRequest::getPassword() const
{
	return m_password;
}

void DeletePortionRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeletePortionRequest::getFolder() const
{
	return m_folder;
}

void DeletePortionRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeletePortionRequest::getStorage() const
{
	return m_storage;
}

void DeletePortionRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeletePortionsRequest::DeletePortionsRequest()
{
}

DeletePortionsRequest::~DeletePortionsRequest()
{
}

utility::string_t DeletePortionsRequest::getName() const
{
	return m_name;
}

void DeletePortionsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeletePortionsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeletePortionsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeletePortionsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeletePortionsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t DeletePortionsRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void DeletePortionsRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

std::vector<int32_t> DeletePortionsRequest::getPortions() const
{
	return m_portions;
}

void DeletePortionsRequest::setPortions(std::vector<int32_t> value)
{
	m_portions = value;
}

utility::string_t DeletePortionsRequest::getPassword() const
{
	return m_password;
}

void DeletePortionsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeletePortionsRequest::getFolder() const
{
	return m_folder;
}

void DeletePortionsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeletePortionsRequest::getStorage() const
{
	return m_storage;
}

void DeletePortionsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSectionRequest::DeleteSectionRequest()
{
	m_withSlidesIsSet = false;
}

DeleteSectionRequest::~DeleteSectionRequest()
{
}

utility::string_t DeleteSectionRequest::getName() const
{
	return m_name;
}

void DeleteSectionRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSectionRequest::getSectionIndex() const
{
	return m_sectionIndex;
}

void DeleteSectionRequest::setSectionIndex(int32_t value)
{
	m_sectionIndex = value;
}

bool DeleteSectionRequest::getWithSlides() const
{
	return m_withSlides;
}

void DeleteSectionRequest::setWithSlides(bool value)
{
	m_withSlides = value;
	m_withSlidesIsSet = true;
}

bool DeleteSectionRequest::withSlidesIsSet() const
{
	return m_withSlidesIsSet;
}

void DeleteSectionRequest::unsetWithSlides()
{
	m_withSlidesIsSet = false;
}

utility::string_t DeleteSectionRequest::getPassword() const
{
	return m_password;
}

void DeleteSectionRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSectionRequest::getFolder() const
{
	return m_folder;
}

void DeleteSectionRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSectionRequest::getStorage() const
{
	return m_storage;
}

void DeleteSectionRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSectionsRequest::DeleteSectionsRequest()
{
	m_withSlidesIsSet = false;
}

DeleteSectionsRequest::~DeleteSectionsRequest()
{
}

utility::string_t DeleteSectionsRequest::getName() const
{
	return m_name;
}

void DeleteSectionsRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::vector<int32_t> DeleteSectionsRequest::getSections() const
{
	return m_sections;
}

void DeleteSectionsRequest::setSections(std::vector<int32_t> value)
{
	m_sections = value;
}

bool DeleteSectionsRequest::getWithSlides() const
{
	return m_withSlides;
}

void DeleteSectionsRequest::setWithSlides(bool value)
{
	m_withSlides = value;
	m_withSlidesIsSet = true;
}

bool DeleteSectionsRequest::withSlidesIsSet() const
{
	return m_withSlidesIsSet;
}

void DeleteSectionsRequest::unsetWithSlides()
{
	m_withSlidesIsSet = false;
}

utility::string_t DeleteSectionsRequest::getPassword() const
{
	return m_password;
}

void DeleteSectionsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSectionsRequest::getFolder() const
{
	return m_folder;
}

void DeleteSectionsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSectionsRequest::getStorage() const
{
	return m_storage;
}

void DeleteSectionsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlideAnimationRequest::DeleteSlideAnimationRequest()
{
}

DeleteSlideAnimationRequest::~DeleteSlideAnimationRequest()
{
}

utility::string_t DeleteSlideAnimationRequest::getName() const
{
	return m_name;
}

void DeleteSlideAnimationRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSlideAnimationRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSlideAnimationRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t DeleteSlideAnimationRequest::getPassword() const
{
	return m_password;
}

void DeleteSlideAnimationRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlideAnimationRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlideAnimationRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlideAnimationRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlideAnimationRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlideAnimationEffectRequest::DeleteSlideAnimationEffectRequest()
{
}

DeleteSlideAnimationEffectRequest::~DeleteSlideAnimationEffectRequest()
{
}

utility::string_t DeleteSlideAnimationEffectRequest::getName() const
{
	return m_name;
}

void DeleteSlideAnimationEffectRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSlideAnimationEffectRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSlideAnimationEffectRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteSlideAnimationEffectRequest::getEffectIndex() const
{
	return m_effectIndex;
}

void DeleteSlideAnimationEffectRequest::setEffectIndex(int32_t value)
{
	m_effectIndex = value;
}

utility::string_t DeleteSlideAnimationEffectRequest::getPassword() const
{
	return m_password;
}

void DeleteSlideAnimationEffectRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlideAnimationEffectRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlideAnimationEffectRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlideAnimationEffectRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlideAnimationEffectRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlideAnimationInteractiveSequenceRequest::DeleteSlideAnimationInteractiveSequenceRequest()
{
}

DeleteSlideAnimationInteractiveSequenceRequest::~DeleteSlideAnimationInteractiveSequenceRequest()
{
}

utility::string_t DeleteSlideAnimationInteractiveSequenceRequest::getName() const
{
	return m_name;
}

void DeleteSlideAnimationInteractiveSequenceRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSlideAnimationInteractiveSequenceRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSlideAnimationInteractiveSequenceRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteSlideAnimationInteractiveSequenceRequest::getSequenceIndex() const
{
	return m_sequenceIndex;
}

void DeleteSlideAnimationInteractiveSequenceRequest::setSequenceIndex(int32_t value)
{
	m_sequenceIndex = value;
}

utility::string_t DeleteSlideAnimationInteractiveSequenceRequest::getPassword() const
{
	return m_password;
}

void DeleteSlideAnimationInteractiveSequenceRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlideAnimationInteractiveSequenceRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlideAnimationInteractiveSequenceRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlideAnimationInteractiveSequenceRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlideAnimationInteractiveSequenceRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlideAnimationInteractiveSequenceEffectRequest::DeleteSlideAnimationInteractiveSequenceEffectRequest()
{
}

DeleteSlideAnimationInteractiveSequenceEffectRequest::~DeleteSlideAnimationInteractiveSequenceEffectRequest()
{
}

utility::string_t DeleteSlideAnimationInteractiveSequenceEffectRequest::getName() const
{
	return m_name;
}

void DeleteSlideAnimationInteractiveSequenceEffectRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSlideAnimationInteractiveSequenceEffectRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSlideAnimationInteractiveSequenceEffectRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteSlideAnimationInteractiveSequenceEffectRequest::getSequenceIndex() const
{
	return m_sequenceIndex;
}

void DeleteSlideAnimationInteractiveSequenceEffectRequest::setSequenceIndex(int32_t value)
{
	m_sequenceIndex = value;
}

int32_t DeleteSlideAnimationInteractiveSequenceEffectRequest::getEffectIndex() const
{
	return m_effectIndex;
}

void DeleteSlideAnimationInteractiveSequenceEffectRequest::setEffectIndex(int32_t value)
{
	m_effectIndex = value;
}

utility::string_t DeleteSlideAnimationInteractiveSequenceEffectRequest::getPassword() const
{
	return m_password;
}

void DeleteSlideAnimationInteractiveSequenceEffectRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlideAnimationInteractiveSequenceEffectRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlideAnimationInteractiveSequenceEffectRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlideAnimationInteractiveSequenceEffectRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlideAnimationInteractiveSequenceEffectRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlideAnimationInteractiveSequencesRequest::DeleteSlideAnimationInteractiveSequencesRequest()
{
}

DeleteSlideAnimationInteractiveSequencesRequest::~DeleteSlideAnimationInteractiveSequencesRequest()
{
}

utility::string_t DeleteSlideAnimationInteractiveSequencesRequest::getName() const
{
	return m_name;
}

void DeleteSlideAnimationInteractiveSequencesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSlideAnimationInteractiveSequencesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSlideAnimationInteractiveSequencesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t DeleteSlideAnimationInteractiveSequencesRequest::getPassword() const
{
	return m_password;
}

void DeleteSlideAnimationInteractiveSequencesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlideAnimationInteractiveSequencesRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlideAnimationInteractiveSequencesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlideAnimationInteractiveSequencesRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlideAnimationInteractiveSequencesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlideAnimationMainSequenceRequest::DeleteSlideAnimationMainSequenceRequest()
{
}

DeleteSlideAnimationMainSequenceRequest::~DeleteSlideAnimationMainSequenceRequest()
{
}

utility::string_t DeleteSlideAnimationMainSequenceRequest::getName() const
{
	return m_name;
}

void DeleteSlideAnimationMainSequenceRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSlideAnimationMainSequenceRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSlideAnimationMainSequenceRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t DeleteSlideAnimationMainSequenceRequest::getPassword() const
{
	return m_password;
}

void DeleteSlideAnimationMainSequenceRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlideAnimationMainSequenceRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlideAnimationMainSequenceRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlideAnimationMainSequenceRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlideAnimationMainSequenceRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlideByIndexRequest::DeleteSlideByIndexRequest()
{
}

DeleteSlideByIndexRequest::~DeleteSlideByIndexRequest()
{
}

utility::string_t DeleteSlideByIndexRequest::getName() const
{
	return m_name;
}

void DeleteSlideByIndexRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSlideByIndexRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSlideByIndexRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t DeleteSlideByIndexRequest::getPassword() const
{
	return m_password;
}

void DeleteSlideByIndexRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlideByIndexRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlideByIndexRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlideByIndexRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlideByIndexRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlideShapeRequest::DeleteSlideShapeRequest()
{
}

DeleteSlideShapeRequest::~DeleteSlideShapeRequest()
{
}

utility::string_t DeleteSlideShapeRequest::getName() const
{
	return m_name;
}

void DeleteSlideShapeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSlideShapeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSlideShapeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t DeleteSlideShapeRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteSlideShapeRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t DeleteSlideShapeRequest::getPassword() const
{
	return m_password;
}

void DeleteSlideShapeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlideShapeRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlideShapeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlideShapeRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlideShapeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlideShapesRequest::DeleteSlideShapesRequest()
{
}

DeleteSlideShapesRequest::~DeleteSlideShapesRequest()
{
}

utility::string_t DeleteSlideShapesRequest::getName() const
{
	return m_name;
}

void DeleteSlideShapesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSlideShapesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSlideShapesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::vector<int32_t> DeleteSlideShapesRequest::getShapes() const
{
	return m_shapes;
}

void DeleteSlideShapesRequest::setShapes(std::vector<int32_t> value)
{
	m_shapes = value;
}

utility::string_t DeleteSlideShapesRequest::getPassword() const
{
	return m_password;
}

void DeleteSlideShapesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlideShapesRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlideShapesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlideShapesRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlideShapesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlideSubshapeRequest::DeleteSlideSubshapeRequest()
{
}

DeleteSlideSubshapeRequest::~DeleteSlideSubshapeRequest()
{
}

utility::string_t DeleteSlideSubshapeRequest::getName() const
{
	return m_name;
}

void DeleteSlideSubshapeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSlideSubshapeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSlideSubshapeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t DeleteSlideSubshapeRequest::getPath() const
{
	return m_path;
}

void DeleteSlideSubshapeRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t DeleteSlideSubshapeRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteSlideSubshapeRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t DeleteSlideSubshapeRequest::getPassword() const
{
	return m_password;
}

void DeleteSlideSubshapeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlideSubshapeRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlideSubshapeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlideSubshapeRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlideSubshapeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlideSubshapesRequest::DeleteSlideSubshapesRequest()
{
}

DeleteSlideSubshapesRequest::~DeleteSlideSubshapesRequest()
{
}

utility::string_t DeleteSlideSubshapesRequest::getName() const
{
	return m_name;
}

void DeleteSlideSubshapesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSlideSubshapesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSlideSubshapesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t DeleteSlideSubshapesRequest::getPath() const
{
	return m_path;
}

void DeleteSlideSubshapesRequest::setPath(utility::string_t value)
{
	m_path = value;
}

std::vector<int32_t> DeleteSlideSubshapesRequest::getShapes() const
{
	return m_shapes;
}

void DeleteSlideSubshapesRequest::setShapes(std::vector<int32_t> value)
{
	m_shapes = value;
}

utility::string_t DeleteSlideSubshapesRequest::getPassword() const
{
	return m_password;
}

void DeleteSlideSubshapesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlideSubshapesRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlideSubshapesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlideSubshapesRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlideSubshapesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlidesCleanSlidesListRequest::DeleteSlidesCleanSlidesListRequest()
{
}

DeleteSlidesCleanSlidesListRequest::~DeleteSlidesCleanSlidesListRequest()
{
}

utility::string_t DeleteSlidesCleanSlidesListRequest::getName() const
{
	return m_name;
}

void DeleteSlidesCleanSlidesListRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::vector<int32_t> DeleteSlidesCleanSlidesListRequest::getSlides() const
{
	return m_slides;
}

void DeleteSlidesCleanSlidesListRequest::setSlides(std::vector<int32_t> value)
{
	m_slides = value;
}

utility::string_t DeleteSlidesCleanSlidesListRequest::getPassword() const
{
	return m_password;
}

void DeleteSlidesCleanSlidesListRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlidesCleanSlidesListRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlidesCleanSlidesListRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlidesCleanSlidesListRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlidesCleanSlidesListRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlidesDocumentPropertiesRequest::DeleteSlidesDocumentPropertiesRequest()
{
}

DeleteSlidesDocumentPropertiesRequest::~DeleteSlidesDocumentPropertiesRequest()
{
}

utility::string_t DeleteSlidesDocumentPropertiesRequest::getName() const
{
	return m_name;
}

void DeleteSlidesDocumentPropertiesRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t DeleteSlidesDocumentPropertiesRequest::getPassword() const
{
	return m_password;
}

void DeleteSlidesDocumentPropertiesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlidesDocumentPropertiesRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlidesDocumentPropertiesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlidesDocumentPropertiesRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlidesDocumentPropertiesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlidesDocumentPropertyRequest::DeleteSlidesDocumentPropertyRequest()
{
}

DeleteSlidesDocumentPropertyRequest::~DeleteSlidesDocumentPropertyRequest()
{
}

utility::string_t DeleteSlidesDocumentPropertyRequest::getName() const
{
	return m_name;
}

void DeleteSlidesDocumentPropertyRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t DeleteSlidesDocumentPropertyRequest::getPropertyName() const
{
	return m_propertyName;
}

void DeleteSlidesDocumentPropertyRequest::setPropertyName(utility::string_t value)
{
	m_propertyName = value;
}

utility::string_t DeleteSlidesDocumentPropertyRequest::getPassword() const
{
	return m_password;
}

void DeleteSlidesDocumentPropertyRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlidesDocumentPropertyRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlidesDocumentPropertyRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlidesDocumentPropertyRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlidesDocumentPropertyRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSlidesSlideBackgroundRequest::DeleteSlidesSlideBackgroundRequest()
{
}

DeleteSlidesSlideBackgroundRequest::~DeleteSlidesSlideBackgroundRequest()
{
}

utility::string_t DeleteSlidesSlideBackgroundRequest::getName() const
{
	return m_name;
}

void DeleteSlidesSlideBackgroundRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSlidesSlideBackgroundRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSlidesSlideBackgroundRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t DeleteSlidesSlideBackgroundRequest::getPassword() const
{
	return m_password;
}

void DeleteSlidesSlideBackgroundRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSlidesSlideBackgroundRequest::getFolder() const
{
	return m_folder;
}

void DeleteSlidesSlideBackgroundRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSlidesSlideBackgroundRequest::getStorage() const
{
	return m_storage;
}

void DeleteSlidesSlideBackgroundRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSubshapeParagraphRequest::DeleteSubshapeParagraphRequest()
{
}

DeleteSubshapeParagraphRequest::~DeleteSubshapeParagraphRequest()
{
}

utility::string_t DeleteSubshapeParagraphRequest::getName() const
{
	return m_name;
}

void DeleteSubshapeParagraphRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSubshapeParagraphRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSubshapeParagraphRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t DeleteSubshapeParagraphRequest::getPath() const
{
	return m_path;
}

void DeleteSubshapeParagraphRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t DeleteSubshapeParagraphRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteSubshapeParagraphRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t DeleteSubshapeParagraphRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void DeleteSubshapeParagraphRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

utility::string_t DeleteSubshapeParagraphRequest::getPassword() const
{
	return m_password;
}

void DeleteSubshapeParagraphRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSubshapeParagraphRequest::getFolder() const
{
	return m_folder;
}

void DeleteSubshapeParagraphRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSubshapeParagraphRequest::getStorage() const
{
	return m_storage;
}

void DeleteSubshapeParagraphRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSubshapeParagraphsRequest::DeleteSubshapeParagraphsRequest()
{
}

DeleteSubshapeParagraphsRequest::~DeleteSubshapeParagraphsRequest()
{
}

utility::string_t DeleteSubshapeParagraphsRequest::getName() const
{
	return m_name;
}

void DeleteSubshapeParagraphsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSubshapeParagraphsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSubshapeParagraphsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t DeleteSubshapeParagraphsRequest::getPath() const
{
	return m_path;
}

void DeleteSubshapeParagraphsRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t DeleteSubshapeParagraphsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteSubshapeParagraphsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

std::vector<int32_t> DeleteSubshapeParagraphsRequest::getParagraphs() const
{
	return m_paragraphs;
}

void DeleteSubshapeParagraphsRequest::setParagraphs(std::vector<int32_t> value)
{
	m_paragraphs = value;
}

utility::string_t DeleteSubshapeParagraphsRequest::getPassword() const
{
	return m_password;
}

void DeleteSubshapeParagraphsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSubshapeParagraphsRequest::getFolder() const
{
	return m_folder;
}

void DeleteSubshapeParagraphsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSubshapeParagraphsRequest::getStorage() const
{
	return m_storage;
}

void DeleteSubshapeParagraphsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSubshapePortionRequest::DeleteSubshapePortionRequest()
{
}

DeleteSubshapePortionRequest::~DeleteSubshapePortionRequest()
{
}

utility::string_t DeleteSubshapePortionRequest::getName() const
{
	return m_name;
}

void DeleteSubshapePortionRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSubshapePortionRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSubshapePortionRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t DeleteSubshapePortionRequest::getPath() const
{
	return m_path;
}

void DeleteSubshapePortionRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t DeleteSubshapePortionRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteSubshapePortionRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t DeleteSubshapePortionRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void DeleteSubshapePortionRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

int32_t DeleteSubshapePortionRequest::getPortionIndex() const
{
	return m_portionIndex;
}

void DeleteSubshapePortionRequest::setPortionIndex(int32_t value)
{
	m_portionIndex = value;
}

utility::string_t DeleteSubshapePortionRequest::getPassword() const
{
	return m_password;
}

void DeleteSubshapePortionRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSubshapePortionRequest::getFolder() const
{
	return m_folder;
}

void DeleteSubshapePortionRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSubshapePortionRequest::getStorage() const
{
	return m_storage;
}

void DeleteSubshapePortionRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DeleteSubshapePortionsRequest::DeleteSubshapePortionsRequest()
{
}

DeleteSubshapePortionsRequest::~DeleteSubshapePortionsRequest()
{
}

utility::string_t DeleteSubshapePortionsRequest::getName() const
{
	return m_name;
}

void DeleteSubshapePortionsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t DeleteSubshapePortionsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void DeleteSubshapePortionsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t DeleteSubshapePortionsRequest::getPath() const
{
	return m_path;
}

void DeleteSubshapePortionsRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t DeleteSubshapePortionsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void DeleteSubshapePortionsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t DeleteSubshapePortionsRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void DeleteSubshapePortionsRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

std::vector<int32_t> DeleteSubshapePortionsRequest::getPortions() const
{
	return m_portions;
}

void DeleteSubshapePortionsRequest::setPortions(std::vector<int32_t> value)
{
	m_portions = value;
}

utility::string_t DeleteSubshapePortionsRequest::getPassword() const
{
	return m_password;
}

void DeleteSubshapePortionsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t DeleteSubshapePortionsRequest::getFolder() const
{
	return m_folder;
}

void DeleteSubshapePortionsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t DeleteSubshapePortionsRequest::getStorage() const
{
	return m_storage;
}

void DeleteSubshapePortionsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

DownloadFileRequest::DownloadFileRequest()
{
}

DownloadFileRequest::~DownloadFileRequest()
{
}

utility::string_t DownloadFileRequest::getPath() const
{
	return m_path;
}

void DownloadFileRequest::setPath(utility::string_t value)
{
	m_path = value;
}

utility::string_t DownloadFileRequest::getStorageName() const
{
	return m_storageName;
}

void DownloadFileRequest::setStorageName(utility::string_t value)
{
	m_storageName = value;
}

utility::string_t DownloadFileRequest::getVersionId() const
{
	return m_versionId;
}

void DownloadFileRequest::setVersionId(utility::string_t value)
{
	m_versionId = value;
}

GetDiscUsageRequest::GetDiscUsageRequest()
{
}

GetDiscUsageRequest::~GetDiscUsageRequest()
{
}

utility::string_t GetDiscUsageRequest::getStorageName() const
{
	return m_storageName;
}

void GetDiscUsageRequest::setStorageName(utility::string_t value)
{
	m_storageName = value;
}

GetFileVersionsRequest::GetFileVersionsRequest()
{
}

GetFileVersionsRequest::~GetFileVersionsRequest()
{
}

utility::string_t GetFileVersionsRequest::getPath() const
{
	return m_path;
}

void GetFileVersionsRequest::setPath(utility::string_t value)
{
	m_path = value;
}

utility::string_t GetFileVersionsRequest::getStorageName() const
{
	return m_storageName;
}

void GetFileVersionsRequest::setStorageName(utility::string_t value)
{
	m_storageName = value;
}

GetFilesListRequest::GetFilesListRequest()
{
}

GetFilesListRequest::~GetFilesListRequest()
{
}

utility::string_t GetFilesListRequest::getPath() const
{
	return m_path;
}

void GetFilesListRequest::setPath(utility::string_t value)
{
	m_path = value;
}

utility::string_t GetFilesListRequest::getStorageName() const
{
	return m_storageName;
}

void GetFilesListRequest::setStorageName(utility::string_t value)
{
	m_storageName = value;
}

GetLayoutSlideRequest::GetLayoutSlideRequest()
{
}

GetLayoutSlideRequest::~GetLayoutSlideRequest()
{
}

utility::string_t GetLayoutSlideRequest::getName() const
{
	return m_name;
}

void GetLayoutSlideRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetLayoutSlideRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetLayoutSlideRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetLayoutSlideRequest::getPassword() const
{
	return m_password;
}

void GetLayoutSlideRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetLayoutSlideRequest::getFolder() const
{
	return m_folder;
}

void GetLayoutSlideRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetLayoutSlideRequest::getStorage() const
{
	return m_storage;
}

void GetLayoutSlideRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetLayoutSlidesListRequest::GetLayoutSlidesListRequest()
{
}

GetLayoutSlidesListRequest::~GetLayoutSlidesListRequest()
{
}

utility::string_t GetLayoutSlidesListRequest::getName() const
{
	return m_name;
}

void GetLayoutSlidesListRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t GetLayoutSlidesListRequest::getPassword() const
{
	return m_password;
}

void GetLayoutSlidesListRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetLayoutSlidesListRequest::getFolder() const
{
	return m_folder;
}

void GetLayoutSlidesListRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetLayoutSlidesListRequest::getStorage() const
{
	return m_storage;
}

void GetLayoutSlidesListRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetMasterSlideRequest::GetMasterSlideRequest()
{
}

GetMasterSlideRequest::~GetMasterSlideRequest()
{
}

utility::string_t GetMasterSlideRequest::getName() const
{
	return m_name;
}

void GetMasterSlideRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetMasterSlideRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetMasterSlideRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetMasterSlideRequest::getPassword() const
{
	return m_password;
}

void GetMasterSlideRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetMasterSlideRequest::getFolder() const
{
	return m_folder;
}

void GetMasterSlideRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetMasterSlideRequest::getStorage() const
{
	return m_storage;
}

void GetMasterSlideRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetMasterSlidesListRequest::GetMasterSlidesListRequest()
{
}

GetMasterSlidesListRequest::~GetMasterSlidesListRequest()
{
}

utility::string_t GetMasterSlidesListRequest::getName() const
{
	return m_name;
}

void GetMasterSlidesListRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t GetMasterSlidesListRequest::getPassword() const
{
	return m_password;
}

void GetMasterSlidesListRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetMasterSlidesListRequest::getFolder() const
{
	return m_folder;
}

void GetMasterSlidesListRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetMasterSlidesListRequest::getStorage() const
{
	return m_storage;
}

void GetMasterSlidesListRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetNotesSlideRequest::GetNotesSlideRequest()
{
}

GetNotesSlideRequest::~GetNotesSlideRequest()
{
}

utility::string_t GetNotesSlideRequest::getName() const
{
	return m_name;
}

void GetNotesSlideRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetNotesSlideRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetNotesSlideRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetNotesSlideRequest::getPassword() const
{
	return m_password;
}

void GetNotesSlideRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetNotesSlideRequest::getFolder() const
{
	return m_folder;
}

void GetNotesSlideRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetNotesSlideRequest::getStorage() const
{
	return m_storage;
}

void GetNotesSlideRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetNotesSlideExistsRequest::GetNotesSlideExistsRequest()
{
}

GetNotesSlideExistsRequest::~GetNotesSlideExistsRequest()
{
}

utility::string_t GetNotesSlideExistsRequest::getName() const
{
	return m_name;
}

void GetNotesSlideExistsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetNotesSlideExistsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetNotesSlideExistsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetNotesSlideExistsRequest::getPassword() const
{
	return m_password;
}

void GetNotesSlideExistsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetNotesSlideExistsRequest::getFolder() const
{
	return m_folder;
}

void GetNotesSlideExistsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetNotesSlideExistsRequest::getStorage() const
{
	return m_storage;
}

void GetNotesSlideExistsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetNotesSlideHeaderFooterRequest::GetNotesSlideHeaderFooterRequest()
{
}

GetNotesSlideHeaderFooterRequest::~GetNotesSlideHeaderFooterRequest()
{
}

utility::string_t GetNotesSlideHeaderFooterRequest::getName() const
{
	return m_name;
}

void GetNotesSlideHeaderFooterRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetNotesSlideHeaderFooterRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetNotesSlideHeaderFooterRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetNotesSlideHeaderFooterRequest::getPassword() const
{
	return m_password;
}

void GetNotesSlideHeaderFooterRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetNotesSlideHeaderFooterRequest::getStorage() const
{
	return m_storage;
}

void GetNotesSlideHeaderFooterRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t GetNotesSlideHeaderFooterRequest::getFolder() const
{
	return m_folder;
}

void GetNotesSlideHeaderFooterRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

GetNotesSlideShapeRequest::GetNotesSlideShapeRequest()
{
}

GetNotesSlideShapeRequest::~GetNotesSlideShapeRequest()
{
}

utility::string_t GetNotesSlideShapeRequest::getName() const
{
	return m_name;
}

void GetNotesSlideShapeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetNotesSlideShapeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetNotesSlideShapeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t GetNotesSlideShapeRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetNotesSlideShapeRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t GetNotesSlideShapeRequest::getPassword() const
{
	return m_password;
}

void GetNotesSlideShapeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetNotesSlideShapeRequest::getFolder() const
{
	return m_folder;
}

void GetNotesSlideShapeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetNotesSlideShapeRequest::getStorage() const
{
	return m_storage;
}

void GetNotesSlideShapeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetNotesSlideShapeParagraphRequest::GetNotesSlideShapeParagraphRequest()
{
}

GetNotesSlideShapeParagraphRequest::~GetNotesSlideShapeParagraphRequest()
{
}

utility::string_t GetNotesSlideShapeParagraphRequest::getName() const
{
	return m_name;
}

void GetNotesSlideShapeParagraphRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetNotesSlideShapeParagraphRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetNotesSlideShapeParagraphRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t GetNotesSlideShapeParagraphRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetNotesSlideShapeParagraphRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t GetNotesSlideShapeParagraphRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void GetNotesSlideShapeParagraphRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

utility::string_t GetNotesSlideShapeParagraphRequest::getPassword() const
{
	return m_password;
}

void GetNotesSlideShapeParagraphRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetNotesSlideShapeParagraphRequest::getFolder() const
{
	return m_folder;
}

void GetNotesSlideShapeParagraphRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetNotesSlideShapeParagraphRequest::getStorage() const
{
	return m_storage;
}

void GetNotesSlideShapeParagraphRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetNotesSlideShapeParagraphsRequest::GetNotesSlideShapeParagraphsRequest()
{
}

GetNotesSlideShapeParagraphsRequest::~GetNotesSlideShapeParagraphsRequest()
{
}

utility::string_t GetNotesSlideShapeParagraphsRequest::getName() const
{
	return m_name;
}

void GetNotesSlideShapeParagraphsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetNotesSlideShapeParagraphsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetNotesSlideShapeParagraphsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t GetNotesSlideShapeParagraphsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetNotesSlideShapeParagraphsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t GetNotesSlideShapeParagraphsRequest::getPassword() const
{
	return m_password;
}

void GetNotesSlideShapeParagraphsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetNotesSlideShapeParagraphsRequest::getFolder() const
{
	return m_folder;
}

void GetNotesSlideShapeParagraphsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetNotesSlideShapeParagraphsRequest::getStorage() const
{
	return m_storage;
}

void GetNotesSlideShapeParagraphsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetNotesSlideShapePortionRequest::GetNotesSlideShapePortionRequest()
{
}

GetNotesSlideShapePortionRequest::~GetNotesSlideShapePortionRequest()
{
}

utility::string_t GetNotesSlideShapePortionRequest::getName() const
{
	return m_name;
}

void GetNotesSlideShapePortionRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetNotesSlideShapePortionRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetNotesSlideShapePortionRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t GetNotesSlideShapePortionRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetNotesSlideShapePortionRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t GetNotesSlideShapePortionRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void GetNotesSlideShapePortionRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

int32_t GetNotesSlideShapePortionRequest::getPortionIndex() const
{
	return m_portionIndex;
}

void GetNotesSlideShapePortionRequest::setPortionIndex(int32_t value)
{
	m_portionIndex = value;
}

utility::string_t GetNotesSlideShapePortionRequest::getPassword() const
{
	return m_password;
}

void GetNotesSlideShapePortionRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetNotesSlideShapePortionRequest::getFolder() const
{
	return m_folder;
}

void GetNotesSlideShapePortionRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetNotesSlideShapePortionRequest::getStorage() const
{
	return m_storage;
}

void GetNotesSlideShapePortionRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetNotesSlideShapePortionsRequest::GetNotesSlideShapePortionsRequest()
{
}

GetNotesSlideShapePortionsRequest::~GetNotesSlideShapePortionsRequest()
{
}

utility::string_t GetNotesSlideShapePortionsRequest::getName() const
{
	return m_name;
}

void GetNotesSlideShapePortionsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetNotesSlideShapePortionsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetNotesSlideShapePortionsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t GetNotesSlideShapePortionsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetNotesSlideShapePortionsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t GetNotesSlideShapePortionsRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void GetNotesSlideShapePortionsRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

utility::string_t GetNotesSlideShapePortionsRequest::getPassword() const
{
	return m_password;
}

void GetNotesSlideShapePortionsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetNotesSlideShapePortionsRequest::getFolder() const
{
	return m_folder;
}

void GetNotesSlideShapePortionsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetNotesSlideShapePortionsRequest::getStorage() const
{
	return m_storage;
}

void GetNotesSlideShapePortionsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetNotesSlideShapesRequest::GetNotesSlideShapesRequest()
{
}

GetNotesSlideShapesRequest::~GetNotesSlideShapesRequest()
{
}

utility::string_t GetNotesSlideShapesRequest::getName() const
{
	return m_name;
}

void GetNotesSlideShapesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetNotesSlideShapesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetNotesSlideShapesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetNotesSlideShapesRequest::getPassword() const
{
	return m_password;
}

void GetNotesSlideShapesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetNotesSlideShapesRequest::getFolder() const
{
	return m_folder;
}

void GetNotesSlideShapesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetNotesSlideShapesRequest::getStorage() const
{
	return m_storage;
}

void GetNotesSlideShapesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetNotesSlideWithFormatRequest::GetNotesSlideWithFormatRequest()
{
	m_widthIsSet = false;
	m_heightIsSet = false;
}

GetNotesSlideWithFormatRequest::~GetNotesSlideWithFormatRequest()
{
}

utility::string_t GetNotesSlideWithFormatRequest::getName() const
{
	return m_name;
}

void GetNotesSlideWithFormatRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetNotesSlideWithFormatRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetNotesSlideWithFormatRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetNotesSlideWithFormatRequest::getFormat() const
{
	return m_format;
}

void GetNotesSlideWithFormatRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

int32_t GetNotesSlideWithFormatRequest::getWidth() const
{
	return m_width;
}

void GetNotesSlideWithFormatRequest::setWidth(int32_t value)
{
	m_width = value;
	m_widthIsSet = true;
}

bool GetNotesSlideWithFormatRequest::widthIsSet() const
{
	return m_widthIsSet;
}

void GetNotesSlideWithFormatRequest::unsetWidth()
{
	m_widthIsSet = false;
}

int32_t GetNotesSlideWithFormatRequest::getHeight() const
{
	return m_height;
}

void GetNotesSlideWithFormatRequest::setHeight(int32_t value)
{
	m_height = value;
	m_heightIsSet = true;
}

bool GetNotesSlideWithFormatRequest::heightIsSet() const
{
	return m_heightIsSet;
}

void GetNotesSlideWithFormatRequest::unsetHeight()
{
	m_heightIsSet = false;
}

utility::string_t GetNotesSlideWithFormatRequest::getPassword() const
{
	return m_password;
}

void GetNotesSlideWithFormatRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetNotesSlideWithFormatRequest::getFolder() const
{
	return m_folder;
}

void GetNotesSlideWithFormatRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetNotesSlideWithFormatRequest::getStorage() const
{
	return m_storage;
}

void GetNotesSlideWithFormatRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t GetNotesSlideWithFormatRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void GetNotesSlideWithFormatRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

GetParagraphPortionRequest::GetParagraphPortionRequest()
{
}

GetParagraphPortionRequest::~GetParagraphPortionRequest()
{
}

utility::string_t GetParagraphPortionRequest::getName() const
{
	return m_name;
}

void GetParagraphPortionRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetParagraphPortionRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetParagraphPortionRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t GetParagraphPortionRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetParagraphPortionRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t GetParagraphPortionRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void GetParagraphPortionRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

int32_t GetParagraphPortionRequest::getPortionIndex() const
{
	return m_portionIndex;
}

void GetParagraphPortionRequest::setPortionIndex(int32_t value)
{
	m_portionIndex = value;
}

utility::string_t GetParagraphPortionRequest::getPassword() const
{
	return m_password;
}

void GetParagraphPortionRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetParagraphPortionRequest::getFolder() const
{
	return m_folder;
}

void GetParagraphPortionRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetParagraphPortionRequest::getStorage() const
{
	return m_storage;
}

void GetParagraphPortionRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetParagraphPortionsRequest::GetParagraphPortionsRequest()
{
}

GetParagraphPortionsRequest::~GetParagraphPortionsRequest()
{
}

utility::string_t GetParagraphPortionsRequest::getName() const
{
	return m_name;
}

void GetParagraphPortionsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetParagraphPortionsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetParagraphPortionsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t GetParagraphPortionsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetParagraphPortionsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t GetParagraphPortionsRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void GetParagraphPortionsRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

utility::string_t GetParagraphPortionsRequest::getPassword() const
{
	return m_password;
}

void GetParagraphPortionsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetParagraphPortionsRequest::getFolder() const
{
	return m_folder;
}

void GetParagraphPortionsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetParagraphPortionsRequest::getStorage() const
{
	return m_storage;
}

void GetParagraphPortionsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSectionsRequest::GetSectionsRequest()
{
}

GetSectionsRequest::~GetSectionsRequest()
{
}

utility::string_t GetSectionsRequest::getName() const
{
	return m_name;
}

void GetSectionsRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t GetSectionsRequest::getPassword() const
{
	return m_password;
}

void GetSectionsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSectionsRequest::getFolder() const
{
	return m_folder;
}

void GetSectionsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSectionsRequest::getStorage() const
{
	return m_storage;
}

void GetSectionsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlideAnimationRequest::GetSlideAnimationRequest()
{
	m_shapeIndexIsSet = false;
}

GetSlideAnimationRequest::~GetSlideAnimationRequest()
{
}

utility::string_t GetSlideAnimationRequest::getName() const
{
	return m_name;
}

void GetSlideAnimationRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlideAnimationRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlideAnimationRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t GetSlideAnimationRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetSlideAnimationRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
	m_shapeIndexIsSet = true;
}

bool GetSlideAnimationRequest::shapeIndexIsSet() const
{
	return m_shapeIndexIsSet;
}

void GetSlideAnimationRequest::unsetShapeIndex()
{
	m_shapeIndexIsSet = false;
}

utility::string_t GetSlideAnimationRequest::getPassword() const
{
	return m_password;
}

void GetSlideAnimationRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlideAnimationRequest::getFolder() const
{
	return m_folder;
}

void GetSlideAnimationRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlideAnimationRequest::getStorage() const
{
	return m_storage;
}

void GetSlideAnimationRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlideHeaderFooterRequest::GetSlideHeaderFooterRequest()
{
}

GetSlideHeaderFooterRequest::~GetSlideHeaderFooterRequest()
{
}

utility::string_t GetSlideHeaderFooterRequest::getName() const
{
	return m_name;
}

void GetSlideHeaderFooterRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlideHeaderFooterRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlideHeaderFooterRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlideHeaderFooterRequest::getPassword() const
{
	return m_password;
}

void GetSlideHeaderFooterRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlideHeaderFooterRequest::getFolder() const
{
	return m_folder;
}

void GetSlideHeaderFooterRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlideHeaderFooterRequest::getStorage() const
{
	return m_storage;
}

void GetSlideHeaderFooterRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlideShapeRequest::GetSlideShapeRequest()
{
}

GetSlideShapeRequest::~GetSlideShapeRequest()
{
}

utility::string_t GetSlideShapeRequest::getName() const
{
	return m_name;
}

void GetSlideShapeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlideShapeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlideShapeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t GetSlideShapeRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetSlideShapeRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t GetSlideShapeRequest::getPassword() const
{
	return m_password;
}

void GetSlideShapeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlideShapeRequest::getFolder() const
{
	return m_folder;
}

void GetSlideShapeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlideShapeRequest::getStorage() const
{
	return m_storage;
}

void GetSlideShapeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlideShapeParagraphRequest::GetSlideShapeParagraphRequest()
{
}

GetSlideShapeParagraphRequest::~GetSlideShapeParagraphRequest()
{
}

utility::string_t GetSlideShapeParagraphRequest::getName() const
{
	return m_name;
}

void GetSlideShapeParagraphRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlideShapeParagraphRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlideShapeParagraphRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t GetSlideShapeParagraphRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetSlideShapeParagraphRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t GetSlideShapeParagraphRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void GetSlideShapeParagraphRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

utility::string_t GetSlideShapeParagraphRequest::getPassword() const
{
	return m_password;
}

void GetSlideShapeParagraphRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlideShapeParagraphRequest::getFolder() const
{
	return m_folder;
}

void GetSlideShapeParagraphRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlideShapeParagraphRequest::getStorage() const
{
	return m_storage;
}

void GetSlideShapeParagraphRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlideShapeParagraphsRequest::GetSlideShapeParagraphsRequest()
{
}

GetSlideShapeParagraphsRequest::~GetSlideShapeParagraphsRequest()
{
}

utility::string_t GetSlideShapeParagraphsRequest::getName() const
{
	return m_name;
}

void GetSlideShapeParagraphsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlideShapeParagraphsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlideShapeParagraphsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t GetSlideShapeParagraphsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetSlideShapeParagraphsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t GetSlideShapeParagraphsRequest::getPassword() const
{
	return m_password;
}

void GetSlideShapeParagraphsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlideShapeParagraphsRequest::getFolder() const
{
	return m_folder;
}

void GetSlideShapeParagraphsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlideShapeParagraphsRequest::getStorage() const
{
	return m_storage;
}

void GetSlideShapeParagraphsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlideShapesRequest::GetSlideShapesRequest()
{
}

GetSlideShapesRequest::~GetSlideShapesRequest()
{
}

utility::string_t GetSlideShapesRequest::getName() const
{
	return m_name;
}

void GetSlideShapesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlideShapesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlideShapesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlideShapesRequest::getPassword() const
{
	return m_password;
}

void GetSlideShapesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlideShapesRequest::getFolder() const
{
	return m_folder;
}

void GetSlideShapesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlideShapesRequest::getStorage() const
{
	return m_storage;
}

void GetSlideShapesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlideSubshapeRequest::GetSlideSubshapeRequest()
{
}

GetSlideSubshapeRequest::~GetSlideSubshapeRequest()
{
}

utility::string_t GetSlideSubshapeRequest::getName() const
{
	return m_name;
}

void GetSlideSubshapeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlideSubshapeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlideSubshapeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlideSubshapeRequest::getPath() const
{
	return m_path;
}

void GetSlideSubshapeRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t GetSlideSubshapeRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetSlideSubshapeRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t GetSlideSubshapeRequest::getPassword() const
{
	return m_password;
}

void GetSlideSubshapeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlideSubshapeRequest::getFolder() const
{
	return m_folder;
}

void GetSlideSubshapeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlideSubshapeRequest::getStorage() const
{
	return m_storage;
}

void GetSlideSubshapeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlideSubshapeParagraphRequest::GetSlideSubshapeParagraphRequest()
{
}

GetSlideSubshapeParagraphRequest::~GetSlideSubshapeParagraphRequest()
{
}

utility::string_t GetSlideSubshapeParagraphRequest::getName() const
{
	return m_name;
}

void GetSlideSubshapeParagraphRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlideSubshapeParagraphRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlideSubshapeParagraphRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlideSubshapeParagraphRequest::getPath() const
{
	return m_path;
}

void GetSlideSubshapeParagraphRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t GetSlideSubshapeParagraphRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetSlideSubshapeParagraphRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t GetSlideSubshapeParagraphRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void GetSlideSubshapeParagraphRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

utility::string_t GetSlideSubshapeParagraphRequest::getPassword() const
{
	return m_password;
}

void GetSlideSubshapeParagraphRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlideSubshapeParagraphRequest::getFolder() const
{
	return m_folder;
}

void GetSlideSubshapeParagraphRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlideSubshapeParagraphRequest::getStorage() const
{
	return m_storage;
}

void GetSlideSubshapeParagraphRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlideSubshapeParagraphsRequest::GetSlideSubshapeParagraphsRequest()
{
}

GetSlideSubshapeParagraphsRequest::~GetSlideSubshapeParagraphsRequest()
{
}

utility::string_t GetSlideSubshapeParagraphsRequest::getName() const
{
	return m_name;
}

void GetSlideSubshapeParagraphsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlideSubshapeParagraphsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlideSubshapeParagraphsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlideSubshapeParagraphsRequest::getPath() const
{
	return m_path;
}

void GetSlideSubshapeParagraphsRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t GetSlideSubshapeParagraphsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetSlideSubshapeParagraphsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t GetSlideSubshapeParagraphsRequest::getPassword() const
{
	return m_password;
}

void GetSlideSubshapeParagraphsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlideSubshapeParagraphsRequest::getFolder() const
{
	return m_folder;
}

void GetSlideSubshapeParagraphsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlideSubshapeParagraphsRequest::getStorage() const
{
	return m_storage;
}

void GetSlideSubshapeParagraphsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlideSubshapesRequest::GetSlideSubshapesRequest()
{
}

GetSlideSubshapesRequest::~GetSlideSubshapesRequest()
{
}

utility::string_t GetSlideSubshapesRequest::getName() const
{
	return m_name;
}

void GetSlideSubshapesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlideSubshapesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlideSubshapesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlideSubshapesRequest::getPath() const
{
	return m_path;
}

void GetSlideSubshapesRequest::setPath(utility::string_t value)
{
	m_path = value;
}

utility::string_t GetSlideSubshapesRequest::getPassword() const
{
	return m_password;
}

void GetSlideSubshapesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlideSubshapesRequest::getFolder() const
{
	return m_folder;
}

void GetSlideSubshapesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlideSubshapesRequest::getStorage() const
{
	return m_storage;
}

void GetSlideSubshapesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesDocumentRequest::GetSlidesDocumentRequest()
{
}

GetSlidesDocumentRequest::~GetSlidesDocumentRequest()
{
}

utility::string_t GetSlidesDocumentRequest::getName() const
{
	return m_name;
}

void GetSlidesDocumentRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t GetSlidesDocumentRequest::getPassword() const
{
	return m_password;
}

void GetSlidesDocumentRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesDocumentRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesDocumentRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t GetSlidesDocumentRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesDocumentRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

GetSlidesDocumentPropertiesRequest::GetSlidesDocumentPropertiesRequest()
{
}

GetSlidesDocumentPropertiesRequest::~GetSlidesDocumentPropertiesRequest()
{
}

utility::string_t GetSlidesDocumentPropertiesRequest::getName() const
{
	return m_name;
}

void GetSlidesDocumentPropertiesRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t GetSlidesDocumentPropertiesRequest::getPassword() const
{
	return m_password;
}

void GetSlidesDocumentPropertiesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesDocumentPropertiesRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesDocumentPropertiesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesDocumentPropertiesRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesDocumentPropertiesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesDocumentPropertyRequest::GetSlidesDocumentPropertyRequest()
{
}

GetSlidesDocumentPropertyRequest::~GetSlidesDocumentPropertyRequest()
{
}

utility::string_t GetSlidesDocumentPropertyRequest::getName() const
{
	return m_name;
}

void GetSlidesDocumentPropertyRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t GetSlidesDocumentPropertyRequest::getPropertyName() const
{
	return m_propertyName;
}

void GetSlidesDocumentPropertyRequest::setPropertyName(utility::string_t value)
{
	m_propertyName = value;
}

utility::string_t GetSlidesDocumentPropertyRequest::getPassword() const
{
	return m_password;
}

void GetSlidesDocumentPropertyRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesDocumentPropertyRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesDocumentPropertyRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesDocumentPropertyRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesDocumentPropertyRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesImageWithDefaultFormatRequest::GetSlidesImageWithDefaultFormatRequest()
{
}

GetSlidesImageWithDefaultFormatRequest::~GetSlidesImageWithDefaultFormatRequest()
{
}

utility::string_t GetSlidesImageWithDefaultFormatRequest::getName() const
{
	return m_name;
}

void GetSlidesImageWithDefaultFormatRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlidesImageWithDefaultFormatRequest::getIndex() const
{
	return m_index;
}

void GetSlidesImageWithDefaultFormatRequest::setIndex(int32_t value)
{
	m_index = value;
}

utility::string_t GetSlidesImageWithDefaultFormatRequest::getPassword() const
{
	return m_password;
}

void GetSlidesImageWithDefaultFormatRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesImageWithDefaultFormatRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesImageWithDefaultFormatRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesImageWithDefaultFormatRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesImageWithDefaultFormatRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesImageWithFormatRequest::GetSlidesImageWithFormatRequest()
{
}

GetSlidesImageWithFormatRequest::~GetSlidesImageWithFormatRequest()
{
}

utility::string_t GetSlidesImageWithFormatRequest::getName() const
{
	return m_name;
}

void GetSlidesImageWithFormatRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlidesImageWithFormatRequest::getIndex() const
{
	return m_index;
}

void GetSlidesImageWithFormatRequest::setIndex(int32_t value)
{
	m_index = value;
}

utility::string_t GetSlidesImageWithFormatRequest::getFormat() const
{
	return m_format;
}

void GetSlidesImageWithFormatRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

utility::string_t GetSlidesImageWithFormatRequest::getPassword() const
{
	return m_password;
}

void GetSlidesImageWithFormatRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesImageWithFormatRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesImageWithFormatRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesImageWithFormatRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesImageWithFormatRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesImagesRequest::GetSlidesImagesRequest()
{
}

GetSlidesImagesRequest::~GetSlidesImagesRequest()
{
}

utility::string_t GetSlidesImagesRequest::getName() const
{
	return m_name;
}

void GetSlidesImagesRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t GetSlidesImagesRequest::getPassword() const
{
	return m_password;
}

void GetSlidesImagesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesImagesRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesImagesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesImagesRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesImagesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesPlaceholderRequest::GetSlidesPlaceholderRequest()
{
}

GetSlidesPlaceholderRequest::~GetSlidesPlaceholderRequest()
{
}

utility::string_t GetSlidesPlaceholderRequest::getName() const
{
	return m_name;
}

void GetSlidesPlaceholderRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlidesPlaceholderRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlidesPlaceholderRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t GetSlidesPlaceholderRequest::getPlaceholderIndex() const
{
	return m_placeholderIndex;
}

void GetSlidesPlaceholderRequest::setPlaceholderIndex(int32_t value)
{
	m_placeholderIndex = value;
}

utility::string_t GetSlidesPlaceholderRequest::getPassword() const
{
	return m_password;
}

void GetSlidesPlaceholderRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesPlaceholderRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesPlaceholderRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesPlaceholderRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesPlaceholderRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesPlaceholdersRequest::GetSlidesPlaceholdersRequest()
{
}

GetSlidesPlaceholdersRequest::~GetSlidesPlaceholdersRequest()
{
}

utility::string_t GetSlidesPlaceholdersRequest::getName() const
{
	return m_name;
}

void GetSlidesPlaceholdersRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlidesPlaceholdersRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlidesPlaceholdersRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlidesPlaceholdersRequest::getPassword() const
{
	return m_password;
}

void GetSlidesPlaceholdersRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesPlaceholdersRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesPlaceholdersRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesPlaceholdersRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesPlaceholdersRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesPresentationTextItemsRequest::GetSlidesPresentationTextItemsRequest()
{
	m_withEmptyIsSet = false;
}

GetSlidesPresentationTextItemsRequest::~GetSlidesPresentationTextItemsRequest()
{
}

utility::string_t GetSlidesPresentationTextItemsRequest::getName() const
{
	return m_name;
}

void GetSlidesPresentationTextItemsRequest::setName(utility::string_t value)
{
	m_name = value;
}

bool GetSlidesPresentationTextItemsRequest::getWithEmpty() const
{
	return m_withEmpty;
}

void GetSlidesPresentationTextItemsRequest::setWithEmpty(bool value)
{
	m_withEmpty = value;
	m_withEmptyIsSet = true;
}

bool GetSlidesPresentationTextItemsRequest::withEmptyIsSet() const
{
	return m_withEmptyIsSet;
}

void GetSlidesPresentationTextItemsRequest::unsetWithEmpty()
{
	m_withEmptyIsSet = false;
}

utility::string_t GetSlidesPresentationTextItemsRequest::getPassword() const
{
	return m_password;
}

void GetSlidesPresentationTextItemsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesPresentationTextItemsRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesPresentationTextItemsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesPresentationTextItemsRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesPresentationTextItemsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesProtectionPropertiesRequest::GetSlidesProtectionPropertiesRequest()
{
}

GetSlidesProtectionPropertiesRequest::~GetSlidesProtectionPropertiesRequest()
{
}

utility::string_t GetSlidesProtectionPropertiesRequest::getName() const
{
	return m_name;
}

void GetSlidesProtectionPropertiesRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t GetSlidesProtectionPropertiesRequest::getPassword() const
{
	return m_password;
}

void GetSlidesProtectionPropertiesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesProtectionPropertiesRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesProtectionPropertiesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesProtectionPropertiesRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesProtectionPropertiesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesSlideRequest::GetSlidesSlideRequest()
{
}

GetSlidesSlideRequest::~GetSlidesSlideRequest()
{
}

utility::string_t GetSlidesSlideRequest::getName() const
{
	return m_name;
}

void GetSlidesSlideRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlidesSlideRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlidesSlideRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlidesSlideRequest::getPassword() const
{
	return m_password;
}

void GetSlidesSlideRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesSlideRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesSlideRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesSlideRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesSlideRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesSlideBackgroundRequest::GetSlidesSlideBackgroundRequest()
{
}

GetSlidesSlideBackgroundRequest::~GetSlidesSlideBackgroundRequest()
{
}

utility::string_t GetSlidesSlideBackgroundRequest::getName() const
{
	return m_name;
}

void GetSlidesSlideBackgroundRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlidesSlideBackgroundRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlidesSlideBackgroundRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlidesSlideBackgroundRequest::getPassword() const
{
	return m_password;
}

void GetSlidesSlideBackgroundRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesSlideBackgroundRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesSlideBackgroundRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesSlideBackgroundRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesSlideBackgroundRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesSlideCommentsRequest::GetSlidesSlideCommentsRequest()
{
}

GetSlidesSlideCommentsRequest::~GetSlidesSlideCommentsRequest()
{
}

utility::string_t GetSlidesSlideCommentsRequest::getName() const
{
	return m_name;
}

void GetSlidesSlideCommentsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlidesSlideCommentsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlidesSlideCommentsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlidesSlideCommentsRequest::getPassword() const
{
	return m_password;
}

void GetSlidesSlideCommentsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesSlideCommentsRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesSlideCommentsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesSlideCommentsRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesSlideCommentsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesSlideImagesRequest::GetSlidesSlideImagesRequest()
{
}

GetSlidesSlideImagesRequest::~GetSlidesSlideImagesRequest()
{
}

utility::string_t GetSlidesSlideImagesRequest::getName() const
{
	return m_name;
}

void GetSlidesSlideImagesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlidesSlideImagesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlidesSlideImagesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlidesSlideImagesRequest::getPassword() const
{
	return m_password;
}

void GetSlidesSlideImagesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesSlideImagesRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesSlideImagesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesSlideImagesRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesSlideImagesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesSlidePropertiesRequest::GetSlidesSlidePropertiesRequest()
{
}

GetSlidesSlidePropertiesRequest::~GetSlidesSlidePropertiesRequest()
{
}

utility::string_t GetSlidesSlidePropertiesRequest::getName() const
{
	return m_name;
}

void GetSlidesSlidePropertiesRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t GetSlidesSlidePropertiesRequest::getPassword() const
{
	return m_password;
}

void GetSlidesSlidePropertiesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesSlidePropertiesRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesSlidePropertiesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesSlidePropertiesRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesSlidePropertiesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesSlideTextItemsRequest::GetSlidesSlideTextItemsRequest()
{
	m_withEmptyIsSet = false;
}

GetSlidesSlideTextItemsRequest::~GetSlidesSlideTextItemsRequest()
{
}

utility::string_t GetSlidesSlideTextItemsRequest::getName() const
{
	return m_name;
}

void GetSlidesSlideTextItemsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlidesSlideTextItemsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlidesSlideTextItemsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

bool GetSlidesSlideTextItemsRequest::getWithEmpty() const
{
	return m_withEmpty;
}

void GetSlidesSlideTextItemsRequest::setWithEmpty(bool value)
{
	m_withEmpty = value;
	m_withEmptyIsSet = true;
}

bool GetSlidesSlideTextItemsRequest::withEmptyIsSet() const
{
	return m_withEmptyIsSet;
}

void GetSlidesSlideTextItemsRequest::unsetWithEmpty()
{
	m_withEmptyIsSet = false;
}

utility::string_t GetSlidesSlideTextItemsRequest::getPassword() const
{
	return m_password;
}

void GetSlidesSlideTextItemsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesSlideTextItemsRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesSlideTextItemsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesSlideTextItemsRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesSlideTextItemsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesSlidesListRequest::GetSlidesSlidesListRequest()
{
}

GetSlidesSlidesListRequest::~GetSlidesSlidesListRequest()
{
}

utility::string_t GetSlidesSlidesListRequest::getName() const
{
	return m_name;
}

void GetSlidesSlidesListRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t GetSlidesSlidesListRequest::getPassword() const
{
	return m_password;
}

void GetSlidesSlidesListRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesSlidesListRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesSlidesListRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesSlidesListRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesSlidesListRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesThemeRequest::GetSlidesThemeRequest()
{
}

GetSlidesThemeRequest::~GetSlidesThemeRequest()
{
}

utility::string_t GetSlidesThemeRequest::getName() const
{
	return m_name;
}

void GetSlidesThemeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlidesThemeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlidesThemeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlidesThemeRequest::getPassword() const
{
	return m_password;
}

void GetSlidesThemeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesThemeRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesThemeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesThemeRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesThemeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesThemeColorSchemeRequest::GetSlidesThemeColorSchemeRequest()
{
}

GetSlidesThemeColorSchemeRequest::~GetSlidesThemeColorSchemeRequest()
{
}

utility::string_t GetSlidesThemeColorSchemeRequest::getName() const
{
	return m_name;
}

void GetSlidesThemeColorSchemeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlidesThemeColorSchemeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlidesThemeColorSchemeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlidesThemeColorSchemeRequest::getPassword() const
{
	return m_password;
}

void GetSlidesThemeColorSchemeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesThemeColorSchemeRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesThemeColorSchemeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesThemeColorSchemeRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesThemeColorSchemeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesThemeFontSchemeRequest::GetSlidesThemeFontSchemeRequest()
{
}

GetSlidesThemeFontSchemeRequest::~GetSlidesThemeFontSchemeRequest()
{
}

utility::string_t GetSlidesThemeFontSchemeRequest::getName() const
{
	return m_name;
}

void GetSlidesThemeFontSchemeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlidesThemeFontSchemeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlidesThemeFontSchemeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlidesThemeFontSchemeRequest::getPassword() const
{
	return m_password;
}

void GetSlidesThemeFontSchemeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesThemeFontSchemeRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesThemeFontSchemeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesThemeFontSchemeRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesThemeFontSchemeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesThemeFormatSchemeRequest::GetSlidesThemeFormatSchemeRequest()
{
}

GetSlidesThemeFormatSchemeRequest::~GetSlidesThemeFormatSchemeRequest()
{
}

utility::string_t GetSlidesThemeFormatSchemeRequest::getName() const
{
	return m_name;
}

void GetSlidesThemeFormatSchemeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSlidesThemeFormatSchemeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSlidesThemeFormatSchemeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSlidesThemeFormatSchemeRequest::getPassword() const
{
	return m_password;
}

void GetSlidesThemeFormatSchemeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesThemeFormatSchemeRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesThemeFormatSchemeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesThemeFormatSchemeRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesThemeFormatSchemeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSlidesViewPropertiesRequest::GetSlidesViewPropertiesRequest()
{
}

GetSlidesViewPropertiesRequest::~GetSlidesViewPropertiesRequest()
{
}

utility::string_t GetSlidesViewPropertiesRequest::getName() const
{
	return m_name;
}

void GetSlidesViewPropertiesRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t GetSlidesViewPropertiesRequest::getPassword() const
{
	return m_password;
}

void GetSlidesViewPropertiesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSlidesViewPropertiesRequest::getFolder() const
{
	return m_folder;
}

void GetSlidesViewPropertiesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSlidesViewPropertiesRequest::getStorage() const
{
	return m_storage;
}

void GetSlidesViewPropertiesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSubshapeParagraphPortionRequest::GetSubshapeParagraphPortionRequest()
{
}

GetSubshapeParagraphPortionRequest::~GetSubshapeParagraphPortionRequest()
{
}

utility::string_t GetSubshapeParagraphPortionRequest::getName() const
{
	return m_name;
}

void GetSubshapeParagraphPortionRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSubshapeParagraphPortionRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSubshapeParagraphPortionRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSubshapeParagraphPortionRequest::getPath() const
{
	return m_path;
}

void GetSubshapeParagraphPortionRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t GetSubshapeParagraphPortionRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetSubshapeParagraphPortionRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t GetSubshapeParagraphPortionRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void GetSubshapeParagraphPortionRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

int32_t GetSubshapeParagraphPortionRequest::getPortionIndex() const
{
	return m_portionIndex;
}

void GetSubshapeParagraphPortionRequest::setPortionIndex(int32_t value)
{
	m_portionIndex = value;
}

utility::string_t GetSubshapeParagraphPortionRequest::getPassword() const
{
	return m_password;
}

void GetSubshapeParagraphPortionRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSubshapeParagraphPortionRequest::getFolder() const
{
	return m_folder;
}

void GetSubshapeParagraphPortionRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSubshapeParagraphPortionRequest::getStorage() const
{
	return m_storage;
}

void GetSubshapeParagraphPortionRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

GetSubshapeParagraphPortionsRequest::GetSubshapeParagraphPortionsRequest()
{
}

GetSubshapeParagraphPortionsRequest::~GetSubshapeParagraphPortionsRequest()
{
}

utility::string_t GetSubshapeParagraphPortionsRequest::getName() const
{
	return m_name;
}

void GetSubshapeParagraphPortionsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t GetSubshapeParagraphPortionsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void GetSubshapeParagraphPortionsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t GetSubshapeParagraphPortionsRequest::getPath() const
{
	return m_path;
}

void GetSubshapeParagraphPortionsRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t GetSubshapeParagraphPortionsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void GetSubshapeParagraphPortionsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t GetSubshapeParagraphPortionsRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void GetSubshapeParagraphPortionsRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

utility::string_t GetSubshapeParagraphPortionsRequest::getPassword() const
{
	return m_password;
}

void GetSubshapeParagraphPortionsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t GetSubshapeParagraphPortionsRequest::getFolder() const
{
	return m_folder;
}

void GetSubshapeParagraphPortionsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t GetSubshapeParagraphPortionsRequest::getStorage() const
{
	return m_storage;
}

void GetSubshapeParagraphPortionsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

MoveFileRequest::MoveFileRequest()
{
}

MoveFileRequest::~MoveFileRequest()
{
}

utility::string_t MoveFileRequest::getSrcPath() const
{
	return m_srcPath;
}

void MoveFileRequest::setSrcPath(utility::string_t value)
{
	m_srcPath = value;
}

utility::string_t MoveFileRequest::getDestPath() const
{
	return m_destPath;
}

void MoveFileRequest::setDestPath(utility::string_t value)
{
	m_destPath = value;
}

utility::string_t MoveFileRequest::getSrcStorageName() const
{
	return m_srcStorageName;
}

void MoveFileRequest::setSrcStorageName(utility::string_t value)
{
	m_srcStorageName = value;
}

utility::string_t MoveFileRequest::getDestStorageName() const
{
	return m_destStorageName;
}

void MoveFileRequest::setDestStorageName(utility::string_t value)
{
	m_destStorageName = value;
}

utility::string_t MoveFileRequest::getVersionId() const
{
	return m_versionId;
}

void MoveFileRequest::setVersionId(utility::string_t value)
{
	m_versionId = value;
}

MoveFolderRequest::MoveFolderRequest()
{
}

MoveFolderRequest::~MoveFolderRequest()
{
}

utility::string_t MoveFolderRequest::getSrcPath() const
{
	return m_srcPath;
}

void MoveFolderRequest::setSrcPath(utility::string_t value)
{
	m_srcPath = value;
}

utility::string_t MoveFolderRequest::getDestPath() const
{
	return m_destPath;
}

void MoveFolderRequest::setDestPath(utility::string_t value)
{
	m_destPath = value;
}

utility::string_t MoveFolderRequest::getSrcStorageName() const
{
	return m_srcStorageName;
}

void MoveFolderRequest::setSrcStorageName(utility::string_t value)
{
	m_srcStorageName = value;
}

utility::string_t MoveFolderRequest::getDestStorageName() const
{
	return m_destStorageName;
}

void MoveFolderRequest::setDestStorageName(utility::string_t value)
{
	m_destStorageName = value;
}

ObjectExistsRequest::ObjectExistsRequest()
{
}

ObjectExistsRequest::~ObjectExistsRequest()
{
}

utility::string_t ObjectExistsRequest::getPath() const
{
	return m_path;
}

void ObjectExistsRequest::setPath(utility::string_t value)
{
	m_path = value;
}

utility::string_t ObjectExistsRequest::getStorageName() const
{
	return m_storageName;
}

void ObjectExistsRequest::setStorageName(utility::string_t value)
{
	m_storageName = value;
}

utility::string_t ObjectExistsRequest::getVersionId() const
{
	return m_versionId;
}

void ObjectExistsRequest::setVersionId(utility::string_t value)
{
	m_versionId = value;
}

PostAddNewParagraphRequest::PostAddNewParagraphRequest()
{
	m_positionIsSet = false;
}

PostAddNewParagraphRequest::~PostAddNewParagraphRequest()
{
}

utility::string_t PostAddNewParagraphRequest::getName() const
{
	return m_name;
}

void PostAddNewParagraphRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostAddNewParagraphRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostAddNewParagraphRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PostAddNewParagraphRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PostAddNewParagraphRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

std::shared_ptr<Paragraph> PostAddNewParagraphRequest::getDto() const
{
	return m_dto;
}

void PostAddNewParagraphRequest::setDto(std::shared_ptr<Paragraph> value)
{
	m_dto = value;
}

utility::string_t PostAddNewParagraphRequest::getPassword() const
{
	return m_password;
}

void PostAddNewParagraphRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostAddNewParagraphRequest::getFolder() const
{
	return m_folder;
}

void PostAddNewParagraphRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostAddNewParagraphRequest::getStorage() const
{
	return m_storage;
}

void PostAddNewParagraphRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

int32_t PostAddNewParagraphRequest::getPosition() const
{
	return m_position;
}

void PostAddNewParagraphRequest::setPosition(int32_t value)
{
	m_position = value;
	m_positionIsSet = true;
}

bool PostAddNewParagraphRequest::positionIsSet() const
{
	return m_positionIsSet;
}

void PostAddNewParagraphRequest::unsetPosition()
{
	m_positionIsSet = false;
}

PostAddNewPortionRequest::PostAddNewPortionRequest()
{
	m_positionIsSet = false;
}

PostAddNewPortionRequest::~PostAddNewPortionRequest()
{
}

utility::string_t PostAddNewPortionRequest::getName() const
{
	return m_name;
}

void PostAddNewPortionRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostAddNewPortionRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostAddNewPortionRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PostAddNewPortionRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PostAddNewPortionRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t PostAddNewPortionRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void PostAddNewPortionRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

std::shared_ptr<Portion> PostAddNewPortionRequest::getDto() const
{
	return m_dto;
}

void PostAddNewPortionRequest::setDto(std::shared_ptr<Portion> value)
{
	m_dto = value;
}

utility::string_t PostAddNewPortionRequest::getPassword() const
{
	return m_password;
}

void PostAddNewPortionRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostAddNewPortionRequest::getFolder() const
{
	return m_folder;
}

void PostAddNewPortionRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostAddNewPortionRequest::getStorage() const
{
	return m_storage;
}

void PostAddNewPortionRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

int32_t PostAddNewPortionRequest::getPosition() const
{
	return m_position;
}

void PostAddNewPortionRequest::setPosition(int32_t value)
{
	m_position = value;
	m_positionIsSet = true;
}

bool PostAddNewPortionRequest::positionIsSet() const
{
	return m_positionIsSet;
}

void PostAddNewPortionRequest::unsetPosition()
{
	m_positionIsSet = false;
}

PostAddNewShapeRequest::PostAddNewShapeRequest()
{
	m_shapeToCloneIsSet = false;
	m_positionIsSet = false;
}

PostAddNewShapeRequest::~PostAddNewShapeRequest()
{
}

utility::string_t PostAddNewShapeRequest::getName() const
{
	return m_name;
}

void PostAddNewShapeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostAddNewShapeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostAddNewShapeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::shared_ptr<ShapeBase> PostAddNewShapeRequest::getDto() const
{
	return m_dto;
}

void PostAddNewShapeRequest::setDto(std::shared_ptr<ShapeBase> value)
{
	m_dto = value;
}

utility::string_t PostAddNewShapeRequest::getPassword() const
{
	return m_password;
}

void PostAddNewShapeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostAddNewShapeRequest::getFolder() const
{
	return m_folder;
}

void PostAddNewShapeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostAddNewShapeRequest::getStorage() const
{
	return m_storage;
}

void PostAddNewShapeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

int32_t PostAddNewShapeRequest::getShapeToClone() const
{
	return m_shapeToClone;
}

void PostAddNewShapeRequest::setShapeToClone(int32_t value)
{
	m_shapeToClone = value;
	m_shapeToCloneIsSet = true;
}

bool PostAddNewShapeRequest::shapeToCloneIsSet() const
{
	return m_shapeToCloneIsSet;
}

void PostAddNewShapeRequest::unsetShapeToClone()
{
	m_shapeToCloneIsSet = false;
}

int32_t PostAddNewShapeRequest::getPosition() const
{
	return m_position;
}

void PostAddNewShapeRequest::setPosition(int32_t value)
{
	m_position = value;
	m_positionIsSet = true;
}

bool PostAddNewShapeRequest::positionIsSet() const
{
	return m_positionIsSet;
}

void PostAddNewShapeRequest::unsetPosition()
{
	m_positionIsSet = false;
}

PostAddNewSubshapeRequest::PostAddNewSubshapeRequest()
{
	m_shapeToCloneIsSet = false;
	m_positionIsSet = false;
}

PostAddNewSubshapeRequest::~PostAddNewSubshapeRequest()
{
}

utility::string_t PostAddNewSubshapeRequest::getName() const
{
	return m_name;
}

void PostAddNewSubshapeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostAddNewSubshapeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostAddNewSubshapeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PostAddNewSubshapeRequest::getPath() const
{
	return m_path;
}

void PostAddNewSubshapeRequest::setPath(utility::string_t value)
{
	m_path = value;
}

std::shared_ptr<ShapeBase> PostAddNewSubshapeRequest::getDto() const
{
	return m_dto;
}

void PostAddNewSubshapeRequest::setDto(std::shared_ptr<ShapeBase> value)
{
	m_dto = value;
}

utility::string_t PostAddNewSubshapeRequest::getPassword() const
{
	return m_password;
}

void PostAddNewSubshapeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostAddNewSubshapeRequest::getFolder() const
{
	return m_folder;
}

void PostAddNewSubshapeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostAddNewSubshapeRequest::getStorage() const
{
	return m_storage;
}

void PostAddNewSubshapeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

int32_t PostAddNewSubshapeRequest::getShapeToClone() const
{
	return m_shapeToClone;
}

void PostAddNewSubshapeRequest::setShapeToClone(int32_t value)
{
	m_shapeToClone = value;
	m_shapeToCloneIsSet = true;
}

bool PostAddNewSubshapeRequest::shapeToCloneIsSet() const
{
	return m_shapeToCloneIsSet;
}

void PostAddNewSubshapeRequest::unsetShapeToClone()
{
	m_shapeToCloneIsSet = false;
}

int32_t PostAddNewSubshapeRequest::getPosition() const
{
	return m_position;
}

void PostAddNewSubshapeRequest::setPosition(int32_t value)
{
	m_position = value;
	m_positionIsSet = true;
}

bool PostAddNewSubshapeRequest::positionIsSet() const
{
	return m_positionIsSet;
}

void PostAddNewSubshapeRequest::unsetPosition()
{
	m_positionIsSet = false;
}

PostAddNewSubshapeParagraphRequest::PostAddNewSubshapeParagraphRequest()
{
	m_positionIsSet = false;
}

PostAddNewSubshapeParagraphRequest::~PostAddNewSubshapeParagraphRequest()
{
}

utility::string_t PostAddNewSubshapeParagraphRequest::getName() const
{
	return m_name;
}

void PostAddNewSubshapeParagraphRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostAddNewSubshapeParagraphRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostAddNewSubshapeParagraphRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PostAddNewSubshapeParagraphRequest::getPath() const
{
	return m_path;
}

void PostAddNewSubshapeParagraphRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t PostAddNewSubshapeParagraphRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PostAddNewSubshapeParagraphRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

std::shared_ptr<Paragraph> PostAddNewSubshapeParagraphRequest::getDto() const
{
	return m_dto;
}

void PostAddNewSubshapeParagraphRequest::setDto(std::shared_ptr<Paragraph> value)
{
	m_dto = value;
}

utility::string_t PostAddNewSubshapeParagraphRequest::getPassword() const
{
	return m_password;
}

void PostAddNewSubshapeParagraphRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostAddNewSubshapeParagraphRequest::getFolder() const
{
	return m_folder;
}

void PostAddNewSubshapeParagraphRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostAddNewSubshapeParagraphRequest::getStorage() const
{
	return m_storage;
}

void PostAddNewSubshapeParagraphRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

int32_t PostAddNewSubshapeParagraphRequest::getPosition() const
{
	return m_position;
}

void PostAddNewSubshapeParagraphRequest::setPosition(int32_t value)
{
	m_position = value;
	m_positionIsSet = true;
}

bool PostAddNewSubshapeParagraphRequest::positionIsSet() const
{
	return m_positionIsSet;
}

void PostAddNewSubshapeParagraphRequest::unsetPosition()
{
	m_positionIsSet = false;
}

PostAddNewSubshapePortionRequest::PostAddNewSubshapePortionRequest()
{
	m_positionIsSet = false;
}

PostAddNewSubshapePortionRequest::~PostAddNewSubshapePortionRequest()
{
}

utility::string_t PostAddNewSubshapePortionRequest::getName() const
{
	return m_name;
}

void PostAddNewSubshapePortionRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostAddNewSubshapePortionRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostAddNewSubshapePortionRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PostAddNewSubshapePortionRequest::getPath() const
{
	return m_path;
}

void PostAddNewSubshapePortionRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t PostAddNewSubshapePortionRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PostAddNewSubshapePortionRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t PostAddNewSubshapePortionRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void PostAddNewSubshapePortionRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

std::shared_ptr<Portion> PostAddNewSubshapePortionRequest::getDto() const
{
	return m_dto;
}

void PostAddNewSubshapePortionRequest::setDto(std::shared_ptr<Portion> value)
{
	m_dto = value;
}

utility::string_t PostAddNewSubshapePortionRequest::getPassword() const
{
	return m_password;
}

void PostAddNewSubshapePortionRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostAddNewSubshapePortionRequest::getFolder() const
{
	return m_folder;
}

void PostAddNewSubshapePortionRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostAddNewSubshapePortionRequest::getStorage() const
{
	return m_storage;
}

void PostAddNewSubshapePortionRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

int32_t PostAddNewSubshapePortionRequest::getPosition() const
{
	return m_position;
}

void PostAddNewSubshapePortionRequest::setPosition(int32_t value)
{
	m_position = value;
	m_positionIsSet = true;
}

bool PostAddNewSubshapePortionRequest::positionIsSet() const
{
	return m_positionIsSet;
}

void PostAddNewSubshapePortionRequest::unsetPosition()
{
	m_positionIsSet = false;
}

PostAddNotesSlideRequest::PostAddNotesSlideRequest()
{
}

PostAddNotesSlideRequest::~PostAddNotesSlideRequest()
{
}

utility::string_t PostAddNotesSlideRequest::getName() const
{
	return m_name;
}

void PostAddNotesSlideRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostAddNotesSlideRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostAddNotesSlideRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::shared_ptr<NotesSlide> PostAddNotesSlideRequest::getDto() const
{
	return m_dto;
}

void PostAddNotesSlideRequest::setDto(std::shared_ptr<NotesSlide> value)
{
	m_dto = value;
}

utility::string_t PostAddNotesSlideRequest::getPassword() const
{
	return m_password;
}

void PostAddNotesSlideRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostAddNotesSlideRequest::getFolder() const
{
	return m_folder;
}

void PostAddNotesSlideRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostAddNotesSlideRequest::getStorage() const
{
	return m_storage;
}

void PostAddNotesSlideRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostChartCategoryRequest::PostChartCategoryRequest()
{
}

PostChartCategoryRequest::~PostChartCategoryRequest()
{
}

utility::string_t PostChartCategoryRequest::getName() const
{
	return m_name;
}

void PostChartCategoryRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostChartCategoryRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostChartCategoryRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PostChartCategoryRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PostChartCategoryRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

std::shared_ptr<ChartCategory> PostChartCategoryRequest::getCategory() const
{
	return m_category;
}

void PostChartCategoryRequest::setCategory(std::shared_ptr<ChartCategory> value)
{
	m_category = value;
}

utility::string_t PostChartCategoryRequest::getPassword() const
{
	return m_password;
}

void PostChartCategoryRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostChartCategoryRequest::getFolder() const
{
	return m_folder;
}

void PostChartCategoryRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostChartCategoryRequest::getStorage() const
{
	return m_storage;
}

void PostChartCategoryRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostChartDataPointRequest::PostChartDataPointRequest()
{
}

PostChartDataPointRequest::~PostChartDataPointRequest()
{
}

utility::string_t PostChartDataPointRequest::getName() const
{
	return m_name;
}

void PostChartDataPointRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostChartDataPointRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostChartDataPointRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PostChartDataPointRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PostChartDataPointRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t PostChartDataPointRequest::getSeriesIndex() const
{
	return m_seriesIndex;
}

void PostChartDataPointRequest::setSeriesIndex(int32_t value)
{
	m_seriesIndex = value;
}

std::shared_ptr<DataPoint> PostChartDataPointRequest::getDataPoint() const
{
	return m_dataPoint;
}

void PostChartDataPointRequest::setDataPoint(std::shared_ptr<DataPoint> value)
{
	m_dataPoint = value;
}

utility::string_t PostChartDataPointRequest::getPassword() const
{
	return m_password;
}

void PostChartDataPointRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostChartDataPointRequest::getFolder() const
{
	return m_folder;
}

void PostChartDataPointRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostChartDataPointRequest::getStorage() const
{
	return m_storage;
}

void PostChartDataPointRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostChartSeriesRequest::PostChartSeriesRequest()
{
}

PostChartSeriesRequest::~PostChartSeriesRequest()
{
}

utility::string_t PostChartSeriesRequest::getName() const
{
	return m_name;
}

void PostChartSeriesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostChartSeriesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostChartSeriesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PostChartSeriesRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PostChartSeriesRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

std::shared_ptr<Series> PostChartSeriesRequest::getSeries() const
{
	return m_series;
}

void PostChartSeriesRequest::setSeries(std::shared_ptr<Series> value)
{
	m_series = value;
}

utility::string_t PostChartSeriesRequest::getPassword() const
{
	return m_password;
}

void PostChartSeriesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostChartSeriesRequest::getFolder() const
{
	return m_folder;
}

void PostChartSeriesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostChartSeriesRequest::getStorage() const
{
	return m_storage;
}

void PostChartSeriesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostCopyLayoutSlideFromSourcePresentationRequest::PostCopyLayoutSlideFromSourcePresentationRequest()
{
}

PostCopyLayoutSlideFromSourcePresentationRequest::~PostCopyLayoutSlideFromSourcePresentationRequest()
{
}

utility::string_t PostCopyLayoutSlideFromSourcePresentationRequest::getName() const
{
	return m_name;
}

void PostCopyLayoutSlideFromSourcePresentationRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t PostCopyLayoutSlideFromSourcePresentationRequest::getCloneFrom() const
{
	return m_cloneFrom;
}

void PostCopyLayoutSlideFromSourcePresentationRequest::setCloneFrom(utility::string_t value)
{
	m_cloneFrom = value;
}

int32_t PostCopyLayoutSlideFromSourcePresentationRequest::getCloneFromPosition() const
{
	return m_cloneFromPosition;
}

void PostCopyLayoutSlideFromSourcePresentationRequest::setCloneFromPosition(int32_t value)
{
	m_cloneFromPosition = value;
}

utility::string_t PostCopyLayoutSlideFromSourcePresentationRequest::getCloneFromPassword() const
{
	return m_cloneFromPassword;
}

void PostCopyLayoutSlideFromSourcePresentationRequest::setCloneFromPassword(utility::string_t value)
{
	m_cloneFromPassword = value;
}

utility::string_t PostCopyLayoutSlideFromSourcePresentationRequest::getCloneFromStorage() const
{
	return m_cloneFromStorage;
}

void PostCopyLayoutSlideFromSourcePresentationRequest::setCloneFromStorage(utility::string_t value)
{
	m_cloneFromStorage = value;
}

utility::string_t PostCopyLayoutSlideFromSourcePresentationRequest::getPassword() const
{
	return m_password;
}

void PostCopyLayoutSlideFromSourcePresentationRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostCopyLayoutSlideFromSourcePresentationRequest::getFolder() const
{
	return m_folder;
}

void PostCopyLayoutSlideFromSourcePresentationRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostCopyLayoutSlideFromSourcePresentationRequest::getStorage() const
{
	return m_storage;
}

void PostCopyLayoutSlideFromSourcePresentationRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostCopyMasterSlideFromSourcePresentationRequest::PostCopyMasterSlideFromSourcePresentationRequest()
{
	m_applyToAllIsSet = false;
}

PostCopyMasterSlideFromSourcePresentationRequest::~PostCopyMasterSlideFromSourcePresentationRequest()
{
}

utility::string_t PostCopyMasterSlideFromSourcePresentationRequest::getName() const
{
	return m_name;
}

void PostCopyMasterSlideFromSourcePresentationRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t PostCopyMasterSlideFromSourcePresentationRequest::getCloneFrom() const
{
	return m_cloneFrom;
}

void PostCopyMasterSlideFromSourcePresentationRequest::setCloneFrom(utility::string_t value)
{
	m_cloneFrom = value;
}

int32_t PostCopyMasterSlideFromSourcePresentationRequest::getCloneFromPosition() const
{
	return m_cloneFromPosition;
}

void PostCopyMasterSlideFromSourcePresentationRequest::setCloneFromPosition(int32_t value)
{
	m_cloneFromPosition = value;
}

utility::string_t PostCopyMasterSlideFromSourcePresentationRequest::getCloneFromPassword() const
{
	return m_cloneFromPassword;
}

void PostCopyMasterSlideFromSourcePresentationRequest::setCloneFromPassword(utility::string_t value)
{
	m_cloneFromPassword = value;
}

utility::string_t PostCopyMasterSlideFromSourcePresentationRequest::getCloneFromStorage() const
{
	return m_cloneFromStorage;
}

void PostCopyMasterSlideFromSourcePresentationRequest::setCloneFromStorage(utility::string_t value)
{
	m_cloneFromStorage = value;
}

bool PostCopyMasterSlideFromSourcePresentationRequest::getApplyToAll() const
{
	return m_applyToAll;
}

void PostCopyMasterSlideFromSourcePresentationRequest::setApplyToAll(bool value)
{
	m_applyToAll = value;
	m_applyToAllIsSet = true;
}

bool PostCopyMasterSlideFromSourcePresentationRequest::applyToAllIsSet() const
{
	return m_applyToAllIsSet;
}

void PostCopyMasterSlideFromSourcePresentationRequest::unsetApplyToAll()
{
	m_applyToAllIsSet = false;
}

utility::string_t PostCopyMasterSlideFromSourcePresentationRequest::getPassword() const
{
	return m_password;
}

void PostCopyMasterSlideFromSourcePresentationRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostCopyMasterSlideFromSourcePresentationRequest::getFolder() const
{
	return m_folder;
}

void PostCopyMasterSlideFromSourcePresentationRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostCopyMasterSlideFromSourcePresentationRequest::getStorage() const
{
	return m_storage;
}

void PostCopyMasterSlideFromSourcePresentationRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostGetNotesSlideRequest::PostGetNotesSlideRequest()
{
}

PostGetNotesSlideRequest::~PostGetNotesSlideRequest()
{
}

std::shared_ptr<HttpContent> PostGetNotesSlideRequest::getDocument() const
{
	return m_document;
}

void PostGetNotesSlideRequest::setDocument(std::shared_ptr<HttpContent> value)
{
	m_document = value;
}

int32_t PostGetNotesSlideRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostGetNotesSlideRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PostGetNotesSlideRequest::getPassword() const
{
	return m_password;
}

void PostGetNotesSlideRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

PostGetNotesSlideExistsRequest::PostGetNotesSlideExistsRequest()
{
}

PostGetNotesSlideExistsRequest::~PostGetNotesSlideExistsRequest()
{
}

std::shared_ptr<HttpContent> PostGetNotesSlideExistsRequest::getDocument() const
{
	return m_document;
}

void PostGetNotesSlideExistsRequest::setDocument(std::shared_ptr<HttpContent> value)
{
	m_document = value;
}

int32_t PostGetNotesSlideExistsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostGetNotesSlideExistsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PostGetNotesSlideExistsRequest::getPassword() const
{
	return m_password;
}

void PostGetNotesSlideExistsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

PostGetNotesSlideWithFormatRequest::PostGetNotesSlideWithFormatRequest()
{
	m_widthIsSet = false;
	m_heightIsSet = false;
}

PostGetNotesSlideWithFormatRequest::~PostGetNotesSlideWithFormatRequest()
{
}

std::shared_ptr<HttpContent> PostGetNotesSlideWithFormatRequest::getDocument() const
{
	return m_document;
}

void PostGetNotesSlideWithFormatRequest::setDocument(std::shared_ptr<HttpContent> value)
{
	m_document = value;
}

int32_t PostGetNotesSlideWithFormatRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostGetNotesSlideWithFormatRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PostGetNotesSlideWithFormatRequest::getFormat() const
{
	return m_format;
}

void PostGetNotesSlideWithFormatRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

int32_t PostGetNotesSlideWithFormatRequest::getWidth() const
{
	return m_width;
}

void PostGetNotesSlideWithFormatRequest::setWidth(int32_t value)
{
	m_width = value;
	m_widthIsSet = true;
}

bool PostGetNotesSlideWithFormatRequest::widthIsSet() const
{
	return m_widthIsSet;
}

void PostGetNotesSlideWithFormatRequest::unsetWidth()
{
	m_widthIsSet = false;
}

int32_t PostGetNotesSlideWithFormatRequest::getHeight() const
{
	return m_height;
}

void PostGetNotesSlideWithFormatRequest::setHeight(int32_t value)
{
	m_height = value;
	m_heightIsSet = true;
}

bool PostGetNotesSlideWithFormatRequest::heightIsSet() const
{
	return m_heightIsSet;
}

void PostGetNotesSlideWithFormatRequest::unsetHeight()
{
	m_heightIsSet = false;
}

utility::string_t PostGetNotesSlideWithFormatRequest::getPassword() const
{
	return m_password;
}

void PostGetNotesSlideWithFormatRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostGetNotesSlideWithFormatRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PostGetNotesSlideWithFormatRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PostNotesSlideAddNewParagraphRequest::PostNotesSlideAddNewParagraphRequest()
{
	m_positionIsSet = false;
}

PostNotesSlideAddNewParagraphRequest::~PostNotesSlideAddNewParagraphRequest()
{
}

utility::string_t PostNotesSlideAddNewParagraphRequest::getName() const
{
	return m_name;
}

void PostNotesSlideAddNewParagraphRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostNotesSlideAddNewParagraphRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostNotesSlideAddNewParagraphRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PostNotesSlideAddNewParagraphRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PostNotesSlideAddNewParagraphRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

std::shared_ptr<Paragraph> PostNotesSlideAddNewParagraphRequest::getDto() const
{
	return m_dto;
}

void PostNotesSlideAddNewParagraphRequest::setDto(std::shared_ptr<Paragraph> value)
{
	m_dto = value;
}

utility::string_t PostNotesSlideAddNewParagraphRequest::getPassword() const
{
	return m_password;
}

void PostNotesSlideAddNewParagraphRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostNotesSlideAddNewParagraphRequest::getFolder() const
{
	return m_folder;
}

void PostNotesSlideAddNewParagraphRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostNotesSlideAddNewParagraphRequest::getStorage() const
{
	return m_storage;
}

void PostNotesSlideAddNewParagraphRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

int32_t PostNotesSlideAddNewParagraphRequest::getPosition() const
{
	return m_position;
}

void PostNotesSlideAddNewParagraphRequest::setPosition(int32_t value)
{
	m_position = value;
	m_positionIsSet = true;
}

bool PostNotesSlideAddNewParagraphRequest::positionIsSet() const
{
	return m_positionIsSet;
}

void PostNotesSlideAddNewParagraphRequest::unsetPosition()
{
	m_positionIsSet = false;
}

PostNotesSlideAddNewPortionRequest::PostNotesSlideAddNewPortionRequest()
{
	m_positionIsSet = false;
}

PostNotesSlideAddNewPortionRequest::~PostNotesSlideAddNewPortionRequest()
{
}

utility::string_t PostNotesSlideAddNewPortionRequest::getName() const
{
	return m_name;
}

void PostNotesSlideAddNewPortionRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostNotesSlideAddNewPortionRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostNotesSlideAddNewPortionRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PostNotesSlideAddNewPortionRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PostNotesSlideAddNewPortionRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t PostNotesSlideAddNewPortionRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void PostNotesSlideAddNewPortionRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

std::shared_ptr<Portion> PostNotesSlideAddNewPortionRequest::getDto() const
{
	return m_dto;
}

void PostNotesSlideAddNewPortionRequest::setDto(std::shared_ptr<Portion> value)
{
	m_dto = value;
}

utility::string_t PostNotesSlideAddNewPortionRequest::getPassword() const
{
	return m_password;
}

void PostNotesSlideAddNewPortionRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostNotesSlideAddNewPortionRequest::getFolder() const
{
	return m_folder;
}

void PostNotesSlideAddNewPortionRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostNotesSlideAddNewPortionRequest::getStorage() const
{
	return m_storage;
}

void PostNotesSlideAddNewPortionRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

int32_t PostNotesSlideAddNewPortionRequest::getPosition() const
{
	return m_position;
}

void PostNotesSlideAddNewPortionRequest::setPosition(int32_t value)
{
	m_position = value;
	m_positionIsSet = true;
}

bool PostNotesSlideAddNewPortionRequest::positionIsSet() const
{
	return m_positionIsSet;
}

void PostNotesSlideAddNewPortionRequest::unsetPosition()
{
	m_positionIsSet = false;
}

PostNotesSlideAddNewShapeRequest::PostNotesSlideAddNewShapeRequest()
{
	m_shapeToCloneIsSet = false;
	m_positionIsSet = false;
}

PostNotesSlideAddNewShapeRequest::~PostNotesSlideAddNewShapeRequest()
{
}

utility::string_t PostNotesSlideAddNewShapeRequest::getName() const
{
	return m_name;
}

void PostNotesSlideAddNewShapeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostNotesSlideAddNewShapeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostNotesSlideAddNewShapeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::shared_ptr<ShapeBase> PostNotesSlideAddNewShapeRequest::getDto() const
{
	return m_dto;
}

void PostNotesSlideAddNewShapeRequest::setDto(std::shared_ptr<ShapeBase> value)
{
	m_dto = value;
}

utility::string_t PostNotesSlideAddNewShapeRequest::getPassword() const
{
	return m_password;
}

void PostNotesSlideAddNewShapeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostNotesSlideAddNewShapeRequest::getFolder() const
{
	return m_folder;
}

void PostNotesSlideAddNewShapeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostNotesSlideAddNewShapeRequest::getStorage() const
{
	return m_storage;
}

void PostNotesSlideAddNewShapeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

int32_t PostNotesSlideAddNewShapeRequest::getShapeToClone() const
{
	return m_shapeToClone;
}

void PostNotesSlideAddNewShapeRequest::setShapeToClone(int32_t value)
{
	m_shapeToClone = value;
	m_shapeToCloneIsSet = true;
}

bool PostNotesSlideAddNewShapeRequest::shapeToCloneIsSet() const
{
	return m_shapeToCloneIsSet;
}

void PostNotesSlideAddNewShapeRequest::unsetShapeToClone()
{
	m_shapeToCloneIsSet = false;
}

int32_t PostNotesSlideAddNewShapeRequest::getPosition() const
{
	return m_position;
}

void PostNotesSlideAddNewShapeRequest::setPosition(int32_t value)
{
	m_position = value;
	m_positionIsSet = true;
}

bool PostNotesSlideAddNewShapeRequest::positionIsSet() const
{
	return m_positionIsSet;
}

void PostNotesSlideAddNewShapeRequest::unsetPosition()
{
	m_positionIsSet = false;
}

PostNotesSlideShapeSaveAsRequest::PostNotesSlideShapeSaveAsRequest()
{
	m_scaleXIsSet = false;
	m_scaleYIsSet = false;
}

PostNotesSlideShapeSaveAsRequest::~PostNotesSlideShapeSaveAsRequest()
{
}

utility::string_t PostNotesSlideShapeSaveAsRequest::getName() const
{
	return m_name;
}

void PostNotesSlideShapeSaveAsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostNotesSlideShapeSaveAsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostNotesSlideShapeSaveAsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PostNotesSlideShapeSaveAsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PostNotesSlideShapeSaveAsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t PostNotesSlideShapeSaveAsRequest::getFormat() const
{
	return m_format;
}

void PostNotesSlideShapeSaveAsRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

std::shared_ptr<IShapeExportOptions> PostNotesSlideShapeSaveAsRequest::getOptions() const
{
	return m_options;
}

void PostNotesSlideShapeSaveAsRequest::setOptions(std::shared_ptr<IShapeExportOptions> value)
{
	m_options = value;
}

utility::string_t PostNotesSlideShapeSaveAsRequest::getPassword() const
{
	return m_password;
}

void PostNotesSlideShapeSaveAsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostNotesSlideShapeSaveAsRequest::getFolder() const
{
	return m_folder;
}

void PostNotesSlideShapeSaveAsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostNotesSlideShapeSaveAsRequest::getStorage() const
{
	return m_storage;
}

void PostNotesSlideShapeSaveAsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

double PostNotesSlideShapeSaveAsRequest::getScaleX() const
{
	return m_scaleX;
}

void PostNotesSlideShapeSaveAsRequest::setScaleX(double value)
{
	m_scaleX = value;
	m_scaleXIsSet = true;
}

bool PostNotesSlideShapeSaveAsRequest::scaleXIsSet() const
{
	return m_scaleXIsSet;
}

void PostNotesSlideShapeSaveAsRequest::unsetScaleX()
{
	m_scaleXIsSet = false;
}

double PostNotesSlideShapeSaveAsRequest::getScaleY() const
{
	return m_scaleY;
}

void PostNotesSlideShapeSaveAsRequest::setScaleY(double value)
{
	m_scaleY = value;
	m_scaleYIsSet = true;
}

bool PostNotesSlideShapeSaveAsRequest::scaleYIsSet() const
{
	return m_scaleYIsSet;
}

void PostNotesSlideShapeSaveAsRequest::unsetScaleY()
{
	m_scaleYIsSet = false;
}

utility::string_t PostNotesSlideShapeSaveAsRequest::getBounds() const
{
	return m_bounds;
}

void PostNotesSlideShapeSaveAsRequest::setBounds(utility::string_t value)
{
	m_bounds = value;
}

utility::string_t PostNotesSlideShapeSaveAsRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PostNotesSlideShapeSaveAsRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PostPresentationMergeRequest::PostPresentationMergeRequest()
{
}

PostPresentationMergeRequest::~PostPresentationMergeRequest()
{
}

utility::string_t PostPresentationMergeRequest::getName() const
{
	return m_name;
}

void PostPresentationMergeRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::shared_ptr<PresentationsMergeRequest> PostPresentationMergeRequest::getRequest() const
{
	return m_request;
}

void PostPresentationMergeRequest::setRequest(std::shared_ptr<PresentationsMergeRequest> value)
{
	m_request = value;
}

utility::string_t PostPresentationMergeRequest::getPassword() const
{
	return m_password;
}

void PostPresentationMergeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostPresentationMergeRequest::getStorage() const
{
	return m_storage;
}

void PostPresentationMergeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PostPresentationMergeRequest::getFolder() const
{
	return m_folder;
}

void PostPresentationMergeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

PostSectionRequest::PostSectionRequest()
{
}

PostSectionRequest::~PostSectionRequest()
{
}

utility::string_t PostSectionRequest::getName() const
{
	return m_name;
}

void PostSectionRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t PostSectionRequest::getSectionName() const
{
	return m_sectionName;
}

void PostSectionRequest::setSectionName(utility::string_t value)
{
	m_sectionName = value;
}

int32_t PostSectionRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostSectionRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PostSectionRequest::getPassword() const
{
	return m_password;
}

void PostSectionRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSectionRequest::getFolder() const
{
	return m_folder;
}

void PostSectionRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSectionRequest::getStorage() const
{
	return m_storage;
}

void PostSectionRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostSectionMoveRequest::PostSectionMoveRequest()
{
}

PostSectionMoveRequest::~PostSectionMoveRequest()
{
}

utility::string_t PostSectionMoveRequest::getName() const
{
	return m_name;
}

void PostSectionMoveRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostSectionMoveRequest::getSectionIndex() const
{
	return m_sectionIndex;
}

void PostSectionMoveRequest::setSectionIndex(int32_t value)
{
	m_sectionIndex = value;
}

int32_t PostSectionMoveRequest::getNewPosition() const
{
	return m_newPosition;
}

void PostSectionMoveRequest::setNewPosition(int32_t value)
{
	m_newPosition = value;
}

utility::string_t PostSectionMoveRequest::getPassword() const
{
	return m_password;
}

void PostSectionMoveRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSectionMoveRequest::getFolder() const
{
	return m_folder;
}

void PostSectionMoveRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSectionMoveRequest::getStorage() const
{
	return m_storage;
}

void PostSectionMoveRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostShapeSaveAsRequest::PostShapeSaveAsRequest()
{
	m_scaleXIsSet = false;
	m_scaleYIsSet = false;
}

PostShapeSaveAsRequest::~PostShapeSaveAsRequest()
{
}

utility::string_t PostShapeSaveAsRequest::getName() const
{
	return m_name;
}

void PostShapeSaveAsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostShapeSaveAsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostShapeSaveAsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PostShapeSaveAsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PostShapeSaveAsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t PostShapeSaveAsRequest::getFormat() const
{
	return m_format;
}

void PostShapeSaveAsRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

std::shared_ptr<IShapeExportOptions> PostShapeSaveAsRequest::getOptions() const
{
	return m_options;
}

void PostShapeSaveAsRequest::setOptions(std::shared_ptr<IShapeExportOptions> value)
{
	m_options = value;
}

utility::string_t PostShapeSaveAsRequest::getPassword() const
{
	return m_password;
}

void PostShapeSaveAsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostShapeSaveAsRequest::getFolder() const
{
	return m_folder;
}

void PostShapeSaveAsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostShapeSaveAsRequest::getStorage() const
{
	return m_storage;
}

void PostShapeSaveAsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

double PostShapeSaveAsRequest::getScaleX() const
{
	return m_scaleX;
}

void PostShapeSaveAsRequest::setScaleX(double value)
{
	m_scaleX = value;
	m_scaleXIsSet = true;
}

bool PostShapeSaveAsRequest::scaleXIsSet() const
{
	return m_scaleXIsSet;
}

void PostShapeSaveAsRequest::unsetScaleX()
{
	m_scaleXIsSet = false;
}

double PostShapeSaveAsRequest::getScaleY() const
{
	return m_scaleY;
}

void PostShapeSaveAsRequest::setScaleY(double value)
{
	m_scaleY = value;
	m_scaleYIsSet = true;
}

bool PostShapeSaveAsRequest::scaleYIsSet() const
{
	return m_scaleYIsSet;
}

void PostShapeSaveAsRequest::unsetScaleY()
{
	m_scaleYIsSet = false;
}

utility::string_t PostShapeSaveAsRequest::getBounds() const
{
	return m_bounds;
}

void PostShapeSaveAsRequest::setBounds(utility::string_t value)
{
	m_bounds = value;
}

utility::string_t PostShapeSaveAsRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PostShapeSaveAsRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PostSlideAnimationEffectRequest::PostSlideAnimationEffectRequest()
{
}

PostSlideAnimationEffectRequest::~PostSlideAnimationEffectRequest()
{
}

utility::string_t PostSlideAnimationEffectRequest::getName() const
{
	return m_name;
}

void PostSlideAnimationEffectRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostSlideAnimationEffectRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostSlideAnimationEffectRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::shared_ptr<Effect> PostSlideAnimationEffectRequest::getEffect() const
{
	return m_effect;
}

void PostSlideAnimationEffectRequest::setEffect(std::shared_ptr<Effect> value)
{
	m_effect = value;
}

utility::string_t PostSlideAnimationEffectRequest::getPassword() const
{
	return m_password;
}

void PostSlideAnimationEffectRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlideAnimationEffectRequest::getFolder() const
{
	return m_folder;
}

void PostSlideAnimationEffectRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSlideAnimationEffectRequest::getStorage() const
{
	return m_storage;
}

void PostSlideAnimationEffectRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostSlideAnimationInteractiveSequenceRequest::PostSlideAnimationInteractiveSequenceRequest()
{
}

PostSlideAnimationInteractiveSequenceRequest::~PostSlideAnimationInteractiveSequenceRequest()
{
}

utility::string_t PostSlideAnimationInteractiveSequenceRequest::getName() const
{
	return m_name;
}

void PostSlideAnimationInteractiveSequenceRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostSlideAnimationInteractiveSequenceRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostSlideAnimationInteractiveSequenceRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::shared_ptr<InteractiveSequence> PostSlideAnimationInteractiveSequenceRequest::getSequence() const
{
	return m_sequence;
}

void PostSlideAnimationInteractiveSequenceRequest::setSequence(std::shared_ptr<InteractiveSequence> value)
{
	m_sequence = value;
}

utility::string_t PostSlideAnimationInteractiveSequenceRequest::getPassword() const
{
	return m_password;
}

void PostSlideAnimationInteractiveSequenceRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlideAnimationInteractiveSequenceRequest::getFolder() const
{
	return m_folder;
}

void PostSlideAnimationInteractiveSequenceRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSlideAnimationInteractiveSequenceRequest::getStorage() const
{
	return m_storage;
}

void PostSlideAnimationInteractiveSequenceRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostSlideAnimationInteractiveSequenceEffectRequest::PostSlideAnimationInteractiveSequenceEffectRequest()
{
}

PostSlideAnimationInteractiveSequenceEffectRequest::~PostSlideAnimationInteractiveSequenceEffectRequest()
{
}

utility::string_t PostSlideAnimationInteractiveSequenceEffectRequest::getName() const
{
	return m_name;
}

void PostSlideAnimationInteractiveSequenceEffectRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostSlideAnimationInteractiveSequenceEffectRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostSlideAnimationInteractiveSequenceEffectRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PostSlideAnimationInteractiveSequenceEffectRequest::getSequenceIndex() const
{
	return m_sequenceIndex;
}

void PostSlideAnimationInteractiveSequenceEffectRequest::setSequenceIndex(int32_t value)
{
	m_sequenceIndex = value;
}

std::shared_ptr<Effect> PostSlideAnimationInteractiveSequenceEffectRequest::getEffect() const
{
	return m_effect;
}

void PostSlideAnimationInteractiveSequenceEffectRequest::setEffect(std::shared_ptr<Effect> value)
{
	m_effect = value;
}

utility::string_t PostSlideAnimationInteractiveSequenceEffectRequest::getPassword() const
{
	return m_password;
}

void PostSlideAnimationInteractiveSequenceEffectRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlideAnimationInteractiveSequenceEffectRequest::getFolder() const
{
	return m_folder;
}

void PostSlideAnimationInteractiveSequenceEffectRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSlideAnimationInteractiveSequenceEffectRequest::getStorage() const
{
	return m_storage;
}

void PostSlideAnimationInteractiveSequenceEffectRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostSlideSaveAsRequest::PostSlideSaveAsRequest()
{
	m_widthIsSet = false;
	m_heightIsSet = false;
}

PostSlideSaveAsRequest::~PostSlideSaveAsRequest()
{
}

utility::string_t PostSlideSaveAsRequest::getName() const
{
	return m_name;
}

void PostSlideSaveAsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostSlideSaveAsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostSlideSaveAsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PostSlideSaveAsRequest::getFormat() const
{
	return m_format;
}

void PostSlideSaveAsRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

std::shared_ptr<ExportOptions> PostSlideSaveAsRequest::getOptions() const
{
	return m_options;
}

void PostSlideSaveAsRequest::setOptions(std::shared_ptr<ExportOptions> value)
{
	m_options = value;
}

int32_t PostSlideSaveAsRequest::getWidth() const
{
	return m_width;
}

void PostSlideSaveAsRequest::setWidth(int32_t value)
{
	m_width = value;
	m_widthIsSet = true;
}

bool PostSlideSaveAsRequest::widthIsSet() const
{
	return m_widthIsSet;
}

void PostSlideSaveAsRequest::unsetWidth()
{
	m_widthIsSet = false;
}

int32_t PostSlideSaveAsRequest::getHeight() const
{
	return m_height;
}

void PostSlideSaveAsRequest::setHeight(int32_t value)
{
	m_height = value;
	m_heightIsSet = true;
}

bool PostSlideSaveAsRequest::heightIsSet() const
{
	return m_heightIsSet;
}

void PostSlideSaveAsRequest::unsetHeight()
{
	m_heightIsSet = false;
}

utility::string_t PostSlideSaveAsRequest::getPassword() const
{
	return m_password;
}

void PostSlideSaveAsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlideSaveAsRequest::getFolder() const
{
	return m_folder;
}

void PostSlideSaveAsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSlideSaveAsRequest::getStorage() const
{
	return m_storage;
}

void PostSlideSaveAsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PostSlideSaveAsRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PostSlideSaveAsRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PostSlidesAddRequest::PostSlidesAddRequest()
{
	m_positionIsSet = false;
}

PostSlidesAddRequest::~PostSlidesAddRequest()
{
}

utility::string_t PostSlidesAddRequest::getName() const
{
	return m_name;
}

void PostSlidesAddRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostSlidesAddRequest::getPosition() const
{
	return m_position;
}

void PostSlidesAddRequest::setPosition(int32_t value)
{
	m_position = value;
	m_positionIsSet = true;
}

bool PostSlidesAddRequest::positionIsSet() const
{
	return m_positionIsSet;
}

void PostSlidesAddRequest::unsetPosition()
{
	m_positionIsSet = false;
}

utility::string_t PostSlidesAddRequest::getPassword() const
{
	return m_password;
}

void PostSlidesAddRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesAddRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesAddRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSlidesAddRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesAddRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PostSlidesAddRequest::getLayoutAlias() const
{
	return m_layoutAlias;
}

void PostSlidesAddRequest::setLayoutAlias(utility::string_t value)
{
	m_layoutAlias = value;
}

PostSlidesConvertRequest::PostSlidesConvertRequest()
{
}

PostSlidesConvertRequest::~PostSlidesConvertRequest()
{
}

std::shared_ptr<HttpContent> PostSlidesConvertRequest::getDocument() const
{
	return m_document;
}

void PostSlidesConvertRequest::setDocument(std::shared_ptr<HttpContent> value)
{
	m_document = value;
}

utility::string_t PostSlidesConvertRequest::getFormat() const
{
	return m_format;
}

void PostSlidesConvertRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

utility::string_t PostSlidesConvertRequest::getPassword() const
{
	return m_password;
}

void PostSlidesConvertRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesConvertRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PostSlidesConvertRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PostSlidesCopyRequest::PostSlidesCopyRequest()
{
	m_positionIsSet = false;
}

PostSlidesCopyRequest::~PostSlidesCopyRequest()
{
}

utility::string_t PostSlidesCopyRequest::getName() const
{
	return m_name;
}

void PostSlidesCopyRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostSlidesCopyRequest::getSlideToCopy() const
{
	return m_slideToCopy;
}

void PostSlidesCopyRequest::setSlideToCopy(int32_t value)
{
	m_slideToCopy = value;
}

int32_t PostSlidesCopyRequest::getPosition() const
{
	return m_position;
}

void PostSlidesCopyRequest::setPosition(int32_t value)
{
	m_position = value;
	m_positionIsSet = true;
}

bool PostSlidesCopyRequest::positionIsSet() const
{
	return m_positionIsSet;
}

void PostSlidesCopyRequest::unsetPosition()
{
	m_positionIsSet = false;
}

utility::string_t PostSlidesCopyRequest::getSource() const
{
	return m_source;
}

void PostSlidesCopyRequest::setSource(utility::string_t value)
{
	m_source = value;
}

utility::string_t PostSlidesCopyRequest::getSourcePassword() const
{
	return m_sourcePassword;
}

void PostSlidesCopyRequest::setSourcePassword(utility::string_t value)
{
	m_sourcePassword = value;
}

utility::string_t PostSlidesCopyRequest::getSourceStorage() const
{
	return m_sourceStorage;
}

void PostSlidesCopyRequest::setSourceStorage(utility::string_t value)
{
	m_sourceStorage = value;
}

utility::string_t PostSlidesCopyRequest::getPassword() const
{
	return m_password;
}

void PostSlidesCopyRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesCopyRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesCopyRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSlidesCopyRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesCopyRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostSlidesDocumentRequest::PostSlidesDocumentRequest()
{
}

PostSlidesDocumentRequest::~PostSlidesDocumentRequest()
{
}

utility::string_t PostSlidesDocumentRequest::getName() const
{
	return m_name;
}

void PostSlidesDocumentRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::shared_ptr<HttpContent> PostSlidesDocumentRequest::getData() const
{
	return m_data;
}

void PostSlidesDocumentRequest::setData(std::shared_ptr<HttpContent> value)
{
	m_data = value;
}

utility::string_t PostSlidesDocumentRequest::getInputPassword() const
{
	return m_inputPassword;
}

void PostSlidesDocumentRequest::setInputPassword(utility::string_t value)
{
	m_inputPassword = value;
}

utility::string_t PostSlidesDocumentRequest::getPassword() const
{
	return m_password;
}

void PostSlidesDocumentRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesDocumentRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesDocumentRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PostSlidesDocumentRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesDocumentRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

PostSlidesDocumentFromHtmlRequest::PostSlidesDocumentFromHtmlRequest()
{
}

PostSlidesDocumentFromHtmlRequest::~PostSlidesDocumentFromHtmlRequest()
{
}

utility::string_t PostSlidesDocumentFromHtmlRequest::getName() const
{
	return m_name;
}

void PostSlidesDocumentFromHtmlRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t PostSlidesDocumentFromHtmlRequest::getHtml() const
{
	return m_html;
}

void PostSlidesDocumentFromHtmlRequest::setHtml(utility::string_t value)
{
	m_html = value;
}

utility::string_t PostSlidesDocumentFromHtmlRequest::getPassword() const
{
	return m_password;
}

void PostSlidesDocumentFromHtmlRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesDocumentFromHtmlRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesDocumentFromHtmlRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PostSlidesDocumentFromHtmlRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesDocumentFromHtmlRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

PostSlidesDocumentFromPdfRequest::PostSlidesDocumentFromPdfRequest()
{
}

PostSlidesDocumentFromPdfRequest::~PostSlidesDocumentFromPdfRequest()
{
}

utility::string_t PostSlidesDocumentFromPdfRequest::getName() const
{
	return m_name;
}

void PostSlidesDocumentFromPdfRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::shared_ptr<HttpContent> PostSlidesDocumentFromPdfRequest::getPdf() const
{
	return m_pdf;
}

void PostSlidesDocumentFromPdfRequest::setPdf(std::shared_ptr<HttpContent> value)
{
	m_pdf = value;
}

utility::string_t PostSlidesDocumentFromPdfRequest::getPassword() const
{
	return m_password;
}

void PostSlidesDocumentFromPdfRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesDocumentFromPdfRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesDocumentFromPdfRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PostSlidesDocumentFromPdfRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesDocumentFromPdfRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

PostSlidesDocumentFromSourceRequest::PostSlidesDocumentFromSourceRequest()
{
}

PostSlidesDocumentFromSourceRequest::~PostSlidesDocumentFromSourceRequest()
{
}

utility::string_t PostSlidesDocumentFromSourceRequest::getName() const
{
	return m_name;
}

void PostSlidesDocumentFromSourceRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t PostSlidesDocumentFromSourceRequest::getSourcePath() const
{
	return m_sourcePath;
}

void PostSlidesDocumentFromSourceRequest::setSourcePath(utility::string_t value)
{
	m_sourcePath = value;
}

utility::string_t PostSlidesDocumentFromSourceRequest::getSourcePassword() const
{
	return m_sourcePassword;
}

void PostSlidesDocumentFromSourceRequest::setSourcePassword(utility::string_t value)
{
	m_sourcePassword = value;
}

utility::string_t PostSlidesDocumentFromSourceRequest::getSourceStorage() const
{
	return m_sourceStorage;
}

void PostSlidesDocumentFromSourceRequest::setSourceStorage(utility::string_t value)
{
	m_sourceStorage = value;
}

utility::string_t PostSlidesDocumentFromSourceRequest::getPassword() const
{
	return m_password;
}

void PostSlidesDocumentFromSourceRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesDocumentFromSourceRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesDocumentFromSourceRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PostSlidesDocumentFromSourceRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesDocumentFromSourceRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

PostSlidesDocumentFromTemplateRequest::PostSlidesDocumentFromTemplateRequest()
{
	m_isImageDataEmbeddedIsSet = false;
}

PostSlidesDocumentFromTemplateRequest::~PostSlidesDocumentFromTemplateRequest()
{
}

utility::string_t PostSlidesDocumentFromTemplateRequest::getName() const
{
	return m_name;
}

void PostSlidesDocumentFromTemplateRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t PostSlidesDocumentFromTemplateRequest::getTemplatePath() const
{
	return m_templatePath;
}

void PostSlidesDocumentFromTemplateRequest::setTemplatePath(utility::string_t value)
{
	m_templatePath = value;
}

utility::string_t PostSlidesDocumentFromTemplateRequest::getData() const
{
	return m_data;
}

void PostSlidesDocumentFromTemplateRequest::setData(utility::string_t value)
{
	m_data = value;
}

utility::string_t PostSlidesDocumentFromTemplateRequest::getTemplatePassword() const
{
	return m_templatePassword;
}

void PostSlidesDocumentFromTemplateRequest::setTemplatePassword(utility::string_t value)
{
	m_templatePassword = value;
}

utility::string_t PostSlidesDocumentFromTemplateRequest::getTemplateStorage() const
{
	return m_templateStorage;
}

void PostSlidesDocumentFromTemplateRequest::setTemplateStorage(utility::string_t value)
{
	m_templateStorage = value;
}

bool PostSlidesDocumentFromTemplateRequest::getIsImageDataEmbedded() const
{
	return m_isImageDataEmbedded;
}

void PostSlidesDocumentFromTemplateRequest::setIsImageDataEmbedded(bool value)
{
	m_isImageDataEmbedded = value;
	m_isImageDataEmbeddedIsSet = true;
}

bool PostSlidesDocumentFromTemplateRequest::isImageDataEmbeddedIsSet() const
{
	return m_isImageDataEmbeddedIsSet;
}

void PostSlidesDocumentFromTemplateRequest::unsetIsImageDataEmbedded()
{
	m_isImageDataEmbeddedIsSet = false;
}

utility::string_t PostSlidesDocumentFromTemplateRequest::getPassword() const
{
	return m_password;
}

void PostSlidesDocumentFromTemplateRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesDocumentFromTemplateRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesDocumentFromTemplateRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PostSlidesDocumentFromTemplateRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesDocumentFromTemplateRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

PostSlidesPipelineRequest::PostSlidesPipelineRequest()
{
}

PostSlidesPipelineRequest::~PostSlidesPipelineRequest()
{
}

std::shared_ptr<Pipeline> PostSlidesPipelineRequest::getPipeline() const
{
	return m_pipeline;
}

void PostSlidesPipelineRequest::setPipeline(std::shared_ptr<Pipeline> value)
{
	m_pipeline = value;
}

std::vector<utility::string_t> PostSlidesPipelineRequest::getFiles() const
{
	return m_files;
}

void PostSlidesPipelineRequest::setFiles(std::vector<utility::string_t> value)
{
	m_files = value;
}

PostSlidesPresentationReplaceTextRequest::PostSlidesPresentationReplaceTextRequest()
{
	m_ignoreCaseIsSet = false;
}

PostSlidesPresentationReplaceTextRequest::~PostSlidesPresentationReplaceTextRequest()
{
}

utility::string_t PostSlidesPresentationReplaceTextRequest::getName() const
{
	return m_name;
}

void PostSlidesPresentationReplaceTextRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t PostSlidesPresentationReplaceTextRequest::getOldValue() const
{
	return m_oldValue;
}

void PostSlidesPresentationReplaceTextRequest::setOldValue(utility::string_t value)
{
	m_oldValue = value;
}

utility::string_t PostSlidesPresentationReplaceTextRequest::getNewValue() const
{
	return m_newValue;
}

void PostSlidesPresentationReplaceTextRequest::setNewValue(utility::string_t value)
{
	m_newValue = value;
}

bool PostSlidesPresentationReplaceTextRequest::getIgnoreCase() const
{
	return m_ignoreCase;
}

void PostSlidesPresentationReplaceTextRequest::setIgnoreCase(bool value)
{
	m_ignoreCase = value;
	m_ignoreCaseIsSet = true;
}

bool PostSlidesPresentationReplaceTextRequest::ignoreCaseIsSet() const
{
	return m_ignoreCaseIsSet;
}

void PostSlidesPresentationReplaceTextRequest::unsetIgnoreCase()
{
	m_ignoreCaseIsSet = false;
}

utility::string_t PostSlidesPresentationReplaceTextRequest::getPassword() const
{
	return m_password;
}

void PostSlidesPresentationReplaceTextRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesPresentationReplaceTextRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesPresentationReplaceTextRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSlidesPresentationReplaceTextRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesPresentationReplaceTextRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostSlidesReorderRequest::PostSlidesReorderRequest()
{
}

PostSlidesReorderRequest::~PostSlidesReorderRequest()
{
}

utility::string_t PostSlidesReorderRequest::getName() const
{
	return m_name;
}

void PostSlidesReorderRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostSlidesReorderRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostSlidesReorderRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PostSlidesReorderRequest::getNewPosition() const
{
	return m_newPosition;
}

void PostSlidesReorderRequest::setNewPosition(int32_t value)
{
	m_newPosition = value;
}

utility::string_t PostSlidesReorderRequest::getPassword() const
{
	return m_password;
}

void PostSlidesReorderRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesReorderRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesReorderRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSlidesReorderRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesReorderRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostSlidesReorderManyRequest::PostSlidesReorderManyRequest()
{
}

PostSlidesReorderManyRequest::~PostSlidesReorderManyRequest()
{
}

utility::string_t PostSlidesReorderManyRequest::getName() const
{
	return m_name;
}

void PostSlidesReorderManyRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::vector<int32_t> PostSlidesReorderManyRequest::getOldPositions() const
{
	return m_oldPositions;
}

void PostSlidesReorderManyRequest::setOldPositions(std::vector<int32_t> value)
{
	m_oldPositions = value;
}

std::vector<int32_t> PostSlidesReorderManyRequest::getNewPositions() const
{
	return m_newPositions;
}

void PostSlidesReorderManyRequest::setNewPositions(std::vector<int32_t> value)
{
	m_newPositions = value;
}

utility::string_t PostSlidesReorderManyRequest::getPassword() const
{
	return m_password;
}

void PostSlidesReorderManyRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesReorderManyRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesReorderManyRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSlidesReorderManyRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesReorderManyRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostSlidesSaveAsRequest::PostSlidesSaveAsRequest()
{
}

PostSlidesSaveAsRequest::~PostSlidesSaveAsRequest()
{
}

utility::string_t PostSlidesSaveAsRequest::getName() const
{
	return m_name;
}

void PostSlidesSaveAsRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t PostSlidesSaveAsRequest::getFormat() const
{
	return m_format;
}

void PostSlidesSaveAsRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

std::shared_ptr<ExportOptions> PostSlidesSaveAsRequest::getOptions() const
{
	return m_options;
}

void PostSlidesSaveAsRequest::setOptions(std::shared_ptr<ExportOptions> value)
{
	m_options = value;
}

utility::string_t PostSlidesSaveAsRequest::getPassword() const
{
	return m_password;
}

void PostSlidesSaveAsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesSaveAsRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesSaveAsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PostSlidesSaveAsRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesSaveAsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSlidesSaveAsRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PostSlidesSaveAsRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PostSlidesSetDocumentPropertiesRequest::PostSlidesSetDocumentPropertiesRequest()
{
}

PostSlidesSetDocumentPropertiesRequest::~PostSlidesSetDocumentPropertiesRequest()
{
}

utility::string_t PostSlidesSetDocumentPropertiesRequest::getName() const
{
	return m_name;
}

void PostSlidesSetDocumentPropertiesRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::shared_ptr<DocumentProperties> PostSlidesSetDocumentPropertiesRequest::getProperties() const
{
	return m_properties;
}

void PostSlidesSetDocumentPropertiesRequest::setProperties(std::shared_ptr<DocumentProperties> value)
{
	m_properties = value;
}

utility::string_t PostSlidesSetDocumentPropertiesRequest::getPassword() const
{
	return m_password;
}

void PostSlidesSetDocumentPropertiesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesSetDocumentPropertiesRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesSetDocumentPropertiesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSlidesSetDocumentPropertiesRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesSetDocumentPropertiesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostSlidesSlideReplaceTextRequest::PostSlidesSlideReplaceTextRequest()
{
	m_ignoreCaseIsSet = false;
}

PostSlidesSlideReplaceTextRequest::~PostSlidesSlideReplaceTextRequest()
{
}

utility::string_t PostSlidesSlideReplaceTextRequest::getName() const
{
	return m_name;
}

void PostSlidesSlideReplaceTextRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostSlidesSlideReplaceTextRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostSlidesSlideReplaceTextRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PostSlidesSlideReplaceTextRequest::getOldValue() const
{
	return m_oldValue;
}

void PostSlidesSlideReplaceTextRequest::setOldValue(utility::string_t value)
{
	m_oldValue = value;
}

utility::string_t PostSlidesSlideReplaceTextRequest::getNewValue() const
{
	return m_newValue;
}

void PostSlidesSlideReplaceTextRequest::setNewValue(utility::string_t value)
{
	m_newValue = value;
}

bool PostSlidesSlideReplaceTextRequest::getIgnoreCase() const
{
	return m_ignoreCase;
}

void PostSlidesSlideReplaceTextRequest::setIgnoreCase(bool value)
{
	m_ignoreCase = value;
	m_ignoreCaseIsSet = true;
}

bool PostSlidesSlideReplaceTextRequest::ignoreCaseIsSet() const
{
	return m_ignoreCaseIsSet;
}

void PostSlidesSlideReplaceTextRequest::unsetIgnoreCase()
{
	m_ignoreCaseIsSet = false;
}

utility::string_t PostSlidesSlideReplaceTextRequest::getPassword() const
{
	return m_password;
}

void PostSlidesSlideReplaceTextRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesSlideReplaceTextRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesSlideReplaceTextRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSlidesSlideReplaceTextRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesSlideReplaceTextRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PostSlidesSplitRequest::PostSlidesSplitRequest()
{
	m_widthIsSet = false;
	m_heightIsSet = false;
	m_toIsSet = false;
	m_fromIsSet = false;
}

PostSlidesSplitRequest::~PostSlidesSplitRequest()
{
}

utility::string_t PostSlidesSplitRequest::getName() const
{
	return m_name;
}

void PostSlidesSplitRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::shared_ptr<ExportOptions> PostSlidesSplitRequest::getOptions() const
{
	return m_options;
}

void PostSlidesSplitRequest::setOptions(std::shared_ptr<ExportOptions> value)
{
	m_options = value;
}

utility::string_t PostSlidesSplitRequest::getFormat() const
{
	return m_format;
}

void PostSlidesSplitRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

int32_t PostSlidesSplitRequest::getWidth() const
{
	return m_width;
}

void PostSlidesSplitRequest::setWidth(int32_t value)
{
	m_width = value;
	m_widthIsSet = true;
}

bool PostSlidesSplitRequest::widthIsSet() const
{
	return m_widthIsSet;
}

void PostSlidesSplitRequest::unsetWidth()
{
	m_widthIsSet = false;
}

int32_t PostSlidesSplitRequest::getHeight() const
{
	return m_height;
}

void PostSlidesSplitRequest::setHeight(int32_t value)
{
	m_height = value;
	m_heightIsSet = true;
}

bool PostSlidesSplitRequest::heightIsSet() const
{
	return m_heightIsSet;
}

void PostSlidesSplitRequest::unsetHeight()
{
	m_heightIsSet = false;
}

int32_t PostSlidesSplitRequest::getTo() const
{
	return m_to;
}

void PostSlidesSplitRequest::setTo(int32_t value)
{
	m_to = value;
	m_toIsSet = true;
}

bool PostSlidesSplitRequest::toIsSet() const
{
	return m_toIsSet;
}

void PostSlidesSplitRequest::unsetTo()
{
	m_toIsSet = false;
}

int32_t PostSlidesSplitRequest::getFrom() const
{
	return m_from;
}

void PostSlidesSplitRequest::setFrom(int32_t value)
{
	m_from = value;
	m_fromIsSet = true;
}

bool PostSlidesSplitRequest::fromIsSet() const
{
	return m_fromIsSet;
}

void PostSlidesSplitRequest::unsetFrom()
{
	m_fromIsSet = false;
}

utility::string_t PostSlidesSplitRequest::getDestFolder() const
{
	return m_destFolder;
}

void PostSlidesSplitRequest::setDestFolder(utility::string_t value)
{
	m_destFolder = value;
}

utility::string_t PostSlidesSplitRequest::getPassword() const
{
	return m_password;
}

void PostSlidesSplitRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSlidesSplitRequest::getStorage() const
{
	return m_storage;
}

void PostSlidesSplitRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PostSlidesSplitRequest::getFolder() const
{
	return m_folder;
}

void PostSlidesSplitRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSlidesSplitRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PostSlidesSplitRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PostSubshapeSaveAsRequest::PostSubshapeSaveAsRequest()
{
	m_scaleXIsSet = false;
	m_scaleYIsSet = false;
}

PostSubshapeSaveAsRequest::~PostSubshapeSaveAsRequest()
{
}

utility::string_t PostSubshapeSaveAsRequest::getName() const
{
	return m_name;
}

void PostSubshapeSaveAsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PostSubshapeSaveAsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PostSubshapeSaveAsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PostSubshapeSaveAsRequest::getPath() const
{
	return m_path;
}

void PostSubshapeSaveAsRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t PostSubshapeSaveAsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PostSubshapeSaveAsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t PostSubshapeSaveAsRequest::getFormat() const
{
	return m_format;
}

void PostSubshapeSaveAsRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

std::shared_ptr<IShapeExportOptions> PostSubshapeSaveAsRequest::getOptions() const
{
	return m_options;
}

void PostSubshapeSaveAsRequest::setOptions(std::shared_ptr<IShapeExportOptions> value)
{
	m_options = value;
}

utility::string_t PostSubshapeSaveAsRequest::getPassword() const
{
	return m_password;
}

void PostSubshapeSaveAsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PostSubshapeSaveAsRequest::getFolder() const
{
	return m_folder;
}

void PostSubshapeSaveAsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PostSubshapeSaveAsRequest::getStorage() const
{
	return m_storage;
}

void PostSubshapeSaveAsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

double PostSubshapeSaveAsRequest::getScaleX() const
{
	return m_scaleX;
}

void PostSubshapeSaveAsRequest::setScaleX(double value)
{
	m_scaleX = value;
	m_scaleXIsSet = true;
}

bool PostSubshapeSaveAsRequest::scaleXIsSet() const
{
	return m_scaleXIsSet;
}

void PostSubshapeSaveAsRequest::unsetScaleX()
{
	m_scaleXIsSet = false;
}

double PostSubshapeSaveAsRequest::getScaleY() const
{
	return m_scaleY;
}

void PostSubshapeSaveAsRequest::setScaleY(double value)
{
	m_scaleY = value;
	m_scaleYIsSet = true;
}

bool PostSubshapeSaveAsRequest::scaleYIsSet() const
{
	return m_scaleYIsSet;
}

void PostSubshapeSaveAsRequest::unsetScaleY()
{
	m_scaleYIsSet = false;
}

utility::string_t PostSubshapeSaveAsRequest::getBounds() const
{
	return m_bounds;
}

void PostSubshapeSaveAsRequest::setBounds(utility::string_t value)
{
	m_bounds = value;
}

utility::string_t PostSubshapeSaveAsRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PostSubshapeSaveAsRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PutChartCategoryRequest::PutChartCategoryRequest()
{
}

PutChartCategoryRequest::~PutChartCategoryRequest()
{
}

utility::string_t PutChartCategoryRequest::getName() const
{
	return m_name;
}

void PutChartCategoryRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutChartCategoryRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutChartCategoryRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PutChartCategoryRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutChartCategoryRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t PutChartCategoryRequest::getCategoryIndex() const
{
	return m_categoryIndex;
}

void PutChartCategoryRequest::setCategoryIndex(int32_t value)
{
	m_categoryIndex = value;
}

std::shared_ptr<ChartCategory> PutChartCategoryRequest::getCategory() const
{
	return m_category;
}

void PutChartCategoryRequest::setCategory(std::shared_ptr<ChartCategory> value)
{
	m_category = value;
}

utility::string_t PutChartCategoryRequest::getPassword() const
{
	return m_password;
}

void PutChartCategoryRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutChartCategoryRequest::getFolder() const
{
	return m_folder;
}

void PutChartCategoryRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutChartCategoryRequest::getStorage() const
{
	return m_storage;
}

void PutChartCategoryRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutChartDataPointRequest::PutChartDataPointRequest()
{
}

PutChartDataPointRequest::~PutChartDataPointRequest()
{
}

utility::string_t PutChartDataPointRequest::getName() const
{
	return m_name;
}

void PutChartDataPointRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutChartDataPointRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutChartDataPointRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PutChartDataPointRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutChartDataPointRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t PutChartDataPointRequest::getSeriesIndex() const
{
	return m_seriesIndex;
}

void PutChartDataPointRequest::setSeriesIndex(int32_t value)
{
	m_seriesIndex = value;
}

int32_t PutChartDataPointRequest::getPointIndex() const
{
	return m_pointIndex;
}

void PutChartDataPointRequest::setPointIndex(int32_t value)
{
	m_pointIndex = value;
}

std::shared_ptr<DataPoint> PutChartDataPointRequest::getDataPoint() const
{
	return m_dataPoint;
}

void PutChartDataPointRequest::setDataPoint(std::shared_ptr<DataPoint> value)
{
	m_dataPoint = value;
}

utility::string_t PutChartDataPointRequest::getPassword() const
{
	return m_password;
}

void PutChartDataPointRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutChartDataPointRequest::getFolder() const
{
	return m_folder;
}

void PutChartDataPointRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutChartDataPointRequest::getStorage() const
{
	return m_storage;
}

void PutChartDataPointRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutChartSeriesRequest::PutChartSeriesRequest()
{
}

PutChartSeriesRequest::~PutChartSeriesRequest()
{
}

utility::string_t PutChartSeriesRequest::getName() const
{
	return m_name;
}

void PutChartSeriesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutChartSeriesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutChartSeriesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PutChartSeriesRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutChartSeriesRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t PutChartSeriesRequest::getSeriesIndex() const
{
	return m_seriesIndex;
}

void PutChartSeriesRequest::setSeriesIndex(int32_t value)
{
	m_seriesIndex = value;
}

std::shared_ptr<Series> PutChartSeriesRequest::getSeries() const
{
	return m_series;
}

void PutChartSeriesRequest::setSeries(std::shared_ptr<Series> value)
{
	m_series = value;
}

utility::string_t PutChartSeriesRequest::getPassword() const
{
	return m_password;
}

void PutChartSeriesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutChartSeriesRequest::getFolder() const
{
	return m_folder;
}

void PutChartSeriesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutChartSeriesRequest::getStorage() const
{
	return m_storage;
}

void PutChartSeriesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutLayoutSlideRequest::PutLayoutSlideRequest()
{
}

PutLayoutSlideRequest::~PutLayoutSlideRequest()
{
}

utility::string_t PutLayoutSlideRequest::getName() const
{
	return m_name;
}

void PutLayoutSlideRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutLayoutSlideRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutLayoutSlideRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::shared_ptr<LayoutSlide> PutLayoutSlideRequest::getSlideDto() const
{
	return m_slideDto;
}

void PutLayoutSlideRequest::setSlideDto(std::shared_ptr<LayoutSlide> value)
{
	m_slideDto = value;
}

utility::string_t PutLayoutSlideRequest::getPassword() const
{
	return m_password;
}

void PutLayoutSlideRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutLayoutSlideRequest::getFolder() const
{
	return m_folder;
}

void PutLayoutSlideRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutLayoutSlideRequest::getStorage() const
{
	return m_storage;
}

void PutLayoutSlideRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutNotesSlideHeaderFooterRequest::PutNotesSlideHeaderFooterRequest()
{
}

PutNotesSlideHeaderFooterRequest::~PutNotesSlideHeaderFooterRequest()
{
}

utility::string_t PutNotesSlideHeaderFooterRequest::getName() const
{
	return m_name;
}

void PutNotesSlideHeaderFooterRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutNotesSlideHeaderFooterRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutNotesSlideHeaderFooterRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::shared_ptr<NotesSlideHeaderFooter> PutNotesSlideHeaderFooterRequest::getDto() const
{
	return m_dto;
}

void PutNotesSlideHeaderFooterRequest::setDto(std::shared_ptr<NotesSlideHeaderFooter> value)
{
	m_dto = value;
}

utility::string_t PutNotesSlideHeaderFooterRequest::getPassword() const
{
	return m_password;
}

void PutNotesSlideHeaderFooterRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutNotesSlideHeaderFooterRequest::getStorage() const
{
	return m_storage;
}

void PutNotesSlideHeaderFooterRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PutNotesSlideHeaderFooterRequest::getFolder() const
{
	return m_folder;
}

void PutNotesSlideHeaderFooterRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

PutNotesSlideShapeSaveAsRequest::PutNotesSlideShapeSaveAsRequest()
{
	m_scaleXIsSet = false;
	m_scaleYIsSet = false;
}

PutNotesSlideShapeSaveAsRequest::~PutNotesSlideShapeSaveAsRequest()
{
}

utility::string_t PutNotesSlideShapeSaveAsRequest::getName() const
{
	return m_name;
}

void PutNotesSlideShapeSaveAsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutNotesSlideShapeSaveAsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutNotesSlideShapeSaveAsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PutNotesSlideShapeSaveAsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutNotesSlideShapeSaveAsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t PutNotesSlideShapeSaveAsRequest::getFormat() const
{
	return m_format;
}

void PutNotesSlideShapeSaveAsRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

utility::string_t PutNotesSlideShapeSaveAsRequest::getOutPath() const
{
	return m_outPath;
}

void PutNotesSlideShapeSaveAsRequest::setOutPath(utility::string_t value)
{
	m_outPath = value;
}

std::shared_ptr<IShapeExportOptions> PutNotesSlideShapeSaveAsRequest::getOptions() const
{
	return m_options;
}

void PutNotesSlideShapeSaveAsRequest::setOptions(std::shared_ptr<IShapeExportOptions> value)
{
	m_options = value;
}

utility::string_t PutNotesSlideShapeSaveAsRequest::getPassword() const
{
	return m_password;
}

void PutNotesSlideShapeSaveAsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutNotesSlideShapeSaveAsRequest::getFolder() const
{
	return m_folder;
}

void PutNotesSlideShapeSaveAsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutNotesSlideShapeSaveAsRequest::getStorage() const
{
	return m_storage;
}

void PutNotesSlideShapeSaveAsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

double PutNotesSlideShapeSaveAsRequest::getScaleX() const
{
	return m_scaleX;
}

void PutNotesSlideShapeSaveAsRequest::setScaleX(double value)
{
	m_scaleX = value;
	m_scaleXIsSet = true;
}

bool PutNotesSlideShapeSaveAsRequest::scaleXIsSet() const
{
	return m_scaleXIsSet;
}

void PutNotesSlideShapeSaveAsRequest::unsetScaleX()
{
	m_scaleXIsSet = false;
}

double PutNotesSlideShapeSaveAsRequest::getScaleY() const
{
	return m_scaleY;
}

void PutNotesSlideShapeSaveAsRequest::setScaleY(double value)
{
	m_scaleY = value;
	m_scaleYIsSet = true;
}

bool PutNotesSlideShapeSaveAsRequest::scaleYIsSet() const
{
	return m_scaleYIsSet;
}

void PutNotesSlideShapeSaveAsRequest::unsetScaleY()
{
	m_scaleYIsSet = false;
}

utility::string_t PutNotesSlideShapeSaveAsRequest::getBounds() const
{
	return m_bounds;
}

void PutNotesSlideShapeSaveAsRequest::setBounds(utility::string_t value)
{
	m_bounds = value;
}

utility::string_t PutNotesSlideShapeSaveAsRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PutNotesSlideShapeSaveAsRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PutPresentationMergeRequest::PutPresentationMergeRequest()
{
}

PutPresentationMergeRequest::~PutPresentationMergeRequest()
{
}

utility::string_t PutPresentationMergeRequest::getName() const
{
	return m_name;
}

void PutPresentationMergeRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::shared_ptr<OrderedMergeRequest> PutPresentationMergeRequest::getRequest() const
{
	return m_request;
}

void PutPresentationMergeRequest::setRequest(std::shared_ptr<OrderedMergeRequest> value)
{
	m_request = value;
}

utility::string_t PutPresentationMergeRequest::getPassword() const
{
	return m_password;
}

void PutPresentationMergeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutPresentationMergeRequest::getStorage() const
{
	return m_storage;
}

void PutPresentationMergeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PutPresentationMergeRequest::getFolder() const
{
	return m_folder;
}

void PutPresentationMergeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

PutSectionRequest::PutSectionRequest()
{
}

PutSectionRequest::~PutSectionRequest()
{
}

utility::string_t PutSectionRequest::getName() const
{
	return m_name;
}

void PutSectionRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSectionRequest::getSectionIndex() const
{
	return m_sectionIndex;
}

void PutSectionRequest::setSectionIndex(int32_t value)
{
	m_sectionIndex = value;
}

utility::string_t PutSectionRequest::getSectionName() const
{
	return m_sectionName;
}

void PutSectionRequest::setSectionName(utility::string_t value)
{
	m_sectionName = value;
}

utility::string_t PutSectionRequest::getPassword() const
{
	return m_password;
}

void PutSectionRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSectionRequest::getFolder() const
{
	return m_folder;
}

void PutSectionRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSectionRequest::getStorage() const
{
	return m_storage;
}

void PutSectionRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSectionsRequest::PutSectionsRequest()
{
}

PutSectionsRequest::~PutSectionsRequest()
{
}

utility::string_t PutSectionsRequest::getName() const
{
	return m_name;
}

void PutSectionsRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::shared_ptr<Sections> PutSectionsRequest::getSections() const
{
	return m_sections;
}

void PutSectionsRequest::setSections(std::shared_ptr<Sections> value)
{
	m_sections = value;
}

utility::string_t PutSectionsRequest::getPassword() const
{
	return m_password;
}

void PutSectionsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSectionsRequest::getFolder() const
{
	return m_folder;
}

void PutSectionsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSectionsRequest::getStorage() const
{
	return m_storage;
}

void PutSectionsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSetParagraphPortionPropertiesRequest::PutSetParagraphPortionPropertiesRequest()
{
}

PutSetParagraphPortionPropertiesRequest::~PutSetParagraphPortionPropertiesRequest()
{
}

utility::string_t PutSetParagraphPortionPropertiesRequest::getName() const
{
	return m_name;
}

void PutSetParagraphPortionPropertiesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSetParagraphPortionPropertiesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSetParagraphPortionPropertiesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PutSetParagraphPortionPropertiesRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutSetParagraphPortionPropertiesRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t PutSetParagraphPortionPropertiesRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void PutSetParagraphPortionPropertiesRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

int32_t PutSetParagraphPortionPropertiesRequest::getPortionIndex() const
{
	return m_portionIndex;
}

void PutSetParagraphPortionPropertiesRequest::setPortionIndex(int32_t value)
{
	m_portionIndex = value;
}

std::shared_ptr<Portion> PutSetParagraphPortionPropertiesRequest::getDto() const
{
	return m_dto;
}

void PutSetParagraphPortionPropertiesRequest::setDto(std::shared_ptr<Portion> value)
{
	m_dto = value;
}

utility::string_t PutSetParagraphPortionPropertiesRequest::getPassword() const
{
	return m_password;
}

void PutSetParagraphPortionPropertiesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSetParagraphPortionPropertiesRequest::getFolder() const
{
	return m_folder;
}

void PutSetParagraphPortionPropertiesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSetParagraphPortionPropertiesRequest::getStorage() const
{
	return m_storage;
}

void PutSetParagraphPortionPropertiesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSetParagraphPropertiesRequest::PutSetParagraphPropertiesRequest()
{
}

PutSetParagraphPropertiesRequest::~PutSetParagraphPropertiesRequest()
{
}

utility::string_t PutSetParagraphPropertiesRequest::getName() const
{
	return m_name;
}

void PutSetParagraphPropertiesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSetParagraphPropertiesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSetParagraphPropertiesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PutSetParagraphPropertiesRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutSetParagraphPropertiesRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t PutSetParagraphPropertiesRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void PutSetParagraphPropertiesRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

std::shared_ptr<Paragraph> PutSetParagraphPropertiesRequest::getDto() const
{
	return m_dto;
}

void PutSetParagraphPropertiesRequest::setDto(std::shared_ptr<Paragraph> value)
{
	m_dto = value;
}

utility::string_t PutSetParagraphPropertiesRequest::getPassword() const
{
	return m_password;
}

void PutSetParagraphPropertiesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSetParagraphPropertiesRequest::getFolder() const
{
	return m_folder;
}

void PutSetParagraphPropertiesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSetParagraphPropertiesRequest::getStorage() const
{
	return m_storage;
}

void PutSetParagraphPropertiesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSetSubshapeParagraphPortionPropertiesRequest::PutSetSubshapeParagraphPortionPropertiesRequest()
{
}

PutSetSubshapeParagraphPortionPropertiesRequest::~PutSetSubshapeParagraphPortionPropertiesRequest()
{
}

utility::string_t PutSetSubshapeParagraphPortionPropertiesRequest::getName() const
{
	return m_name;
}

void PutSetSubshapeParagraphPortionPropertiesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSetSubshapeParagraphPortionPropertiesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSetSubshapeParagraphPortionPropertiesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PutSetSubshapeParagraphPortionPropertiesRequest::getPath() const
{
	return m_path;
}

void PutSetSubshapeParagraphPortionPropertiesRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t PutSetSubshapeParagraphPortionPropertiesRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutSetSubshapeParagraphPortionPropertiesRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t PutSetSubshapeParagraphPortionPropertiesRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void PutSetSubshapeParagraphPortionPropertiesRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

int32_t PutSetSubshapeParagraphPortionPropertiesRequest::getPortionIndex() const
{
	return m_portionIndex;
}

void PutSetSubshapeParagraphPortionPropertiesRequest::setPortionIndex(int32_t value)
{
	m_portionIndex = value;
}

std::shared_ptr<Portion> PutSetSubshapeParagraphPortionPropertiesRequest::getDto() const
{
	return m_dto;
}

void PutSetSubshapeParagraphPortionPropertiesRequest::setDto(std::shared_ptr<Portion> value)
{
	m_dto = value;
}

utility::string_t PutSetSubshapeParagraphPortionPropertiesRequest::getPassword() const
{
	return m_password;
}

void PutSetSubshapeParagraphPortionPropertiesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSetSubshapeParagraphPortionPropertiesRequest::getFolder() const
{
	return m_folder;
}

void PutSetSubshapeParagraphPortionPropertiesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSetSubshapeParagraphPortionPropertiesRequest::getStorage() const
{
	return m_storage;
}

void PutSetSubshapeParagraphPortionPropertiesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSetSubshapeParagraphPropertiesRequest::PutSetSubshapeParagraphPropertiesRequest()
{
}

PutSetSubshapeParagraphPropertiesRequest::~PutSetSubshapeParagraphPropertiesRequest()
{
}

utility::string_t PutSetSubshapeParagraphPropertiesRequest::getName() const
{
	return m_name;
}

void PutSetSubshapeParagraphPropertiesRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSetSubshapeParagraphPropertiesRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSetSubshapeParagraphPropertiesRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PutSetSubshapeParagraphPropertiesRequest::getPath() const
{
	return m_path;
}

void PutSetSubshapeParagraphPropertiesRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t PutSetSubshapeParagraphPropertiesRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutSetSubshapeParagraphPropertiesRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t PutSetSubshapeParagraphPropertiesRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void PutSetSubshapeParagraphPropertiesRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

std::shared_ptr<Paragraph> PutSetSubshapeParagraphPropertiesRequest::getDto() const
{
	return m_dto;
}

void PutSetSubshapeParagraphPropertiesRequest::setDto(std::shared_ptr<Paragraph> value)
{
	m_dto = value;
}

utility::string_t PutSetSubshapeParagraphPropertiesRequest::getPassword() const
{
	return m_password;
}

void PutSetSubshapeParagraphPropertiesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSetSubshapeParagraphPropertiesRequest::getFolder() const
{
	return m_folder;
}

void PutSetSubshapeParagraphPropertiesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSetSubshapeParagraphPropertiesRequest::getStorage() const
{
	return m_storage;
}

void PutSetSubshapeParagraphPropertiesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutShapeSaveAsRequest::PutShapeSaveAsRequest()
{
	m_scaleXIsSet = false;
	m_scaleYIsSet = false;
}

PutShapeSaveAsRequest::~PutShapeSaveAsRequest()
{
}

utility::string_t PutShapeSaveAsRequest::getName() const
{
	return m_name;
}

void PutShapeSaveAsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutShapeSaveAsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutShapeSaveAsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PutShapeSaveAsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutShapeSaveAsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t PutShapeSaveAsRequest::getFormat() const
{
	return m_format;
}

void PutShapeSaveAsRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

utility::string_t PutShapeSaveAsRequest::getOutPath() const
{
	return m_outPath;
}

void PutShapeSaveAsRequest::setOutPath(utility::string_t value)
{
	m_outPath = value;
}

std::shared_ptr<IShapeExportOptions> PutShapeSaveAsRequest::getOptions() const
{
	return m_options;
}

void PutShapeSaveAsRequest::setOptions(std::shared_ptr<IShapeExportOptions> value)
{
	m_options = value;
}

utility::string_t PutShapeSaveAsRequest::getPassword() const
{
	return m_password;
}

void PutShapeSaveAsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutShapeSaveAsRequest::getFolder() const
{
	return m_folder;
}

void PutShapeSaveAsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutShapeSaveAsRequest::getStorage() const
{
	return m_storage;
}

void PutShapeSaveAsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

double PutShapeSaveAsRequest::getScaleX() const
{
	return m_scaleX;
}

void PutShapeSaveAsRequest::setScaleX(double value)
{
	m_scaleX = value;
	m_scaleXIsSet = true;
}

bool PutShapeSaveAsRequest::scaleXIsSet() const
{
	return m_scaleXIsSet;
}

void PutShapeSaveAsRequest::unsetScaleX()
{
	m_scaleXIsSet = false;
}

double PutShapeSaveAsRequest::getScaleY() const
{
	return m_scaleY;
}

void PutShapeSaveAsRequest::setScaleY(double value)
{
	m_scaleY = value;
	m_scaleYIsSet = true;
}

bool PutShapeSaveAsRequest::scaleYIsSet() const
{
	return m_scaleYIsSet;
}

void PutShapeSaveAsRequest::unsetScaleY()
{
	m_scaleYIsSet = false;
}

utility::string_t PutShapeSaveAsRequest::getBounds() const
{
	return m_bounds;
}

void PutShapeSaveAsRequest::setBounds(utility::string_t value)
{
	m_bounds = value;
}

utility::string_t PutShapeSaveAsRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PutShapeSaveAsRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PutSlideAnimationRequest::PutSlideAnimationRequest()
{
}

PutSlideAnimationRequest::~PutSlideAnimationRequest()
{
}

utility::string_t PutSlideAnimationRequest::getName() const
{
	return m_name;
}

void PutSlideAnimationRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSlideAnimationRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSlideAnimationRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::shared_ptr<SlideAnimation> PutSlideAnimationRequest::getAnimation() const
{
	return m_animation;
}

void PutSlideAnimationRequest::setAnimation(std::shared_ptr<SlideAnimation> value)
{
	m_animation = value;
}

utility::string_t PutSlideAnimationRequest::getPassword() const
{
	return m_password;
}

void PutSlideAnimationRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlideAnimationRequest::getFolder() const
{
	return m_folder;
}

void PutSlideAnimationRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlideAnimationRequest::getStorage() const
{
	return m_storage;
}

void PutSlideAnimationRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSlideAnimationEffectRequest::PutSlideAnimationEffectRequest()
{
}

PutSlideAnimationEffectRequest::~PutSlideAnimationEffectRequest()
{
}

utility::string_t PutSlideAnimationEffectRequest::getName() const
{
	return m_name;
}

void PutSlideAnimationEffectRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSlideAnimationEffectRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSlideAnimationEffectRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PutSlideAnimationEffectRequest::getEffectIndex() const
{
	return m_effectIndex;
}

void PutSlideAnimationEffectRequest::setEffectIndex(int32_t value)
{
	m_effectIndex = value;
}

std::shared_ptr<Effect> PutSlideAnimationEffectRequest::getEffect() const
{
	return m_effect;
}

void PutSlideAnimationEffectRequest::setEffect(std::shared_ptr<Effect> value)
{
	m_effect = value;
}

utility::string_t PutSlideAnimationEffectRequest::getPassword() const
{
	return m_password;
}

void PutSlideAnimationEffectRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlideAnimationEffectRequest::getFolder() const
{
	return m_folder;
}

void PutSlideAnimationEffectRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlideAnimationEffectRequest::getStorage() const
{
	return m_storage;
}

void PutSlideAnimationEffectRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSlideAnimationInteractiveSequenceEffectRequest::PutSlideAnimationInteractiveSequenceEffectRequest()
{
}

PutSlideAnimationInteractiveSequenceEffectRequest::~PutSlideAnimationInteractiveSequenceEffectRequest()
{
}

utility::string_t PutSlideAnimationInteractiveSequenceEffectRequest::getName() const
{
	return m_name;
}

void PutSlideAnimationInteractiveSequenceEffectRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSlideAnimationInteractiveSequenceEffectRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSlideAnimationInteractiveSequenceEffectRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PutSlideAnimationInteractiveSequenceEffectRequest::getSequenceIndex() const
{
	return m_sequenceIndex;
}

void PutSlideAnimationInteractiveSequenceEffectRequest::setSequenceIndex(int32_t value)
{
	m_sequenceIndex = value;
}

int32_t PutSlideAnimationInteractiveSequenceEffectRequest::getEffectIndex() const
{
	return m_effectIndex;
}

void PutSlideAnimationInteractiveSequenceEffectRequest::setEffectIndex(int32_t value)
{
	m_effectIndex = value;
}

std::shared_ptr<Effect> PutSlideAnimationInteractiveSequenceEffectRequest::getEffect() const
{
	return m_effect;
}

void PutSlideAnimationInteractiveSequenceEffectRequest::setEffect(std::shared_ptr<Effect> value)
{
	m_effect = value;
}

utility::string_t PutSlideAnimationInteractiveSequenceEffectRequest::getPassword() const
{
	return m_password;
}

void PutSlideAnimationInteractiveSequenceEffectRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlideAnimationInteractiveSequenceEffectRequest::getFolder() const
{
	return m_folder;
}

void PutSlideAnimationInteractiveSequenceEffectRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlideAnimationInteractiveSequenceEffectRequest::getStorage() const
{
	return m_storage;
}

void PutSlideAnimationInteractiveSequenceEffectRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSlideHeaderFooterRequest::PutSlideHeaderFooterRequest()
{
}

PutSlideHeaderFooterRequest::~PutSlideHeaderFooterRequest()
{
}

utility::string_t PutSlideHeaderFooterRequest::getName() const
{
	return m_name;
}

void PutSlideHeaderFooterRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSlideHeaderFooterRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSlideHeaderFooterRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::shared_ptr<HeaderFooter> PutSlideHeaderFooterRequest::getDto() const
{
	return m_dto;
}

void PutSlideHeaderFooterRequest::setDto(std::shared_ptr<HeaderFooter> value)
{
	m_dto = value;
}

utility::string_t PutSlideHeaderFooterRequest::getPassword() const
{
	return m_password;
}

void PutSlideHeaderFooterRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlideHeaderFooterRequest::getFolder() const
{
	return m_folder;
}

void PutSlideHeaderFooterRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlideHeaderFooterRequest::getStorage() const
{
	return m_storage;
}

void PutSlideHeaderFooterRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSlideSaveAsRequest::PutSlideSaveAsRequest()
{
	m_widthIsSet = false;
	m_heightIsSet = false;
}

PutSlideSaveAsRequest::~PutSlideSaveAsRequest()
{
}

utility::string_t PutSlideSaveAsRequest::getName() const
{
	return m_name;
}

void PutSlideSaveAsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSlideSaveAsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSlideSaveAsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PutSlideSaveAsRequest::getFormat() const
{
	return m_format;
}

void PutSlideSaveAsRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

utility::string_t PutSlideSaveAsRequest::getOutPath() const
{
	return m_outPath;
}

void PutSlideSaveAsRequest::setOutPath(utility::string_t value)
{
	m_outPath = value;
}

std::shared_ptr<ExportOptions> PutSlideSaveAsRequest::getOptions() const
{
	return m_options;
}

void PutSlideSaveAsRequest::setOptions(std::shared_ptr<ExportOptions> value)
{
	m_options = value;
}

int32_t PutSlideSaveAsRequest::getWidth() const
{
	return m_width;
}

void PutSlideSaveAsRequest::setWidth(int32_t value)
{
	m_width = value;
	m_widthIsSet = true;
}

bool PutSlideSaveAsRequest::widthIsSet() const
{
	return m_widthIsSet;
}

void PutSlideSaveAsRequest::unsetWidth()
{
	m_widthIsSet = false;
}

int32_t PutSlideSaveAsRequest::getHeight() const
{
	return m_height;
}

void PutSlideSaveAsRequest::setHeight(int32_t value)
{
	m_height = value;
	m_heightIsSet = true;
}

bool PutSlideSaveAsRequest::heightIsSet() const
{
	return m_heightIsSet;
}

void PutSlideSaveAsRequest::unsetHeight()
{
	m_heightIsSet = false;
}

utility::string_t PutSlideSaveAsRequest::getPassword() const
{
	return m_password;
}

void PutSlideSaveAsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlideSaveAsRequest::getFolder() const
{
	return m_folder;
}

void PutSlideSaveAsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlideSaveAsRequest::getStorage() const
{
	return m_storage;
}

void PutSlideSaveAsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PutSlideSaveAsRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PutSlideSaveAsRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PutSlideShapeInfoRequest::PutSlideShapeInfoRequest()
{
}

PutSlideShapeInfoRequest::~PutSlideShapeInfoRequest()
{
}

utility::string_t PutSlideShapeInfoRequest::getName() const
{
	return m_name;
}

void PutSlideShapeInfoRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSlideShapeInfoRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSlideShapeInfoRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PutSlideShapeInfoRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutSlideShapeInfoRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

std::shared_ptr<ShapeBase> PutSlideShapeInfoRequest::getDto() const
{
	return m_dto;
}

void PutSlideShapeInfoRequest::setDto(std::shared_ptr<ShapeBase> value)
{
	m_dto = value;
}

utility::string_t PutSlideShapeInfoRequest::getPassword() const
{
	return m_password;
}

void PutSlideShapeInfoRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlideShapeInfoRequest::getFolder() const
{
	return m_folder;
}

void PutSlideShapeInfoRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlideShapeInfoRequest::getStorage() const
{
	return m_storage;
}

void PutSlideShapeInfoRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSlideSubshapeInfoRequest::PutSlideSubshapeInfoRequest()
{
}

PutSlideSubshapeInfoRequest::~PutSlideSubshapeInfoRequest()
{
}

utility::string_t PutSlideSubshapeInfoRequest::getName() const
{
	return m_name;
}

void PutSlideSubshapeInfoRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSlideSubshapeInfoRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSlideSubshapeInfoRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PutSlideSubshapeInfoRequest::getPath() const
{
	return m_path;
}

void PutSlideSubshapeInfoRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t PutSlideSubshapeInfoRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutSlideSubshapeInfoRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

std::shared_ptr<ShapeBase> PutSlideSubshapeInfoRequest::getDto() const
{
	return m_dto;
}

void PutSlideSubshapeInfoRequest::setDto(std::shared_ptr<ShapeBase> value)
{
	m_dto = value;
}

utility::string_t PutSlideSubshapeInfoRequest::getPassword() const
{
	return m_password;
}

void PutSlideSubshapeInfoRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlideSubshapeInfoRequest::getFolder() const
{
	return m_folder;
}

void PutSlideSubshapeInfoRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlideSubshapeInfoRequest::getStorage() const
{
	return m_storage;
}

void PutSlideSubshapeInfoRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSlidesConvertRequest::PutSlidesConvertRequest()
{
}

PutSlidesConvertRequest::~PutSlidesConvertRequest()
{
}

std::shared_ptr<HttpContent> PutSlidesConvertRequest::getDocument() const
{
	return m_document;
}

void PutSlidesConvertRequest::setDocument(std::shared_ptr<HttpContent> value)
{
	m_document = value;
}

utility::string_t PutSlidesConvertRequest::getFormat() const
{
	return m_format;
}

void PutSlidesConvertRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

utility::string_t PutSlidesConvertRequest::getOutPath() const
{
	return m_outPath;
}

void PutSlidesConvertRequest::setOutPath(utility::string_t value)
{
	m_outPath = value;
}

utility::string_t PutSlidesConvertRequest::getPassword() const
{
	return m_password;
}

void PutSlidesConvertRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlidesConvertRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PutSlidesConvertRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PutSlidesDocumentFromHtmlRequest::PutSlidesDocumentFromHtmlRequest()
{
}

PutSlidesDocumentFromHtmlRequest::~PutSlidesDocumentFromHtmlRequest()
{
}

utility::string_t PutSlidesDocumentFromHtmlRequest::getName() const
{
	return m_name;
}

void PutSlidesDocumentFromHtmlRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t PutSlidesDocumentFromHtmlRequest::getHtml() const
{
	return m_html;
}

void PutSlidesDocumentFromHtmlRequest::setHtml(utility::string_t value)
{
	m_html = value;
}

utility::string_t PutSlidesDocumentFromHtmlRequest::getPassword() const
{
	return m_password;
}

void PutSlidesDocumentFromHtmlRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlidesDocumentFromHtmlRequest::getStorage() const
{
	return m_storage;
}

void PutSlidesDocumentFromHtmlRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PutSlidesDocumentFromHtmlRequest::getFolder() const
{
	return m_folder;
}

void PutSlidesDocumentFromHtmlRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

PutSlidesHeaderFooterRequest::PutSlidesHeaderFooterRequest()
{
}

PutSlidesHeaderFooterRequest::~PutSlidesHeaderFooterRequest()
{
}

utility::string_t PutSlidesHeaderFooterRequest::getName() const
{
	return m_name;
}

void PutSlidesHeaderFooterRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::shared_ptr<HeaderFooter> PutSlidesHeaderFooterRequest::getDto() const
{
	return m_dto;
}

void PutSlidesHeaderFooterRequest::setDto(std::shared_ptr<HeaderFooter> value)
{
	m_dto = value;
}

utility::string_t PutSlidesHeaderFooterRequest::getPassword() const
{
	return m_password;
}

void PutSlidesHeaderFooterRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlidesHeaderFooterRequest::getStorage() const
{
	return m_storage;
}

void PutSlidesHeaderFooterRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PutSlidesHeaderFooterRequest::getFolder() const
{
	return m_folder;
}

void PutSlidesHeaderFooterRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

PutSlidesProtectionPropertiesRequest::PutSlidesProtectionPropertiesRequest()
{
}

PutSlidesProtectionPropertiesRequest::~PutSlidesProtectionPropertiesRequest()
{
}

utility::string_t PutSlidesProtectionPropertiesRequest::getName() const
{
	return m_name;
}

void PutSlidesProtectionPropertiesRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::shared_ptr<ProtectionProperties> PutSlidesProtectionPropertiesRequest::getDto() const
{
	return m_dto;
}

void PutSlidesProtectionPropertiesRequest::setDto(std::shared_ptr<ProtectionProperties> value)
{
	m_dto = value;
}

utility::string_t PutSlidesProtectionPropertiesRequest::getPassword() const
{
	return m_password;
}

void PutSlidesProtectionPropertiesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlidesProtectionPropertiesRequest::getFolder() const
{
	return m_folder;
}

void PutSlidesProtectionPropertiesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlidesProtectionPropertiesRequest::getStorage() const
{
	return m_storage;
}

void PutSlidesProtectionPropertiesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSlidesSaveAsRequest::PutSlidesSaveAsRequest()
{
}

PutSlidesSaveAsRequest::~PutSlidesSaveAsRequest()
{
}

utility::string_t PutSlidesSaveAsRequest::getName() const
{
	return m_name;
}

void PutSlidesSaveAsRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t PutSlidesSaveAsRequest::getOutPath() const
{
	return m_outPath;
}

void PutSlidesSaveAsRequest::setOutPath(utility::string_t value)
{
	m_outPath = value;
}

utility::string_t PutSlidesSaveAsRequest::getFormat() const
{
	return m_format;
}

void PutSlidesSaveAsRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

std::shared_ptr<ExportOptions> PutSlidesSaveAsRequest::getOptions() const
{
	return m_options;
}

void PutSlidesSaveAsRequest::setOptions(std::shared_ptr<ExportOptions> value)
{
	m_options = value;
}

utility::string_t PutSlidesSaveAsRequest::getPassword() const
{
	return m_password;
}

void PutSlidesSaveAsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlidesSaveAsRequest::getStorage() const
{
	return m_storage;
}

void PutSlidesSaveAsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PutSlidesSaveAsRequest::getFolder() const
{
	return m_folder;
}

void PutSlidesSaveAsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlidesSaveAsRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PutSlidesSaveAsRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PutSlidesSetDocumentPropertyRequest::PutSlidesSetDocumentPropertyRequest()
{
}

PutSlidesSetDocumentPropertyRequest::~PutSlidesSetDocumentPropertyRequest()
{
}

utility::string_t PutSlidesSetDocumentPropertyRequest::getName() const
{
	return m_name;
}

void PutSlidesSetDocumentPropertyRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t PutSlidesSetDocumentPropertyRequest::getPropertyName() const
{
	return m_propertyName;
}

void PutSlidesSetDocumentPropertyRequest::setPropertyName(utility::string_t value)
{
	m_propertyName = value;
}

std::shared_ptr<DocumentProperty> PutSlidesSetDocumentPropertyRequest::getProperty() const
{
	return m_property;
}

void PutSlidesSetDocumentPropertyRequest::setProperty(std::shared_ptr<DocumentProperty> value)
{
	m_property = value;
}

utility::string_t PutSlidesSetDocumentPropertyRequest::getPassword() const
{
	return m_password;
}

void PutSlidesSetDocumentPropertyRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlidesSetDocumentPropertyRequest::getFolder() const
{
	return m_folder;
}

void PutSlidesSetDocumentPropertyRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlidesSetDocumentPropertyRequest::getStorage() const
{
	return m_storage;
}

void PutSlidesSetDocumentPropertyRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSlidesSlideRequest::PutSlidesSlideRequest()
{
}

PutSlidesSlideRequest::~PutSlidesSlideRequest()
{
}

utility::string_t PutSlidesSlideRequest::getName() const
{
	return m_name;
}

void PutSlidesSlideRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSlidesSlideRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSlidesSlideRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::shared_ptr<Slide> PutSlidesSlideRequest::getSlideDto() const
{
	return m_slideDto;
}

void PutSlidesSlideRequest::setSlideDto(std::shared_ptr<Slide> value)
{
	m_slideDto = value;
}

utility::string_t PutSlidesSlideRequest::getPassword() const
{
	return m_password;
}

void PutSlidesSlideRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlidesSlideRequest::getFolder() const
{
	return m_folder;
}

void PutSlidesSlideRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlidesSlideRequest::getStorage() const
{
	return m_storage;
}

void PutSlidesSlideRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSlidesSlideBackgroundRequest::PutSlidesSlideBackgroundRequest()
{
}

PutSlidesSlideBackgroundRequest::~PutSlidesSlideBackgroundRequest()
{
}

utility::string_t PutSlidesSlideBackgroundRequest::getName() const
{
	return m_name;
}

void PutSlidesSlideBackgroundRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSlidesSlideBackgroundRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSlidesSlideBackgroundRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::shared_ptr<SlideBackground> PutSlidesSlideBackgroundRequest::getBackground() const
{
	return m_background;
}

void PutSlidesSlideBackgroundRequest::setBackground(std::shared_ptr<SlideBackground> value)
{
	m_background = value;
}

utility::string_t PutSlidesSlideBackgroundRequest::getFolder() const
{
	return m_folder;
}

void PutSlidesSlideBackgroundRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlidesSlideBackgroundRequest::getPassword() const
{
	return m_password;
}

void PutSlidesSlideBackgroundRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlidesSlideBackgroundRequest::getStorage() const
{
	return m_storage;
}

void PutSlidesSlideBackgroundRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSlidesSlideBackgroundColorRequest::PutSlidesSlideBackgroundColorRequest()
{
}

PutSlidesSlideBackgroundColorRequest::~PutSlidesSlideBackgroundColorRequest()
{
}

utility::string_t PutSlidesSlideBackgroundColorRequest::getName() const
{
	return m_name;
}

void PutSlidesSlideBackgroundColorRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSlidesSlideBackgroundColorRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSlidesSlideBackgroundColorRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PutSlidesSlideBackgroundColorRequest::getColor() const
{
	return m_color;
}

void PutSlidesSlideBackgroundColorRequest::setColor(utility::string_t value)
{
	m_color = value;
}

utility::string_t PutSlidesSlideBackgroundColorRequest::getFolder() const
{
	return m_folder;
}

void PutSlidesSlideBackgroundColorRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlidesSlideBackgroundColorRequest::getPassword() const
{
	return m_password;
}

void PutSlidesSlideBackgroundColorRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlidesSlideBackgroundColorRequest::getStorage() const
{
	return m_storage;
}

void PutSlidesSlideBackgroundColorRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSlidesSlidePropertiesRequest::PutSlidesSlidePropertiesRequest()
{
}

PutSlidesSlidePropertiesRequest::~PutSlidesSlidePropertiesRequest()
{
}

utility::string_t PutSlidesSlidePropertiesRequest::getName() const
{
	return m_name;
}

void PutSlidesSlidePropertiesRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::shared_ptr<SlideProperties> PutSlidesSlidePropertiesRequest::getDto() const
{
	return m_dto;
}

void PutSlidesSlidePropertiesRequest::setDto(std::shared_ptr<SlideProperties> value)
{
	m_dto = value;
}

utility::string_t PutSlidesSlidePropertiesRequest::getPassword() const
{
	return m_password;
}

void PutSlidesSlidePropertiesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlidesSlidePropertiesRequest::getFolder() const
{
	return m_folder;
}

void PutSlidesSlidePropertiesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlidesSlidePropertiesRequest::getStorage() const
{
	return m_storage;
}

void PutSlidesSlidePropertiesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSlidesSlideSizeRequest::PutSlidesSlideSizeRequest()
{
	m_widthIsSet = false;
	m_heightIsSet = false;
}

PutSlidesSlideSizeRequest::~PutSlidesSlideSizeRequest()
{
}

utility::string_t PutSlidesSlideSizeRequest::getName() const
{
	return m_name;
}

void PutSlidesSlideSizeRequest::setName(utility::string_t value)
{
	m_name = value;
}

utility::string_t PutSlidesSlideSizeRequest::getPassword() const
{
	return m_password;
}

void PutSlidesSlideSizeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlidesSlideSizeRequest::getStorage() const
{
	return m_storage;
}

void PutSlidesSlideSizeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

utility::string_t PutSlidesSlideSizeRequest::getFolder() const
{
	return m_folder;
}

void PutSlidesSlideSizeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

int32_t PutSlidesSlideSizeRequest::getWidth() const
{
	return m_width;
}

void PutSlidesSlideSizeRequest::setWidth(int32_t value)
{
	m_width = value;
	m_widthIsSet = true;
}

bool PutSlidesSlideSizeRequest::widthIsSet() const
{
	return m_widthIsSet;
}

void PutSlidesSlideSizeRequest::unsetWidth()
{
	m_widthIsSet = false;
}

int32_t PutSlidesSlideSizeRequest::getHeight() const
{
	return m_height;
}

void PutSlidesSlideSizeRequest::setHeight(int32_t value)
{
	m_height = value;
	m_heightIsSet = true;
}

bool PutSlidesSlideSizeRequest::heightIsSet() const
{
	return m_heightIsSet;
}

void PutSlidesSlideSizeRequest::unsetHeight()
{
	m_heightIsSet = false;
}

utility::string_t PutSlidesSlideSizeRequest::getSizeType() const
{
	return m_sizeType;
}

void PutSlidesSlideSizeRequest::setSizeType(utility::string_t value)
{
	m_sizeType = value;
}

utility::string_t PutSlidesSlideSizeRequest::getScaleType() const
{
	return m_scaleType;
}

void PutSlidesSlideSizeRequest::setScaleType(utility::string_t value)
{
	m_scaleType = value;
}

PutSlidesViewPropertiesRequest::PutSlidesViewPropertiesRequest()
{
}

PutSlidesViewPropertiesRequest::~PutSlidesViewPropertiesRequest()
{
}

utility::string_t PutSlidesViewPropertiesRequest::getName() const
{
	return m_name;
}

void PutSlidesViewPropertiesRequest::setName(utility::string_t value)
{
	m_name = value;
}

std::shared_ptr<ViewProperties> PutSlidesViewPropertiesRequest::getDto() const
{
	return m_dto;
}

void PutSlidesViewPropertiesRequest::setDto(std::shared_ptr<ViewProperties> value)
{
	m_dto = value;
}

utility::string_t PutSlidesViewPropertiesRequest::getPassword() const
{
	return m_password;
}

void PutSlidesViewPropertiesRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSlidesViewPropertiesRequest::getFolder() const
{
	return m_folder;
}

void PutSlidesViewPropertiesRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSlidesViewPropertiesRequest::getStorage() const
{
	return m_storage;
}

void PutSlidesViewPropertiesRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutSubshapeSaveAsRequest::PutSubshapeSaveAsRequest()
{
	m_scaleXIsSet = false;
	m_scaleYIsSet = false;
}

PutSubshapeSaveAsRequest::~PutSubshapeSaveAsRequest()
{
}

utility::string_t PutSubshapeSaveAsRequest::getName() const
{
	return m_name;
}

void PutSubshapeSaveAsRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutSubshapeSaveAsRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutSubshapeSaveAsRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

utility::string_t PutSubshapeSaveAsRequest::getPath() const
{
	return m_path;
}

void PutSubshapeSaveAsRequest::setPath(utility::string_t value)
{
	m_path = value;
}

int32_t PutSubshapeSaveAsRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutSubshapeSaveAsRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

utility::string_t PutSubshapeSaveAsRequest::getFormat() const
{
	return m_format;
}

void PutSubshapeSaveAsRequest::setFormat(utility::string_t value)
{
	m_format = value;
}

utility::string_t PutSubshapeSaveAsRequest::getOutPath() const
{
	return m_outPath;
}

void PutSubshapeSaveAsRequest::setOutPath(utility::string_t value)
{
	m_outPath = value;
}

std::shared_ptr<IShapeExportOptions> PutSubshapeSaveAsRequest::getOptions() const
{
	return m_options;
}

void PutSubshapeSaveAsRequest::setOptions(std::shared_ptr<IShapeExportOptions> value)
{
	m_options = value;
}

utility::string_t PutSubshapeSaveAsRequest::getPassword() const
{
	return m_password;
}

void PutSubshapeSaveAsRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutSubshapeSaveAsRequest::getFolder() const
{
	return m_folder;
}

void PutSubshapeSaveAsRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutSubshapeSaveAsRequest::getStorage() const
{
	return m_storage;
}

void PutSubshapeSaveAsRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

double PutSubshapeSaveAsRequest::getScaleX() const
{
	return m_scaleX;
}

void PutSubshapeSaveAsRequest::setScaleX(double value)
{
	m_scaleX = value;
	m_scaleXIsSet = true;
}

bool PutSubshapeSaveAsRequest::scaleXIsSet() const
{
	return m_scaleXIsSet;
}

void PutSubshapeSaveAsRequest::unsetScaleX()
{
	m_scaleXIsSet = false;
}

double PutSubshapeSaveAsRequest::getScaleY() const
{
	return m_scaleY;
}

void PutSubshapeSaveAsRequest::setScaleY(double value)
{
	m_scaleY = value;
	m_scaleYIsSet = true;
}

bool PutSubshapeSaveAsRequest::scaleYIsSet() const
{
	return m_scaleYIsSet;
}

void PutSubshapeSaveAsRequest::unsetScaleY()
{
	m_scaleYIsSet = false;
}

utility::string_t PutSubshapeSaveAsRequest::getBounds() const
{
	return m_bounds;
}

void PutSubshapeSaveAsRequest::setBounds(utility::string_t value)
{
	m_bounds = value;
}

utility::string_t PutSubshapeSaveAsRequest::getFontsFolder() const
{
	return m_fontsFolder;
}

void PutSubshapeSaveAsRequest::setFontsFolder(utility::string_t value)
{
	m_fontsFolder = value;
}

PutUpdateNotesSlideRequest::PutUpdateNotesSlideRequest()
{
}

PutUpdateNotesSlideRequest::~PutUpdateNotesSlideRequest()
{
}

utility::string_t PutUpdateNotesSlideRequest::getName() const
{
	return m_name;
}

void PutUpdateNotesSlideRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutUpdateNotesSlideRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutUpdateNotesSlideRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

std::shared_ptr<NotesSlide> PutUpdateNotesSlideRequest::getDto() const
{
	return m_dto;
}

void PutUpdateNotesSlideRequest::setDto(std::shared_ptr<NotesSlide> value)
{
	m_dto = value;
}

utility::string_t PutUpdateNotesSlideRequest::getPassword() const
{
	return m_password;
}

void PutUpdateNotesSlideRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutUpdateNotesSlideRequest::getFolder() const
{
	return m_folder;
}

void PutUpdateNotesSlideRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutUpdateNotesSlideRequest::getStorage() const
{
	return m_storage;
}

void PutUpdateNotesSlideRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutUpdateNotesSlideShapeRequest::PutUpdateNotesSlideShapeRequest()
{
}

PutUpdateNotesSlideShapeRequest::~PutUpdateNotesSlideShapeRequest()
{
}

utility::string_t PutUpdateNotesSlideShapeRequest::getName() const
{
	return m_name;
}

void PutUpdateNotesSlideShapeRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutUpdateNotesSlideShapeRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutUpdateNotesSlideShapeRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PutUpdateNotesSlideShapeRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutUpdateNotesSlideShapeRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

std::shared_ptr<ShapeBase> PutUpdateNotesSlideShapeRequest::getDto() const
{
	return m_dto;
}

void PutUpdateNotesSlideShapeRequest::setDto(std::shared_ptr<ShapeBase> value)
{
	m_dto = value;
}

utility::string_t PutUpdateNotesSlideShapeRequest::getPassword() const
{
	return m_password;
}

void PutUpdateNotesSlideShapeRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutUpdateNotesSlideShapeRequest::getFolder() const
{
	return m_folder;
}

void PutUpdateNotesSlideShapeRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutUpdateNotesSlideShapeRequest::getStorage() const
{
	return m_storage;
}

void PutUpdateNotesSlideShapeRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutUpdateNotesSlideShapeParagraphRequest::PutUpdateNotesSlideShapeParagraphRequest()
{
}

PutUpdateNotesSlideShapeParagraphRequest::~PutUpdateNotesSlideShapeParagraphRequest()
{
}

utility::string_t PutUpdateNotesSlideShapeParagraphRequest::getName() const
{
	return m_name;
}

void PutUpdateNotesSlideShapeParagraphRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutUpdateNotesSlideShapeParagraphRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutUpdateNotesSlideShapeParagraphRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PutUpdateNotesSlideShapeParagraphRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutUpdateNotesSlideShapeParagraphRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t PutUpdateNotesSlideShapeParagraphRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void PutUpdateNotesSlideShapeParagraphRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

std::shared_ptr<Paragraph> PutUpdateNotesSlideShapeParagraphRequest::getDto() const
{
	return m_dto;
}

void PutUpdateNotesSlideShapeParagraphRequest::setDto(std::shared_ptr<Paragraph> value)
{
	m_dto = value;
}

utility::string_t PutUpdateNotesSlideShapeParagraphRequest::getPassword() const
{
	return m_password;
}

void PutUpdateNotesSlideShapeParagraphRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutUpdateNotesSlideShapeParagraphRequest::getFolder() const
{
	return m_folder;
}

void PutUpdateNotesSlideShapeParagraphRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutUpdateNotesSlideShapeParagraphRequest::getStorage() const
{
	return m_storage;
}

void PutUpdateNotesSlideShapeParagraphRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

PutUpdateNotesSlideShapePortionRequest::PutUpdateNotesSlideShapePortionRequest()
{
}

PutUpdateNotesSlideShapePortionRequest::~PutUpdateNotesSlideShapePortionRequest()
{
}

utility::string_t PutUpdateNotesSlideShapePortionRequest::getName() const
{
	return m_name;
}

void PutUpdateNotesSlideShapePortionRequest::setName(utility::string_t value)
{
	m_name = value;
}

int32_t PutUpdateNotesSlideShapePortionRequest::getSlideIndex() const
{
	return m_slideIndex;
}

void PutUpdateNotesSlideShapePortionRequest::setSlideIndex(int32_t value)
{
	m_slideIndex = value;
}

int32_t PutUpdateNotesSlideShapePortionRequest::getShapeIndex() const
{
	return m_shapeIndex;
}

void PutUpdateNotesSlideShapePortionRequest::setShapeIndex(int32_t value)
{
	m_shapeIndex = value;
}

int32_t PutUpdateNotesSlideShapePortionRequest::getParagraphIndex() const
{
	return m_paragraphIndex;
}

void PutUpdateNotesSlideShapePortionRequest::setParagraphIndex(int32_t value)
{
	m_paragraphIndex = value;
}

int32_t PutUpdateNotesSlideShapePortionRequest::getPortionIndex() const
{
	return m_portionIndex;
}

void PutUpdateNotesSlideShapePortionRequest::setPortionIndex(int32_t value)
{
	m_portionIndex = value;
}

std::shared_ptr<Portion> PutUpdateNotesSlideShapePortionRequest::getDto() const
{
	return m_dto;
}

void PutUpdateNotesSlideShapePortionRequest::setDto(std::shared_ptr<Portion> value)
{
	m_dto = value;
}

utility::string_t PutUpdateNotesSlideShapePortionRequest::getPassword() const
{
	return m_password;
}

void PutUpdateNotesSlideShapePortionRequest::setPassword(utility::string_t value)
{
	m_password = value;
}

utility::string_t PutUpdateNotesSlideShapePortionRequest::getFolder() const
{
	return m_folder;
}

void PutUpdateNotesSlideShapePortionRequest::setFolder(utility::string_t value)
{
	m_folder = value;
}

utility::string_t PutUpdateNotesSlideShapePortionRequest::getStorage() const
{
	return m_storage;
}

void PutUpdateNotesSlideShapePortionRequest::setStorage(utility::string_t value)
{
	m_storage = value;
}

StorageExistsRequest::StorageExistsRequest()
{
}

StorageExistsRequest::~StorageExistsRequest()
{
}

utility::string_t StorageExistsRequest::getStorageName() const
{
	return m_storageName;
}

void StorageExistsRequest::setStorageName(utility::string_t value)
{
	m_storageName = value;
}

UploadFileRequest::UploadFileRequest()
{
}

UploadFileRequest::~UploadFileRequest()
{
}

utility::string_t UploadFileRequest::getPath() const
{
	return m_path;
}

void UploadFileRequest::setPath(utility::string_t value)
{
	m_path = value;
}

std::shared_ptr<HttpContent> UploadFileRequest::getFile() const
{
	return m_file;
}

void UploadFileRequest::setFile(std::shared_ptr<HttpContent> value)
{
	m_file = value;
}

utility::string_t UploadFileRequest::getStorageName() const
{
	return m_storageName;
}

void UploadFileRequest::setStorageName(utility::string_t value)
{
	m_storageName = value;
}

}
}

