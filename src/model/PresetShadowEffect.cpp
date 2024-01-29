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
#include "PresetShadowEffect.h"

namespace asposeslidescloud {
namespace model {

PresetShadowEffect::PresetShadowEffect()
{
	setDirection(0.0);
	setDistance(0.0);
}

PresetShadowEffect::~PresetShadowEffect()
{
}

double PresetShadowEffect::getDirection() const
{
	return m_Direction;
}

void PresetShadowEffect::setDirection(double value)
{
	m_Direction = value;
	
}

double PresetShadowEffect::getDistance() const
{
	return m_Distance;
}

void PresetShadowEffect::setDistance(double value)
{
	m_Distance = value;
	
}

utility::string_t PresetShadowEffect::getPreset() const
{
	return m_Preset;
}

void PresetShadowEffect::setPreset(utility::string_t value)
{
	m_Preset = value;
	
}

utility::string_t PresetShadowEffect::getShadowColor() const
{
	return m_ShadowColor;
}

void PresetShadowEffect::setShadowColor(utility::string_t value)
{
	m_ShadowColor = value;
	
}

web::json::value PresetShadowEffect::toJson() const
{
	web::json::value val = web::json::value::object();
	val[utility::conversions::to_string_t("Direction")] = ModelBase::toJson(m_Direction);
	val[utility::conversions::to_string_t("Distance")] = ModelBase::toJson(m_Distance);
	if (!m_Preset.empty())
	{
		val[utility::conversions::to_string_t("Preset")] = ModelBase::toJson(m_Preset);
	}
	if (!m_ShadowColor.empty())
	{
		val[utility::conversions::to_string_t("ShadowColor")] = ModelBase::toJson(m_ShadowColor);
	}
	return val;
}

void PresetShadowEffect::fromJson(web::json::value& val)
{
	web::json::value* jsonForDirection = ModelBase::getField(val, "Direction");
	if(jsonForDirection != nullptr && !jsonForDirection->is_null() && jsonForDirection->is_number())
	{
		setDirection(ModelBase::doubleFromJson(*jsonForDirection));
	}
	web::json::value* jsonForDistance = ModelBase::getField(val, "Distance");
	if(jsonForDistance != nullptr && !jsonForDistance->is_null() && jsonForDistance->is_number())
	{
		setDistance(ModelBase::doubleFromJson(*jsonForDistance));
	}
	web::json::value* jsonForPreset = ModelBase::getField(val, "Preset");
	if(jsonForPreset != nullptr && !jsonForPreset->is_null())
	{
		setPreset(ModelBase::stringFromJson(*jsonForPreset));
	}
	web::json::value* jsonForShadowColor = ModelBase::getField(val, "ShadowColor");
	if(jsonForShadowColor != nullptr && !jsonForShadowColor->is_null())
	{
		setShadowColor(ModelBase::stringFromJson(*jsonForShadowColor));
	}
}

}
}

