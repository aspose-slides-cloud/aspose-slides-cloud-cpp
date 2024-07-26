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
 * Slide.h
 *
 * Presentation slide.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_Slide_H_
#define ASPOSESLIDESCLOUD_MODEL_Slide_H_

#include "ResourceBase.h"

#include "../model/SlideShowTransition.h"
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Presentation slide.
/// </summary>
class  Slide : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT Slide();
	ASPOSE_DLL_EXPORT virtual ~Slide();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets the width.
	/// </summary>
	ASPOSE_DLL_EXPORT double getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(double value);
	/// <summary>
	/// Gets or sets the height.
	/// </summary>
	ASPOSE_DLL_EXPORT double getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(double value);
	/// <summary>
	/// Specifies if shapes of the master slide should be shown on the slide. True by default.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isShowMasterShapes() const;
	ASPOSE_DLL_EXPORT void setShowMasterShapes(bool value);
	ASPOSE_DLL_EXPORT bool showMasterShapesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowMasterShapes();
	/// <summary>
	/// Specifies if shapes of the master slide should be shown on the slide. True by default.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<SlideShowTransition> getSlideShowTransition() const;
	ASPOSE_DLL_EXPORT void setSlideShowTransition(std::shared_ptr<SlideShowTransition> value);
	/// <summary>
	/// Gets or sets the  link to the layout slide.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getLayoutSlide() const;
	ASPOSE_DLL_EXPORT void setLayoutSlide(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Gets or sets the  link to list of top-level shapes.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getShapes() const;
	ASPOSE_DLL_EXPORT void setShapes(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Gets or sets the link to theme.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getTheme() const;
	ASPOSE_DLL_EXPORT void setTheme(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Gets or sets the  link to placeholders.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getPlaceholders() const;
	ASPOSE_DLL_EXPORT void setPlaceholders(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Gets or sets the link to images.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getImages() const;
	ASPOSE_DLL_EXPORT void setImages(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Gets or sets the link to comments.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getComments() const;
	ASPOSE_DLL_EXPORT void setComments(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Get or sets the link to slide&#39;s background
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getBackground() const;
	ASPOSE_DLL_EXPORT void setBackground(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Get or sets the link to notes slide.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getNotesSlide() const;
	ASPOSE_DLL_EXPORT void setNotesSlide(std::shared_ptr<ResourceUri> value);

protected:
	double m_Width;
	double m_Height;
	bool m_ShowMasterShapes;
	bool m_ShowMasterShapesIsSet;
	std::shared_ptr<SlideShowTransition> m_SlideShowTransition;
	std::shared_ptr<ResourceUri> m_LayoutSlide;
	std::shared_ptr<ResourceUri> m_Shapes;
	std::shared_ptr<ResourceUri> m_Theme;
	std::shared_ptr<ResourceUri> m_Placeholders;
	std::shared_ptr<ResourceUri> m_Images;
	std::shared_ptr<ResourceUri> m_Comments;
	std::shared_ptr<ResourceUri> m_Background;
	std::shared_ptr<ResourceUri> m_NotesSlide;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_Slide_H_ */
