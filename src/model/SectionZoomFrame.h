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
 * SectionZoomFrame.h
 *
 * Section zoom frame.             
 */

#ifndef _SectionZoomFrame_H_
#define _SectionZoomFrame_H_

#include "ZoomObject.h"

#include "../model/Hyperlink.h"
#include "../model/EffectFormat.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ResourceUri.h"
#include "../model/ThreeDFormat.h"
#include "../model/ZoomObject.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Section zoom frame.             
/// </summary>
class  SectionZoomFrame : public ZoomObject
{
public:
	ASPOSE_DLL_EXPORT SectionZoomFrame();
	ASPOSE_DLL_EXPORT virtual ~SectionZoomFrame();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Index of the target section
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getTargetSectionIndex() const;
	ASPOSE_DLL_EXPORT void setTargetSectionIndex(int32_t value);
	ASPOSE_DLL_EXPORT bool targetSectionIndexIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTargetSectionIndex();

protected:
	int32_t m_TargetSectionIndex;
	bool m_TargetSectionIndexIsSet;
};

}
}

#endif /* _SectionZoomFrame_H_ */
