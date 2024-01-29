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
#include "ReflectionEffect.h"

namespace asposeslidescloud {
namespace model {

ReflectionEffect::ReflectionEffect()
{
	setDirection(0.0);
	setFadeDirection(0.0);
	setDistance(0.0);
	setBlurRadius(0.0);
	setScaleHorizontal(0.0);
	setScaleVertical(0.0);
	setSkewHorizontal(0.0);
	setSkewVertical(0.0);
	setStartPosAlpha(0.0);
	setEndPosAlpha(0.0);
	setStartReflectionOpacity(0.0);
	setEndReflectionOpacity(0.0);
}

ReflectionEffect::~ReflectionEffect()
{
}

double ReflectionEffect::getDirection() const
{
	return m_Direction;
}

void ReflectionEffect::setDirection(double value)
{
	m_Direction = value;
	
}

double ReflectionEffect::getFadeDirection() const
{
	return m_FadeDirection;
}

void ReflectionEffect::setFadeDirection(double value)
{
	m_FadeDirection = value;
	
}

double ReflectionEffect::getDistance() const
{
	return m_Distance;
}

void ReflectionEffect::setDistance(double value)
{
	m_Distance = value;
	
}

double ReflectionEffect::getBlurRadius() const
{
	return m_BlurRadius;
}

void ReflectionEffect::setBlurRadius(double value)
{
	m_BlurRadius = value;
	
}

double ReflectionEffect::getScaleHorizontal() const
{
	return m_ScaleHorizontal;
}

void ReflectionEffect::setScaleHorizontal(double value)
{
	m_ScaleHorizontal = value;
	
}

double ReflectionEffect::getScaleVertical() const
{
	return m_ScaleVertical;
}

void ReflectionEffect::setScaleVertical(double value)
{
	m_ScaleVertical = value;
	
}

double ReflectionEffect::getSkewHorizontal() const
{
	return m_SkewHorizontal;
}

void ReflectionEffect::setSkewHorizontal(double value)
{
	m_SkewHorizontal = value;
	
}

double ReflectionEffect::getSkewVertical() const
{
	return m_SkewVertical;
}

void ReflectionEffect::setSkewVertical(double value)
{
	m_SkewVertical = value;
	
}

double ReflectionEffect::getStartPosAlpha() const
{
	return m_StartPosAlpha;
}

void ReflectionEffect::setStartPosAlpha(double value)
{
	m_StartPosAlpha = value;
	
}

double ReflectionEffect::getEndPosAlpha() const
{
	return m_EndPosAlpha;
}

void ReflectionEffect::setEndPosAlpha(double value)
{
	m_EndPosAlpha = value;
	
}

double ReflectionEffect::getStartReflectionOpacity() const
{
	return m_StartReflectionOpacity;
}

void ReflectionEffect::setStartReflectionOpacity(double value)
{
	m_StartReflectionOpacity = value;
	
}

double ReflectionEffect::getEndReflectionOpacity() const
{
	return m_EndReflectionOpacity;
}

void ReflectionEffect::setEndReflectionOpacity(double value)
{
	m_EndReflectionOpacity = value;
	
}

utility::string_t ReflectionEffect::getRectangleAlign() const
{
	return m_RectangleAlign;
}

void ReflectionEffect::setRectangleAlign(utility::string_t value)
{
	m_RectangleAlign = value;
	
}

bool ReflectionEffect::isRotateShadowWithShape() const
{
	return m_RotateShadowWithShape;
}

void ReflectionEffect::setRotateShadowWithShape(bool value)
{
	m_RotateShadowWithShape = value;
	
}

web::json::value ReflectionEffect::toJson() const
{
	web::json::value val = web::json::value::object();
	val[utility::conversions::to_string_t("Direction")] = ModelBase::toJson(m_Direction);
	val[utility::conversions::to_string_t("FadeDirection")] = ModelBase::toJson(m_FadeDirection);
	val[utility::conversions::to_string_t("Distance")] = ModelBase::toJson(m_Distance);
	val[utility::conversions::to_string_t("BlurRadius")] = ModelBase::toJson(m_BlurRadius);
	val[utility::conversions::to_string_t("ScaleHorizontal")] = ModelBase::toJson(m_ScaleHorizontal);
	val[utility::conversions::to_string_t("ScaleVertical")] = ModelBase::toJson(m_ScaleVertical);
	val[utility::conversions::to_string_t("SkewHorizontal")] = ModelBase::toJson(m_SkewHorizontal);
	val[utility::conversions::to_string_t("SkewVertical")] = ModelBase::toJson(m_SkewVertical);
	val[utility::conversions::to_string_t("StartPosAlpha")] = ModelBase::toJson(m_StartPosAlpha);
	val[utility::conversions::to_string_t("EndPosAlpha")] = ModelBase::toJson(m_EndPosAlpha);
	val[utility::conversions::to_string_t("StartReflectionOpacity")] = ModelBase::toJson(m_StartReflectionOpacity);
	val[utility::conversions::to_string_t("EndReflectionOpacity")] = ModelBase::toJson(m_EndReflectionOpacity);
	if (!m_RectangleAlign.empty())
	{
		val[utility::conversions::to_string_t("RectangleAlign")] = ModelBase::toJson(m_RectangleAlign);
	}
	val[utility::conversions::to_string_t("RotateShadowWithShape")] = ModelBase::toJson(m_RotateShadowWithShape);
	return val;
}

void ReflectionEffect::fromJson(web::json::value& val)
{
	web::json::value* jsonForDirection = ModelBase::getField(val, "Direction");
	if(jsonForDirection != nullptr && !jsonForDirection->is_null() && jsonForDirection->is_number())
	{
		setDirection(ModelBase::doubleFromJson(*jsonForDirection));
	}
	web::json::value* jsonForFadeDirection = ModelBase::getField(val, "FadeDirection");
	if(jsonForFadeDirection != nullptr && !jsonForFadeDirection->is_null() && jsonForFadeDirection->is_number())
	{
		setFadeDirection(ModelBase::doubleFromJson(*jsonForFadeDirection));
	}
	web::json::value* jsonForDistance = ModelBase::getField(val, "Distance");
	if(jsonForDistance != nullptr && !jsonForDistance->is_null() && jsonForDistance->is_number())
	{
		setDistance(ModelBase::doubleFromJson(*jsonForDistance));
	}
	web::json::value* jsonForBlurRadius = ModelBase::getField(val, "BlurRadius");
	if(jsonForBlurRadius != nullptr && !jsonForBlurRadius->is_null() && jsonForBlurRadius->is_number())
	{
		setBlurRadius(ModelBase::doubleFromJson(*jsonForBlurRadius));
	}
	web::json::value* jsonForScaleHorizontal = ModelBase::getField(val, "ScaleHorizontal");
	if(jsonForScaleHorizontal != nullptr && !jsonForScaleHorizontal->is_null() && jsonForScaleHorizontal->is_number())
	{
		setScaleHorizontal(ModelBase::doubleFromJson(*jsonForScaleHorizontal));
	}
	web::json::value* jsonForScaleVertical = ModelBase::getField(val, "ScaleVertical");
	if(jsonForScaleVertical != nullptr && !jsonForScaleVertical->is_null() && jsonForScaleVertical->is_number())
	{
		setScaleVertical(ModelBase::doubleFromJson(*jsonForScaleVertical));
	}
	web::json::value* jsonForSkewHorizontal = ModelBase::getField(val, "SkewHorizontal");
	if(jsonForSkewHorizontal != nullptr && !jsonForSkewHorizontal->is_null() && jsonForSkewHorizontal->is_number())
	{
		setSkewHorizontal(ModelBase::doubleFromJson(*jsonForSkewHorizontal));
	}
	web::json::value* jsonForSkewVertical = ModelBase::getField(val, "SkewVertical");
	if(jsonForSkewVertical != nullptr && !jsonForSkewVertical->is_null() && jsonForSkewVertical->is_number())
	{
		setSkewVertical(ModelBase::doubleFromJson(*jsonForSkewVertical));
	}
	web::json::value* jsonForStartPosAlpha = ModelBase::getField(val, "StartPosAlpha");
	if(jsonForStartPosAlpha != nullptr && !jsonForStartPosAlpha->is_null() && jsonForStartPosAlpha->is_number())
	{
		setStartPosAlpha(ModelBase::doubleFromJson(*jsonForStartPosAlpha));
	}
	web::json::value* jsonForEndPosAlpha = ModelBase::getField(val, "EndPosAlpha");
	if(jsonForEndPosAlpha != nullptr && !jsonForEndPosAlpha->is_null() && jsonForEndPosAlpha->is_number())
	{
		setEndPosAlpha(ModelBase::doubleFromJson(*jsonForEndPosAlpha));
	}
	web::json::value* jsonForStartReflectionOpacity = ModelBase::getField(val, "StartReflectionOpacity");
	if(jsonForStartReflectionOpacity != nullptr && !jsonForStartReflectionOpacity->is_null() && jsonForStartReflectionOpacity->is_number())
	{
		setStartReflectionOpacity(ModelBase::doubleFromJson(*jsonForStartReflectionOpacity));
	}
	web::json::value* jsonForEndReflectionOpacity = ModelBase::getField(val, "EndReflectionOpacity");
	if(jsonForEndReflectionOpacity != nullptr && !jsonForEndReflectionOpacity->is_null() && jsonForEndReflectionOpacity->is_number())
	{
		setEndReflectionOpacity(ModelBase::doubleFromJson(*jsonForEndReflectionOpacity));
	}
	web::json::value* jsonForRectangleAlign = ModelBase::getField(val, "RectangleAlign");
	if(jsonForRectangleAlign != nullptr && !jsonForRectangleAlign->is_null())
	{
		setRectangleAlign(ModelBase::stringFromJson(*jsonForRectangleAlign));
	}
	web::json::value* jsonForRotateShadowWithShape = ModelBase::getField(val, "RotateShadowWithShape");
	if(jsonForRotateShadowWithShape != nullptr && !jsonForRotateShadowWithShape->is_null())
	{
		setRotateShadowWithShape(ModelBase::boolFromJson(*jsonForRotateShadowWithShape));
	}
}

}
}

