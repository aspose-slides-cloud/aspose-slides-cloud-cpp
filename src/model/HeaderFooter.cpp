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
#include "HeaderFooter.h"

namespace asposeslidescloud {
namespace model {

HeaderFooter::HeaderFooter()
{
	m_IsDateTimeVisibleIsSet = false;
	m_IsFooterVisibleIsSet = false;
	m_IsSlideNumberVisibleIsSet = false;
}

HeaderFooter::~HeaderFooter()
{
}

bool HeaderFooter::isIsDateTimeVisible() const
{
	return m_IsDateTimeVisible;
}

void HeaderFooter::setIsDateTimeVisible(bool value)
{
	m_IsDateTimeVisible = value;
	m_IsDateTimeVisibleIsSet = true;
}

bool HeaderFooter::isDateTimeVisibleIsSet() const
{
	return m_IsDateTimeVisibleIsSet;
}

void HeaderFooter::unsetIsDateTimeVisible()
{
	m_IsDateTimeVisibleIsSet = false;
}

utility::string_t HeaderFooter::getDateTimeText() const
{
	return m_DateTimeText;
}

void HeaderFooter::setDateTimeText(utility::string_t value)
{
	m_DateTimeText = value;
	
}

bool HeaderFooter::isIsFooterVisible() const
{
	return m_IsFooterVisible;
}

void HeaderFooter::setIsFooterVisible(bool value)
{
	m_IsFooterVisible = value;
	m_IsFooterVisibleIsSet = true;
}

bool HeaderFooter::isFooterVisibleIsSet() const
{
	return m_IsFooterVisibleIsSet;
}

void HeaderFooter::unsetIsFooterVisible()
{
	m_IsFooterVisibleIsSet = false;
}

utility::string_t HeaderFooter::getFooterText() const
{
	return m_FooterText;
}

void HeaderFooter::setFooterText(utility::string_t value)
{
	m_FooterText = value;
	
}

bool HeaderFooter::isIsSlideNumberVisible() const
{
	return m_IsSlideNumberVisible;
}

void HeaderFooter::setIsSlideNumberVisible(bool value)
{
	m_IsSlideNumberVisible = value;
	m_IsSlideNumberVisibleIsSet = true;
}

bool HeaderFooter::isSlideNumberVisibleIsSet() const
{
	return m_IsSlideNumberVisibleIsSet;
}

void HeaderFooter::unsetIsSlideNumberVisible()
{
	m_IsSlideNumberVisibleIsSet = false;
}

web::json::value HeaderFooter::toJson() const
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
	if(m_IsSlideNumberVisibleIsSet)
	{
		val[utility::conversions::to_string_t("IsSlideNumberVisible")] = ModelBase::toJson(m_IsSlideNumberVisible);
	}
	return val;
}

void HeaderFooter::fromJson(web::json::value& val)
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
	web::json::value* jsonForIsSlideNumberVisible = ModelBase::getField(val, "IsSlideNumberVisible");
	if(jsonForIsSlideNumberVisible != nullptr && !jsonForIsSlideNumberVisible->is_null())
	{
		setIsSlideNumberVisible(ModelBase::boolFromJson(*jsonForIsSlideNumberVisible));
	}
}

}
}

