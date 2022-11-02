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
 * DuotoneEffect.h
 *
 * Represents a Duotone effect.
 */

#ifndef _DuotoneEffect_H_
#define _DuotoneEffect_H_

#include "ImageTransformEffect.h"

#include <cpprest/details/basic_types.h>
#include "../model/ImageTransformEffect.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents a Duotone effect.
/// </summary>
class  DuotoneEffect : public ImageTransformEffect
{
public:
	ASPOSE_DLL_EXPORT DuotoneEffect();
	ASPOSE_DLL_EXPORT virtual ~DuotoneEffect();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Returns target color format for dark pixels.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getColor1() const;
	ASPOSE_DLL_EXPORT void setColor1(utility::string_t value);
	/// <summary>
	/// Returns target color format for light pixels.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getColor2() const;
	ASPOSE_DLL_EXPORT void setColor2(utility::string_t value);

protected:
	utility::string_t m_Color1;
	utility::string_t m_Color2;
};

}
}

#endif /* _DuotoneEffect_H_ */
