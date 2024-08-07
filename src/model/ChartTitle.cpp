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
#include "ChartTitle.h"

namespace asposeslidescloud {
namespace model {

ChartTitle::ChartTitle()
{
	m_XIsSet = false;
	m_YIsSet = false;
	m_WidthIsSet = false;
	m_HeightIsSet = false;
	m_OverlayIsSet = false;
}

ChartTitle::~ChartTitle()
{
}

utility::string_t ChartTitle::getText() const
{
	return m_Text;
}

void ChartTitle::setText(utility::string_t value)
{
	m_Text = value;
	
}

double ChartTitle::getX() const
{
	return m_X;
}

void ChartTitle::setX(double value)
{
	m_X = value;
	m_XIsSet = true;
}

bool ChartTitle::XIsSet() const
{
	return m_XIsSet;
}

void ChartTitle::unsetX()
{
	m_XIsSet = false;
}

double ChartTitle::getY() const
{
	return m_Y;
}

void ChartTitle::setY(double value)
{
	m_Y = value;
	m_YIsSet = true;
}

bool ChartTitle::YIsSet() const
{
	return m_YIsSet;
}

void ChartTitle::unsetY()
{
	m_YIsSet = false;
}

double ChartTitle::getWidth() const
{
	return m_Width;
}

void ChartTitle::setWidth(double value)
{
	m_Width = value;
	m_WidthIsSet = true;
}

bool ChartTitle::widthIsSet() const
{
	return m_WidthIsSet;
}

void ChartTitle::unsetWidth()
{
	m_WidthIsSet = false;
}

double ChartTitle::getHeight() const
{
	return m_Height;
}

void ChartTitle::setHeight(double value)
{
	m_Height = value;
	m_HeightIsSet = true;
}

bool ChartTitle::heightIsSet() const
{
	return m_HeightIsSet;
}

void ChartTitle::unsetHeight()
{
	m_HeightIsSet = false;
}

bool ChartTitle::isOverlay() const
{
	return m_Overlay;
}

void ChartTitle::setOverlay(bool value)
{
	m_Overlay = value;
	m_OverlayIsSet = true;
}

bool ChartTitle::overlayIsSet() const
{
	return m_OverlayIsSet;
}

void ChartTitle::unsetOverlay()
{
	m_OverlayIsSet = false;
}

std::shared_ptr<FillFormat> ChartTitle::getFillFormat() const
{
	return m_FillFormat;
}

void ChartTitle::setFillFormat(std::shared_ptr<FillFormat> value)
{
	m_FillFormat = value;
	
}

std::shared_ptr<EffectFormat> ChartTitle::getEffectFormat() const
{
	return m_EffectFormat;
}

void ChartTitle::setEffectFormat(std::shared_ptr<EffectFormat> value)
{
	m_EffectFormat = value;
	
}

std::shared_ptr<LineFormat> ChartTitle::getLineFormat() const
{
	return m_LineFormat;
}

void ChartTitle::setLineFormat(std::shared_ptr<LineFormat> value)
{
	m_LineFormat = value;
	
}

web::json::value ChartTitle::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Text.empty())
	{
		val[utility::conversions::to_string_t("Text")] = ModelBase::toJson(m_Text);
	}
	if(m_XIsSet)
	{
		val[utility::conversions::to_string_t("X")] = ModelBase::toJson(m_X);
	}
	if(m_YIsSet)
	{
		val[utility::conversions::to_string_t("Y")] = ModelBase::toJson(m_Y);
	}
	if(m_WidthIsSet)
	{
		val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
	}
	if(m_HeightIsSet)
	{
		val[utility::conversions::to_string_t("Height")] = ModelBase::toJson(m_Height);
	}
	if(m_OverlayIsSet)
	{
		val[utility::conversions::to_string_t("Overlay")] = ModelBase::toJson(m_Overlay);
	}
	if (m_FillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("FillFormat")] = ModelBase::toJson(m_FillFormat);
	}
	if (m_EffectFormat != nullptr)
	{
		val[utility::conversions::to_string_t("EffectFormat")] = ModelBase::toJson(m_EffectFormat);
	}
	if (m_LineFormat != nullptr)
	{
		val[utility::conversions::to_string_t("LineFormat")] = ModelBase::toJson(m_LineFormat);
	}
	return val;
}

void ChartTitle::fromJson(web::json::value& val)
{
	web::json::value* jsonForText = ModelBase::getField(val, "Text");
	if(jsonForText != nullptr && !jsonForText->is_null())
	{
		setText(ModelBase::stringFromJson(*jsonForText));
	}
	web::json::value* jsonForX = ModelBase::getField(val, "X");
	if(jsonForX != nullptr && !jsonForX->is_null() && jsonForX->is_number())
	{
		setX(ModelBase::doubleFromJson(*jsonForX));
	}
	web::json::value* jsonForY = ModelBase::getField(val, "Y");
	if(jsonForY != nullptr && !jsonForY->is_null() && jsonForY->is_number())
	{
		setY(ModelBase::doubleFromJson(*jsonForY));
	}
	web::json::value* jsonForWidth = ModelBase::getField(val, "Width");
	if(jsonForWidth != nullptr && !jsonForWidth->is_null() && jsonForWidth->is_number())
	{
		setWidth(ModelBase::doubleFromJson(*jsonForWidth));
	}
	web::json::value* jsonForHeight = ModelBase::getField(val, "Height");
	if(jsonForHeight != nullptr && !jsonForHeight->is_null() && jsonForHeight->is_number())
	{
		setHeight(ModelBase::doubleFromJson(*jsonForHeight));
	}
	web::json::value* jsonForOverlay = ModelBase::getField(val, "Overlay");
	if(jsonForOverlay != nullptr && !jsonForOverlay->is_null())
	{
		setOverlay(ModelBase::boolFromJson(*jsonForOverlay));
	}
	web::json::value* jsonForFillFormat = ModelBase::getField(val, "FillFormat");
	if(jsonForFillFormat != nullptr && !jsonForFillFormat->is_null())
	{
		std::shared_ptr<void> instanceForFillFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"FillFormat", *jsonForFillFormat);
		setFillFormat(std::static_pointer_cast<FillFormat>(instanceForFillFormat));
	}
	web::json::value* jsonForEffectFormat = ModelBase::getField(val, "EffectFormat");
	if(jsonForEffectFormat != nullptr && !jsonForEffectFormat->is_null())
	{
		std::shared_ptr<void> instanceForEffectFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"EffectFormat", *jsonForEffectFormat);
		setEffectFormat(std::static_pointer_cast<EffectFormat>(instanceForEffectFormat));
	}
	web::json::value* jsonForLineFormat = ModelBase::getField(val, "LineFormat");
	if(jsonForLineFormat != nullptr && !jsonForLineFormat->is_null())
	{
		std::shared_ptr<void> instanceForLineFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"LineFormat", *jsonForLineFormat);
		setLineFormat(std::static_pointer_cast<LineFormat>(instanceForLineFormat));
	}
}

}
}

