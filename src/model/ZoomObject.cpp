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
#include "ZoomObject.h"

namespace asposeslidescloud {
namespace model {

ZoomObject::ZoomObject()
{
	m_ReturnToParentIsSet = false;
	m_ShowBackgroundIsSet = false;
	m_TransitionDurationIsSet = false;
}

ZoomObject::~ZoomObject()
{
}

utility::string_t ZoomObject::getImageType() const
{
	return m_ImageType;
}

void ZoomObject::setImageType(utility::string_t value)
{
	m_ImageType = value;
	
}

bool ZoomObject::isReturnToParent() const
{
	return m_ReturnToParent;
}

void ZoomObject::setReturnToParent(bool value)
{
	m_ReturnToParent = value;
	m_ReturnToParentIsSet = true;
}

bool ZoomObject::returnToParentIsSet() const
{
	return m_ReturnToParentIsSet;
}

void ZoomObject::unsetReturnToParent()
{
	m_ReturnToParentIsSet = false;
}

bool ZoomObject::isShowBackground() const
{
	return m_ShowBackground;
}

void ZoomObject::setShowBackground(bool value)
{
	m_ShowBackground = value;
	m_ShowBackgroundIsSet = true;
}

bool ZoomObject::showBackgroundIsSet() const
{
	return m_ShowBackgroundIsSet;
}

void ZoomObject::unsetShowBackground()
{
	m_ShowBackgroundIsSet = false;
}

std::shared_ptr<ResourceUri> ZoomObject::getImage() const
{
	return m_Image;
}

void ZoomObject::setImage(std::shared_ptr<ResourceUri> value)
{
	m_Image = value;
	
}

double ZoomObject::getTransitionDuration() const
{
	return m_TransitionDuration;
}

void ZoomObject::setTransitionDuration(double value)
{
	m_TransitionDuration = value;
	m_TransitionDurationIsSet = true;
}

bool ZoomObject::transitionDurationIsSet() const
{
	return m_TransitionDurationIsSet;
}

void ZoomObject::unsetTransitionDuration()
{
	m_TransitionDurationIsSet = false;
}

web::json::value ZoomObject::toJson() const
{
	web::json::value val = this->ShapeBase::toJson();
	if (!m_ImageType.empty())
	{
		val[utility::conversions::to_string_t("ImageType")] = ModelBase::toJson(m_ImageType);
	}
	if(m_ReturnToParentIsSet)
	{
		val[utility::conversions::to_string_t("ReturnToParent")] = ModelBase::toJson(m_ReturnToParent);
	}
	if(m_ShowBackgroundIsSet)
	{
		val[utility::conversions::to_string_t("ShowBackground")] = ModelBase::toJson(m_ShowBackground);
	}
	if (m_Image != nullptr)
	{
		val[utility::conversions::to_string_t("Image")] = ModelBase::toJson(m_Image);
	}
	if(m_TransitionDurationIsSet)
	{
		val[utility::conversions::to_string_t("TransitionDuration")] = ModelBase::toJson(m_TransitionDuration);
	}
	return val;
}

void ZoomObject::fromJson(web::json::value& val)
{
	this->ShapeBase::fromJson(val);
	web::json::value* jsonForImageType = ModelBase::getField(val, "ImageType");
	if(jsonForImageType != nullptr && !jsonForImageType->is_null())
	{
		setImageType(ModelBase::stringFromJson(*jsonForImageType));
	}
	web::json::value* jsonForReturnToParent = ModelBase::getField(val, "ReturnToParent");
	if(jsonForReturnToParent != nullptr && !jsonForReturnToParent->is_null())
	{
		setReturnToParent(ModelBase::boolFromJson(*jsonForReturnToParent));
	}
	web::json::value* jsonForShowBackground = ModelBase::getField(val, "ShowBackground");
	if(jsonForShowBackground != nullptr && !jsonForShowBackground->is_null())
	{
		setShowBackground(ModelBase::boolFromJson(*jsonForShowBackground));
	}
	web::json::value* jsonForImage = ModelBase::getField(val, "Image");
	if(jsonForImage != nullptr && !jsonForImage->is_null())
	{
		std::shared_ptr<void> instanceForImage = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForImage);
		setImage(std::static_pointer_cast<ResourceUri>(instanceForImage));
	}
	web::json::value* jsonForTransitionDuration = ModelBase::getField(val, "TransitionDuration");
	if(jsonForTransitionDuration != nullptr && !jsonForTransitionDuration->is_null() && jsonForTransitionDuration->is_number())
	{
		setTransitionDuration(ModelBase::doubleFromJson(*jsonForTransitionDuration));
	}
}

}
}

