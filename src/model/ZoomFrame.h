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
 * ZoomFrame.h
 *
 * Zoom frame.
 */

#ifndef _ZoomFrame_H_
#define _ZoomFrame_H_

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
/// Zoom frame.
/// </summary>
class  ZoomFrame : public ZoomObject
{
public:
	ASPOSE_DLL_EXPORT ZoomFrame();
	ASPOSE_DLL_EXPORT virtual ~ZoomFrame();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Links to the target slide
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getTargetSlideIndex() const;
	ASPOSE_DLL_EXPORT void setTargetSlideIndex(int32_t value);
	ASPOSE_DLL_EXPORT bool targetSlideIndexIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTargetSlideIndex();

protected:
	int32_t m_TargetSlideIndex;
	bool m_TargetSlideIndexIsSet;
};

}
}

#endif /* _ZoomFrame_H_ */
