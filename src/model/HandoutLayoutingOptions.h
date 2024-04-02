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
 * HandoutLayoutingOptions.h
 *
 * Handout layouting options
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_HandoutLayoutingOptions_H_
#define ASPOSESLIDESCLOUD_MODEL_HandoutLayoutingOptions_H_

#include "SlidesLayoutOptions.h"

#include "../model/SlidesLayoutOptions.h"
#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Handout layouting options
/// </summary>
class  HandoutLayoutingOptions : public SlidesLayoutOptions
{
public:
	ASPOSE_DLL_EXPORT HandoutLayoutingOptions();
	ASPOSE_DLL_EXPORT virtual ~HandoutLayoutingOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Specified how many pages and in what sequence will be placed on the page.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getHandout() const;
	ASPOSE_DLL_EXPORT void setHandout(utility::string_t value);
	/// <summary>
	/// True to print the displayed slide numbers.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isPrintSlideNumbers() const;
	ASPOSE_DLL_EXPORT void setPrintSlideNumbers(bool value);
	ASPOSE_DLL_EXPORT bool printSlideNumbersIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPrintSlideNumbers();
	/// <summary>
	/// True to display comments on slide.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isPrintComments() const;
	ASPOSE_DLL_EXPORT void setPrintComments(bool value);
	ASPOSE_DLL_EXPORT bool printCommentsIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPrintComments();
	/// <summary>
	/// True to draw frames around the displayed slides.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isPrintFrameSlide() const;
	ASPOSE_DLL_EXPORT void setPrintFrameSlide(bool value);
	ASPOSE_DLL_EXPORT bool printFrameSlideIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPrintFrameSlide();

protected:
	utility::string_t m_Handout;
	bool m_PrintSlideNumbers;
	bool m_PrintSlideNumbersIsSet;
	bool m_PrintComments;
	bool m_PrintCommentsIsSet;
	bool m_PrintFrameSlide;
	bool m_PrintFrameSlideIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_HandoutLayoutingOptions_H_ */
