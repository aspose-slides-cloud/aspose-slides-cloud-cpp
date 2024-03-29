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
 * Image.h
 *
 * Represents image DTO.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_Image_H_
#define ASPOSESLIDESCLOUD_MODEL_Image_H_

#include "ResourceBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents image DTO.
/// </summary>
class  Image : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT Image();
	ASPOSE_DLL_EXPORT virtual ~Image();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Get or sets the width of an image.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	/// <summary>
	/// Get or sets the height of an image.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	/// <summary>
	/// Get or sets the content type of an image.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getContentType() const;
	ASPOSE_DLL_EXPORT void setContentType(utility::string_t value);

protected:
	int32_t m_Width;
	int32_t m_Height;
	utility::string_t m_ContentType;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_Image_H_ */
