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
 * TintEffect.h
 *
 * Represents a Tint effect.
 */

#ifndef _TintEffect_H_
#define _TintEffect_H_

#include "ImageTransformEffect.h"

#include <cpprest/details/basic_types.h>
#include "../model/ImageTransformEffect.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents a Tint effect.
/// </summary>
class  TintEffect : public ImageTransformEffect
{
public:
	ASPOSE_DLL_EXPORT TintEffect();
	ASPOSE_DLL_EXPORT virtual ~TintEffect();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Hue
	/// </summary>
	ASPOSE_DLL_EXPORT double getHue() const;
	ASPOSE_DLL_EXPORT void setHue(double value);
	/// <summary>
	/// Amount
	/// </summary>
	ASPOSE_DLL_EXPORT double getAmount() const;
	ASPOSE_DLL_EXPORT void setAmount(double value);

protected:
	double m_Hue;
	double m_Amount;
};

}
}

#endif /* _TintEffect_H_ */
