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
 * SlideProperties.h
 *
 * Slide properties.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_SlideProperties_H_
#define ASPOSESLIDESCLOUD_MODEL_SlideProperties_H_

#include "ResourceBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Slide properties.
/// </summary>
class  SlideProperties : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT SlideProperties();
	ASPOSE_DLL_EXPORT virtual ~SlideProperties();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// First slide number.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getFirstSlideNumber() const;
	ASPOSE_DLL_EXPORT void setFirstSlideNumber(int32_t value);
	ASPOSE_DLL_EXPORT bool firstSlideNumberIsSet() const;
	ASPOSE_DLL_EXPORT void unsetFirstSlideNumber();
	/// <summary>
	/// Slide orientation.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getOrientation() const;
	ASPOSE_DLL_EXPORT void setOrientation(utility::string_t value);
	/// <summary>
	/// Scale type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getScaleType() const;
	ASPOSE_DLL_EXPORT void setScaleType(utility::string_t value);
	/// <summary>
	/// Size type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSizeType() const;
	ASPOSE_DLL_EXPORT void setSizeType(utility::string_t value);
	/// <summary>
	/// Width.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();
	/// <summary>
	/// Height.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();

protected:
	int32_t m_FirstSlideNumber;
	bool m_FirstSlideNumberIsSet;
	utility::string_t m_Orientation;
	utility::string_t m_ScaleType;
	utility::string_t m_SizeType;
	int32_t m_Width;
	bool m_WidthIsSet;
	int32_t m_Height;
	bool m_HeightIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_SlideProperties_H_ */
