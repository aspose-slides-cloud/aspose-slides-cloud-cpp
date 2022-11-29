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
 * ZoomObject.h
 *
 * Zoom object.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_ZoomObject_H_
#define ASPOSESLIDESCLOUD_MODEL_ZoomObject_H_

#include "ShapeBase.h"

#include "../model/Hyperlink.h"
#include "../model/EffectFormat.h"
#include "../model/ShapeBase.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ResourceUri.h"
#include "../model/ThreeDFormat.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Zoom object.
/// </summary>
class  ZoomObject : public ShapeBase
{
public:
	ASPOSE_DLL_EXPORT ZoomObject();
	ASPOSE_DLL_EXPORT virtual ~ZoomObject();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Image type of a zoom object. 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getImageType() const;
	ASPOSE_DLL_EXPORT void setImageType(utility::string_t value);
	/// <summary>
	/// Navigation behavior in slideshow. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool isReturnToParent() const;
	ASPOSE_DLL_EXPORT void setReturnToParent(bool value);
	ASPOSE_DLL_EXPORT bool returnToParentIsSet() const;
	ASPOSE_DLL_EXPORT void unsetReturnToParent();
	/// <summary>
	/// Specifies whether the Zoom will use the background of the destination slide.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isShowBackground() const;
	ASPOSE_DLL_EXPORT void setShowBackground(bool value);
	ASPOSE_DLL_EXPORT bool showBackgroundIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowBackground();
	/// <summary>
	/// Internal image link for zoom object
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getImage() const;
	ASPOSE_DLL_EXPORT void setImage(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Duration of the transition between Zoom and slide.
	/// </summary>
	ASPOSE_DLL_EXPORT double getTransitionDuration() const;
	ASPOSE_DLL_EXPORT void setTransitionDuration(double value);
	ASPOSE_DLL_EXPORT bool transitionDurationIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTransitionDuration();

protected:
	utility::string_t m_ImageType;
	bool m_ReturnToParent;
	bool m_ReturnToParentIsSet;
	bool m_ShowBackground;
	bool m_ShowBackgroundIsSet;
	std::shared_ptr<ResourceUri> m_Image;
	double m_TransitionDuration;
	bool m_TransitionDurationIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_ZoomObject_H_ */
