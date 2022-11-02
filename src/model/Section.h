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
 * Section.h
 *
 * Presentation section.
 */

#ifndef _Section_H_
#define _Section_H_

#include "ResourceBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Presentation section.
/// </summary>
class  Section : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT Section();
	ASPOSE_DLL_EXPORT virtual ~Section();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Name.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);
	/// <summary>
	/// One-based index of slide with which the section starts.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getFirstSlideIndex() const;
	ASPOSE_DLL_EXPORT void setFirstSlideIndex(int32_t value);
	/// <summary>
	/// Links to the shapes contained in the section.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<ResourceUri>> getSlideList() const;
	ASPOSE_DLL_EXPORT void setSlideList(std::vector<std::shared_ptr<ResourceUri>> value);

protected:
	utility::string_t m_Name;
	int32_t m_FirstSlideIndex;
	std::vector<std::shared_ptr<ResourceUri>> m_SlideList;
};

}
}

#endif /* _Section_H_ */
