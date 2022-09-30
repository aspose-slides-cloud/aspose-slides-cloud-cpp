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
 * ImageExportOptions.h
 *
 * Provides options that control how a presentation is saved in an image format.
 */

#ifndef _ImageExportOptions_H_
#define _ImageExportOptions_H_

#include "ImageExportOptionsBase.h"

#include "../model/FontFallbackRule.h"
#include "../model/FontSubstRule.h"
#include <cpprest/details/basic_types.h>
#include "../model/ImageExportOptionsBase.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a presentation is saved in an image format.
/// </summary>
class  ImageExportOptions : public ImageExportOptionsBase
{
public:
	ASPOSE_DLL_EXPORT ImageExportOptions();
	ASPOSE_DLL_EXPORT virtual ~ImageExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

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

protected:
	utility::string_t m_NotesPosition;
	utility::string_t m_CommentsPosition;
	int32_t m_CommentsAreaWidth;
	bool m_CommentsAreaWidthIsSet;
	utility::string_t m_CommentsAreaColor;
};

}
}

#endif /* _ImageExportOptions_H_ */
