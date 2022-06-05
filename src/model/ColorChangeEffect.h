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
 * ColorChangeEffect.h
 *
 * Represents a Color Change effect.
 */

#ifndef _ColorChangeEffect_H_
#define _ColorChangeEffect_H_

#include "ImageTransformEffect.h"

#include <cpprest/details/basic_types.h>
#include "../model/ImageTransformEffect.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents a Color Change effect.
/// </summary>
class  ColorChangeEffect : public ImageTransformEffect
{
public:
	ASPOSE_DLL_EXPORT ColorChangeEffect();
	ASPOSE_DLL_EXPORT virtual ~ColorChangeEffect();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Color which will be replaced.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFromColor() const;
	ASPOSE_DLL_EXPORT void setFromColor(utility::string_t value);
	/// <summary>
	/// Color which will replace.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getToColor() const;
	ASPOSE_DLL_EXPORT void setToColor(utility::string_t value);

protected:
	utility::string_t m_FromColor;
	utility::string_t m_ToColor;
};

}
}

#endif /* _ColorChangeEffect_H_ */
