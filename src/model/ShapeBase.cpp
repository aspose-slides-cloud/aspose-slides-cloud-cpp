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
#include "ShapeBase.h"

namespace asposeslidescloud {
namespace model {

ShapeBase::ShapeBase()
{
	m_WidthIsSet = false;
	m_HeightIsSet = false;
	m_HiddenIsSet = false;
	m_IsDecorativeIsSet = false;
	m_XIsSet = false;
	m_YIsSet = false;
	m_ZOrderPositionIsSet = false;
}

ShapeBase::~ShapeBase()
{
}

utility::string_t ShapeBase::getName() const
{
	return m_Name;
}

void ShapeBase::setName(utility::string_t value)
{
	m_Name = value;
	
}

double ShapeBase::getWidth() const
{
	return m_Width;
}

void ShapeBase::setWidth(double value)
{
	m_Width = value;
	m_WidthIsSet = true;
}

bool ShapeBase::widthIsSet() const
{
	return m_WidthIsSet;
}

void ShapeBase::unsetWidth()
{
	m_WidthIsSet = false;
}

double ShapeBase::getHeight() const
{
	return m_Height;
}

void ShapeBase::setHeight(double value)
{
	m_Height = value;
	m_HeightIsSet = true;
}

bool ShapeBase::heightIsSet() const
{
	return m_HeightIsSet;
}

void ShapeBase::unsetHeight()
{
	m_HeightIsSet = false;
}

utility::string_t ShapeBase::getAlternativeText() const
{
	return m_AlternativeText;
}

void ShapeBase::setAlternativeText(utility::string_t value)
{
	m_AlternativeText = value;
	
}

utility::string_t ShapeBase::getAlternativeTextTitle() const
{
	return m_AlternativeTextTitle;
}

void ShapeBase::setAlternativeTextTitle(utility::string_t value)
{
	m_AlternativeTextTitle = value;
	
}

bool ShapeBase::isHidden() const
{
	return m_Hidden;
}

void ShapeBase::setHidden(bool value)
{
	m_Hidden = value;
	m_HiddenIsSet = true;
}

bool ShapeBase::hiddenIsSet() const
{
	return m_HiddenIsSet;
}

void ShapeBase::unsetHidden()
{
	m_HiddenIsSet = false;
}

bool ShapeBase::getIsDecorative() const
{
	return m_IsDecorative;
}

void ShapeBase::setIsDecorative(bool value)
{
	m_IsDecorative = value;
	m_IsDecorativeIsSet = true;
}

bool ShapeBase::isDecorativeIsSet() const
{
	return m_IsDecorativeIsSet;
}

void ShapeBase::unsetIsDecorative()
{
	m_IsDecorativeIsSet = false;
}

double ShapeBase::getX() const
{
	return m_X;
}

void ShapeBase::setX(double value)
{
	m_X = value;
	m_XIsSet = true;
}

bool ShapeBase::XIsSet() const
{
	return m_XIsSet;
}

void ShapeBase::unsetX()
{
	m_XIsSet = false;
}

double ShapeBase::getY() const
{
	return m_Y;
}

void ShapeBase::setY(double value)
{
	m_Y = value;
	m_YIsSet = true;
}

bool ShapeBase::YIsSet() const
{
	return m_YIsSet;
}

void ShapeBase::unsetY()
{
	m_YIsSet = false;
}

int32_t ShapeBase::getZOrderPosition() const
{
	return m_ZOrderPosition;
}

void ShapeBase::setZOrderPosition(int32_t value)
{
	m_ZOrderPosition = value;
	m_ZOrderPositionIsSet = true;
}

bool ShapeBase::zOrderPositionIsSet() const
{
	return m_ZOrderPositionIsSet;
}

void ShapeBase::unsetZOrderPosition()
{
	m_ZOrderPositionIsSet = false;
}

std::shared_ptr<FillFormat> ShapeBase::getFillFormat() const
{
	return m_FillFormat;
}

void ShapeBase::setFillFormat(std::shared_ptr<FillFormat> value)
{
	m_FillFormat = value;
	
}

std::shared_ptr<EffectFormat> ShapeBase::getEffectFormat() const
{
	return m_EffectFormat;
}

void ShapeBase::setEffectFormat(std::shared_ptr<EffectFormat> value)
{
	m_EffectFormat = value;
	
}

std::shared_ptr<ThreeDFormat> ShapeBase::getThreeDFormat() const
{
	return m_ThreeDFormat;
}

void ShapeBase::setThreeDFormat(std::shared_ptr<ThreeDFormat> value)
{
	m_ThreeDFormat = value;
	
}

std::shared_ptr<LineFormat> ShapeBase::getLineFormat() const
{
	return m_LineFormat;
}

void ShapeBase::setLineFormat(std::shared_ptr<LineFormat> value)
{
	m_LineFormat = value;
	
}

std::shared_ptr<Hyperlink> ShapeBase::getHyperlinkClick() const
{
	return m_HyperlinkClick;
}

void ShapeBase::setHyperlinkClick(std::shared_ptr<Hyperlink> value)
{
	m_HyperlinkClick = value;
	
}

std::shared_ptr<Hyperlink> ShapeBase::getHyperlinkMouseOver() const
{
	return m_HyperlinkMouseOver;
}

void ShapeBase::setHyperlinkMouseOver(std::shared_ptr<Hyperlink> value)
{
	m_HyperlinkMouseOver = value;
	
}

utility::string_t ShapeBase::getType() const
{
	return m_Type;
}

void ShapeBase::setType(utility::string_t value)
{
	m_Type = value;
	
}

web::json::value ShapeBase::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (!m_Name.empty())
	{
		val[utility::conversions::to_string_t("Name")] = ModelBase::toJson(m_Name);
	}
	if(m_WidthIsSet)
	{
		val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
	}
	if(m_HeightIsSet)
	{
		val[utility::conversions::to_string_t("Height")] = ModelBase::toJson(m_Height);
	}
	if (!m_AlternativeText.empty())
	{
		val[utility::conversions::to_string_t("AlternativeText")] = ModelBase::toJson(m_AlternativeText);
	}
	if (!m_AlternativeTextTitle.empty())
	{
		val[utility::conversions::to_string_t("AlternativeTextTitle")] = ModelBase::toJson(m_AlternativeTextTitle);
	}
	if(m_HiddenIsSet)
	{
		val[utility::conversions::to_string_t("Hidden")] = ModelBase::toJson(m_Hidden);
	}
	if(m_IsDecorativeIsSet)
	{
		val[utility::conversions::to_string_t("IsDecorative")] = ModelBase::toJson(m_IsDecorative);
	}
	if(m_XIsSet)
	{
		val[utility::conversions::to_string_t("X")] = ModelBase::toJson(m_X);
	}
	if(m_YIsSet)
	{
		val[utility::conversions::to_string_t("Y")] = ModelBase::toJson(m_Y);
	}
	if(m_ZOrderPositionIsSet)
	{
		val[utility::conversions::to_string_t("ZOrderPosition")] = ModelBase::toJson(m_ZOrderPosition);
	}
	if (m_FillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("FillFormat")] = ModelBase::toJson(m_FillFormat);
	}
	if (m_EffectFormat != nullptr)
	{
		val[utility::conversions::to_string_t("EffectFormat")] = ModelBase::toJson(m_EffectFormat);
	}
	if (m_ThreeDFormat != nullptr)
	{
		val[utility::conversions::to_string_t("ThreeDFormat")] = ModelBase::toJson(m_ThreeDFormat);
	}
	if (m_LineFormat != nullptr)
	{
		val[utility::conversions::to_string_t("LineFormat")] = ModelBase::toJson(m_LineFormat);
	}
	if (m_HyperlinkClick != nullptr)
	{
		val[utility::conversions::to_string_t("HyperlinkClick")] = ModelBase::toJson(m_HyperlinkClick);
	}
	if (m_HyperlinkMouseOver != nullptr)
	{
		val[utility::conversions::to_string_t("HyperlinkMouseOver")] = ModelBase::toJson(m_HyperlinkMouseOver);
	}
	if (!m_Type.empty())
	{
		val[utility::conversions::to_string_t("Type")] = ModelBase::toJson(m_Type);
	}
	return val;
}

void ShapeBase::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForName = ModelBase::getField(val, "Name");
	if(jsonForName != nullptr && !jsonForName->is_null())
	{
		setName(ModelBase::stringFromJson(*jsonForName));
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
	web::json::value* jsonForAlternativeText = ModelBase::getField(val, "AlternativeText");
	if(jsonForAlternativeText != nullptr && !jsonForAlternativeText->is_null())
	{
		setAlternativeText(ModelBase::stringFromJson(*jsonForAlternativeText));
	}
	web::json::value* jsonForAlternativeTextTitle = ModelBase::getField(val, "AlternativeTextTitle");
	if(jsonForAlternativeTextTitle != nullptr && !jsonForAlternativeTextTitle->is_null())
	{
		setAlternativeTextTitle(ModelBase::stringFromJson(*jsonForAlternativeTextTitle));
	}
	web::json::value* jsonForHidden = ModelBase::getField(val, "Hidden");
	if(jsonForHidden != nullptr && !jsonForHidden->is_null())
	{
		setHidden(ModelBase::boolFromJson(*jsonForHidden));
	}
	web::json::value* jsonForIsDecorative = ModelBase::getField(val, "IsDecorative");
	if(jsonForIsDecorative != nullptr && !jsonForIsDecorative->is_null())
	{
		setIsDecorative(ModelBase::boolFromJson(*jsonForIsDecorative));
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
	web::json::value* jsonForZOrderPosition = ModelBase::getField(val, "ZOrderPosition");
	if(jsonForZOrderPosition != nullptr && !jsonForZOrderPosition->is_null() && jsonForZOrderPosition->is_number())
	{
		setZOrderPosition(ModelBase::int32_tFromJson(*jsonForZOrderPosition));
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
	web::json::value* jsonForThreeDFormat = ModelBase::getField(val, "ThreeDFormat");
	if(jsonForThreeDFormat != nullptr && !jsonForThreeDFormat->is_null())
	{
		std::shared_ptr<void> instanceForThreeDFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"ThreeDFormat", *jsonForThreeDFormat);
		setThreeDFormat(std::static_pointer_cast<ThreeDFormat>(instanceForThreeDFormat));
	}
	web::json::value* jsonForLineFormat = ModelBase::getField(val, "LineFormat");
	if(jsonForLineFormat != nullptr && !jsonForLineFormat->is_null())
	{
		std::shared_ptr<void> instanceForLineFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"LineFormat", *jsonForLineFormat);
		setLineFormat(std::static_pointer_cast<LineFormat>(instanceForLineFormat));
	}
	web::json::value* jsonForHyperlinkClick = ModelBase::getField(val, "HyperlinkClick");
	if(jsonForHyperlinkClick != nullptr && !jsonForHyperlinkClick->is_null())
	{
		std::shared_ptr<void> instanceForHyperlinkClick = asposeslidescloud::api::ClassRegistry::deserialize(L"Hyperlink", *jsonForHyperlinkClick);
		setHyperlinkClick(std::static_pointer_cast<Hyperlink>(instanceForHyperlinkClick));
	}
	web::json::value* jsonForHyperlinkMouseOver = ModelBase::getField(val, "HyperlinkMouseOver");
	if(jsonForHyperlinkMouseOver != nullptr && !jsonForHyperlinkMouseOver->is_null())
	{
		std::shared_ptr<void> instanceForHyperlinkMouseOver = asposeslidescloud::api::ClassRegistry::deserialize(L"Hyperlink", *jsonForHyperlinkMouseOver);
		setHyperlinkMouseOver(std::static_pointer_cast<Hyperlink>(instanceForHyperlinkMouseOver));
	}
	web::json::value* jsonForType = ModelBase::getField(val, "Type");
	if(jsonForType != nullptr && !jsonForType->is_null())
	{
		setType(ModelBase::stringFromJson(*jsonForType));
	}
}

}
}

