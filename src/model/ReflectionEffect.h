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
 * ReflectionEffect.h
 *
 * Represents reflection effect 
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_ReflectionEffect_H_
#define ASPOSESLIDESCLOUD_MODEL_ReflectionEffect_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents reflection effect 
/// </summary>
class  ReflectionEffect : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ReflectionEffect();
	ASPOSE_DLL_EXPORT virtual ~ReflectionEffect();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// direction
	/// </summary>
	ASPOSE_DLL_EXPORT double getDirection() const;
	ASPOSE_DLL_EXPORT void setDirection(double value);
	/// <summary>
	/// fade direction
	/// </summary>
	ASPOSE_DLL_EXPORT double getFadeDirection() const;
	ASPOSE_DLL_EXPORT void setFadeDirection(double value);
	/// <summary>
	/// distance
	/// </summary>
	ASPOSE_DLL_EXPORT double getDistance() const;
	ASPOSE_DLL_EXPORT void setDistance(double value);
	/// <summary>
	/// blur radius
	/// </summary>
	ASPOSE_DLL_EXPORT double getBlurRadius() const;
	ASPOSE_DLL_EXPORT void setBlurRadius(double value);
	/// <summary>
	/// scale horizontal
	/// </summary>
	ASPOSE_DLL_EXPORT double getScaleHorizontal() const;
	ASPOSE_DLL_EXPORT void setScaleHorizontal(double value);
	/// <summary>
	/// scale vertical
	/// </summary>
	ASPOSE_DLL_EXPORT double getScaleVertical() const;
	ASPOSE_DLL_EXPORT void setScaleVertical(double value);
	/// <summary>
	/// skew horizontal
	/// </summary>
	ASPOSE_DLL_EXPORT double getSkewHorizontal() const;
	ASPOSE_DLL_EXPORT void setSkewHorizontal(double value);
	/// <summary>
	/// skew vertical
	/// </summary>
	ASPOSE_DLL_EXPORT double getSkewVertical() const;
	ASPOSE_DLL_EXPORT void setSkewVertical(double value);
	/// <summary>
	/// start pos alpha
	/// </summary>
	ASPOSE_DLL_EXPORT double getStartPosAlpha() const;
	ASPOSE_DLL_EXPORT void setStartPosAlpha(double value);
	/// <summary>
	/// end pos alpha
	/// </summary>
	ASPOSE_DLL_EXPORT double getEndPosAlpha() const;
	ASPOSE_DLL_EXPORT void setEndPosAlpha(double value);
	/// <summary>
	/// start reflection opacity
	/// </summary>
	ASPOSE_DLL_EXPORT double getStartReflectionOpacity() const;
	ASPOSE_DLL_EXPORT void setStartReflectionOpacity(double value);
	/// <summary>
	/// end reflection opacity
	/// </summary>
	ASPOSE_DLL_EXPORT double getEndReflectionOpacity() const;
	ASPOSE_DLL_EXPORT void setEndReflectionOpacity(double value);
	/// <summary>
	/// rectangle alignment
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getRectangleAlign() const;
	ASPOSE_DLL_EXPORT void setRectangleAlign(utility::string_t value);
	/// <summary>
	/// true if the reflection should rotate with the shape when the shape is rotated
	/// </summary>
	ASPOSE_DLL_EXPORT bool isRotateShadowWithShape() const;
	ASPOSE_DLL_EXPORT void setRotateShadowWithShape(bool value);

protected:
	double m_Direction;
	double m_FadeDirection;
	double m_Distance;
	double m_BlurRadius;
	double m_ScaleHorizontal;
	double m_ScaleVertical;
	double m_SkewHorizontal;
	double m_SkewVertical;
	double m_StartPosAlpha;
	double m_EndPosAlpha;
	double m_StartReflectionOpacity;
	double m_EndReflectionOpacity;
	utility::string_t m_RectangleAlign;
	bool m_RotateShadowWithShape;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_ReflectionEffect_H_ */
