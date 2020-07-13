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



#include "InnerShadowEffect.h"

namespace asposeslidescloud {
namespace model {

InnerShadowEffect::InnerShadowEffect()
{
}

InnerShadowEffect::~InnerShadowEffect()
{
}

double InnerShadowEffect::getDirection() const
{
	return m_Direction;
}

void InnerShadowEffect::setDirection(double value)
{
	m_Direction = value;
	
}

double InnerShadowEffect::getDistance() const
{
	return m_Distance;
}

void InnerShadowEffect::setDistance(double value)
{
	m_Distance = value;
	
}

double InnerShadowEffect::getBlurRadius() const
{
	return m_BlurRadius;
}

void InnerShadowEffect::setBlurRadius(double value)
{
	m_BlurRadius = value;
	
}

utility::string_t InnerShadowEffect::getShadowColor() const
{
	return m_ShadowColor;
}

void InnerShadowEffect::setShadowColor(utility::string_t value)
{
	m_ShadowColor = value;
	
}

web::json::value InnerShadowEffect::toJson() const
{
	web::json::value val = web::json::value::object();
	val[utility::conversions::to_string_t("Direction")] = ModelBase::toJson(m_Direction);
	val[utility::conversions::to_string_t("Distance")] = ModelBase::toJson(m_Distance);
	val[utility::conversions::to_string_t("BlurRadius")] = ModelBase::toJson(m_BlurRadius);
	if (!m_ShadowColor.empty())
	{
		val[utility::conversions::to_string_t("ShadowColor")] = ModelBase::toJson(m_ShadowColor);
	}
	return val;
}

void InnerShadowEffect::fromJson(web::json::value& val)
{
	web::json::value* jsonForDirection = ModelBase::getField(val, "Direction");
	if(jsonForDirection != nullptr && !jsonForDirection->is_null())
	{
		setDirection(ModelBase::doubleFromJson(*jsonForDirection));
	}
	web::json::value* jsonForDistance = ModelBase::getField(val, "Distance");
	if(jsonForDistance != nullptr && !jsonForDistance->is_null())
	{
		setDistance(ModelBase::doubleFromJson(*jsonForDistance));
	}
	web::json::value* jsonForBlurRadius = ModelBase::getField(val, "BlurRadius");
	if(jsonForBlurRadius != nullptr && !jsonForBlurRadius->is_null())
	{
		setBlurRadius(ModelBase::doubleFromJson(*jsonForBlurRadius));
	}
	web::json::value* jsonForShadowColor = ModelBase::getField(val, "ShadowColor");
	if(jsonForShadowColor != nullptr && !jsonForShadowColor->is_null())
	{
		setShadowColor(ModelBase::stringFromJson(*jsonForShadowColor));
	}
}

}
}

