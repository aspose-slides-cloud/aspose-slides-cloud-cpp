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
 * ColorScheme.h
 *
 * Slide&#39;s color scheme DTO
 */

#ifndef _ColorScheme_H_
#define _ColorScheme_H_

#include "ResourceBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Slide&#39;s color scheme DTO
/// </summary>
class  ColorScheme : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT ColorScheme();
	ASPOSE_DLL_EXPORT virtual ~ColorScheme();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// First accent color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAccent1() const;
	ASPOSE_DLL_EXPORT void setAccent1(utility::string_t value);
	/// <summary>
	/// Second accent color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAccent2() const;
	ASPOSE_DLL_EXPORT void setAccent2(utility::string_t value);
	/// <summary>
	/// Third accent color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAccent3() const;
	ASPOSE_DLL_EXPORT void setAccent3(utility::string_t value);
	/// <summary>
	/// Fourth accent color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAccent4() const;
	ASPOSE_DLL_EXPORT void setAccent4(utility::string_t value);
	/// <summary>
	/// Fifth accent color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAccent5() const;
	ASPOSE_DLL_EXPORT void setAccent5(utility::string_t value);
	/// <summary>
	/// Sixth accent color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAccent6() const;
	ASPOSE_DLL_EXPORT void setAccent6(utility::string_t value);
	/// <summary>
	/// First dark color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDark1() const;
	ASPOSE_DLL_EXPORT void setDark1(utility::string_t value);
	/// <summary>
	/// Second dark color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDark2() const;
	ASPOSE_DLL_EXPORT void setDark2(utility::string_t value);
	/// <summary>
	/// Visited hyperlink color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFollowedHyperlink() const;
	ASPOSE_DLL_EXPORT void setFollowedHyperlink(utility::string_t value);
	/// <summary>
	/// Hyperlink color/
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getHyperlink() const;
	ASPOSE_DLL_EXPORT void setHyperlink(utility::string_t value);
	/// <summary>
	/// First light color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLight1() const;
	ASPOSE_DLL_EXPORT void setLight1(utility::string_t value);
	/// <summary>
	/// Second light color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLight2() const;
	ASPOSE_DLL_EXPORT void setLight2(utility::string_t value);

protected:
	utility::string_t m_Accent1;
	utility::string_t m_Accent2;
	utility::string_t m_Accent3;
	utility::string_t m_Accent4;
	utility::string_t m_Accent5;
	utility::string_t m_Accent6;
	utility::string_t m_Dark1;
	utility::string_t m_Dark2;
	utility::string_t m_FollowedHyperlink;
	utility::string_t m_Hyperlink;
	utility::string_t m_Light1;
	utility::string_t m_Light2;
};

}
}

#endif /* _ColorScheme_H_ */
