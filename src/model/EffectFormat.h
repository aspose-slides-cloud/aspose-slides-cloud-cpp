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
 * EffectFormat.h
 *
 * Effect format
 */

#ifndef _EffectFormat_H_
#define _EffectFormat_H_

#include "../ModelBase.h"

#include "../model/BlurEffect.h"
#include "../model/ReflectionEffect.h"
#include "../model/SoftEdgeEffect.h"
#include "../model/GlowEffect.h"
#include "../model/OuterShadowEffect.h"
#include "../model/FillOverlayEffect.h"
#include "../model/InnerShadowEffect.h"
#include "../model/PresetShadowEffect.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Effect format
/// </summary>
class  EffectFormat : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT EffectFormat();
	ASPOSE_DLL_EXPORT virtual ~EffectFormat();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// blur effect
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<BlurEffect> getBlur() const;
	ASPOSE_DLL_EXPORT void setBlur(std::shared_ptr<BlurEffect> value);
	/// <summary>
	/// glow effect
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<GlowEffect> getGlow() const;
	ASPOSE_DLL_EXPORT void setGlow(std::shared_ptr<GlowEffect> value);
	/// <summary>
	/// inner shadow effect
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<InnerShadowEffect> getInnerShadow() const;
	ASPOSE_DLL_EXPORT void setInnerShadow(std::shared_ptr<InnerShadowEffect> value);
	/// <summary>
	/// outer shadow effect
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<OuterShadowEffect> getOuterShadow() const;
	ASPOSE_DLL_EXPORT void setOuterShadow(std::shared_ptr<OuterShadowEffect> value);
	/// <summary>
	/// preset shadow effect
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<PresetShadowEffect> getPresetShadow() const;
	ASPOSE_DLL_EXPORT void setPresetShadow(std::shared_ptr<PresetShadowEffect> value);
	/// <summary>
	/// soft edge effect
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<SoftEdgeEffect> getSoftEdge() const;
	ASPOSE_DLL_EXPORT void setSoftEdge(std::shared_ptr<SoftEdgeEffect> value);
	/// <summary>
	/// reflection effect
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ReflectionEffect> getReflection() const;
	ASPOSE_DLL_EXPORT void setReflection(std::shared_ptr<ReflectionEffect> value);
	/// <summary>
	/// fill overlay effect
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FillOverlayEffect> getFillOverlay() const;
	ASPOSE_DLL_EXPORT void setFillOverlay(std::shared_ptr<FillOverlayEffect> value);

protected:
	std::shared_ptr<BlurEffect> m_Blur;
	std::shared_ptr<GlowEffect> m_Glow;
	std::shared_ptr<InnerShadowEffect> m_InnerShadow;
	std::shared_ptr<OuterShadowEffect> m_OuterShadow;
	std::shared_ptr<PresetShadowEffect> m_PresetShadow;
	std::shared_ptr<SoftEdgeEffect> m_SoftEdge;
	std::shared_ptr<ReflectionEffect> m_Reflection;
	std::shared_ptr<FillOverlayEffect> m_FillOverlay;
};

}
}

#endif /* _EffectFormat_H_ */
