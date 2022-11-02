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
 * BlurImageEffect.h
 *
 * Represents a Blur effect that is applied to the entire shape, including its fill. All color channels, including alpha, are affected.
 */

#ifndef _BlurImageEffect_H_
#define _BlurImageEffect_H_

#include "ImageTransformEffect.h"

#include <cpprest/details/basic_types.h>
#include "../model/ImageTransformEffect.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents a Blur effect that is applied to the entire shape, including its fill. All color channels, including alpha, are affected.
/// </summary>
class  BlurImageEffect : public ImageTransformEffect
{
public:
	ASPOSE_DLL_EXPORT BlurImageEffect();
	ASPOSE_DLL_EXPORT virtual ~BlurImageEffect();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Returns or sets blur radius.
	/// </summary>
	ASPOSE_DLL_EXPORT double getRadius() const;
	ASPOSE_DLL_EXPORT void setRadius(double value);
	/// <summary>
	/// Determines whether the bounds of the object should be grown as a result of the blurring. True indicates the bounds are grown while false indicates that they are not.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getGrow() const;
	ASPOSE_DLL_EXPORT void setGrow(bool value);

protected:
	double m_Radius;
	bool m_Grow;
};

}
}

#endif /* _BlurImageEffect_H_ */
