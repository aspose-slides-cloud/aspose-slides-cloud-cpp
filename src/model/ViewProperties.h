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
 * ViewProperties.h
 *
 * Slides document properties.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_ViewProperties_H_
#define ASPOSESLIDESCLOUD_MODEL_ViewProperties_H_

#include "ResourceBase.h"

#include "../model/NormalViewRestoredProperties.h"
#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>
#include "../model/CommonSlideViewProperties.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Slides document properties.
/// </summary>
class  ViewProperties : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT ViewProperties();
	ASPOSE_DLL_EXPORT virtual ~ViewProperties();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Last used view mode.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLastView() const;
	ASPOSE_DLL_EXPORT void setLastView(utility::string_t value);
	/// <summary>
	/// Horizontal bar state.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getHorizontalBarState() const;
	ASPOSE_DLL_EXPORT void setHorizontalBarState(utility::string_t value);
	/// <summary>
	/// Vertical bar state.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getVerticalBarState() const;
	ASPOSE_DLL_EXPORT void setVerticalBarState(utility::string_t value);
	/// <summary>
	/// True to prefer single view.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isPreferSingleView() const;
	ASPOSE_DLL_EXPORT void setPreferSingleView(bool value);
	ASPOSE_DLL_EXPORT bool preferSingleViewIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPreferSingleView();
	/// <summary>
	/// The sizing of the side content region of the normal view, when the region is of a variable restored size.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<NormalViewRestoredProperties> getRestoredLeft() const;
	ASPOSE_DLL_EXPORT void setRestoredLeft(std::shared_ptr<NormalViewRestoredProperties> value);
	/// <summary>
	/// The sizing of the top slide region of the normal view, when the region is of a variable restored size.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<NormalViewRestoredProperties> getRestoredTop() const;
	ASPOSE_DLL_EXPORT void setRestoredTop(std::shared_ptr<NormalViewRestoredProperties> value);
	/// <summary>
	/// Slide view mode properties.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<CommonSlideViewProperties> getSlideViewProperties() const;
	ASPOSE_DLL_EXPORT void setSlideViewProperties(std::shared_ptr<CommonSlideViewProperties> value);
	/// <summary>
	/// Notes view mode properties.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<CommonSlideViewProperties> getNotesViewProperties() const;
	ASPOSE_DLL_EXPORT void setNotesViewProperties(std::shared_ptr<CommonSlideViewProperties> value);
	/// <summary>
	/// True if the comments should be shown.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getShowComments() const;
	ASPOSE_DLL_EXPORT void setShowComments(utility::string_t value);

protected:
	utility::string_t m_LastView;
	utility::string_t m_HorizontalBarState;
	utility::string_t m_VerticalBarState;
	bool m_PreferSingleView;
	bool m_PreferSingleViewIsSet;
	std::shared_ptr<NormalViewRestoredProperties> m_RestoredLeft;
	std::shared_ptr<NormalViewRestoredProperties> m_RestoredTop;
	std::shared_ptr<CommonSlideViewProperties> m_SlideViewProperties;
	std::shared_ptr<CommonSlideViewProperties> m_NotesViewProperties;
	utility::string_t m_ShowComments;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_ViewProperties_H_ */
