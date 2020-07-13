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
 * Theme.h
 *
 * Represents Slide&#39;s theme 
 */

#ifndef _Theme_H_
#define _Theme_H_

#include "ResourceBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>
#include "../model/ResourceUriElement.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents Slide&#39;s theme 
/// </summary>
class  Theme : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT Theme();
	ASPOSE_DLL_EXPORT virtual ~Theme();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Name.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);
	/// <summary>
	/// Color scheme.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUriElement> getColorScheme() const;
	ASPOSE_DLL_EXPORT void setColorScheme(std::shared_ptr<ResourceUriElement> value);
	/// <summary>
	/// Font scheme.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUriElement> getFontScheme() const;
	ASPOSE_DLL_EXPORT void setFontScheme(std::shared_ptr<ResourceUriElement> value);
	/// <summary>
	/// Format scheme.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUriElement> getFormatScheme() const;
	ASPOSE_DLL_EXPORT void setFormatScheme(std::shared_ptr<ResourceUriElement> value);

protected:
	utility::string_t m_Name;
	std::shared_ptr<ResourceUriElement> m_ColorScheme;
	std::shared_ptr<ResourceUriElement> m_FontScheme;
	std::shared_ptr<ResourceUriElement> m_FormatScheme;
};

}
}

#endif /* _Theme_H_ */
