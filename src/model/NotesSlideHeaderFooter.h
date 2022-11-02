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
 * NotesSlideHeaderFooter.h
 *
 * Represents header/footer info of notes slide
 */

#ifndef _NotesSlideHeaderFooter_H_
#define _NotesSlideHeaderFooter_H_

#include "ResourceBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents header/footer info of notes slide
/// </summary>
class  NotesSlideHeaderFooter : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT NotesSlideHeaderFooter();
	ASPOSE_DLL_EXPORT virtual ~NotesSlideHeaderFooter();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// True if date is displayed in the footer
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsDateTimeVisible() const;
	ASPOSE_DLL_EXPORT void setIsDateTimeVisible(bool value);
	ASPOSE_DLL_EXPORT bool isDateTimeVisibleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsDateTimeVisible();
	/// <summary>
	/// Text to be displayed as date in the footer
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDateTimeText() const;
	ASPOSE_DLL_EXPORT void setDateTimeText(utility::string_t value);
	/// <summary>
	/// True if footer is displayed
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsFooterVisible() const;
	ASPOSE_DLL_EXPORT void setIsFooterVisible(bool value);
	ASPOSE_DLL_EXPORT bool isFooterVisibleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsFooterVisible();
	/// <summary>
	/// Text to be displayed in the footer
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFooterText() const;
	ASPOSE_DLL_EXPORT void setFooterText(utility::string_t value);
	/// <summary>
	/// True if header is displayed
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsHeaderVisible() const;
	ASPOSE_DLL_EXPORT void setIsHeaderVisible(bool value);
	ASPOSE_DLL_EXPORT bool isHeaderVisibleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsHeaderVisible();
	/// <summary>
	/// Text to be displayed in the header
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getHeaderText() const;
	ASPOSE_DLL_EXPORT void setHeaderText(utility::string_t value);
	/// <summary>
	/// True if slide number is displayed in the footer
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsSlideNumberVisible() const;
	ASPOSE_DLL_EXPORT void setIsSlideNumberVisible(bool value);
	ASPOSE_DLL_EXPORT bool isSlideNumberVisibleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsSlideNumberVisible();

protected:
	bool m_IsDateTimeVisible;
	bool m_IsDateTimeVisibleIsSet;
	utility::string_t m_DateTimeText;
	bool m_IsFooterVisible;
	bool m_IsFooterVisibleIsSet;
	utility::string_t m_FooterText;
	bool m_IsHeaderVisible;
	bool m_IsHeaderVisibleIsSet;
	utility::string_t m_HeaderText;
	bool m_IsSlideNumberVisible;
	bool m_IsSlideNumberVisibleIsSet;
};

}
}

#endif /* _NotesSlideHeaderFooter_H_ */
