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
 * FontData.h
 *
 * Represents font info.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_FontData_H_
#define ASPOSESLIDESCLOUD_MODEL_FontData_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents font info.
/// </summary>
class  FontData : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT FontData();
	ASPOSE_DLL_EXPORT virtual ~FontData();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Font name
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFontName() const;
	ASPOSE_DLL_EXPORT void setFontName(utility::string_t value);
	/// <summary>
	/// Returns true if font is embedded.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsEmbedded() const;
	ASPOSE_DLL_EXPORT void setIsEmbedded(bool value);
	ASPOSE_DLL_EXPORT bool isEmbeddedIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsEmbedded();
	/// <summary>
	/// Returns true for a custom font (contained in fontsFolder directory).
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsCustom() const;
	ASPOSE_DLL_EXPORT void setIsCustom(bool value);
	ASPOSE_DLL_EXPORT bool isCustomIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsCustom();

protected:
	utility::string_t m_FontName;
	bool m_IsEmbedded;
	bool m_IsEmbeddedIsSet;
	bool m_IsCustom;
	bool m_IsCustomIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_FontData_H_ */
