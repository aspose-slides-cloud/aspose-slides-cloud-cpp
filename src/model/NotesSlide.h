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
 * NotesSlide.h
 *
 * Represents notes slide DTO.
 */

#ifndef _NotesSlide_H_
#define _NotesSlide_H_

#include "ResourceBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>
#include "../model/ResourceUriElement.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents notes slide DTO.
/// </summary>
class  NotesSlide : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT NotesSlide();
	ASPOSE_DLL_EXPORT virtual ~NotesSlide();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Get or sets text of notes slide.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getText() const;
	ASPOSE_DLL_EXPORT void setText(utility::string_t value);
	/// <summary>
	/// Get or sets the  link to list notes slide shapes.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUriElement> getShapes() const;
	ASPOSE_DLL_EXPORT void setShapes(std::shared_ptr<ResourceUriElement> value);

protected:
	utility::string_t m_Text;
	std::shared_ptr<ResourceUriElement> m_Shapes;
};

}
}

#endif /* _NotesSlide_H_ */
