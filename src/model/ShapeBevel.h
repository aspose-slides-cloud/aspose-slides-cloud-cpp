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
 * ShapeBevel.h
 *
 * ShapeBevel
 */

#ifndef _ShapeBevel_H_
#define _ShapeBevel_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// ShapeBevel
/// </summary>
class  ShapeBevel : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ShapeBevel();
	ASPOSE_DLL_EXPORT virtual ~ShapeBevel();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Bevel type
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getBevelType() const;
	ASPOSE_DLL_EXPORT void setBevelType(utility::string_t value);
	/// <summary>
	/// Bevel width
	/// </summary>
	ASPOSE_DLL_EXPORT double getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(double value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();
	/// <summary>
	/// Bevel height
	/// </summary>
	ASPOSE_DLL_EXPORT double getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(double value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();

protected:
	utility::string_t m_BevelType;
	double m_Width;
	bool m_WidthIsSet;
	double m_Height;
	bool m_HeightIsSet;
};

}
}

#endif /* _ShapeBevel_H_ */
