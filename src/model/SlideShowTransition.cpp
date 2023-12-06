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
#include "SlideShowTransition.h"

namespace asposeslidescloud {
namespace model {

SlideShowTransition::SlideShowTransition()
{
	m_AdvanceAfterIsSet = false;
	m_AdvanceAfterTimeIsSet = false;
	m_AdvanceOnClickIsSet = false;
	m_SoundIsBuiltInIsSet = false;
	m_SoundLoopIsSet = false;
	m_HasBounceIsSet = false;
	m_FromBlackIsSet = false;
	m_ThroughBlackIsSet = false;
	m_SpokesIsSet = false;
}

SlideShowTransition::~SlideShowTransition()
{
}

utility::string_t SlideShowTransition::getType() const
{
	return m_Type;
}

void SlideShowTransition::setType(utility::string_t value)
{
	m_Type = value;
	
}

bool SlideShowTransition::isAdvanceAfter() const
{
	return m_AdvanceAfter;
}

void SlideShowTransition::setAdvanceAfter(bool value)
{
	m_AdvanceAfter = value;
	m_AdvanceAfterIsSet = true;
}

bool SlideShowTransition::advanceAfterIsSet() const
{
	return m_AdvanceAfterIsSet;
}

void SlideShowTransition::unsetAdvanceAfter()
{
	m_AdvanceAfterIsSet = false;
}

int32_t SlideShowTransition::getAdvanceAfterTime() const
{
	return m_AdvanceAfterTime;
}

void SlideShowTransition::setAdvanceAfterTime(int32_t value)
{
	m_AdvanceAfterTime = value;
	m_AdvanceAfterTimeIsSet = true;
}

bool SlideShowTransition::advanceAfterTimeIsSet() const
{
	return m_AdvanceAfterTimeIsSet;
}

void SlideShowTransition::unsetAdvanceAfterTime()
{
	m_AdvanceAfterTimeIsSet = false;
}

bool SlideShowTransition::isAdvanceOnClick() const
{
	return m_AdvanceOnClick;
}

void SlideShowTransition::setAdvanceOnClick(bool value)
{
	m_AdvanceOnClick = value;
	m_AdvanceOnClickIsSet = true;
}

bool SlideShowTransition::advanceOnClickIsSet() const
{
	return m_AdvanceOnClickIsSet;
}

void SlideShowTransition::unsetAdvanceOnClick()
{
	m_AdvanceOnClickIsSet = false;
}

bool SlideShowTransition::isSoundIsBuiltIn() const
{
	return m_SoundIsBuiltIn;
}

void SlideShowTransition::setSoundIsBuiltIn(bool value)
{
	m_SoundIsBuiltIn = value;
	m_SoundIsBuiltInIsSet = true;
}

bool SlideShowTransition::soundIsBuiltInIsSet() const
{
	return m_SoundIsBuiltInIsSet;
}

void SlideShowTransition::unsetSoundIsBuiltIn()
{
	m_SoundIsBuiltInIsSet = false;
}

bool SlideShowTransition::isSoundLoop() const
{
	return m_SoundLoop;
}

void SlideShowTransition::setSoundLoop(bool value)
{
	m_SoundLoop = value;
	m_SoundLoopIsSet = true;
}

bool SlideShowTransition::soundLoopIsSet() const
{
	return m_SoundLoopIsSet;
}

void SlideShowTransition::unsetSoundLoop()
{
	m_SoundLoopIsSet = false;
}

utility::string_t SlideShowTransition::getSoundMode() const
{
	return m_SoundMode;
}

void SlideShowTransition::setSoundMode(utility::string_t value)
{
	m_SoundMode = value;
	
}

utility::string_t SlideShowTransition::getSoundName() const
{
	return m_SoundName;
}

void SlideShowTransition::setSoundName(utility::string_t value)
{
	m_SoundName = value;
	
}

utility::string_t SlideShowTransition::getSpeed() const
{
	return m_Speed;
}

void SlideShowTransition::setSpeed(utility::string_t value)
{
	m_Speed = value;
	
}

utility::string_t SlideShowTransition::getCornerDirection() const
{
	return m_CornerDirection;
}

void SlideShowTransition::setCornerDirection(utility::string_t value)
{
	m_CornerDirection = value;
	
}

utility::string_t SlideShowTransition::getEightDirection() const
{
	return m_EightDirection;
}

void SlideShowTransition::setEightDirection(utility::string_t value)
{
	m_EightDirection = value;
	
}

utility::string_t SlideShowTransition::getInOutDirection() const
{
	return m_InOutDirection;
}

void SlideShowTransition::setInOutDirection(utility::string_t value)
{
	m_InOutDirection = value;
	
}

bool SlideShowTransition::isHasBounce() const
{
	return m_HasBounce;
}

void SlideShowTransition::setHasBounce(bool value)
{
	m_HasBounce = value;
	m_HasBounceIsSet = true;
}

bool SlideShowTransition::hasBounceIsSet() const
{
	return m_HasBounceIsSet;
}

void SlideShowTransition::unsetHasBounce()
{
	m_HasBounceIsSet = false;
}

utility::string_t SlideShowTransition::getSideDirection() const
{
	return m_SideDirection;
}

void SlideShowTransition::setSideDirection(utility::string_t value)
{
	m_SideDirection = value;
	
}

utility::string_t SlideShowTransition::getPattern() const
{
	return m_Pattern;
}

void SlideShowTransition::setPattern(utility::string_t value)
{
	m_Pattern = value;
	
}

utility::string_t SlideShowTransition::getLeftRightDirection() const
{
	return m_LeftRightDirection;
}

void SlideShowTransition::setLeftRightDirection(utility::string_t value)
{
	m_LeftRightDirection = value;
	
}

utility::string_t SlideShowTransition::getMorphType() const
{
	return m_MorphType;
}

void SlideShowTransition::setMorphType(utility::string_t value)
{
	m_MorphType = value;
	
}

bool SlideShowTransition::isFromBlack() const
{
	return m_FromBlack;
}

void SlideShowTransition::setFromBlack(bool value)
{
	m_FromBlack = value;
	m_FromBlackIsSet = true;
}

bool SlideShowTransition::fromBlackIsSet() const
{
	return m_FromBlackIsSet;
}

void SlideShowTransition::unsetFromBlack()
{
	m_FromBlackIsSet = false;
}

utility::string_t SlideShowTransition::getOrientationDirection() const
{
	return m_OrientationDirection;
}

void SlideShowTransition::setOrientationDirection(utility::string_t value)
{
	m_OrientationDirection = value;
	
}

bool SlideShowTransition::isThroughBlack() const
{
	return m_ThroughBlack;
}

void SlideShowTransition::setThroughBlack(bool value)
{
	m_ThroughBlack = value;
	m_ThroughBlackIsSet = true;
}

bool SlideShowTransition::throughBlackIsSet() const
{
	return m_ThroughBlackIsSet;
}

void SlideShowTransition::unsetThroughBlack()
{
	m_ThroughBlackIsSet = false;
}

utility::string_t SlideShowTransition::getCornerAndCenterDirection() const
{
	return m_CornerAndCenterDirection;
}

void SlideShowTransition::setCornerAndCenterDirection(utility::string_t value)
{
	m_CornerAndCenterDirection = value;
	
}

utility::string_t SlideShowTransition::getShredPattern() const
{
	return m_ShredPattern;
}

void SlideShowTransition::setShredPattern(utility::string_t value)
{
	m_ShredPattern = value;
	
}

utility::string_t SlideShowTransition::getOrientation() const
{
	return m_Orientation;
}

void SlideShowTransition::setOrientation(utility::string_t value)
{
	m_Orientation = value;
	
}

int32_t SlideShowTransition::getSpokes() const
{
	return m_Spokes;
}

void SlideShowTransition::setSpokes(int32_t value)
{
	m_Spokes = value;
	m_SpokesIsSet = true;
}

bool SlideShowTransition::spokesIsSet() const
{
	return m_SpokesIsSet;
}

void SlideShowTransition::unsetSpokes()
{
	m_SpokesIsSet = false;
}

web::json::value SlideShowTransition::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Type.empty())
	{
		val[utility::conversions::to_string_t("Type")] = ModelBase::toJson(m_Type);
	}
	if(m_AdvanceAfterIsSet)
	{
		val[utility::conversions::to_string_t("AdvanceAfter")] = ModelBase::toJson(m_AdvanceAfter);
	}
	if(m_AdvanceAfterTimeIsSet)
	{
		val[utility::conversions::to_string_t("AdvanceAfterTime")] = ModelBase::toJson(m_AdvanceAfterTime);
	}
	if(m_AdvanceOnClickIsSet)
	{
		val[utility::conversions::to_string_t("AdvanceOnClick")] = ModelBase::toJson(m_AdvanceOnClick);
	}
	if(m_SoundIsBuiltInIsSet)
	{
		val[utility::conversions::to_string_t("SoundIsBuiltIn")] = ModelBase::toJson(m_SoundIsBuiltIn);
	}
	if(m_SoundLoopIsSet)
	{
		val[utility::conversions::to_string_t("SoundLoop")] = ModelBase::toJson(m_SoundLoop);
	}
	if (!m_SoundMode.empty())
	{
		val[utility::conversions::to_string_t("SoundMode")] = ModelBase::toJson(m_SoundMode);
	}
	if (!m_SoundName.empty())
	{
		val[utility::conversions::to_string_t("SoundName")] = ModelBase::toJson(m_SoundName);
	}
	if (!m_Speed.empty())
	{
		val[utility::conversions::to_string_t("Speed")] = ModelBase::toJson(m_Speed);
	}
	if (!m_CornerDirection.empty())
	{
		val[utility::conversions::to_string_t("CornerDirection")] = ModelBase::toJson(m_CornerDirection);
	}
	if (!m_EightDirection.empty())
	{
		val[utility::conversions::to_string_t("EightDirection")] = ModelBase::toJson(m_EightDirection);
	}
	if (!m_InOutDirection.empty())
	{
		val[utility::conversions::to_string_t("InOutDirection")] = ModelBase::toJson(m_InOutDirection);
	}
	if(m_HasBounceIsSet)
	{
		val[utility::conversions::to_string_t("HasBounce")] = ModelBase::toJson(m_HasBounce);
	}
	if (!m_SideDirection.empty())
	{
		val[utility::conversions::to_string_t("SideDirection")] = ModelBase::toJson(m_SideDirection);
	}
	if (!m_Pattern.empty())
	{
		val[utility::conversions::to_string_t("Pattern")] = ModelBase::toJson(m_Pattern);
	}
	if (!m_LeftRightDirection.empty())
	{
		val[utility::conversions::to_string_t("LeftRightDirection")] = ModelBase::toJson(m_LeftRightDirection);
	}
	if (!m_MorphType.empty())
	{
		val[utility::conversions::to_string_t("MorphType")] = ModelBase::toJson(m_MorphType);
	}
	if(m_FromBlackIsSet)
	{
		val[utility::conversions::to_string_t("FromBlack")] = ModelBase::toJson(m_FromBlack);
	}
	if (!m_OrientationDirection.empty())
	{
		val[utility::conversions::to_string_t("OrientationDirection")] = ModelBase::toJson(m_OrientationDirection);
	}
	if(m_ThroughBlackIsSet)
	{
		val[utility::conversions::to_string_t("ThroughBlack")] = ModelBase::toJson(m_ThroughBlack);
	}
	if (!m_CornerAndCenterDirection.empty())
	{
		val[utility::conversions::to_string_t("CornerAndCenterDirection")] = ModelBase::toJson(m_CornerAndCenterDirection);
	}
	if (!m_ShredPattern.empty())
	{
		val[utility::conversions::to_string_t("ShredPattern")] = ModelBase::toJson(m_ShredPattern);
	}
	if (!m_Orientation.empty())
	{
		val[utility::conversions::to_string_t("Orientation")] = ModelBase::toJson(m_Orientation);
	}
	if(m_SpokesIsSet)
	{
		val[utility::conversions::to_string_t("Spokes")] = ModelBase::toJson(m_Spokes);
	}
	return val;
}

void SlideShowTransition::fromJson(web::json::value& val)
{
	web::json::value* jsonForType = ModelBase::getField(val, "Type");
	if(jsonForType != nullptr && !jsonForType->is_null())
	{
		setType(ModelBase::stringFromJson(*jsonForType));
	}
	web::json::value* jsonForAdvanceAfter = ModelBase::getField(val, "AdvanceAfter");
	if(jsonForAdvanceAfter != nullptr && !jsonForAdvanceAfter->is_null())
	{
		setAdvanceAfter(ModelBase::boolFromJson(*jsonForAdvanceAfter));
	}
	web::json::value* jsonForAdvanceAfterTime = ModelBase::getField(val, "AdvanceAfterTime");
	if(jsonForAdvanceAfterTime != nullptr && !jsonForAdvanceAfterTime->is_null() && jsonForAdvanceAfterTime->is_number())
	{
		setAdvanceAfterTime(ModelBase::int32_tFromJson(*jsonForAdvanceAfterTime));
	}
	web::json::value* jsonForAdvanceOnClick = ModelBase::getField(val, "AdvanceOnClick");
	if(jsonForAdvanceOnClick != nullptr && !jsonForAdvanceOnClick->is_null())
	{
		setAdvanceOnClick(ModelBase::boolFromJson(*jsonForAdvanceOnClick));
	}
	web::json::value* jsonForSoundIsBuiltIn = ModelBase::getField(val, "SoundIsBuiltIn");
	if(jsonForSoundIsBuiltIn != nullptr && !jsonForSoundIsBuiltIn->is_null())
	{
		setSoundIsBuiltIn(ModelBase::boolFromJson(*jsonForSoundIsBuiltIn));
	}
	web::json::value* jsonForSoundLoop = ModelBase::getField(val, "SoundLoop");
	if(jsonForSoundLoop != nullptr && !jsonForSoundLoop->is_null())
	{
		setSoundLoop(ModelBase::boolFromJson(*jsonForSoundLoop));
	}
	web::json::value* jsonForSoundMode = ModelBase::getField(val, "SoundMode");
	if(jsonForSoundMode != nullptr && !jsonForSoundMode->is_null())
	{
		setSoundMode(ModelBase::stringFromJson(*jsonForSoundMode));
	}
	web::json::value* jsonForSoundName = ModelBase::getField(val, "SoundName");
	if(jsonForSoundName != nullptr && !jsonForSoundName->is_null())
	{
		setSoundName(ModelBase::stringFromJson(*jsonForSoundName));
	}
	web::json::value* jsonForSpeed = ModelBase::getField(val, "Speed");
	if(jsonForSpeed != nullptr && !jsonForSpeed->is_null())
	{
		setSpeed(ModelBase::stringFromJson(*jsonForSpeed));
	}
	web::json::value* jsonForCornerDirection = ModelBase::getField(val, "CornerDirection");
	if(jsonForCornerDirection != nullptr && !jsonForCornerDirection->is_null())
	{
		setCornerDirection(ModelBase::stringFromJson(*jsonForCornerDirection));
	}
	web::json::value* jsonForEightDirection = ModelBase::getField(val, "EightDirection");
	if(jsonForEightDirection != nullptr && !jsonForEightDirection->is_null())
	{
		setEightDirection(ModelBase::stringFromJson(*jsonForEightDirection));
	}
	web::json::value* jsonForInOutDirection = ModelBase::getField(val, "InOutDirection");
	if(jsonForInOutDirection != nullptr && !jsonForInOutDirection->is_null())
	{
		setInOutDirection(ModelBase::stringFromJson(*jsonForInOutDirection));
	}
	web::json::value* jsonForHasBounce = ModelBase::getField(val, "HasBounce");
	if(jsonForHasBounce != nullptr && !jsonForHasBounce->is_null())
	{
		setHasBounce(ModelBase::boolFromJson(*jsonForHasBounce));
	}
	web::json::value* jsonForSideDirection = ModelBase::getField(val, "SideDirection");
	if(jsonForSideDirection != nullptr && !jsonForSideDirection->is_null())
	{
		setSideDirection(ModelBase::stringFromJson(*jsonForSideDirection));
	}
	web::json::value* jsonForPattern = ModelBase::getField(val, "Pattern");
	if(jsonForPattern != nullptr && !jsonForPattern->is_null())
	{
		setPattern(ModelBase::stringFromJson(*jsonForPattern));
	}
	web::json::value* jsonForLeftRightDirection = ModelBase::getField(val, "LeftRightDirection");
	if(jsonForLeftRightDirection != nullptr && !jsonForLeftRightDirection->is_null())
	{
		setLeftRightDirection(ModelBase::stringFromJson(*jsonForLeftRightDirection));
	}
	web::json::value* jsonForMorphType = ModelBase::getField(val, "MorphType");
	if(jsonForMorphType != nullptr && !jsonForMorphType->is_null())
	{
		setMorphType(ModelBase::stringFromJson(*jsonForMorphType));
	}
	web::json::value* jsonForFromBlack = ModelBase::getField(val, "FromBlack");
	if(jsonForFromBlack != nullptr && !jsonForFromBlack->is_null())
	{
		setFromBlack(ModelBase::boolFromJson(*jsonForFromBlack));
	}
	web::json::value* jsonForOrientationDirection = ModelBase::getField(val, "OrientationDirection");
	if(jsonForOrientationDirection != nullptr && !jsonForOrientationDirection->is_null())
	{
		setOrientationDirection(ModelBase::stringFromJson(*jsonForOrientationDirection));
	}
	web::json::value* jsonForThroughBlack = ModelBase::getField(val, "ThroughBlack");
	if(jsonForThroughBlack != nullptr && !jsonForThroughBlack->is_null())
	{
		setThroughBlack(ModelBase::boolFromJson(*jsonForThroughBlack));
	}
	web::json::value* jsonForCornerAndCenterDirection = ModelBase::getField(val, "CornerAndCenterDirection");
	if(jsonForCornerAndCenterDirection != nullptr && !jsonForCornerAndCenterDirection->is_null())
	{
		setCornerAndCenterDirection(ModelBase::stringFromJson(*jsonForCornerAndCenterDirection));
	}
	web::json::value* jsonForShredPattern = ModelBase::getField(val, "ShredPattern");
	if(jsonForShredPattern != nullptr && !jsonForShredPattern->is_null())
	{
		setShredPattern(ModelBase::stringFromJson(*jsonForShredPattern));
	}
	web::json::value* jsonForOrientation = ModelBase::getField(val, "Orientation");
	if(jsonForOrientation != nullptr && !jsonForOrientation->is_null())
	{
		setOrientation(ModelBase::stringFromJson(*jsonForOrientation));
	}
	web::json::value* jsonForSpokes = ModelBase::getField(val, "Spokes");
	if(jsonForSpokes != nullptr && !jsonForSpokes->is_null() && jsonForSpokes->is_number())
	{
		setSpokes(ModelBase::int32_tFromJson(*jsonForSpokes));
	}
}

}
}

