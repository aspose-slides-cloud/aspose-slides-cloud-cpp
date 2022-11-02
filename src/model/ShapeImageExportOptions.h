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
 * ShapeImageExportOptions.h
 *
 * Provides options that control how a shape is saved in thumbnail.
 */

#ifndef _ShapeImageExportOptions_H_
#define _ShapeImageExportOptions_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a shape is saved in thumbnail.
/// </summary>
class  ShapeImageExportOptions : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ShapeImageExportOptions();
	ASPOSE_DLL_EXPORT virtual ~ShapeImageExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Get or sets scaling ratio by X axis.
	/// </summary>
	ASPOSE_DLL_EXPORT double getScaleX() const;
	ASPOSE_DLL_EXPORT void setScaleX(double value);
	ASPOSE_DLL_EXPORT bool scaleXIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleX();
	/// <summary>
	/// Get or sets scaling ratio by Y axis.
	/// </summary>
	ASPOSE_DLL_EXPORT double getScaleY() const;
	ASPOSE_DLL_EXPORT void setScaleY(double value);
	ASPOSE_DLL_EXPORT bool scaleYIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScaleY();
	/// <summary>
	/// Get or sets thumbnail bounds
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getThumbnailBounds() const;
	ASPOSE_DLL_EXPORT void setThumbnailBounds(utility::string_t value);
	/// <summary>
	/// Gets export format.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);

protected:
	double m_ScaleX;
	bool m_ScaleXIsSet;
	double m_ScaleY;
	bool m_ScaleYIsSet;
	utility::string_t m_ThumbnailBounds;
	utility::string_t m_Format;
};

}
}

#endif /* _ShapeImageExportOptions_H_ */
