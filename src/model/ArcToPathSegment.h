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
 * ArcToPathSegment.h
 *
 * Arc segment of the geometry path
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_ArcToPathSegment_H_
#define ASPOSESLIDESCLOUD_MODEL_ArcToPathSegment_H_

#include "PathSegment.h"

#include <cpprest/details/basic_types.h>
#include "../model/PathSegment.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Arc segment of the geometry path
/// </summary>
class  ArcToPathSegment : public PathSegment
{
public:
	ASPOSE_DLL_EXPORT ArcToPathSegment();
	ASPOSE_DLL_EXPORT virtual ~ArcToPathSegment();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Width of the rectangle
	/// </summary>
	ASPOSE_DLL_EXPORT double getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(double value);
	/// <summary>
	/// Height of the rectangle
	/// </summary>
	ASPOSE_DLL_EXPORT double getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(double value);
	/// <summary>
	/// Start angle
	/// </summary>
	ASPOSE_DLL_EXPORT double getStartAngle() const;
	ASPOSE_DLL_EXPORT void setStartAngle(double value);
	/// <summary>
	/// Sweep angle
	/// </summary>
	ASPOSE_DLL_EXPORT double getSweepAngle() const;
	ASPOSE_DLL_EXPORT void setSweepAngle(double value);

protected:
	double m_Width;
	double m_Height;
	double m_StartAngle;
	double m_SweepAngle;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_ArcToPathSegment_H_ */
