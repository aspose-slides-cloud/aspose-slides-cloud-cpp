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
#include "SlideProperties.h"

namespace asposeslidescloud {
namespace model {

SlideProperties::SlideProperties()
{
	m_FirstSlideNumberIsSet = false;
	m_WidthIsSet = false;
	m_HeightIsSet = false;
}

SlideProperties::~SlideProperties()
{
}

int32_t SlideProperties::getFirstSlideNumber() const
{
	return m_FirstSlideNumber;
}

void SlideProperties::setFirstSlideNumber(int32_t value)
{
	m_FirstSlideNumber = value;
	m_FirstSlideNumberIsSet = true;
}

bool SlideProperties::firstSlideNumberIsSet() const
{
	return m_FirstSlideNumberIsSet;
}

void SlideProperties::unsetFirstSlideNumber()
{
	m_FirstSlideNumberIsSet = false;
}

utility::string_t SlideProperties::getOrientation() const
{
	return m_Orientation;
}

void SlideProperties::setOrientation(utility::string_t value)
{
	m_Orientation = value;
	
}

utility::string_t SlideProperties::getScaleType() const
{
	return m_ScaleType;
}

void SlideProperties::setScaleType(utility::string_t value)
{
	m_ScaleType = value;
	
}

utility::string_t SlideProperties::getSizeType() const
{
	return m_SizeType;
}

void SlideProperties::setSizeType(utility::string_t value)
{
	m_SizeType = value;
	
}

int32_t SlideProperties::getWidth() const
{
	return m_Width;
}

void SlideProperties::setWidth(int32_t value)
{
	m_Width = value;
	m_WidthIsSet = true;
}

bool SlideProperties::widthIsSet() const
{
	return m_WidthIsSet;
}

void SlideProperties::unsetWidth()
{
	m_WidthIsSet = false;
}

int32_t SlideProperties::getHeight() const
{
	return m_Height;
}

void SlideProperties::setHeight(int32_t value)
{
	m_Height = value;
	m_HeightIsSet = true;
}

bool SlideProperties::heightIsSet() const
{
	return m_HeightIsSet;
}

void SlideProperties::unsetHeight()
{
	m_HeightIsSet = false;
}

web::json::value SlideProperties::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if(m_FirstSlideNumberIsSet)
	{
		val[utility::conversions::to_string_t("FirstSlideNumber")] = ModelBase::toJson(m_FirstSlideNumber);
	}
	if (!m_Orientation.empty())
	{
		val[utility::conversions::to_string_t("Orientation")] = ModelBase::toJson(m_Orientation);
	}
	if (!m_ScaleType.empty())
	{
		val[utility::conversions::to_string_t("ScaleType")] = ModelBase::toJson(m_ScaleType);
	}
	if (!m_SizeType.empty())
	{
		val[utility::conversions::to_string_t("SizeType")] = ModelBase::toJson(m_SizeType);
	}
	if(m_WidthIsSet)
	{
		val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
	}
	if(m_HeightIsSet)
	{
		val[utility::conversions::to_string_t("Height")] = ModelBase::toJson(m_Height);
	}
	return val;
}

void SlideProperties::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForFirstSlideNumber = ModelBase::getField(val, "FirstSlideNumber");
	if(jsonForFirstSlideNumber != nullptr && !jsonForFirstSlideNumber->is_null() && jsonForFirstSlideNumber->is_number())
	{
		setFirstSlideNumber(ModelBase::int32_tFromJson(*jsonForFirstSlideNumber));
	}
	web::json::value* jsonForOrientation = ModelBase::getField(val, "Orientation");
	if(jsonForOrientation != nullptr && !jsonForOrientation->is_null())
	{
		setOrientation(ModelBase::stringFromJson(*jsonForOrientation));
	}
	web::json::value* jsonForScaleType = ModelBase::getField(val, "ScaleType");
	if(jsonForScaleType != nullptr && !jsonForScaleType->is_null())
	{
		setScaleType(ModelBase::stringFromJson(*jsonForScaleType));
	}
	web::json::value* jsonForSizeType = ModelBase::getField(val, "SizeType");
	if(jsonForSizeType != nullptr && !jsonForSizeType->is_null())
	{
		setSizeType(ModelBase::stringFromJson(*jsonForSizeType));
	}
	web::json::value* jsonForWidth = ModelBase::getField(val, "Width");
	if(jsonForWidth != nullptr && !jsonForWidth->is_null() && jsonForWidth->is_number())
	{
		setWidth(ModelBase::int32_tFromJson(*jsonForWidth));
	}
	web::json::value* jsonForHeight = ModelBase::getField(val, "Height");
	if(jsonForHeight != nullptr && !jsonForHeight->is_null() && jsonForHeight->is_number())
	{
		setHeight(ModelBase::int32_tFromJson(*jsonForHeight));
	}
}

}
}

