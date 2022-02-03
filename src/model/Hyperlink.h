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
 * Hyperlink.h
 *
 * Hyperlink
 */

#ifndef _Hyperlink_H_
#define _Hyperlink_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Hyperlink
/// </summary>
class  Hyperlink : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT Hyperlink();
	ASPOSE_DLL_EXPORT virtual ~Hyperlink();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// If true Hypelink is not applied. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsDisabled() const;
	ASPOSE_DLL_EXPORT void setIsDisabled(bool value);
	ASPOSE_DLL_EXPORT bool isDisabledIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsDisabled();
	/// <summary>
	/// Type of HyperLink action             
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getActionType() const;
	ASPOSE_DLL_EXPORT void setActionType(utility::string_t value);
	/// <summary>
	/// Specifies the external URL
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getExternalUrl() const;
	ASPOSE_DLL_EXPORT void setExternalUrl(utility::string_t value);
	/// <summary>
	/// Index of the target slide
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getTargetSlideIndex() const;
	ASPOSE_DLL_EXPORT void setTargetSlideIndex(int32_t value);
	ASPOSE_DLL_EXPORT bool targetSlideIndexIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTargetSlideIndex();
	/// <summary>
	/// Target frame
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTargetFrame() const;
	ASPOSE_DLL_EXPORT void setTargetFrame(utility::string_t value);
	/// <summary>
	/// Hyperlink tooltip
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTooltip() const;
	ASPOSE_DLL_EXPORT void setTooltip(utility::string_t value);
	/// <summary>
	/// Makes hyperlink viewed when it is invoked.             
	/// </summary>
	ASPOSE_DLL_EXPORT bool getHistory() const;
	ASPOSE_DLL_EXPORT void setHistory(bool value);
	ASPOSE_DLL_EXPORT bool historyIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHistory();
	/// <summary>
	/// Determines whether the hyperlink should be highlighted on click.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getHighlightClick() const;
	ASPOSE_DLL_EXPORT void setHighlightClick(bool value);
	ASPOSE_DLL_EXPORT bool highlightClickIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHighlightClick();
	/// <summary>
	/// Determines whether the sound should be stopped on hyperlink click
	/// </summary>
	ASPOSE_DLL_EXPORT bool getStopSoundOnClick() const;
	ASPOSE_DLL_EXPORT void setStopSoundOnClick(bool value);
	ASPOSE_DLL_EXPORT bool stopSoundOnClickIsSet() const;
	ASPOSE_DLL_EXPORT void unsetStopSoundOnClick();
	/// <summary>
	/// Represents the source of hyperlink color
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getColorSource() const;
	ASPOSE_DLL_EXPORT void setColorSource(utility::string_t value);

protected:
	bool m_IsDisabled;
	bool m_IsDisabledIsSet;
	utility::string_t m_ActionType;
	utility::string_t m_ExternalUrl;
	int32_t m_TargetSlideIndex;
	bool m_TargetSlideIndexIsSet;
	utility::string_t m_TargetFrame;
	utility::string_t m_Tooltip;
	bool m_History;
	bool m_HistoryIsSet;
	bool m_HighlightClick;
	bool m_HighlightClickIsSet;
	bool m_StopSoundOnClick;
	bool m_StopSoundOnClickIsSet;
	utility::string_t m_ColorSource;
};

}
}

#endif /* _Hyperlink_H_ */
