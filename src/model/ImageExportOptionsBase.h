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
 * ImageExportOptionsBase.h
 *
 * The class provides shared options for image formats.
 */

#ifndef _ImageExportOptionsBase_H_
#define _ImageExportOptionsBase_H_

#include "ExportOptions.h"

#include "../model/ExportOptions.h"
#include "../model/FontFallbackRule.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// The class provides shared options for image formats.
/// </summary>
class  ImageExportOptionsBase : public ExportOptions
{
public:
	ASPOSE_DLL_EXPORT ImageExportOptionsBase();
	ASPOSE_DLL_EXPORT virtual ~ImageExportOptionsBase();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets the height of slides in the output image format.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();
	/// <summary>
	/// Gets or sets the height of slides in the output the output image format.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();

protected:
	int32_t m_Height;
	bool m_HeightIsSet;
	int32_t m_Width;
	bool m_WidthIsSet;
};

}
}

#endif /* _ImageExportOptionsBase_H_ */
