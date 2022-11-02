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
 * SummaryZoomFrame.h
 *
 * Summary zoom frame.
 */

#ifndef _SummaryZoomFrame_H_
#define _SummaryZoomFrame_H_

#include "ShapeBase.h"

#include "../model/SummaryZoomSection.h"
#include "../model/Hyperlink.h"
#include "../model/EffectFormat.h"
#include "../model/ShapeBase.h"
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
/// Summary zoom frame.
/// </summary>
class  SummaryZoomFrame : public ShapeBase
{
public:
	ASPOSE_DLL_EXPORT SummaryZoomFrame();
	ASPOSE_DLL_EXPORT virtual ~SummaryZoomFrame();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Zoom layout type
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getZoomLayout() const;
	ASPOSE_DLL_EXPORT void setZoomLayout(utility::string_t value);
	/// <summary>
	/// Zoom frame sections
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<SummaryZoomSection>> getSections() const;
	ASPOSE_DLL_EXPORT void setSections(std::vector<std::shared_ptr<SummaryZoomSection>> value);

protected:
	utility::string_t m_ZoomLayout;
	std::vector<std::shared_ptr<SummaryZoomSection>> m_Sections;
};

}
}

#endif /* _SummaryZoomFrame_H_ */
