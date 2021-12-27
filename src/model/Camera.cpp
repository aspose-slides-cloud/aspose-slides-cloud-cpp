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



#include "Camera.h"

namespace asposeslidescloud {
namespace model {

Camera::Camera()
{
	m_FieldOfViewAngleIsSet = false;
	m_ZoomIsSet = false;
	m_XRotationIsSet = false;
	m_YRotationIsSet = false;
	m_ZRotationIsSet = false;
}

Camera::~Camera()
{
}

utility::string_t Camera::getCameraType() const
{
	return m_CameraType;
}

void Camera::setCameraType(utility::string_t value)
{
	m_CameraType = value;
	
}

double Camera::getFieldOfViewAngle() const
{
	return m_FieldOfViewAngle;
}

void Camera::setFieldOfViewAngle(double value)
{
	m_FieldOfViewAngle = value;
	m_FieldOfViewAngleIsSet = true;
}

bool Camera::fieldOfViewAngleIsSet() const
{
	return m_FieldOfViewAngleIsSet;
}

void Camera::unsetFieldOfViewAngle()
{
	m_FieldOfViewAngleIsSet = false;
}

double Camera::getZoom() const
{
	return m_Zoom;
}

void Camera::setZoom(double value)
{
	m_Zoom = value;
	m_ZoomIsSet = true;
}

bool Camera::zoomIsSet() const
{
	return m_ZoomIsSet;
}

void Camera::unsetZoom()
{
	m_ZoomIsSet = false;
}

double Camera::getXRotation() const
{
	return m_XRotation;
}

void Camera::setXRotation(double value)
{
	m_XRotation = value;
	m_XRotationIsSet = true;
}

bool Camera::xRotationIsSet() const
{
	return m_XRotationIsSet;
}

void Camera::unsetXRotation()
{
	m_XRotationIsSet = false;
}

double Camera::getYRotation() const
{
	return m_YRotation;
}

void Camera::setYRotation(double value)
{
	m_YRotation = value;
	m_YRotationIsSet = true;
}

bool Camera::yRotationIsSet() const
{
	return m_YRotationIsSet;
}

void Camera::unsetYRotation()
{
	m_YRotationIsSet = false;
}

double Camera::getZRotation() const
{
	return m_ZRotation;
}

void Camera::setZRotation(double value)
{
	m_ZRotation = value;
	m_ZRotationIsSet = true;
}

bool Camera::zRotationIsSet() const
{
	return m_ZRotationIsSet;
}

void Camera::unsetZRotation()
{
	m_ZRotationIsSet = false;
}

web::json::value Camera::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_CameraType.empty())
	{
		val[utility::conversions::to_string_t("CameraType")] = ModelBase::toJson(m_CameraType);
	}
	if(m_FieldOfViewAngleIsSet)
	{
		val[utility::conversions::to_string_t("FieldOfViewAngle")] = ModelBase::toJson(m_FieldOfViewAngle);
	}
	if(m_ZoomIsSet)
	{
		val[utility::conversions::to_string_t("Zoom")] = ModelBase::toJson(m_Zoom);
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

void Camera::fromJson(web::json::value& val)
{
	web::json::value* jsonForCameraType = ModelBase::getField(val, "CameraType");
	if(jsonForCameraType != nullptr && !jsonForCameraType->is_null())
	{
		setCameraType(ModelBase::stringFromJson(*jsonForCameraType));
	}
	web::json::value* jsonForFieldOfViewAngle = ModelBase::getField(val, "FieldOfViewAngle");
	if(jsonForFieldOfViewAngle != nullptr && !jsonForFieldOfViewAngle->is_null() && jsonForFieldOfViewAngle->is_number())
	{
		setFieldOfViewAngle(ModelBase::doubleFromJson(*jsonForFieldOfViewAngle));
	}
	web::json::value* jsonForZoom = ModelBase::getField(val, "Zoom");
	if(jsonForZoom != nullptr && !jsonForZoom->is_null() && jsonForZoom->is_number())
	{
		setZoom(ModelBase::doubleFromJson(*jsonForZoom));
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

