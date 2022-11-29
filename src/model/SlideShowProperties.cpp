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
#include "SlideShowProperties.h"

namespace asposeslidescloud {
namespace model {

SlideShowProperties::SlideShowProperties()
{
	m_LoopIsSet = false;
	m_StartSlideIsSet = false;
	m_EndSlideIsSet = false;
	m_ShowAnimationIsSet = false;
	m_ShowNarrationIsSet = false;
	m_UseTimingsIsSet = false;
	m_ShowScrollbarIsSet = false;
}

SlideShowProperties::~SlideShowProperties()
{
}

bool SlideShowProperties::isLoop() const
{
	return m_Loop;
}

void SlideShowProperties::setLoop(bool value)
{
	m_Loop = value;
	m_LoopIsSet = true;
}

bool SlideShowProperties::loopIsSet() const
{
	return m_LoopIsSet;
}

void SlideShowProperties::unsetLoop()
{
	m_LoopIsSet = false;
}

int32_t SlideShowProperties::getStartSlide() const
{
	return m_StartSlide;
}

void SlideShowProperties::setStartSlide(int32_t value)
{
	m_StartSlide = value;
	m_StartSlideIsSet = true;
}

bool SlideShowProperties::startSlideIsSet() const
{
	return m_StartSlideIsSet;
}

void SlideShowProperties::unsetStartSlide()
{
	m_StartSlideIsSet = false;
}

int32_t SlideShowProperties::getEndSlide() const
{
	return m_EndSlide;
}

void SlideShowProperties::setEndSlide(int32_t value)
{
	m_EndSlide = value;
	m_EndSlideIsSet = true;
}

bool SlideShowProperties::endSlideIsSet() const
{
	return m_EndSlideIsSet;
}

void SlideShowProperties::unsetEndSlide()
{
	m_EndSlideIsSet = false;
}

utility::string_t SlideShowProperties::getPenColor() const
{
	return m_PenColor;
}

void SlideShowProperties::setPenColor(utility::string_t value)
{
	m_PenColor = value;
	
}

bool SlideShowProperties::isShowAnimation() const
{
	return m_ShowAnimation;
}

void SlideShowProperties::setShowAnimation(bool value)
{
	m_ShowAnimation = value;
	m_ShowAnimationIsSet = true;
}

bool SlideShowProperties::showAnimationIsSet() const
{
	return m_ShowAnimationIsSet;
}

void SlideShowProperties::unsetShowAnimation()
{
	m_ShowAnimationIsSet = false;
}

bool SlideShowProperties::isShowNarration() const
{
	return m_ShowNarration;
}

void SlideShowProperties::setShowNarration(bool value)
{
	m_ShowNarration = value;
	m_ShowNarrationIsSet = true;
}

bool SlideShowProperties::showNarrationIsSet() const
{
	return m_ShowNarrationIsSet;
}

void SlideShowProperties::unsetShowNarration()
{
	m_ShowNarrationIsSet = false;
}

bool SlideShowProperties::isUseTimings() const
{
	return m_UseTimings;
}

void SlideShowProperties::setUseTimings(bool value)
{
	m_UseTimings = value;
	m_UseTimingsIsSet = true;
}

bool SlideShowProperties::useTimingsIsSet() const
{
	return m_UseTimingsIsSet;
}

void SlideShowProperties::unsetUseTimings()
{
	m_UseTimingsIsSet = false;
}

utility::string_t SlideShowProperties::getSlideShowType() const
{
	return m_SlideShowType;
}

void SlideShowProperties::setSlideShowType(utility::string_t value)
{
	m_SlideShowType = value;
	
}

bool SlideShowProperties::isShowScrollbar() const
{
	return m_ShowScrollbar;
}

void SlideShowProperties::setShowScrollbar(bool value)
{
	m_ShowScrollbar = value;
	m_ShowScrollbarIsSet = true;
}

bool SlideShowProperties::showScrollbarIsSet() const
{
	return m_ShowScrollbarIsSet;
}

void SlideShowProperties::unsetShowScrollbar()
{
	m_ShowScrollbarIsSet = false;
}

web::json::value SlideShowProperties::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if(m_LoopIsSet)
	{
		val[utility::conversions::to_string_t("Loop")] = ModelBase::toJson(m_Loop);
	}
	if(m_StartSlideIsSet)
	{
		val[utility::conversions::to_string_t("StartSlide")] = ModelBase::toJson(m_StartSlide);
	}
	if(m_EndSlideIsSet)
	{
		val[utility::conversions::to_string_t("EndSlide")] = ModelBase::toJson(m_EndSlide);
	}
	if (!m_PenColor.empty())
	{
		val[utility::conversions::to_string_t("PenColor")] = ModelBase::toJson(m_PenColor);
	}
	if(m_ShowAnimationIsSet)
	{
		val[utility::conversions::to_string_t("ShowAnimation")] = ModelBase::toJson(m_ShowAnimation);
	}
	if(m_ShowNarrationIsSet)
	{
		val[utility::conversions::to_string_t("ShowNarration")] = ModelBase::toJson(m_ShowNarration);
	}
	if(m_UseTimingsIsSet)
	{
		val[utility::conversions::to_string_t("UseTimings")] = ModelBase::toJson(m_UseTimings);
	}
	if (!m_SlideShowType.empty())
	{
		val[utility::conversions::to_string_t("SlideShowType")] = ModelBase::toJson(m_SlideShowType);
	}
	if(m_ShowScrollbarIsSet)
	{
		val[utility::conversions::to_string_t("ShowScrollbar")] = ModelBase::toJson(m_ShowScrollbar);
	}
	return val;
}

void SlideShowProperties::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForLoop = ModelBase::getField(val, "Loop");
	if(jsonForLoop != nullptr && !jsonForLoop->is_null())
	{
		setLoop(ModelBase::boolFromJson(*jsonForLoop));
	}
	web::json::value* jsonForStartSlide = ModelBase::getField(val, "StartSlide");
	if(jsonForStartSlide != nullptr && !jsonForStartSlide->is_null() && jsonForStartSlide->is_number())
	{
		setStartSlide(ModelBase::int32_tFromJson(*jsonForStartSlide));
	}
	web::json::value* jsonForEndSlide = ModelBase::getField(val, "EndSlide");
	if(jsonForEndSlide != nullptr && !jsonForEndSlide->is_null() && jsonForEndSlide->is_number())
	{
		setEndSlide(ModelBase::int32_tFromJson(*jsonForEndSlide));
	}
	web::json::value* jsonForPenColor = ModelBase::getField(val, "PenColor");
	if(jsonForPenColor != nullptr && !jsonForPenColor->is_null())
	{
		setPenColor(ModelBase::stringFromJson(*jsonForPenColor));
	}
	web::json::value* jsonForShowAnimation = ModelBase::getField(val, "ShowAnimation");
	if(jsonForShowAnimation != nullptr && !jsonForShowAnimation->is_null())
	{
		setShowAnimation(ModelBase::boolFromJson(*jsonForShowAnimation));
	}
	web::json::value* jsonForShowNarration = ModelBase::getField(val, "ShowNarration");
	if(jsonForShowNarration != nullptr && !jsonForShowNarration->is_null())
	{
		setShowNarration(ModelBase::boolFromJson(*jsonForShowNarration));
	}
	web::json::value* jsonForUseTimings = ModelBase::getField(val, "UseTimings");
	if(jsonForUseTimings != nullptr && !jsonForUseTimings->is_null())
	{
		setUseTimings(ModelBase::boolFromJson(*jsonForUseTimings));
	}
	web::json::value* jsonForSlideShowType = ModelBase::getField(val, "SlideShowType");
	if(jsonForSlideShowType != nullptr && !jsonForSlideShowType->is_null())
	{
		setSlideShowType(ModelBase::stringFromJson(*jsonForSlideShowType));
	}
	web::json::value* jsonForShowScrollbar = ModelBase::getField(val, "ShowScrollbar");
	if(jsonForShowScrollbar != nullptr && !jsonForShowScrollbar->is_null())
	{
		setShowScrollbar(ModelBase::boolFromJson(*jsonForShowScrollbar));
	}
}

}
}

