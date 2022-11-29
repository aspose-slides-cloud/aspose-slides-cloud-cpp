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
 * PresetShadowEffect.h
 *
 * Represents preset shadow effect 
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_PresetShadowEffect_H_
#define ASPOSESLIDESCLOUD_MODEL_PresetShadowEffect_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents preset shadow effect 
/// </summary>
class  PresetShadowEffect : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT PresetShadowEffect();
	ASPOSE_DLL_EXPORT virtual ~PresetShadowEffect();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// direction
	/// </summary>
	ASPOSE_DLL_EXPORT double getDirection() const;
	ASPOSE_DLL_EXPORT void setDirection(double value);
	/// <summary>
	/// distance
	/// </summary>
	ASPOSE_DLL_EXPORT double getDistance() const;
	ASPOSE_DLL_EXPORT void setDistance(double value);
	/// <summary>
	/// preset
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPreset() const;
	ASPOSE_DLL_EXPORT void setPreset(utility::string_t value);
	/// <summary>
	/// shadow color
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getShadowColor() const;
	ASPOSE_DLL_EXPORT void setShadowColor(utility::string_t value);

protected:
	double m_Direction;
	double m_Distance;
	utility::string_t m_Preset;
	utility::string_t m_ShadowColor;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_PresetShadowEffect_H_ */
