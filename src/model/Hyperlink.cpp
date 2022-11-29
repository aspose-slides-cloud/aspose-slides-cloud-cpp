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



#include "../ClassRegistry.h"
#include "Hyperlink.h"

namespace asposeslidescloud {
namespace model {

Hyperlink::Hyperlink()
{
	m_IsDisabledIsSet = false;
	m_TargetSlideIndexIsSet = false;
	m_HistoryIsSet = false;
	m_HighlightClickIsSet = false;
	m_StopSoundOnClickIsSet = false;
}

Hyperlink::~Hyperlink()
{
}

bool Hyperlink::isIsDisabled() const
{
	return m_IsDisabled;
}

void Hyperlink::setIsDisabled(bool value)
{
	m_IsDisabled = value;
	m_IsDisabledIsSet = true;
}

bool Hyperlink::isDisabledIsSet() const
{
	return m_IsDisabledIsSet;
}

void Hyperlink::unsetIsDisabled()
{
	m_IsDisabledIsSet = false;
}

utility::string_t Hyperlink::getActionType() const
{
	return m_ActionType;
}

void Hyperlink::setActionType(utility::string_t value)
{
	m_ActionType = value;
	
}

utility::string_t Hyperlink::getExternalUrl() const
{
	return m_ExternalUrl;
}

void Hyperlink::setExternalUrl(utility::string_t value)
{
	m_ExternalUrl = value;
	
}

int32_t Hyperlink::getTargetSlideIndex() const
{
	return m_TargetSlideIndex;
}

void Hyperlink::setTargetSlideIndex(int32_t value)
{
	m_TargetSlideIndex = value;
	m_TargetSlideIndexIsSet = true;
}

bool Hyperlink::targetSlideIndexIsSet() const
{
	return m_TargetSlideIndexIsSet;
}

void Hyperlink::unsetTargetSlideIndex()
{
	m_TargetSlideIndexIsSet = false;
}

utility::string_t Hyperlink::getTargetFrame() const
{
	return m_TargetFrame;
}

void Hyperlink::setTargetFrame(utility::string_t value)
{
	m_TargetFrame = value;
	
}

utility::string_t Hyperlink::getTooltip() const
{
	return m_Tooltip;
}

void Hyperlink::setTooltip(utility::string_t value)
{
	m_Tooltip = value;
	
}

bool Hyperlink::isHistory() const
{
	return m_History;
}

void Hyperlink::setHistory(bool value)
{
	m_History = value;
	m_HistoryIsSet = true;
}

bool Hyperlink::historyIsSet() const
{
	return m_HistoryIsSet;
}

void Hyperlink::unsetHistory()
{
	m_HistoryIsSet = false;
}

bool Hyperlink::isHighlightClick() const
{
	return m_HighlightClick;
}

void Hyperlink::setHighlightClick(bool value)
{
	m_HighlightClick = value;
	m_HighlightClickIsSet = true;
}

bool Hyperlink::highlightClickIsSet() const
{
	return m_HighlightClickIsSet;
}

void Hyperlink::unsetHighlightClick()
{
	m_HighlightClickIsSet = false;
}

bool Hyperlink::isStopSoundOnClick() const
{
	return m_StopSoundOnClick;
}

void Hyperlink::setStopSoundOnClick(bool value)
{
	m_StopSoundOnClick = value;
	m_StopSoundOnClickIsSet = true;
}

bool Hyperlink::stopSoundOnClickIsSet() const
{
	return m_StopSoundOnClickIsSet;
}

void Hyperlink::unsetStopSoundOnClick()
{
	m_StopSoundOnClickIsSet = false;
}

utility::string_t Hyperlink::getColorSource() const
{
	return m_ColorSource;
}

void Hyperlink::setColorSource(utility::string_t value)
{
	m_ColorSource = value;
	
}

web::json::value Hyperlink::toJson() const
{
	web::json::value val = web::json::value::object();
	if(m_IsDisabledIsSet)
	{
		val[utility::conversions::to_string_t("IsDisabled")] = ModelBase::toJson(m_IsDisabled);
	}
	if (!m_ActionType.empty())
	{
		val[utility::conversions::to_string_t("ActionType")] = ModelBase::toJson(m_ActionType);
	}
	if (!m_ExternalUrl.empty())
	{
		val[utility::conversions::to_string_t("ExternalUrl")] = ModelBase::toJson(m_ExternalUrl);
	}
	if(m_TargetSlideIndexIsSet)
	{
		val[utility::conversions::to_string_t("TargetSlideIndex")] = ModelBase::toJson(m_TargetSlideIndex);
	}
	if (!m_TargetFrame.empty())
	{
		val[utility::conversions::to_string_t("TargetFrame")] = ModelBase::toJson(m_TargetFrame);
	}
	if (!m_Tooltip.empty())
	{
		val[utility::conversions::to_string_t("Tooltip")] = ModelBase::toJson(m_Tooltip);
	}
	if(m_HistoryIsSet)
	{
		val[utility::conversions::to_string_t("History")] = ModelBase::toJson(m_History);
	}
	if(m_HighlightClickIsSet)
	{
		val[utility::conversions::to_string_t("HighlightClick")] = ModelBase::toJson(m_HighlightClick);
	}
	if(m_StopSoundOnClickIsSet)
	{
		val[utility::conversions::to_string_t("StopSoundOnClick")] = ModelBase::toJson(m_StopSoundOnClick);
	}
	if (!m_ColorSource.empty())
	{
		val[utility::conversions::to_string_t("ColorSource")] = ModelBase::toJson(m_ColorSource);
	}
	return val;
}

void Hyperlink::fromJson(web::json::value& val)
{
	web::json::value* jsonForIsDisabled = ModelBase::getField(val, "IsDisabled");
	if(jsonForIsDisabled != nullptr && !jsonForIsDisabled->is_null())
	{
		setIsDisabled(ModelBase::boolFromJson(*jsonForIsDisabled));
	}
	web::json::value* jsonForActionType = ModelBase::getField(val, "ActionType");
	if(jsonForActionType != nullptr && !jsonForActionType->is_null())
	{
		setActionType(ModelBase::stringFromJson(*jsonForActionType));
	}
	web::json::value* jsonForExternalUrl = ModelBase::getField(val, "ExternalUrl");
	if(jsonForExternalUrl != nullptr && !jsonForExternalUrl->is_null())
	{
		setExternalUrl(ModelBase::stringFromJson(*jsonForExternalUrl));
	}
	web::json::value* jsonForTargetSlideIndex = ModelBase::getField(val, "TargetSlideIndex");
	if(jsonForTargetSlideIndex != nullptr && !jsonForTargetSlideIndex->is_null() && jsonForTargetSlideIndex->is_number())
	{
		setTargetSlideIndex(ModelBase::int32_tFromJson(*jsonForTargetSlideIndex));
	}
	web::json::value* jsonForTargetFrame = ModelBase::getField(val, "TargetFrame");
	if(jsonForTargetFrame != nullptr && !jsonForTargetFrame->is_null())
	{
		setTargetFrame(ModelBase::stringFromJson(*jsonForTargetFrame));
	}
	web::json::value* jsonForTooltip = ModelBase::getField(val, "Tooltip");
	if(jsonForTooltip != nullptr && !jsonForTooltip->is_null())
	{
		setTooltip(ModelBase::stringFromJson(*jsonForTooltip));
	}
	web::json::value* jsonForHistory = ModelBase::getField(val, "History");
	if(jsonForHistory != nullptr && !jsonForHistory->is_null())
	{
		setHistory(ModelBase::boolFromJson(*jsonForHistory));
	}
	web::json::value* jsonForHighlightClick = ModelBase::getField(val, "HighlightClick");
	if(jsonForHighlightClick != nullptr && !jsonForHighlightClick->is_null())
	{
		setHighlightClick(ModelBase::boolFromJson(*jsonForHighlightClick));
	}
	web::json::value* jsonForStopSoundOnClick = ModelBase::getField(val, "StopSoundOnClick");
	if(jsonForStopSoundOnClick != nullptr && !jsonForStopSoundOnClick->is_null())
	{
		setStopSoundOnClick(ModelBase::boolFromJson(*jsonForStopSoundOnClick));
	}
	web::json::value* jsonForColorSource = ModelBase::getField(val, "ColorSource");
	if(jsonForColorSource != nullptr && !jsonForColorSource->is_null())
	{
		setColorSource(ModelBase::stringFromJson(*jsonForColorSource));
	}
}

}
}

