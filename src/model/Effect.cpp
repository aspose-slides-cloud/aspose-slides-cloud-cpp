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



#include "Effect.h"

namespace asposeslidescloud {
namespace model {

Effect::Effect()
{
	m_AccelerateIsSet = false;
	m_AutoReverseIsSet = false;
	m_DecelerateIsSet = false;
	m_DurationIsSet = false;
	m_RepeatCountIsSet = false;
	m_RepeatDurationIsSet = false;
	m_SpeedIsSet = false;
	m_TriggerDelayTimeIsSet = false;
}

Effect::~Effect()
{
}

utility::string_t Effect::getType() const
{
	return m_Type;
}

void Effect::setType(utility::string_t value)
{
	m_Type = value;
	
}

utility::string_t Effect::getSubtype() const
{
	return m_Subtype;
}

void Effect::setSubtype(utility::string_t value)
{
	m_Subtype = value;
	
}

utility::string_t Effect::getPresetClassType() const
{
	return m_PresetClassType;
}

void Effect::setPresetClassType(utility::string_t value)
{
	m_PresetClassType = value;
	
}

int32_t Effect::getShapeIndex() const
{
	return m_ShapeIndex;
}

void Effect::setShapeIndex(int32_t value)
{
	m_ShapeIndex = value;
	
}

utility::string_t Effect::getTriggerType() const
{
	return m_TriggerType;
}

void Effect::setTriggerType(utility::string_t value)
{
	m_TriggerType = value;
	
}

double Effect::getAccelerate() const
{
	return m_Accelerate;
}

void Effect::setAccelerate(double value)
{
	m_Accelerate = value;
	m_AccelerateIsSet = true;
}

bool Effect::accelerateIsSet() const
{
	return m_AccelerateIsSet;
}

void Effect::unsetAccelerate()
{
	m_AccelerateIsSet = false;
}

bool Effect::getAutoReverse() const
{
	return m_AutoReverse;
}

void Effect::setAutoReverse(bool value)
{
	m_AutoReverse = value;
	m_AutoReverseIsSet = true;
}

bool Effect::autoReverseIsSet() const
{
	return m_AutoReverseIsSet;
}

void Effect::unsetAutoReverse()
{
	m_AutoReverseIsSet = false;
}

double Effect::getDecelerate() const
{
	return m_Decelerate;
}

void Effect::setDecelerate(double value)
{
	m_Decelerate = value;
	m_DecelerateIsSet = true;
}

bool Effect::decelerateIsSet() const
{
	return m_DecelerateIsSet;
}

void Effect::unsetDecelerate()
{
	m_DecelerateIsSet = false;
}

double Effect::getDuration() const
{
	return m_Duration;
}

void Effect::setDuration(double value)
{
	m_Duration = value;
	m_DurationIsSet = true;
}

bool Effect::durationIsSet() const
{
	return m_DurationIsSet;
}

void Effect::unsetDuration()
{
	m_DurationIsSet = false;
}

double Effect::getRepeatCount() const
{
	return m_RepeatCount;
}

void Effect::setRepeatCount(double value)
{
	m_RepeatCount = value;
	m_RepeatCountIsSet = true;
}

bool Effect::repeatCountIsSet() const
{
	return m_RepeatCountIsSet;
}

void Effect::unsetRepeatCount()
{
	m_RepeatCountIsSet = false;
}

double Effect::getRepeatDuration() const
{
	return m_RepeatDuration;
}

void Effect::setRepeatDuration(double value)
{
	m_RepeatDuration = value;
	m_RepeatDurationIsSet = true;
}

bool Effect::repeatDurationIsSet() const
{
	return m_RepeatDurationIsSet;
}

void Effect::unsetRepeatDuration()
{
	m_RepeatDurationIsSet = false;
}

utility::string_t Effect::getRestart() const
{
	return m_Restart;
}

void Effect::setRestart(utility::string_t value)
{
	m_Restart = value;
	
}

double Effect::getSpeed() const
{
	return m_Speed;
}

void Effect::setSpeed(double value)
{
	m_Speed = value;
	m_SpeedIsSet = true;
}

bool Effect::speedIsSet() const
{
	return m_SpeedIsSet;
}

void Effect::unsetSpeed()
{
	m_SpeedIsSet = false;
}

double Effect::getTriggerDelayTime() const
{
	return m_TriggerDelayTime;
}

void Effect::setTriggerDelayTime(double value)
{
	m_TriggerDelayTime = value;
	m_TriggerDelayTimeIsSet = true;
}

bool Effect::triggerDelayTimeIsSet() const
{
	return m_TriggerDelayTimeIsSet;
}

void Effect::unsetTriggerDelayTime()
{
	m_TriggerDelayTimeIsSet = false;
}

web::json::value Effect::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Type.empty())
	{
		val[utility::conversions::to_string_t("Type")] = ModelBase::toJson(m_Type);
	}
	if (!m_Subtype.empty())
	{
		val[utility::conversions::to_string_t("Subtype")] = ModelBase::toJson(m_Subtype);
	}
	if (!m_PresetClassType.empty())
	{
		val[utility::conversions::to_string_t("PresetClassType")] = ModelBase::toJson(m_PresetClassType);
	}
	val[utility::conversions::to_string_t("ShapeIndex")] = ModelBase::toJson(m_ShapeIndex);
	if (!m_TriggerType.empty())
	{
		val[utility::conversions::to_string_t("TriggerType")] = ModelBase::toJson(m_TriggerType);
	}
	if(m_AccelerateIsSet)
	{
		val[utility::conversions::to_string_t("Accelerate")] = ModelBase::toJson(m_Accelerate);
	}
	if(m_AutoReverseIsSet)
	{
		val[utility::conversions::to_string_t("AutoReverse")] = ModelBase::toJson(m_AutoReverse);
	}
	if(m_DecelerateIsSet)
	{
		val[utility::conversions::to_string_t("Decelerate")] = ModelBase::toJson(m_Decelerate);
	}
	if(m_DurationIsSet)
	{
		val[utility::conversions::to_string_t("Duration")] = ModelBase::toJson(m_Duration);
	}
	if(m_RepeatCountIsSet)
	{
		val[utility::conversions::to_string_t("RepeatCount")] = ModelBase::toJson(m_RepeatCount);
	}
	if(m_RepeatDurationIsSet)
	{
		val[utility::conversions::to_string_t("RepeatDuration")] = ModelBase::toJson(m_RepeatDuration);
	}
	if (!m_Restart.empty())
	{
		val[utility::conversions::to_string_t("Restart")] = ModelBase::toJson(m_Restart);
	}
	if(m_SpeedIsSet)
	{
		val[utility::conversions::to_string_t("Speed")] = ModelBase::toJson(m_Speed);
	}
	if(m_TriggerDelayTimeIsSet)
	{
		val[utility::conversions::to_string_t("TriggerDelayTime")] = ModelBase::toJson(m_TriggerDelayTime);
	}
	return val;
}

void Effect::fromJson(web::json::value& val)
{
	web::json::value* jsonForType = ModelBase::getField(val, "Type");
	if(jsonForType != nullptr && !jsonForType->is_null())
	{
		setType(ModelBase::stringFromJson(*jsonForType));
	}
	web::json::value* jsonForSubtype = ModelBase::getField(val, "Subtype");
	if(jsonForSubtype != nullptr && !jsonForSubtype->is_null())
	{
		setSubtype(ModelBase::stringFromJson(*jsonForSubtype));
	}
	web::json::value* jsonForPresetClassType = ModelBase::getField(val, "PresetClassType");
	if(jsonForPresetClassType != nullptr && !jsonForPresetClassType->is_null())
	{
		setPresetClassType(ModelBase::stringFromJson(*jsonForPresetClassType));
	}
	web::json::value* jsonForShapeIndex = ModelBase::getField(val, "ShapeIndex");
	if(jsonForShapeIndex != nullptr && !jsonForShapeIndex->is_null() && jsonForShapeIndex->is_number())
	{
		setShapeIndex(ModelBase::int32_tFromJson(*jsonForShapeIndex));
	}
	web::json::value* jsonForTriggerType = ModelBase::getField(val, "TriggerType");
	if(jsonForTriggerType != nullptr && !jsonForTriggerType->is_null())
	{
		setTriggerType(ModelBase::stringFromJson(*jsonForTriggerType));
	}
	web::json::value* jsonForAccelerate = ModelBase::getField(val, "Accelerate");
	if(jsonForAccelerate != nullptr && !jsonForAccelerate->is_null() && jsonForAccelerate->is_number())
	{
		setAccelerate(ModelBase::doubleFromJson(*jsonForAccelerate));
	}
	web::json::value* jsonForAutoReverse = ModelBase::getField(val, "AutoReverse");
	if(jsonForAutoReverse != nullptr && !jsonForAutoReverse->is_null())
	{
		setAutoReverse(ModelBase::boolFromJson(*jsonForAutoReverse));
	}
	web::json::value* jsonForDecelerate = ModelBase::getField(val, "Decelerate");
	if(jsonForDecelerate != nullptr && !jsonForDecelerate->is_null() && jsonForDecelerate->is_number())
	{
		setDecelerate(ModelBase::doubleFromJson(*jsonForDecelerate));
	}
	web::json::value* jsonForDuration = ModelBase::getField(val, "Duration");
	if(jsonForDuration != nullptr && !jsonForDuration->is_null() && jsonForDuration->is_number())
	{
		setDuration(ModelBase::doubleFromJson(*jsonForDuration));
	}
	web::json::value* jsonForRepeatCount = ModelBase::getField(val, "RepeatCount");
	if(jsonForRepeatCount != nullptr && !jsonForRepeatCount->is_null() && jsonForRepeatCount->is_number())
	{
		setRepeatCount(ModelBase::doubleFromJson(*jsonForRepeatCount));
	}
	web::json::value* jsonForRepeatDuration = ModelBase::getField(val, "RepeatDuration");
	if(jsonForRepeatDuration != nullptr && !jsonForRepeatDuration->is_null() && jsonForRepeatDuration->is_number())
	{
		setRepeatDuration(ModelBase::doubleFromJson(*jsonForRepeatDuration));
	}
	web::json::value* jsonForRestart = ModelBase::getField(val, "Restart");
	if(jsonForRestart != nullptr && !jsonForRestart->is_null())
	{
		setRestart(ModelBase::stringFromJson(*jsonForRestart));
	}
	web::json::value* jsonForSpeed = ModelBase::getField(val, "Speed");
	if(jsonForSpeed != nullptr && !jsonForSpeed->is_null() && jsonForSpeed->is_number())
	{
		setSpeed(ModelBase::doubleFromJson(*jsonForSpeed));
	}
	web::json::value* jsonForTriggerDelayTime = ModelBase::getField(val, "TriggerDelayTime");
	if(jsonForTriggerDelayTime != nullptr && !jsonForTriggerDelayTime->is_null() && jsonForTriggerDelayTime->is_number())
	{
		setTriggerDelayTime(ModelBase::doubleFromJson(*jsonForTriggerDelayTime));
	}
}

}
}

