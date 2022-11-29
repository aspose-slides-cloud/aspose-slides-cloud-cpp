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



#include "../ClassRegistry.h"
#include "HtmlExportOptions.h"

namespace asposeslidescloud {
namespace model {

HtmlExportOptions::HtmlExportOptions()
{
	m_SaveAsZipIsSet = false;
	m_ShowHiddenSlidesIsSet = false;
	m_SvgResponsiveLayoutIsSet = false;
	m_JpegQualityIsSet = false;
	m_DeletePicturesCroppedAreasIsSet = false;
	m_CommentsAreaWidthIsSet = false;
	m_ShowCommentsByNoAuthorIsSet = false;
	setFormat(L"html");
}

HtmlExportOptions::~HtmlExportOptions()
{
}

bool HtmlExportOptions::isSaveAsZip() const
{
	return m_SaveAsZip;
}

void HtmlExportOptions::setSaveAsZip(bool value)
{
	m_SaveAsZip = value;
	m_SaveAsZipIsSet = true;
}

bool HtmlExportOptions::saveAsZipIsSet() const
{
	return m_SaveAsZipIsSet;
}

void HtmlExportOptions::unsetSaveAsZip()
{
	m_SaveAsZipIsSet = false;
}

utility::string_t HtmlExportOptions::getSubDirectoryName() const
{
	return m_SubDirectoryName;
}

void HtmlExportOptions::setSubDirectoryName(utility::string_t value)
{
	m_SubDirectoryName = value;
	
}

bool HtmlExportOptions::isShowHiddenSlides() const
{
	return m_ShowHiddenSlides;
}

void HtmlExportOptions::setShowHiddenSlides(bool value)
{
	m_ShowHiddenSlides = value;
	m_ShowHiddenSlidesIsSet = true;
}

bool HtmlExportOptions::showHiddenSlidesIsSet() const
{
	return m_ShowHiddenSlidesIsSet;
}

void HtmlExportOptions::unsetShowHiddenSlides()
{
	m_ShowHiddenSlidesIsSet = false;
}

bool HtmlExportOptions::isSvgResponsiveLayout() const
{
	return m_SvgResponsiveLayout;
}

void HtmlExportOptions::setSvgResponsiveLayout(bool value)
{
	m_SvgResponsiveLayout = value;
	m_SvgResponsiveLayoutIsSet = true;
}

bool HtmlExportOptions::svgResponsiveLayoutIsSet() const
{
	return m_SvgResponsiveLayoutIsSet;
}

void HtmlExportOptions::unsetSvgResponsiveLayout()
{
	m_SvgResponsiveLayoutIsSet = false;
}

int32_t HtmlExportOptions::getJpegQuality() const
{
	return m_JpegQuality;
}

void HtmlExportOptions::setJpegQuality(int32_t value)
{
	m_JpegQuality = value;
	m_JpegQualityIsSet = true;
}

bool HtmlExportOptions::jpegQualityIsSet() const
{
	return m_JpegQualityIsSet;
}

void HtmlExportOptions::unsetJpegQuality()
{
	m_JpegQualityIsSet = false;
}

utility::string_t HtmlExportOptions::getPicturesCompression() const
{
	return m_PicturesCompression;
}

void HtmlExportOptions::setPicturesCompression(utility::string_t value)
{
	m_PicturesCompression = value;
	
}

bool HtmlExportOptions::isDeletePicturesCroppedAreas() const
{
	return m_DeletePicturesCroppedAreas;
}

void HtmlExportOptions::setDeletePicturesCroppedAreas(bool value)
{
	m_DeletePicturesCroppedAreas = value;
	m_DeletePicturesCroppedAreasIsSet = true;
}

bool HtmlExportOptions::deletePicturesCroppedAreasIsSet() const
{
	return m_DeletePicturesCroppedAreasIsSet;
}

void HtmlExportOptions::unsetDeletePicturesCroppedAreas()
{
	m_DeletePicturesCroppedAreasIsSet = false;
}

utility::string_t HtmlExportOptions::getNotesPosition() const
{
	return m_NotesPosition;
}

void HtmlExportOptions::setNotesPosition(utility::string_t value)
{
	m_NotesPosition = value;
	
}

utility::string_t HtmlExportOptions::getCommentsPosition() const
{
	return m_CommentsPosition;
}

void HtmlExportOptions::setCommentsPosition(utility::string_t value)
{
	m_CommentsPosition = value;
	
}

int32_t HtmlExportOptions::getCommentsAreaWidth() const
{
	return m_CommentsAreaWidth;
}

void HtmlExportOptions::setCommentsAreaWidth(int32_t value)
{
	m_CommentsAreaWidth = value;
	m_CommentsAreaWidthIsSet = true;
}

bool HtmlExportOptions::commentsAreaWidthIsSet() const
{
	return m_CommentsAreaWidthIsSet;
}

void HtmlExportOptions::unsetCommentsAreaWidth()
{
	m_CommentsAreaWidthIsSet = false;
}

utility::string_t HtmlExportOptions::getCommentsAreaColor() const
{
	return m_CommentsAreaColor;
}

void HtmlExportOptions::setCommentsAreaColor(utility::string_t value)
{
	m_CommentsAreaColor = value;
	
}

bool HtmlExportOptions::isShowCommentsByNoAuthor() const
{
	return m_ShowCommentsByNoAuthor;
}

void HtmlExportOptions::setShowCommentsByNoAuthor(bool value)
{
	m_ShowCommentsByNoAuthor = value;
	m_ShowCommentsByNoAuthorIsSet = true;
}

bool HtmlExportOptions::showCommentsByNoAuthorIsSet() const
{
	return m_ShowCommentsByNoAuthorIsSet;
}

void HtmlExportOptions::unsetShowCommentsByNoAuthor()
{
	m_ShowCommentsByNoAuthorIsSet = false;
}

web::json::value HtmlExportOptions::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	if(m_SaveAsZipIsSet)
	{
		val[utility::conversions::to_string_t("SaveAsZip")] = ModelBase::toJson(m_SaveAsZip);
	}
	if (!m_SubDirectoryName.empty())
	{
		val[utility::conversions::to_string_t("SubDirectoryName")] = ModelBase::toJson(m_SubDirectoryName);
	}
	if(m_ShowHiddenSlidesIsSet)
	{
		val[utility::conversions::to_string_t("ShowHiddenSlides")] = ModelBase::toJson(m_ShowHiddenSlides);
	}
	if(m_SvgResponsiveLayoutIsSet)
	{
		val[utility::conversions::to_string_t("SvgResponsiveLayout")] = ModelBase::toJson(m_SvgResponsiveLayout);
	}
	if(m_JpegQualityIsSet)
	{
		val[utility::conversions::to_string_t("JpegQuality")] = ModelBase::toJson(m_JpegQuality);
	}
	if (!m_PicturesCompression.empty())
	{
		val[utility::conversions::to_string_t("PicturesCompression")] = ModelBase::toJson(m_PicturesCompression);
	}
	if(m_DeletePicturesCroppedAreasIsSet)
	{
		val[utility::conversions::to_string_t("DeletePicturesCroppedAreas")] = ModelBase::toJson(m_DeletePicturesCroppedAreas);
	}
	if (!m_NotesPosition.empty())
	{
		val[utility::conversions::to_string_t("NotesPosition")] = ModelBase::toJson(m_NotesPosition);
	}
	if (!m_CommentsPosition.empty())
	{
		val[utility::conversions::to_string_t("CommentsPosition")] = ModelBase::toJson(m_CommentsPosition);
	}
	if(m_CommentsAreaWidthIsSet)
	{
		val[utility::conversions::to_string_t("CommentsAreaWidth")] = ModelBase::toJson(m_CommentsAreaWidth);
	}
	if (!m_CommentsAreaColor.empty())
	{
		val[utility::conversions::to_string_t("CommentsAreaColor")] = ModelBase::toJson(m_CommentsAreaColor);
	}
	if(m_ShowCommentsByNoAuthorIsSet)
	{
		val[utility::conversions::to_string_t("ShowCommentsByNoAuthor")] = ModelBase::toJson(m_ShowCommentsByNoAuthor);
	}
	return val;
}

void HtmlExportOptions::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
	web::json::value* jsonForSaveAsZip = ModelBase::getField(val, "SaveAsZip");
	if(jsonForSaveAsZip != nullptr && !jsonForSaveAsZip->is_null())
	{
		setSaveAsZip(ModelBase::boolFromJson(*jsonForSaveAsZip));
	}
	web::json::value* jsonForSubDirectoryName = ModelBase::getField(val, "SubDirectoryName");
	if(jsonForSubDirectoryName != nullptr && !jsonForSubDirectoryName->is_null())
	{
		setSubDirectoryName(ModelBase::stringFromJson(*jsonForSubDirectoryName));
	}
	web::json::value* jsonForShowHiddenSlides = ModelBase::getField(val, "ShowHiddenSlides");
	if(jsonForShowHiddenSlides != nullptr && !jsonForShowHiddenSlides->is_null())
	{
		setShowHiddenSlides(ModelBase::boolFromJson(*jsonForShowHiddenSlides));
	}
	web::json::value* jsonForSvgResponsiveLayout = ModelBase::getField(val, "SvgResponsiveLayout");
	if(jsonForSvgResponsiveLayout != nullptr && !jsonForSvgResponsiveLayout->is_null())
	{
		setSvgResponsiveLayout(ModelBase::boolFromJson(*jsonForSvgResponsiveLayout));
	}
	web::json::value* jsonForJpegQuality = ModelBase::getField(val, "JpegQuality");
	if(jsonForJpegQuality != nullptr && !jsonForJpegQuality->is_null() && jsonForJpegQuality->is_number())
	{
		setJpegQuality(ModelBase::int32_tFromJson(*jsonForJpegQuality));
	}
	web::json::value* jsonForPicturesCompression = ModelBase::getField(val, "PicturesCompression");
	if(jsonForPicturesCompression != nullptr && !jsonForPicturesCompression->is_null())
	{
		setPicturesCompression(ModelBase::stringFromJson(*jsonForPicturesCompression));
	}
	web::json::value* jsonForDeletePicturesCroppedAreas = ModelBase::getField(val, "DeletePicturesCroppedAreas");
	if(jsonForDeletePicturesCroppedAreas != nullptr && !jsonForDeletePicturesCroppedAreas->is_null())
	{
		setDeletePicturesCroppedAreas(ModelBase::boolFromJson(*jsonForDeletePicturesCroppedAreas));
	}
	web::json::value* jsonForNotesPosition = ModelBase::getField(val, "NotesPosition");
	if(jsonForNotesPosition != nullptr && !jsonForNotesPosition->is_null())
	{
		setNotesPosition(ModelBase::stringFromJson(*jsonForNotesPosition));
	}
	web::json::value* jsonForCommentsPosition = ModelBase::getField(val, "CommentsPosition");
	if(jsonForCommentsPosition != nullptr && !jsonForCommentsPosition->is_null())
	{
		setCommentsPosition(ModelBase::stringFromJson(*jsonForCommentsPosition));
	}
	web::json::value* jsonForCommentsAreaWidth = ModelBase::getField(val, "CommentsAreaWidth");
	if(jsonForCommentsAreaWidth != nullptr && !jsonForCommentsAreaWidth->is_null() && jsonForCommentsAreaWidth->is_number())
	{
		setCommentsAreaWidth(ModelBase::int32_tFromJson(*jsonForCommentsAreaWidth));
	}
	web::json::value* jsonForCommentsAreaColor = ModelBase::getField(val, "CommentsAreaColor");
	if(jsonForCommentsAreaColor != nullptr && !jsonForCommentsAreaColor->is_null())
	{
		setCommentsAreaColor(ModelBase::stringFromJson(*jsonForCommentsAreaColor));
	}
	web::json::value* jsonForShowCommentsByNoAuthor = ModelBase::getField(val, "ShowCommentsByNoAuthor");
	if(jsonForShowCommentsByNoAuthor != nullptr && !jsonForShowCommentsByNoAuthor->is_null())
	{
		setShowCommentsByNoAuthor(ModelBase::boolFromJson(*jsonForShowCommentsByNoAuthor));
	}
}

}
}

