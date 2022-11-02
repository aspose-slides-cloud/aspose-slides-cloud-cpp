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
#include "BorderBoxElement.h"

namespace asposeslidescloud {
namespace model {

BorderBoxElement::BorderBoxElement()
{
	m_HideTopIsSet = false;
	m_HideBottomIsSet = false;
	m_HideLeftIsSet = false;
	m_HideRightIsSet = false;
	m_StrikethroughHorizontalIsSet = false;
	m_StrikethroughVerticalIsSet = false;
	m_StrikethroughBottomLeftToTopRightIsSet = false;
	m_StrikethroughTopLeftToBottomRightIsSet = false;
	setType(L"BorderBox");
}

BorderBoxElement::~BorderBoxElement()
{
}

std::shared_ptr<MathElement> BorderBoxElement::getBase() const
{
	return m_Base;
}

void BorderBoxElement::setBase(std::shared_ptr<MathElement> value)
{
	m_Base = value;
	
}

bool BorderBoxElement::getHideTop() const
{
	return m_HideTop;
}

void BorderBoxElement::setHideTop(bool value)
{
	m_HideTop = value;
	m_HideTopIsSet = true;
}

bool BorderBoxElement::hideTopIsSet() const
{
	return m_HideTopIsSet;
}

void BorderBoxElement::unsetHideTop()
{
	m_HideTopIsSet = false;
}

bool BorderBoxElement::getHideBottom() const
{
	return m_HideBottom;
}

void BorderBoxElement::setHideBottom(bool value)
{
	m_HideBottom = value;
	m_HideBottomIsSet = true;
}

bool BorderBoxElement::hideBottomIsSet() const
{
	return m_HideBottomIsSet;
}

void BorderBoxElement::unsetHideBottom()
{
	m_HideBottomIsSet = false;
}

bool BorderBoxElement::getHideLeft() const
{
	return m_HideLeft;
}

void BorderBoxElement::setHideLeft(bool value)
{
	m_HideLeft = value;
	m_HideLeftIsSet = true;
}

bool BorderBoxElement::hideLeftIsSet() const
{
	return m_HideLeftIsSet;
}

void BorderBoxElement::unsetHideLeft()
{
	m_HideLeftIsSet = false;
}

bool BorderBoxElement::getHideRight() const
{
	return m_HideRight;
}

void BorderBoxElement::setHideRight(bool value)
{
	m_HideRight = value;
	m_HideRightIsSet = true;
}

bool BorderBoxElement::hideRightIsSet() const
{
	return m_HideRightIsSet;
}

void BorderBoxElement::unsetHideRight()
{
	m_HideRightIsSet = false;
}

bool BorderBoxElement::getStrikethroughHorizontal() const
{
	return m_StrikethroughHorizontal;
}

void BorderBoxElement::setStrikethroughHorizontal(bool value)
{
	m_StrikethroughHorizontal = value;
	m_StrikethroughHorizontalIsSet = true;
}

bool BorderBoxElement::strikethroughHorizontalIsSet() const
{
	return m_StrikethroughHorizontalIsSet;
}

void BorderBoxElement::unsetStrikethroughHorizontal()
{
	m_StrikethroughHorizontalIsSet = false;
}

bool BorderBoxElement::getStrikethroughVertical() const
{
	return m_StrikethroughVertical;
}

void BorderBoxElement::setStrikethroughVertical(bool value)
{
	m_StrikethroughVertical = value;
	m_StrikethroughVerticalIsSet = true;
}

bool BorderBoxElement::strikethroughVerticalIsSet() const
{
	return m_StrikethroughVerticalIsSet;
}

void BorderBoxElement::unsetStrikethroughVertical()
{
	m_StrikethroughVerticalIsSet = false;
}

bool BorderBoxElement::getStrikethroughBottomLeftToTopRight() const
{
	return m_StrikethroughBottomLeftToTopRight;
}

void BorderBoxElement::setStrikethroughBottomLeftToTopRight(bool value)
{
	m_StrikethroughBottomLeftToTopRight = value;
	m_StrikethroughBottomLeftToTopRightIsSet = true;
}

bool BorderBoxElement::strikethroughBottomLeftToTopRightIsSet() const
{
	return m_StrikethroughBottomLeftToTopRightIsSet;
}

void BorderBoxElement::unsetStrikethroughBottomLeftToTopRight()
{
	m_StrikethroughBottomLeftToTopRightIsSet = false;
}

bool BorderBoxElement::getStrikethroughTopLeftToBottomRight() const
{
	return m_StrikethroughTopLeftToBottomRight;
}

void BorderBoxElement::setStrikethroughTopLeftToBottomRight(bool value)
{
	m_StrikethroughTopLeftToBottomRight = value;
	m_StrikethroughTopLeftToBottomRightIsSet = true;
}

bool BorderBoxElement::strikethroughTopLeftToBottomRightIsSet() const
{
	return m_StrikethroughTopLeftToBottomRightIsSet;
}

void BorderBoxElement::unsetStrikethroughTopLeftToBottomRight()
{
	m_StrikethroughTopLeftToBottomRightIsSet = false;
}

web::json::value BorderBoxElement::toJson() const
{
	web::json::value val = this->MathElement::toJson();
	if (m_Base != nullptr)
	{
		val[utility::conversions::to_string_t("Base")] = ModelBase::toJson(m_Base);
	}
	if(m_HideTopIsSet)
	{
		val[utility::conversions::to_string_t("HideTop")] = ModelBase::toJson(m_HideTop);
	}
	if(m_HideBottomIsSet)
	{
		val[utility::conversions::to_string_t("HideBottom")] = ModelBase::toJson(m_HideBottom);
	}
	if(m_HideLeftIsSet)
	{
		val[utility::conversions::to_string_t("HideLeft")] = ModelBase::toJson(m_HideLeft);
	}
	if(m_HideRightIsSet)
	{
		val[utility::conversions::to_string_t("HideRight")] = ModelBase::toJson(m_HideRight);
	}
	if(m_StrikethroughHorizontalIsSet)
	{
		val[utility::conversions::to_string_t("StrikethroughHorizontal")] = ModelBase::toJson(m_StrikethroughHorizontal);
	}
	if(m_StrikethroughVerticalIsSet)
	{
		val[utility::conversions::to_string_t("StrikethroughVertical")] = ModelBase::toJson(m_StrikethroughVertical);
	}
	if(m_StrikethroughBottomLeftToTopRightIsSet)
	{
		val[utility::conversions::to_string_t("StrikethroughBottomLeftToTopRight")] = ModelBase::toJson(m_StrikethroughBottomLeftToTopRight);
	}
	if(m_StrikethroughTopLeftToBottomRightIsSet)
	{
		val[utility::conversions::to_string_t("StrikethroughTopLeftToBottomRight")] = ModelBase::toJson(m_StrikethroughTopLeftToBottomRight);
	}
	return val;
}

void BorderBoxElement::fromJson(web::json::value& val)
{
	this->MathElement::fromJson(val);
	web::json::value* jsonForBase = ModelBase::getField(val, "Base");
	if(jsonForBase != nullptr && !jsonForBase->is_null())
	{
		std::shared_ptr<void> instanceForBase = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForBase);
		setBase(std::static_pointer_cast<MathElement>(instanceForBase));
	}
	web::json::value* jsonForHideTop = ModelBase::getField(val, "HideTop");
	if(jsonForHideTop != nullptr && !jsonForHideTop->is_null())
	{
		setHideTop(ModelBase::boolFromJson(*jsonForHideTop));
	}
	web::json::value* jsonForHideBottom = ModelBase::getField(val, "HideBottom");
	if(jsonForHideBottom != nullptr && !jsonForHideBottom->is_null())
	{
		setHideBottom(ModelBase::boolFromJson(*jsonForHideBottom));
	}
	web::json::value* jsonForHideLeft = ModelBase::getField(val, "HideLeft");
	if(jsonForHideLeft != nullptr && !jsonForHideLeft->is_null())
	{
		setHideLeft(ModelBase::boolFromJson(*jsonForHideLeft));
	}
	web::json::value* jsonForHideRight = ModelBase::getField(val, "HideRight");
	if(jsonForHideRight != nullptr && !jsonForHideRight->is_null())
	{
		setHideRight(ModelBase::boolFromJson(*jsonForHideRight));
	}
	web::json::value* jsonForStrikethroughHorizontal = ModelBase::getField(val, "StrikethroughHorizontal");
	if(jsonForStrikethroughHorizontal != nullptr && !jsonForStrikethroughHorizontal->is_null())
	{
		setStrikethroughHorizontal(ModelBase::boolFromJson(*jsonForStrikethroughHorizontal));
	}
	web::json::value* jsonForStrikethroughVertical = ModelBase::getField(val, "StrikethroughVertical");
	if(jsonForStrikethroughVertical != nullptr && !jsonForStrikethroughVertical->is_null())
	{
		setStrikethroughVertical(ModelBase::boolFromJson(*jsonForStrikethroughVertical));
	}
	web::json::value* jsonForStrikethroughBottomLeftToTopRight = ModelBase::getField(val, "StrikethroughBottomLeftToTopRight");
	if(jsonForStrikethroughBottomLeftToTopRight != nullptr && !jsonForStrikethroughBottomLeftToTopRight->is_null())
	{
		setStrikethroughBottomLeftToTopRight(ModelBase::boolFromJson(*jsonForStrikethroughBottomLeftToTopRight));
	}
	web::json::value* jsonForStrikethroughTopLeftToBottomRight = ModelBase::getField(val, "StrikethroughTopLeftToBottomRight");
	if(jsonForStrikethroughTopLeftToBottomRight != nullptr && !jsonForStrikethroughTopLeftToBottomRight->is_null())
	{
		setStrikethroughTopLeftToBottomRight(ModelBase::boolFromJson(*jsonForStrikethroughTopLeftToBottomRight));
	}
}

}
}

