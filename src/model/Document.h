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
 * Document.h
 *
 * Represents document DTO.
 */

#ifndef _Document_H_
#define _Document_H_

#include "ResourceBase.h"

#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents document DTO.
/// </summary>
class  Document : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT Document();
	ASPOSE_DLL_EXPORT virtual ~Document();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Link to Document properties.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getDocumentProperties() const;
	ASPOSE_DLL_EXPORT void setDocumentProperties(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Link to Document properties.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getViewProperties() const;
	ASPOSE_DLL_EXPORT void setViewProperties(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Link to slides collection.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getSlides() const;
	ASPOSE_DLL_EXPORT void setSlides(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Link to images collection.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getImages() const;
	ASPOSE_DLL_EXPORT void setImages(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Link to layout slides collection.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getLayoutSlides() const;
	ASPOSE_DLL_EXPORT void setLayoutSlides(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Link to master slides collection.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getMasterSlides() const;
	ASPOSE_DLL_EXPORT void setMasterSlides(std::shared_ptr<ResourceUri> value);

protected:
	std::shared_ptr<ResourceUri> m_DocumentProperties;
	std::shared_ptr<ResourceUri> m_ViewProperties;
	std::shared_ptr<ResourceUri> m_Slides;
	std::shared_ptr<ResourceUri> m_Images;
	std::shared_ptr<ResourceUri> m_LayoutSlides;
	std::shared_ptr<ResourceUri> m_MasterSlides;
};

}
}

#endif /* _Document_H_ */
