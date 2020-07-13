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
 * Placeholder.h
 *
 * Represents placeholder
 */

#ifndef _Placeholder_H_
#define _Placeholder_H_

#include "ResourceBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>
#include "../model/ResourceUriElement.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents placeholder
/// </summary>
class  Placeholder : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT Placeholder();
	ASPOSE_DLL_EXPORT virtual ~Placeholder();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Index.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getIndex() const;
	ASPOSE_DLL_EXPORT void setIndex(int32_t value);
	/// <summary>
	/// Orientation.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getOrientation() const;
	ASPOSE_DLL_EXPORT void setOrientation(utility::string_t value);
	/// <summary>
	/// Size.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSize() const;
	ASPOSE_DLL_EXPORT void setSize(utility::string_t value);
	/// <summary>
	/// Placeholder type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getType() const;
	ASPOSE_DLL_EXPORT void setType(utility::string_t value);
	/// <summary>
	/// Shape link.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUriElement> getShape() const;
	ASPOSE_DLL_EXPORT void setShape(std::shared_ptr<ResourceUriElement> value);

protected:
	int32_t m_Index;
	utility::string_t m_Orientation;
	utility::string_t m_Size;
	utility::string_t m_Type;
	std::shared_ptr<ResourceUriElement> m_Shape;
};

}
}

#endif /* _Placeholder_H_ */
