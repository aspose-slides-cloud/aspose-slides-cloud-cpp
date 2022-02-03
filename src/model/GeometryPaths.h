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
 * GeometryPaths.h
 *
 * Represents container for GeometryPath objects
 */

#ifndef _GeometryPaths_H_
#define _GeometryPaths_H_

#include "../ModelBase.h"

#include "../model/GeometryPath.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents container for GeometryPath objects
/// </summary>
class  GeometryPaths : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT GeometryPaths();
	ASPOSE_DLL_EXPORT virtual ~GeometryPaths();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// List of GeometryPath objects
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<GeometryPath>> getPaths() const;
	ASPOSE_DLL_EXPORT void setPaths(std::vector<std::shared_ptr<GeometryPath>> value);

protected:
	std::vector<std::shared_ptr<GeometryPath>> m_Paths;
};

}
}

#endif /* _GeometryPaths_H_ */
