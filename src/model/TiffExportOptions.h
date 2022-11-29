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
 * TiffExportOptions.h
 *
 * Provides options that control how a presentation is saved in TIFF format.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_TiffExportOptions_H_
#define ASPOSESLIDESCLOUD_MODEL_TiffExportOptions_H_

#include "ImageExportOptionsBase.h"

#include "../model/FontFallbackRule.h"
#include "../model/FontSubstRule.h"
#include <cpprest/details/basic_types.h>
#include "../model/ImageExportOptionsBase.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a presentation is saved in TIFF format.
/// </summary>
class  TiffExportOptions : public ImageExportOptionsBase
{
public:
	ASPOSE_DLL_EXPORT TiffExportOptions();
	ASPOSE_DLL_EXPORT virtual ~TiffExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Compression type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCompression() const;
	ASPOSE_DLL_EXPORT void setCompression(utility::string_t value);
	/// <summary>
	/// Horizontal resolution, in dots per inch.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getDpiX() const;
	ASPOSE_DLL_EXPORT void setDpiX(int32_t value);
	ASPOSE_DLL_EXPORT bool dpiXIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDpiX();
	/// <summary>
	/// Vertical resolution, in dots per inch.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getDpiY() const;
	ASPOSE_DLL_EXPORT void setDpiY(int32_t value);
	ASPOSE_DLL_EXPORT bool dpiYIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDpiY();
	/// <summary>
	/// Specifies whether the generated document should include hidden slides or not. Default is false. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool isShowHiddenSlides() const;
	ASPOSE_DLL_EXPORT void setShowHiddenSlides(bool value);
	ASPOSE_DLL_EXPORT bool showHiddenSlidesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowHiddenSlides();
	/// <summary>
	/// Specifies the pixel format for the generated images. Read/write ImagePixelFormat.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPixelFormat() const;
	ASPOSE_DLL_EXPORT void setPixelFormat(utility::string_t value);
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
	ASPOSE_DLL_EXPORT bool commentsAreaWidthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetCommentsAreaWidth();
	/// <summary>
	/// Gets or sets the color of comments area (Applies only if comments are displayed on the right).
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCommentsAreaColor() const;
	ASPOSE_DLL_EXPORT void setCommentsAreaColor(utility::string_t value);
	/// <summary>
	/// True if comments that have no author are displayed. (Applies only if comments are displayed).
	/// </summary>
	ASPOSE_DLL_EXPORT bool isShowCommentsByNoAuthor() const;
	ASPOSE_DLL_EXPORT void setShowCommentsByNoAuthor(bool value);
	ASPOSE_DLL_EXPORT bool showCommentsByNoAuthorIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowCommentsByNoAuthor();

protected:
	utility::string_t m_Compression;
	int32_t m_DpiX;
	bool m_DpiXIsSet;
	int32_t m_DpiY;
	bool m_DpiYIsSet;
	bool m_ShowHiddenSlides;
	bool m_ShowHiddenSlidesIsSet;
	utility::string_t m_PixelFormat;
	utility::string_t m_NotesPosition;
	utility::string_t m_CommentsPosition;
	int32_t m_CommentsAreaWidth;
	bool m_CommentsAreaWidthIsSet;
	utility::string_t m_CommentsAreaColor;
	bool m_ShowCommentsByNoAuthor;
	bool m_ShowCommentsByNoAuthorIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_TiffExportOptions_H_ */
