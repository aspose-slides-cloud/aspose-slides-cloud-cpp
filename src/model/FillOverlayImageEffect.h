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
 * FillOverlayImageEffect.h
 *
 * Represents a Fill Overlay effect. A fill overlay may be used to specify an additional fill for an object and blend the two fills together.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_FillOverlayImageEffect_H_
#define ASPOSESLIDESCLOUD_MODEL_FillOverlayImageEffect_H_

#include "ImageTransformEffect.h"

#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/ImageTransformEffect.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents a Fill Overlay effect. A fill overlay may be used to specify an additional fill for an object and blend the two fills together.
/// </summary>
class  FillOverlayImageEffect : public ImageTransformEffect
{
public:
	ASPOSE_DLL_EXPORT FillOverlayImageEffect();
	ASPOSE_DLL_EXPORT virtual ~FillOverlayImageEffect();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// FillBlendMode.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getBlend() const;
	ASPOSE_DLL_EXPORT void setBlend(utility::string_t value);
	/// <summary>
	/// Fill format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FillFormat> getFillFormat() const;
	ASPOSE_DLL_EXPORT void setFillFormat(std::shared_ptr<FillFormat> value);

protected:
	utility::string_t m_Blend;
	std::shared_ptr<FillFormat> m_FillFormat;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_FillOverlayImageEffect_H_ */
