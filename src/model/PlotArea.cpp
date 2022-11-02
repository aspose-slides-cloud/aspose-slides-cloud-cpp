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
#include "PlotArea.h"

namespace asposeslidescloud {
namespace model {

PlotArea::PlotArea()
{
	m_XIsSet = false;
	m_YIsSet = false;
	m_WidthIsSet = false;
	m_HeightIsSet = false;
}

PlotArea::~PlotArea()
{
}

double PlotArea::getX() const
{
	return m_X;
}

void PlotArea::setX(double value)
{
	m_X = value;
	m_XIsSet = true;
}

bool PlotArea::XIsSet() const
{
	return m_XIsSet;
}

void PlotArea::unsetX()
{
	m_XIsSet = false;
}

double PlotArea::getY() const
{
	return m_Y;
}

void PlotArea::setY(double value)
{
	m_Y = value;
	m_YIsSet = true;
}

bool PlotArea::YIsSet() const
{
	return m_YIsSet;
}

void PlotArea::unsetY()
{
	m_YIsSet = false;
}

double PlotArea::getWidth() const
{
	return m_Width;
}

void PlotArea::setWidth(double value)
{
	m_Width = value;
	m_WidthIsSet = true;
}

bool PlotArea::widthIsSet() const
{
	return m_WidthIsSet;
}

void PlotArea::unsetWidth()
{
	m_WidthIsSet = false;
}

double PlotArea::getHeight() const
{
	return m_Height;
}

void PlotArea::setHeight(double value)
{
	m_Height = value;
	m_HeightIsSet = true;
}

bool PlotArea::heightIsSet() const
{
	return m_HeightIsSet;
}

void PlotArea::unsetHeight()
{
	m_HeightIsSet = false;
}

utility::string_t PlotArea::getLayoutTargetType() const
{
	return m_LayoutTargetType;
}

void PlotArea::setLayoutTargetType(utility::string_t value)
{
	m_LayoutTargetType = value;
	
}

std::shared_ptr<FillFormat> PlotArea::getFillFormat() const
{
	return m_FillFormat;
}

void PlotArea::setFillFormat(std::shared_ptr<FillFormat> value)
{
	m_FillFormat = value;
	
}

std::shared_ptr<EffectFormat> PlotArea::getEffectFormat() const
{
	return m_EffectFormat;
}

void PlotArea::setEffectFormat(std::shared_ptr<EffectFormat> value)
{
	m_EffectFormat = value;
	
}

std::shared_ptr<LineFormat> PlotArea::getLineFormat() const
{
	return m_LineFormat;
}

void PlotArea::setLineFormat(std::shared_ptr<LineFormat> value)
{
	m_LineFormat = value;
	
}

web::json::value PlotArea::toJson() const
{
	web::json::value val = web::json::value::object();
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
	if (!m_LayoutTargetType.empty())
	{
		val[utility::conversions::to_string_t("LayoutTargetType")] = ModelBase::toJson(m_LayoutTargetType);
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

void PlotArea::fromJson(web::json::value& val)
{
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
	web::json::value* jsonForLayoutTargetType = ModelBase::getField(val, "LayoutTargetType");
	if(jsonForLayoutTargetType != nullptr && !jsonForLayoutTargetType->is_null())
	{
		setLayoutTargetType(ModelBase::stringFromJson(*jsonForLayoutTargetType));
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

