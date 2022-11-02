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
#include "SwfExportOptions.h"

namespace asposeslidescloud {
namespace model {

SwfExportOptions::SwfExportOptions()
{
	m_ShowHiddenSlidesIsSet = false;
	m_CompressedIsSet = false;
	m_ViewerIncludedIsSet = false;
	m_ShowPageBorderIsSet = false;
	m_ShowFullScreenIsSet = false;
	m_ShowPageStepperIsSet = false;
	m_ShowSearchIsSet = false;
	m_ShowTopPaneIsSet = false;
	m_ShowBottomPaneIsSet = false;
	m_ShowLeftPaneIsSet = false;
	m_StartOpenLeftPaneIsSet = false;
	m_EnableContextMenuIsSet = false;
	m_JpegQualityIsSet = false;
	m_CommentsAreaWidthIsSet = false;
	m_ShowCommentsByNoAuthorIsSet = false;
	setFormat(L"swf");
}

SwfExportOptions::~SwfExportOptions()
{
}

bool SwfExportOptions::getShowHiddenSlides() const
{
	return m_ShowHiddenSlides;
}

void SwfExportOptions::setShowHiddenSlides(bool value)
{
	m_ShowHiddenSlides = value;
	m_ShowHiddenSlidesIsSet = true;
}

bool SwfExportOptions::showHiddenSlidesIsSet() const
{
	return m_ShowHiddenSlidesIsSet;
}

void SwfExportOptions::unsetShowHiddenSlides()
{
	m_ShowHiddenSlidesIsSet = false;
}

bool SwfExportOptions::getCompressed() const
{
	return m_Compressed;
}

void SwfExportOptions::setCompressed(bool value)
{
	m_Compressed = value;
	m_CompressedIsSet = true;
}

bool SwfExportOptions::compressedIsSet() const
{
	return m_CompressedIsSet;
}

void SwfExportOptions::unsetCompressed()
{
	m_CompressedIsSet = false;
}

bool SwfExportOptions::getViewerIncluded() const
{
	return m_ViewerIncluded;
}

void SwfExportOptions::setViewerIncluded(bool value)
{
	m_ViewerIncluded = value;
	m_ViewerIncludedIsSet = true;
}

bool SwfExportOptions::viewerIncludedIsSet() const
{
	return m_ViewerIncludedIsSet;
}

void SwfExportOptions::unsetViewerIncluded()
{
	m_ViewerIncludedIsSet = false;
}

bool SwfExportOptions::getShowPageBorder() const
{
	return m_ShowPageBorder;
}

void SwfExportOptions::setShowPageBorder(bool value)
{
	m_ShowPageBorder = value;
	m_ShowPageBorderIsSet = true;
}

bool SwfExportOptions::showPageBorderIsSet() const
{
	return m_ShowPageBorderIsSet;
}

void SwfExportOptions::unsetShowPageBorder()
{
	m_ShowPageBorderIsSet = false;
}

bool SwfExportOptions::getShowFullScreen() const
{
	return m_ShowFullScreen;
}

void SwfExportOptions::setShowFullScreen(bool value)
{
	m_ShowFullScreen = value;
	m_ShowFullScreenIsSet = true;
}

bool SwfExportOptions::showFullScreenIsSet() const
{
	return m_ShowFullScreenIsSet;
}

void SwfExportOptions::unsetShowFullScreen()
{
	m_ShowFullScreenIsSet = false;
}

bool SwfExportOptions::getShowPageStepper() const
{
	return m_ShowPageStepper;
}

void SwfExportOptions::setShowPageStepper(bool value)
{
	m_ShowPageStepper = value;
	m_ShowPageStepperIsSet = true;
}

bool SwfExportOptions::showPageStepperIsSet() const
{
	return m_ShowPageStepperIsSet;
}

void SwfExportOptions::unsetShowPageStepper()
{
	m_ShowPageStepperIsSet = false;
}

bool SwfExportOptions::getShowSearch() const
{
	return m_ShowSearch;
}

void SwfExportOptions::setShowSearch(bool value)
{
	m_ShowSearch = value;
	m_ShowSearchIsSet = true;
}

bool SwfExportOptions::showSearchIsSet() const
{
	return m_ShowSearchIsSet;
}

void SwfExportOptions::unsetShowSearch()
{
	m_ShowSearchIsSet = false;
}

bool SwfExportOptions::getShowTopPane() const
{
	return m_ShowTopPane;
}

void SwfExportOptions::setShowTopPane(bool value)
{
	m_ShowTopPane = value;
	m_ShowTopPaneIsSet = true;
}

bool SwfExportOptions::showTopPaneIsSet() const
{
	return m_ShowTopPaneIsSet;
}

void SwfExportOptions::unsetShowTopPane()
{
	m_ShowTopPaneIsSet = false;
}

bool SwfExportOptions::getShowBottomPane() const
{
	return m_ShowBottomPane;
}

void SwfExportOptions::setShowBottomPane(bool value)
{
	m_ShowBottomPane = value;
	m_ShowBottomPaneIsSet = true;
}

bool SwfExportOptions::showBottomPaneIsSet() const
{
	return m_ShowBottomPaneIsSet;
}

void SwfExportOptions::unsetShowBottomPane()
{
	m_ShowBottomPaneIsSet = false;
}

bool SwfExportOptions::getShowLeftPane() const
{
	return m_ShowLeftPane;
}

void SwfExportOptions::setShowLeftPane(bool value)
{
	m_ShowLeftPane = value;
	m_ShowLeftPaneIsSet = true;
}

bool SwfExportOptions::showLeftPaneIsSet() const
{
	return m_ShowLeftPaneIsSet;
}

void SwfExportOptions::unsetShowLeftPane()
{
	m_ShowLeftPaneIsSet = false;
}

bool SwfExportOptions::getStartOpenLeftPane() const
{
	return m_StartOpenLeftPane;
}

void SwfExportOptions::setStartOpenLeftPane(bool value)
{
	m_StartOpenLeftPane = value;
	m_StartOpenLeftPaneIsSet = true;
}

bool SwfExportOptions::startOpenLeftPaneIsSet() const
{
	return m_StartOpenLeftPaneIsSet;
}

void SwfExportOptions::unsetStartOpenLeftPane()
{
	m_StartOpenLeftPaneIsSet = false;
}

bool SwfExportOptions::getEnableContextMenu() const
{
	return m_EnableContextMenu;
}

void SwfExportOptions::setEnableContextMenu(bool value)
{
	m_EnableContextMenu = value;
	m_EnableContextMenuIsSet = true;
}

bool SwfExportOptions::enableContextMenuIsSet() const
{
	return m_EnableContextMenuIsSet;
}

void SwfExportOptions::unsetEnableContextMenu()
{
	m_EnableContextMenuIsSet = false;
}

utility::string_t SwfExportOptions::getLogoImage() const
{
	return m_LogoImage;
}

void SwfExportOptions::setLogoImage(utility::string_t value)
{
	m_LogoImage = value;
	
}

utility::string_t SwfExportOptions::getLogoLink() const
{
	return m_LogoLink;
}

void SwfExportOptions::setLogoLink(utility::string_t value)
{
	m_LogoLink = value;
	
}

int32_t SwfExportOptions::getJpegQuality() const
{
	return m_JpegQuality;
}

void SwfExportOptions::setJpegQuality(int32_t value)
{
	m_JpegQuality = value;
	m_JpegQualityIsSet = true;
}

bool SwfExportOptions::jpegQualityIsSet() const
{
	return m_JpegQualityIsSet;
}

void SwfExportOptions::unsetJpegQuality()
{
	m_JpegQualityIsSet = false;
}

utility::string_t SwfExportOptions::getNotesPosition() const
{
	return m_NotesPosition;
}

void SwfExportOptions::setNotesPosition(utility::string_t value)
{
	m_NotesPosition = value;
	
}

utility::string_t SwfExportOptions::getCommentsPosition() const
{
	return m_CommentsPosition;
}

void SwfExportOptions::setCommentsPosition(utility::string_t value)
{
	m_CommentsPosition = value;
	
}

int32_t SwfExportOptions::getCommentsAreaWidth() const
{
	return m_CommentsAreaWidth;
}

void SwfExportOptions::setCommentsAreaWidth(int32_t value)
{
	m_CommentsAreaWidth = value;
	m_CommentsAreaWidthIsSet = true;
}

bool SwfExportOptions::commentsAreaWidthIsSet() const
{
	return m_CommentsAreaWidthIsSet;
}

void SwfExportOptions::unsetCommentsAreaWidth()
{
	m_CommentsAreaWidthIsSet = false;
}

utility::string_t SwfExportOptions::getCommentsAreaColor() const
{
	return m_CommentsAreaColor;
}

void SwfExportOptions::setCommentsAreaColor(utility::string_t value)
{
	m_CommentsAreaColor = value;
	
}

bool SwfExportOptions::getShowCommentsByNoAuthor() const
{
	return m_ShowCommentsByNoAuthor;
}

void SwfExportOptions::setShowCommentsByNoAuthor(bool value)
{
	m_ShowCommentsByNoAuthor = value;
	m_ShowCommentsByNoAuthorIsSet = true;
}

bool SwfExportOptions::showCommentsByNoAuthorIsSet() const
{
	return m_ShowCommentsByNoAuthorIsSet;
}

void SwfExportOptions::unsetShowCommentsByNoAuthor()
{
	m_ShowCommentsByNoAuthorIsSet = false;
}

web::json::value SwfExportOptions::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	if(m_ShowHiddenSlidesIsSet)
	{
		val[utility::conversions::to_string_t("ShowHiddenSlides")] = ModelBase::toJson(m_ShowHiddenSlides);
	}
	if(m_CompressedIsSet)
	{
		val[utility::conversions::to_string_t("Compressed")] = ModelBase::toJson(m_Compressed);
	}
	if(m_ViewerIncludedIsSet)
	{
		val[utility::conversions::to_string_t("ViewerIncluded")] = ModelBase::toJson(m_ViewerIncluded);
	}
	if(m_ShowPageBorderIsSet)
	{
		val[utility::conversions::to_string_t("ShowPageBorder")] = ModelBase::toJson(m_ShowPageBorder);
	}
	if(m_ShowFullScreenIsSet)
	{
		val[utility::conversions::to_string_t("ShowFullScreen")] = ModelBase::toJson(m_ShowFullScreen);
	}
	if(m_ShowPageStepperIsSet)
	{
		val[utility::conversions::to_string_t("ShowPageStepper")] = ModelBase::toJson(m_ShowPageStepper);
	}
	if(m_ShowSearchIsSet)
	{
		val[utility::conversions::to_string_t("ShowSearch")] = ModelBase::toJson(m_ShowSearch);
	}
	if(m_ShowTopPaneIsSet)
	{
		val[utility::conversions::to_string_t("ShowTopPane")] = ModelBase::toJson(m_ShowTopPane);
	}
	if(m_ShowBottomPaneIsSet)
	{
		val[utility::conversions::to_string_t("ShowBottomPane")] = ModelBase::toJson(m_ShowBottomPane);
	}
	if(m_ShowLeftPaneIsSet)
	{
		val[utility::conversions::to_string_t("ShowLeftPane")] = ModelBase::toJson(m_ShowLeftPane);
	}
	if(m_StartOpenLeftPaneIsSet)
	{
		val[utility::conversions::to_string_t("StartOpenLeftPane")] = ModelBase::toJson(m_StartOpenLeftPane);
	}
	if(m_EnableContextMenuIsSet)
	{
		val[utility::conversions::to_string_t("EnableContextMenu")] = ModelBase::toJson(m_EnableContextMenu);
	}
	if (!m_LogoImage.empty())
	{
		val[utility::conversions::to_string_t("LogoImage")] = ModelBase::toJson(m_LogoImage);
	}
	if (!m_LogoLink.empty())
	{
		val[utility::conversions::to_string_t("LogoLink")] = ModelBase::toJson(m_LogoLink);
	}
	if(m_JpegQualityIsSet)
	{
		val[utility::conversions::to_string_t("JpegQuality")] = ModelBase::toJson(m_JpegQuality);
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

void SwfExportOptions::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
	web::json::value* jsonForShowHiddenSlides = ModelBase::getField(val, "ShowHiddenSlides");
	if(jsonForShowHiddenSlides != nullptr && !jsonForShowHiddenSlides->is_null())
	{
		setShowHiddenSlides(ModelBase::boolFromJson(*jsonForShowHiddenSlides));
	}
	web::json::value* jsonForCompressed = ModelBase::getField(val, "Compressed");
	if(jsonForCompressed != nullptr && !jsonForCompressed->is_null())
	{
		setCompressed(ModelBase::boolFromJson(*jsonForCompressed));
	}
	web::json::value* jsonForViewerIncluded = ModelBase::getField(val, "ViewerIncluded");
	if(jsonForViewerIncluded != nullptr && !jsonForViewerIncluded->is_null())
	{
		setViewerIncluded(ModelBase::boolFromJson(*jsonForViewerIncluded));
	}
	web::json::value* jsonForShowPageBorder = ModelBase::getField(val, "ShowPageBorder");
	if(jsonForShowPageBorder != nullptr && !jsonForShowPageBorder->is_null())
	{
		setShowPageBorder(ModelBase::boolFromJson(*jsonForShowPageBorder));
	}
	web::json::value* jsonForShowFullScreen = ModelBase::getField(val, "ShowFullScreen");
	if(jsonForShowFullScreen != nullptr && !jsonForShowFullScreen->is_null())
	{
		setShowFullScreen(ModelBase::boolFromJson(*jsonForShowFullScreen));
	}
	web::json::value* jsonForShowPageStepper = ModelBase::getField(val, "ShowPageStepper");
	if(jsonForShowPageStepper != nullptr && !jsonForShowPageStepper->is_null())
	{
		setShowPageStepper(ModelBase::boolFromJson(*jsonForShowPageStepper));
	}
	web::json::value* jsonForShowSearch = ModelBase::getField(val, "ShowSearch");
	if(jsonForShowSearch != nullptr && !jsonForShowSearch->is_null())
	{
		setShowSearch(ModelBase::boolFromJson(*jsonForShowSearch));
	}
	web::json::value* jsonForShowTopPane = ModelBase::getField(val, "ShowTopPane");
	if(jsonForShowTopPane != nullptr && !jsonForShowTopPane->is_null())
	{
		setShowTopPane(ModelBase::boolFromJson(*jsonForShowTopPane));
	}
	web::json::value* jsonForShowBottomPane = ModelBase::getField(val, "ShowBottomPane");
	if(jsonForShowBottomPane != nullptr && !jsonForShowBottomPane->is_null())
	{
		setShowBottomPane(ModelBase::boolFromJson(*jsonForShowBottomPane));
	}
	web::json::value* jsonForShowLeftPane = ModelBase::getField(val, "ShowLeftPane");
	if(jsonForShowLeftPane != nullptr && !jsonForShowLeftPane->is_null())
	{
		setShowLeftPane(ModelBase::boolFromJson(*jsonForShowLeftPane));
	}
	web::json::value* jsonForStartOpenLeftPane = ModelBase::getField(val, "StartOpenLeftPane");
	if(jsonForStartOpenLeftPane != nullptr && !jsonForStartOpenLeftPane->is_null())
	{
		setStartOpenLeftPane(ModelBase::boolFromJson(*jsonForStartOpenLeftPane));
	}
	web::json::value* jsonForEnableContextMenu = ModelBase::getField(val, "EnableContextMenu");
	if(jsonForEnableContextMenu != nullptr && !jsonForEnableContextMenu->is_null())
	{
		setEnableContextMenu(ModelBase::boolFromJson(*jsonForEnableContextMenu));
	}
	web::json::value* jsonForLogoImage = ModelBase::getField(val, "LogoImage");
	if(jsonForLogoImage != nullptr && !jsonForLogoImage->is_null())
	{
		setLogoImage(ModelBase::stringFromJson(*jsonForLogoImage));
	}
	web::json::value* jsonForLogoLink = ModelBase::getField(val, "LogoLink");
	if(jsonForLogoLink != nullptr && !jsonForLogoLink->is_null())
	{
		setLogoLink(ModelBase::stringFromJson(*jsonForLogoLink));
	}
	web::json::value* jsonForJpegQuality = ModelBase::getField(val, "JpegQuality");
	if(jsonForJpegQuality != nullptr && !jsonForJpegQuality->is_null() && jsonForJpegQuality->is_number())
	{
		setJpegQuality(ModelBase::int32_tFromJson(*jsonForJpegQuality));
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

