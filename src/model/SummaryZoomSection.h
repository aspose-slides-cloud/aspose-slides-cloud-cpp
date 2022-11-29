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
 * SummaryZoomSection.h
 *
 * Represents summary zoom section
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_SummaryZoomSection_H_
#define ASPOSESLIDESCLOUD_MODEL_SummaryZoomSection_H_

#include "SectionZoomFrame.h"

#include "../model/SectionZoomFrame.h"
#include "../model/Hyperlink.h"
#include "../model/EffectFormat.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ResourceUri.h"
#include "../model/ThreeDFormat.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents summary zoom section
/// </summary>
class  SummaryZoomSection : public SectionZoomFrame
{
public:
	ASPOSE_DLL_EXPORT SummaryZoomSection();
	ASPOSE_DLL_EXPORT virtual ~SummaryZoomSection();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Section title
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTitle() const;
	ASPOSE_DLL_EXPORT void setTitle(utility::string_t value);
	/// <summary>
	/// Description of the Summary Zoom Section object. 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDescription() const;
	ASPOSE_DLL_EXPORT void setDescription(utility::string_t value);

protected:
	utility::string_t m_Title;
	utility::string_t m_Description;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_SummaryZoomSection_H_ */
