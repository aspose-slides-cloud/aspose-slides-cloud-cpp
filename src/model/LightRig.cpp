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



#include "LightRig.h"

namespace asposeslidescloud {
namespace model {

LightRig::LightRig()
{
	m_XRotationIsSet = false;
	m_YRotationIsSet = false;
	m_ZRotationIsSet = false;
}

LightRig::~LightRig()
{
}

utility::string_t LightRig::getDirection() const
{
	return m_Direction;
}

void LightRig::setDirection(utility::string_t value)
{
	m_Direction = value;
	
}

utility::string_t LightRig::getLightType() const
{
	return m_LightType;
}

void LightRig::setLightType(utility::string_t value)
{
	m_LightType = value;
	
}

double LightRig::getXRotation() const
{
	return m_XRotation;
}

void LightRig::setXRotation(double value)
{
	m_XRotation = value;
	m_XRotationIsSet = true;
}

bool LightRig::xRotationIsSet() const
{
	return m_XRotationIsSet;
}

void LightRig::unsetXRotation()
{
	m_XRotationIsSet = false;
}

double LightRig::getYRotation() const
{
	return m_YRotation;
}

void LightRig::setYRotation(double value)
{
	m_YRotation = value;
	m_YRotationIsSet = true;
}

bool LightRig::yRotationIsSet() const
{
	return m_YRotationIsSet;
}

void LightRig::unsetYRotation()
{
	m_YRotationIsSet = false;
}

double LightRig::getZRotation() const
{
	return m_ZRotation;
}

void LightRig::setZRotation(double value)
{
	m_ZRotation = value;
	m_ZRotationIsSet = true;
}

bool LightRig::zRotationIsSet() const
{
	return m_ZRotationIsSet;
}

void LightRig::unsetZRotation()
{
	m_ZRotationIsSet = false;
}

web::json::value LightRig::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Direction.empty())
	{
		val[utility::conversions::to_string_t("Direction")] = ModelBase::toJson(m_Direction);
	}
	if (!m_LightType.empty())
	{
		val[utility::conversions::to_string_t("LightType")] = ModelBase::toJson(m_LightType);
	}
	if(m_XRotationIsSet)
	{
		val[utility::conversions::to_string_t("XRotation")] = ModelBase::toJson(m_XRotation);
	}
	if(m_YRotationIsSet)
	{
		val[utility::conversions::to_string_t("YRotation")] = ModelBase::toJson(m_YRotation);
	}
	if(m_ZRotationIsSet)
	{
		val[utility::conversions::to_string_t("ZRotation")] = ModelBase::toJson(m_ZRotation);
	}
	return val;
}

void LightRig::fromJson(web::json::value& val)
{
	web::json::value* jsonForDirection = ModelBase::getField(val, "Direction");
	if(jsonForDirection != nullptr && !jsonForDirection->is_null())
	{
		setDirection(ModelBase::stringFromJson(*jsonForDirection));
	}
	web::json::value* jsonForLightType = ModelBase::getField(val, "LightType");
	if(jsonForLightType != nullptr && !jsonForLightType->is_null())
	{
		setLightType(ModelBase::stringFromJson(*jsonForLightType));
	}
	web::json::value* jsonForXRotation = ModelBase::getField(val, "XRotation");
	if(jsonForXRotation != nullptr && !jsonForXRotation->is_null() && jsonForXRotation->is_number())
	{
		setXRotation(ModelBase::doubleFromJson(*jsonForXRotation));
	}
	web::json::value* jsonForYRotation = ModelBase::getField(val, "YRotation");
	if(jsonForYRotation != nullptr && !jsonForYRotation->is_null() && jsonForYRotation->is_number())
	{
		setYRotation(ModelBase::doubleFromJson(*jsonForYRotation));
	}
	web::json::value* jsonForZRotation = ModelBase::getField(val, "ZRotation");
	if(jsonForZRotation != nullptr && !jsonForZRotation->is_null() && jsonForZRotation->is_number())
	{
		setZRotation(ModelBase::doubleFromJson(*jsonForZRotation));
	}
}

}
}

