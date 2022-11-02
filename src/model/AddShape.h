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
 * AddShape.h
 *
 * Add shape task.
 */

#ifndef _AddShape_H_
#define _AddShape_H_

#include "Task.h"

#include "../model/Task.h"
#include "../model/ShapeBase.h"
#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Add shape task.
/// </summary>
class  AddShape : public Task
{
public:
	ASPOSE_DLL_EXPORT AddShape();
	ASPOSE_DLL_EXPORT virtual ~AddShape();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Shape DTO.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ShapeBase> getShape() const;
	ASPOSE_DLL_EXPORT void setShape(std::shared_ptr<ShapeBase> value);
	/// <summary>
	/// Shape path for a grouped shape or smart art shape.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getShapePath() const;
	ASPOSE_DLL_EXPORT void setShapePath(utility::string_t value);

protected:
	std::shared_ptr<ShapeBase> m_Shape;
	utility::string_t m_ShapePath;
};

}
}

#endif /* _AddShape_H_ */
