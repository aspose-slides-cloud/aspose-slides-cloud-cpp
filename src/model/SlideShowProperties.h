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
 * SlideShowProperties.h
 *
 * Slide show properties.
 */

#ifndef _SlideShowProperties_H_
#define _SlideShowProperties_H_

#include "ResourceBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Slide show properties.
/// </summary>
class  SlideShowProperties : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT SlideShowProperties();
	ASPOSE_DLL_EXPORT virtual ~SlideShowProperties();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Loop slide show.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getLoop() const;
	ASPOSE_DLL_EXPORT void setLoop(bool value);
	ASPOSE_DLL_EXPORT bool loopIsSet() const;
	ASPOSE_DLL_EXPORT void unsetLoop();
	/// <summary>
	/// Start slide in the slide show.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getStartSlide() const;
	ASPOSE_DLL_EXPORT void setStartSlide(int32_t value);
	ASPOSE_DLL_EXPORT bool startSlideIsSet() const;
	ASPOSE_DLL_EXPORT void unsetStartSlide();
	/// <summary>
	/// End slides in the slide show.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getEndSlide() const;
	ASPOSE_DLL_EXPORT void setEndSlide(int32_t value);
	ASPOSE_DLL_EXPORT bool endSlideIsSet() const;
	ASPOSE_DLL_EXPORT void unsetEndSlide();
	/// <summary>
	/// Pen color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPenColor() const;
	ASPOSE_DLL_EXPORT void setPenColor(utility::string_t value);
	/// <summary>
	/// Show animation.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowAnimation() const;
	ASPOSE_DLL_EXPORT void setShowAnimation(bool value);
	ASPOSE_DLL_EXPORT bool showAnimationIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowAnimation();
	/// <summary>
	/// Show narrration.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowNarration() const;
	ASPOSE_DLL_EXPORT void setShowNarration(bool value);
	ASPOSE_DLL_EXPORT bool showNarrationIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowNarration();
	/// <summary>
	/// Use timings.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getUseTimings() const;
	ASPOSE_DLL_EXPORT void setUseTimings(bool value);
	ASPOSE_DLL_EXPORT bool useTimingsIsSet() const;
	ASPOSE_DLL_EXPORT void unsetUseTimings();
	/// <summary>
	/// Slide show type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSlideShowType() const;
	ASPOSE_DLL_EXPORT void setSlideShowType(utility::string_t value);
	/// <summary>
	/// Show scroll bar. Applied with BrowsedByIndividual slide show type.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowScrollbar() const;
	ASPOSE_DLL_EXPORT void setShowScrollbar(bool value);
	ASPOSE_DLL_EXPORT bool showScrollbarIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowScrollbar();

protected:
	bool m_Loop;
	bool m_LoopIsSet;
	int32_t m_StartSlide;
	bool m_StartSlideIsSet;
	int32_t m_EndSlide;
	bool m_EndSlideIsSet;
	utility::string_t m_PenColor;
	bool m_ShowAnimation;
	bool m_ShowAnimationIsSet;
	bool m_ShowNarration;
	bool m_ShowNarrationIsSet;
	bool m_UseTimings;
	bool m_UseTimingsIsSet;
	utility::string_t m_SlideShowType;
	bool m_ShowScrollbar;
	bool m_ShowScrollbarIsSet;
};

}
}

#endif /* _SlideShowProperties_H_ */
