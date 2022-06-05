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
 * PictureFill.h
 *
 * Picture fill.
 */

#ifndef _PictureFill_H_
#define _PictureFill_H_

#include "FillFormat.h"

#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/ImageTransformEffect.h"
#include "../model/ResourceUri.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Picture fill.
/// </summary>
class  PictureFill : public FillFormat
{
public:
	ASPOSE_DLL_EXPORT PictureFill();
	ASPOSE_DLL_EXPORT virtual ~PictureFill();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Percentage of image height that is cropped from the bottom.
	/// </summary>
	ASPOSE_DLL_EXPORT double getCropBottom() const;
	ASPOSE_DLL_EXPORT void setCropBottom(double value);
	/// <summary>
	/// Percentage of image height that is cropped from the left.
	/// </summary>
	ASPOSE_DLL_EXPORT double getCropLeft() const;
	ASPOSE_DLL_EXPORT void setCropLeft(double value);
	/// <summary>
	/// Percentage of image height that is cropped from the right.
	/// </summary>
	ASPOSE_DLL_EXPORT double getCropRight() const;
	ASPOSE_DLL_EXPORT void setCropRight(double value);
	/// <summary>
	/// Percentage of image height that is cropped from the top.
	/// </summary>
	ASPOSE_DLL_EXPORT double getCropTop() const;
	ASPOSE_DLL_EXPORT void setCropTop(double value);
	/// <summary>
	/// Picture resolution.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getDpi() const;
	ASPOSE_DLL_EXPORT void setDpi(int32_t value);
	/// <summary>
	/// Internal image link.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getImage() const;
	ASPOSE_DLL_EXPORT void setImage(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Base 64 image data.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getBase64Data() const;
	ASPOSE_DLL_EXPORT void setBase64Data(utility::string_t value);
	/// <summary>
	/// SVG image data.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSvgData() const;
	ASPOSE_DLL_EXPORT void setSvgData(utility::string_t value);
	/// <summary>
	/// Fill mode.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPictureFillMode() const;
	ASPOSE_DLL_EXPORT void setPictureFillMode(utility::string_t value);
	/// <summary>
	/// Image transform effects.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<ImageTransformEffect>> getImageTransformList() const;
	ASPOSE_DLL_EXPORT void setImageTransformList(std::vector<std::shared_ptr<ImageTransformEffect>> value);

protected:
	double m_CropBottom;
	double m_CropLeft;
	double m_CropRight;
	double m_CropTop;
	int32_t m_Dpi;
	std::shared_ptr<ResourceUri> m_Image;
	utility::string_t m_Base64Data;
	utility::string_t m_SvgData;
	utility::string_t m_PictureFillMode;
	std::vector<std::shared_ptr<ImageTransformEffect>> m_ImageTransformList;
};

}
}

#endif /* _PictureFill_H_ */
