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
 * ExportOptions.h
 *
 * Represents export options for whole presentation.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_ExportOptions_H_
#define ASPOSESLIDESCLOUD_MODEL_ExportOptions_H_

#include "../ModelBase.h"

#include "../model/FontFallbackRule.h"
#include "../model/FontSubstRule.h"
#include <cpprest/details/basic_types.h>
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents export options for whole presentation.
/// </summary>
class  ExportOptions : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ExportOptions();
	ASPOSE_DLL_EXPORT virtual ~ExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Default regular font for rendering the presentation. 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDefaultRegularFont() const;
	ASPOSE_DLL_EXPORT void setDefaultRegularFont(utility::string_t value);
	/// <summary>
	/// Gets of sets list of font fallback rules.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<FontFallbackRule>> getFontFallbackRules() const;
	ASPOSE_DLL_EXPORT void setFontFallbackRules(std::vector<std::shared_ptr<FontFallbackRule>> value);
	/// <summary>
	/// Gets of sets list of font substitution rules.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<FontSubstRule>> getFontSubstRules() const;
	ASPOSE_DLL_EXPORT void setFontSubstRules(std::vector<std::shared_ptr<FontSubstRule>> value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

protected:
	utility::string_t m_DefaultRegularFont;
	std::vector<std::shared_ptr<FontFallbackRule>> m_FontFallbackRules;
	std::vector<std::shared_ptr<FontSubstRule>> m_FontSubstRules;
	utility::string_t m_Format;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_ExportOptions_H_ */
