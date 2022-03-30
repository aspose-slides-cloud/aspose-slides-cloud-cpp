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
 * SlideModernComment.h
 *
 * Represents modern comment of slide
 */

#ifndef _SlideModernComment_H_
#define _SlideModernComment_H_

#include "SlideCommentBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/SlideCommentBase.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents modern comment of slide
/// </summary>
class  SlideModernComment : public SlideCommentBase
{
public:
	ASPOSE_DLL_EXPORT SlideModernComment();
	ASPOSE_DLL_EXPORT virtual ~SlideModernComment();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Returns or sets starting position of text selection in text frame if the comment associated with AutoShape. Read/write Int32.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getTextSelectionStart() const;
	ASPOSE_DLL_EXPORT void setTextSelectionStart(int32_t value);
	ASPOSE_DLL_EXPORT bool textSelectionStartIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTextSelectionStart();
	/// <summary>
	/// Returns or sets text selection length in text frame if the comment associated with AutoShape. Read/write Int32.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getTextSelectionLength() const;
	ASPOSE_DLL_EXPORT void setTextSelectionLength(int32_t value);
	ASPOSE_DLL_EXPORT bool textSelectionLengthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTextSelectionLength();
	/// <summary>
	/// Returns or sets the status of the comment. Read/write ModernCommentStatus.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getStatus() const;
	ASPOSE_DLL_EXPORT void setStatus(utility::string_t value);

protected:
	int32_t m_TextSelectionStart;
	bool m_TextSelectionStartIsSet;
	int32_t m_TextSelectionLength;
	bool m_TextSelectionLengthIsSet;
	utility::string_t m_Status;
};

}
}

#endif /* _SlideModernComment_H_ */
