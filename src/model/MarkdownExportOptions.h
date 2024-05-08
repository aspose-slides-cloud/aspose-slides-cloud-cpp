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
 * MarkdownExportOptions.h
 *
 * Provides options that control how a presentation is saved in Html5 format.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_MarkdownExportOptions_H_
#define ASPOSESLIDESCLOUD_MODEL_MarkdownExportOptions_H_

#include "ExportOptions.h"

#include "../model/ExportOptions.h"
#include "../model/FontFallbackRule.h"
#include "../model/FontSubstRule.h"
#include <cpprest/details/basic_types.h>
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a presentation is saved in Html5 format.
/// </summary>
class  MarkdownExportOptions : public ExportOptions
{
public:
	ASPOSE_DLL_EXPORT MarkdownExportOptions();
	ASPOSE_DLL_EXPORT virtual ~MarkdownExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Specifies markdown specification to convert presentation. Default is TextOnly.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getExportType() const;
	ASPOSE_DLL_EXPORT void setExportType(utility::string_t value);
	/// <summary>
	/// Specifies markdown specification to convert presentation. Default is MultiMarkdown.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFlavor() const;
	ASPOSE_DLL_EXPORT void setFlavor(utility::string_t value);
	/// <summary>
	/// Specifies whether the generated document should have new lines of \\\\r(Macintosh), \\\\n(Unix) or \\\\r\\\\n(Windows). Default is Unix.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getNewLineType() const;
	ASPOSE_DLL_EXPORT void setNewLineType(utility::string_t value);
	/// <summary>
	/// Specifies folder name to save images. Default is Images. 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getImagesSaveFolderName() const;
	ASPOSE_DLL_EXPORT void setImagesSaveFolderName(utility::string_t value);
	/// <summary>
	/// Specifies whether the generated document should include slide number. Default is false. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool isShowSlideNumber() const;
	ASPOSE_DLL_EXPORT void setShowSlideNumber(bool value);
	ASPOSE_DLL_EXPORT bool showSlideNumberIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowSlideNumber();
	/// <summary>
	/// Specifies whether the generated document should include comments. Default is false. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool isShowComments() const;
	ASPOSE_DLL_EXPORT void setShowComments(bool value);
	ASPOSE_DLL_EXPORT bool showCommentsIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowComments();
	/// <summary>
	/// Specifies whether the generated document should include hidden slides. Default is false. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool isShowHiddenSlides() const;
	ASPOSE_DLL_EXPORT void setShowHiddenSlides(bool value);
	ASPOSE_DLL_EXPORT bool showHiddenSlidesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowHiddenSlides();

protected:
	utility::string_t m_ExportType;
	utility::string_t m_Flavor;
	utility::string_t m_NewLineType;
	utility::string_t m_ImagesSaveFolderName;
	bool m_ShowSlideNumber;
	bool m_ShowSlideNumberIsSet;
	bool m_ShowComments;
	bool m_ShowCommentsIsSet;
	bool m_ShowHiddenSlides;
	bool m_ShowHiddenSlidesIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_MarkdownExportOptions_H_ */
