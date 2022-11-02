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
 * GeometryPath.h
 *
 * Represents GeometryPath of the shape
 */

#ifndef _GeometryPath_H_
#define _GeometryPath_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/PathSegment.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents GeometryPath of the shape
/// </summary>
class  GeometryPath : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT GeometryPath();
	ASPOSE_DLL_EXPORT virtual ~GeometryPath();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Path fill mode
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFillMode() const;
	ASPOSE_DLL_EXPORT void setFillMode(utility::string_t value);
	/// <summary>
	/// Stroke
	/// </summary>
	ASPOSE_DLL_EXPORT bool getStroke() const;
	ASPOSE_DLL_EXPORT void setStroke(bool value);
	ASPOSE_DLL_EXPORT bool strokeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetStroke();
	/// <summary>
	/// List of PathSegmen objects
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<PathSegment>> getPathData() const;
	ASPOSE_DLL_EXPORT void setPathData(std::vector<std::shared_ptr<PathSegment>> value);

protected:
	utility::string_t m_FillMode;
	bool m_Stroke;
	bool m_StrokeIsSet;
	std::vector<std::shared_ptr<PathSegment>> m_PathData;
};

}
}

#endif /* _GeometryPath_H_ */
