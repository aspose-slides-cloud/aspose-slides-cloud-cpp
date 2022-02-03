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
 * CubicBezierToPathSegment.h
 *
 * Cubic Bezier curve segment of the geometry path
 */

#ifndef _CubicBezierToPathSegment_H_
#define _CubicBezierToPathSegment_H_

#include "PathSegment.h"

#include <cpprest/details/basic_types.h>
#include "../model/PathSegment.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Cubic Bezier curve segment of the geometry path
/// </summary>
class  CubicBezierToPathSegment : public PathSegment
{
public:
	ASPOSE_DLL_EXPORT CubicBezierToPathSegment();
	ASPOSE_DLL_EXPORT virtual ~CubicBezierToPathSegment();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// X coordinate of the first direction point
	/// </summary>
	ASPOSE_DLL_EXPORT double getX1() const;
	ASPOSE_DLL_EXPORT void setX1(double value);
	/// <summary>
	/// Y coordinate of the first direction point
	/// </summary>
	ASPOSE_DLL_EXPORT double getY1() const;
	ASPOSE_DLL_EXPORT void setY1(double value);
	/// <summary>
	/// X coordinate of the second direction point
	/// </summary>
	ASPOSE_DLL_EXPORT double getX2() const;
	ASPOSE_DLL_EXPORT void setX2(double value);
	/// <summary>
	/// Y coordinate of the second direction point
	/// </summary>
	ASPOSE_DLL_EXPORT double getY2() const;
	ASPOSE_DLL_EXPORT void setY2(double value);
	/// <summary>
	/// X coordinate of end point
	/// </summary>
	ASPOSE_DLL_EXPORT double getX3() const;
	ASPOSE_DLL_EXPORT void setX3(double value);
	/// <summary>
	/// Y coordinate of end point
	/// </summary>
	ASPOSE_DLL_EXPORT double getY3() const;
	ASPOSE_DLL_EXPORT void setY3(double value);

protected:
	double m_X1;
	double m_Y1;
	double m_X2;
	double m_Y2;
	double m_X3;
	double m_Y3;
};

}
}

#endif /* _CubicBezierToPathSegment_H_ */
