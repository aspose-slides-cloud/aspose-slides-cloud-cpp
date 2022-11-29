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
#include "NotesSlideHeaderFooter.h"

namespace asposeslidescloud {
namespace model {

NotesSlideHeaderFooter::NotesSlideHeaderFooter()
{
	m_IsDateTimeVisibleIsSet = false;
	m_IsFooterVisibleIsSet = false;
	m_IsHeaderVisibleIsSet = false;
	m_IsSlideNumberVisibleIsSet = false;
}

NotesSlideHeaderFooter::~NotesSlideHeaderFooter()
{
}

bool NotesSlideHeaderFooter::isIsDateTimeVisible() const
{
	return m_IsDateTimeVisible;
}

void NotesSlideHeaderFooter::setIsDateTimeVisible(bool value)
{
	m_IsDateTimeVisible = value;
	m_IsDateTimeVisibleIsSet = true;
}

bool NotesSlideHeaderFooter::isDateTimeVisibleIsSet() const
{
	return m_IsDateTimeVisibleIsSet;
}

void NotesSlideHeaderFooter::unsetIsDateTimeVisible()
{
	m_IsDateTimeVisibleIsSet = false;
}

utility::string_t NotesSlideHeaderFooter::getDateTimeText() const
{
	return m_DateTimeText;
}

void NotesSlideHeaderFooter::setDateTimeText(utility::string_t value)
{
	m_DateTimeText = value;
	
}

bool NotesSlideHeaderFooter::isIsFooterVisible() const
{
	return m_IsFooterVisible;
}

void NotesSlideHeaderFooter::setIsFooterVisible(bool value)
{
	m_IsFooterVisible = value;
	m_IsFooterVisibleIsSet = true;
}

bool NotesSlideHeaderFooter::isFooterVisibleIsSet() const
{
	return m_IsFooterVisibleIsSet;
}

void NotesSlideHeaderFooter::unsetIsFooterVisible()
{
	m_IsFooterVisibleIsSet = false;
}

utility::string_t NotesSlideHeaderFooter::getFooterText() const
{
	return m_FooterText;
}

void NotesSlideHeaderFooter::setFooterText(utility::string_t value)
{
	m_FooterText = value;
	
}

bool NotesSlideHeaderFooter::isIsHeaderVisible() const
{
	return m_IsHeaderVisible;
}

void NotesSlideHeaderFooter::setIsHeaderVisible(bool value)
{
	m_IsHeaderVisible = value;
	m_IsHeaderVisibleIsSet = true;
}

bool NotesSlideHeaderFooter::isHeaderVisibleIsSet() const
{
	return m_IsHeaderVisibleIsSet;
}

void NotesSlideHeaderFooter::unsetIsHeaderVisible()
{
	m_IsHeaderVisibleIsSet = false;
}

utility::string_t NotesSlideHeaderFooter::getHeaderText() const
{
	return m_HeaderText;
}

void NotesSlideHeaderFooter::setHeaderText(utility::string_t value)
{
	m_HeaderText = value;
	
}

bool NotesSlideHeaderFooter::isIsSlideNumberVisible() const
{
	return m_IsSlideNumberVisible;
}

void NotesSlideHeaderFooter::setIsSlideNumberVisible(bool value)
{
	m_IsSlideNumberVisible = value;
	m_IsSlideNumberVisibleIsSet = true;
}

bool NotesSlideHeaderFooter::isSlideNumberVisibleIsSet() const
{
	return m_IsSlideNumberVisibleIsSet;
}

void NotesSlideHeaderFooter::unsetIsSlideNumberVisible()
{
	m_IsSlideNumberVisibleIsSet = false;
}

web::json::value NotesSlideHeaderFooter::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if(m_IsDateTimeVisibleIsSet)
	{
		val[utility::conversions::to_string_t("IsDateTimeVisible")] = ModelBase::toJson(m_IsDateTimeVisible);
	}
	if (!m_DateTimeText.empty())
	{
		val[utility::conversions::to_string_t("DateTimeText")] = ModelBase::toJson(m_DateTimeText);
	}
	if(m_IsFooterVisibleIsSet)
	{
		val[utility::conversions::to_string_t("IsFooterVisible")] = ModelBase::toJson(m_IsFooterVisible);
	}
	if (!m_FooterText.empty())
	{
		val[utility::conversions::to_string_t("FooterText")] = ModelBase::toJson(m_FooterText);
	}
	if(m_IsHeaderVisibleIsSet)
	{
		val[utility::conversions::to_string_t("IsHeaderVisible")] = ModelBase::toJson(m_IsHeaderVisible);
	}
	if (!m_HeaderText.empty())
	{
		val[utility::conversions::to_string_t("HeaderText")] = ModelBase::toJson(m_HeaderText);
	}
	if(m_IsSlideNumberVisibleIsSet)
	{
		val[utility::conversions::to_string_t("IsSlideNumberVisible")] = ModelBase::toJson(m_IsSlideNumberVisible);
	}
	return val;
}

void NotesSlideHeaderFooter::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForIsDateTimeVisible = ModelBase::getField(val, "IsDateTimeVisible");
	if(jsonForIsDateTimeVisible != nullptr && !jsonForIsDateTimeVisible->is_null())
	{
		setIsDateTimeVisible(ModelBase::boolFromJson(*jsonForIsDateTimeVisible));
	}
	web::json::value* jsonForDateTimeText = ModelBase::getField(val, "DateTimeText");
	if(jsonForDateTimeText != nullptr && !jsonForDateTimeText->is_null())
	{
		setDateTimeText(ModelBase::stringFromJson(*jsonForDateTimeText));
	}
	web::json::value* jsonForIsFooterVisible = ModelBase::getField(val, "IsFooterVisible");
	if(jsonForIsFooterVisible != nullptr && !jsonForIsFooterVisible->is_null())
	{
		setIsFooterVisible(ModelBase::boolFromJson(*jsonForIsFooterVisible));
	}
	web::json::value* jsonForFooterText = ModelBase::getField(val, "FooterText");
	if(jsonForFooterText != nullptr && !jsonForFooterText->is_null())
	{
		setFooterText(ModelBase::stringFromJson(*jsonForFooterText));
	}
	web::json::value* jsonForIsHeaderVisible = ModelBase::getField(val, "IsHeaderVisible");
	if(jsonForIsHeaderVisible != nullptr && !jsonForIsHeaderVisible->is_null())
	{
		setIsHeaderVisible(ModelBase::boolFromJson(*jsonForIsHeaderVisible));
	}
	web::json::value* jsonForHeaderText = ModelBase::getField(val, "HeaderText");
	if(jsonForHeaderText != nullptr && !jsonForHeaderText->is_null())
	{
		setHeaderText(ModelBase::stringFromJson(*jsonForHeaderText));
	}
	web::json::value* jsonForIsSlideNumberVisible = ModelBase::getField(val, "IsSlideNumberVisible");
	if(jsonForIsSlideNumberVisible != nullptr && !jsonForIsSlideNumberVisible->is_null())
	{
		setIsSlideNumberVisible(ModelBase::boolFromJson(*jsonForIsSlideNumberVisible));
	}
}

}
}

