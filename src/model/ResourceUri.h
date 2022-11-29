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
 * ResourceUri.h
 *
 * Represents Resource URI
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_ResourceUri_H_
#define ASPOSESLIDESCLOUD_MODEL_ResourceUri_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents Resource URI
/// </summary>
class  ResourceUri : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ResourceUri();
	ASPOSE_DLL_EXPORT virtual ~ResourceUri();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets the href.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getHref() const;
	ASPOSE_DLL_EXPORT void setHref(utility::string_t value);
	/// <summary>
	/// Gets or sets the relation.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getRelation() const;
	ASPOSE_DLL_EXPORT void setRelation(utility::string_t value);
	/// <summary>
	/// Gets or sets the type of link.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLinkType() const;
	ASPOSE_DLL_EXPORT void setLinkType(utility::string_t value);
	/// <summary>
	/// Gets or sets the title of link.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTitle() const;
	ASPOSE_DLL_EXPORT void setTitle(utility::string_t value);
	/// <summary>
	/// Resource slide index.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getSlideIndex() const;
	ASPOSE_DLL_EXPORT void setSlideIndex(int32_t value);
	ASPOSE_DLL_EXPORT bool slideIndexIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSlideIndex();
	/// <summary>
	/// Resource shape index.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);
	ASPOSE_DLL_EXPORT bool shapeIndexIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShapeIndex();

protected:
	utility::string_t m_Href;
	utility::string_t m_Relation;
	utility::string_t m_LinkType;
	utility::string_t m_Title;
	int32_t m_SlideIndex;
	bool m_SlideIndexIsSet;
	int32_t m_ShapeIndex;
	bool m_ShapeIndexIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_ResourceUri_H_ */
