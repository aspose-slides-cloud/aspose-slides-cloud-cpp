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
 * TextBounds.h
 *
 * Represents text bounds within a paragraph or portion.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_TextBounds_H_
#define ASPOSESLIDESCLOUD_MODEL_TextBounds_H_

#include "../ModelBase.h"


#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents text bounds within a paragraph or portion.
/// </summary>
class  TextBounds : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT TextBounds();
	ASPOSE_DLL_EXPORT virtual ~TextBounds();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// X coordinate of the text bounds.
	/// </summary>
	ASPOSE_DLL_EXPORT double getX() const;
	ASPOSE_DLL_EXPORT void setX(double value);
	/// <summary>
	/// X coordinate of the text bounds.             
	/// </summary>
	ASPOSE_DLL_EXPORT double getY() const;
	ASPOSE_DLL_EXPORT void setY(double value);
	/// <summary>
	/// Width of the text bounds.
	/// </summary>
	ASPOSE_DLL_EXPORT double getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(double value);
	/// <summary>
	/// Height of the text bounds.
	/// </summary>
	ASPOSE_DLL_EXPORT double getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(double value);

protected:
	double m_X;
	double m_Y;
	double m_Width;
	double m_Height;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_TextBounds_H_ */
