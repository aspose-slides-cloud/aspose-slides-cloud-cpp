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
 * SwfExportOptions.h
 *
 * Provides options that control how a presentation is saved in SWF format.
 */

#ifndef _SwfExportOptions_H_
#define _SwfExportOptions_H_

#include "ExportOptions.h"

#include "../model/ExportOptions.h"
#include <cpprest/details/basic_types.h>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a presentation is saved in SWF format.
/// </summary>
class  SwfExportOptions : public ExportOptions
{
public:
	ASPOSE_DLL_EXPORT SwfExportOptions();
	ASPOSE_DLL_EXPORT virtual ~SwfExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Specifies whether the generated document should include hidden slides or not. Default is false. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowHiddenSlides() const;
	ASPOSE_DLL_EXPORT void setShowHiddenSlides(bool value);
	/// <summary>
	/// Specifies whether the generated SWF document should be compressed or not. Default is true. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getCompressed() const;
	ASPOSE_DLL_EXPORT void setCompressed(bool value);
	/// <summary>
	/// Specifies whether the generated SWF document should include the integrated document viewer or not. Default is true. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getViewerIncluded() const;
	ASPOSE_DLL_EXPORT void setViewerIncluded(bool value);
	/// <summary>
	/// Specifies whether border around pages should be shown. Default is true. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowPageBorder() const;
	ASPOSE_DLL_EXPORT void setShowPageBorder(bool value);
	/// <summary>
	/// Show/hide fullscreen button. Can be overridden in flashvars. Default is true. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowFullScreen() const;
	ASPOSE_DLL_EXPORT void setShowFullScreen(bool value);
	/// <summary>
	/// Show/hide page stepper. Can be overridden in flashvars. Default is true. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowPageStepper() const;
	ASPOSE_DLL_EXPORT void setShowPageStepper(bool value);
	/// <summary>
	/// Show/hide search section. Can be overridden in flashvars. Default is true. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowSearch() const;
	ASPOSE_DLL_EXPORT void setShowSearch(bool value);
	/// <summary>
	/// Show/hide whole top pane. Can be overridden in flashvars. Default is true. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowTopPane() const;
	ASPOSE_DLL_EXPORT void setShowTopPane(bool value);
	/// <summary>
	/// Show/hide bottom pane. Can be overridden in flashvars. Default is true. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowBottomPane() const;
	ASPOSE_DLL_EXPORT void setShowBottomPane(bool value);
	/// <summary>
	/// Show/hide left pane. Can be overridden in flashvars. Default is true. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowLeftPane() const;
	ASPOSE_DLL_EXPORT void setShowLeftPane(bool value);
	/// <summary>
	/// Start with opened left pane. Can be overridden in flashvars. Default is false. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getStartOpenLeftPane() const;
	ASPOSE_DLL_EXPORT void setStartOpenLeftPane(bool value);
	/// <summary>
	/// Enable/disable context menu. Default is true. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getEnableContextMenu() const;
	ASPOSE_DLL_EXPORT void setEnableContextMenu(bool value);
	/// <summary>
	/// Image that will be displayed as logo in the top right corner of the viewer. The image data is a base 64 string. Image should be 32x64 pixels PNG image, otherwise logo can be displayed improperly. 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLogoImage() const;
	ASPOSE_DLL_EXPORT void setLogoImage(utility::string_t value);
	/// <summary>
	/// Gets or sets the full hyperlink address for a logo. Has an effect only if a LogoImage is specified. 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLogoLink() const;
	ASPOSE_DLL_EXPORT void setLogoLink(utility::string_t value);
	/// <summary>
	/// Specifies the quality of JPEG images. Default is 95.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getJpegQuality() const;
	ASPOSE_DLL_EXPORT void setJpegQuality(int32_t value);
	/// <summary>
	/// Gets or sets the position of the notes on the page.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getNotesPosition() const;
	ASPOSE_DLL_EXPORT void setNotesPosition(utility::string_t value);
	/// <summary>
	/// Gets or sets the position of the comments on the page.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCommentsPosition() const;
	ASPOSE_DLL_EXPORT void setCommentsPosition(utility::string_t value);
	/// <summary>
	/// Gets or sets the width of the comment output area in pixels (Applies only if comments are displayed on the right).
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getCommentsAreaWidth() const;
	ASPOSE_DLL_EXPORT void setCommentsAreaWidth(int32_t value);
	/// <summary>
	/// Gets or sets the color of comments area (Applies only if comments are displayed on the right).
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCommentsAreaColor() const;
	ASPOSE_DLL_EXPORT void setCommentsAreaColor(utility::string_t value);
	/// <summary>
	/// True if comments that have no author are displayed. (Applies only if comments are displayed).
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowCommentsByNoAuthor() const;
	ASPOSE_DLL_EXPORT void setShowCommentsByNoAuthor(bool value);

protected:
	bool m_ShowHiddenSlides;
	bool m_Compressed;
	bool m_ViewerIncluded;
	bool m_ShowPageBorder;
	bool m_ShowFullScreen;
	bool m_ShowPageStepper;
	bool m_ShowSearch;
	bool m_ShowTopPane;
	bool m_ShowBottomPane;
	bool m_ShowLeftPane;
	bool m_StartOpenLeftPane;
	bool m_EnableContextMenu;
	utility::string_t m_LogoImage;
	utility::string_t m_LogoLink;
	int32_t m_JpegQuality;
	utility::string_t m_NotesPosition;
	utility::string_t m_CommentsPosition;
	int32_t m_CommentsAreaWidth;
	utility::string_t m_CommentsAreaColor;
	bool m_ShowCommentsByNoAuthor;
};

}
}

#endif /* _SwfExportOptions_H_ */
