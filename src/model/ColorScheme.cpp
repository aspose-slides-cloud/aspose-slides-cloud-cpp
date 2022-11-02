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
#include "ColorScheme.h"

namespace asposeslidescloud {
namespace model {

ColorScheme::ColorScheme()
{
}

ColorScheme::~ColorScheme()
{
}

utility::string_t ColorScheme::getAccent1() const
{
	return m_Accent1;
}

void ColorScheme::setAccent1(utility::string_t value)
{
	m_Accent1 = value;
	
}

utility::string_t ColorScheme::getAccent2() const
{
	return m_Accent2;
}

void ColorScheme::setAccent2(utility::string_t value)
{
	m_Accent2 = value;
	
}

utility::string_t ColorScheme::getAccent3() const
{
	return m_Accent3;
}

void ColorScheme::setAccent3(utility::string_t value)
{
	m_Accent3 = value;
	
}

utility::string_t ColorScheme::getAccent4() const
{
	return m_Accent4;
}

void ColorScheme::setAccent4(utility::string_t value)
{
	m_Accent4 = value;
	
}

utility::string_t ColorScheme::getAccent5() const
{
	return m_Accent5;
}

void ColorScheme::setAccent5(utility::string_t value)
{
	m_Accent5 = value;
	
}

utility::string_t ColorScheme::getAccent6() const
{
	return m_Accent6;
}

void ColorScheme::setAccent6(utility::string_t value)
{
	m_Accent6 = value;
	
}

utility::string_t ColorScheme::getDark1() const
{
	return m_Dark1;
}

void ColorScheme::setDark1(utility::string_t value)
{
	m_Dark1 = value;
	
}

utility::string_t ColorScheme::getDark2() const
{
	return m_Dark2;
}

void ColorScheme::setDark2(utility::string_t value)
{
	m_Dark2 = value;
	
}

utility::string_t ColorScheme::getFollowedHyperlink() const
{
	return m_FollowedHyperlink;
}

void ColorScheme::setFollowedHyperlink(utility::string_t value)
{
	m_FollowedHyperlink = value;
	
}

utility::string_t ColorScheme::getHyperlink() const
{
	return m_Hyperlink;
}

void ColorScheme::setHyperlink(utility::string_t value)
{
	m_Hyperlink = value;
	
}

utility::string_t ColorScheme::getLight1() const
{
	return m_Light1;
}

void ColorScheme::setLight1(utility::string_t value)
{
	m_Light1 = value;
	
}

utility::string_t ColorScheme::getLight2() const
{
	return m_Light2;
}

void ColorScheme::setLight2(utility::string_t value)
{
	m_Light2 = value;
	
}

web::json::value ColorScheme::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (!m_Accent1.empty())
	{
		val[utility::conversions::to_string_t("Accent1")] = ModelBase::toJson(m_Accent1);
	}
	if (!m_Accent2.empty())
	{
		val[utility::conversions::to_string_t("Accent2")] = ModelBase::toJson(m_Accent2);
	}
	if (!m_Accent3.empty())
	{
		val[utility::conversions::to_string_t("Accent3")] = ModelBase::toJson(m_Accent3);
	}
	if (!m_Accent4.empty())
	{
		val[utility::conversions::to_string_t("Accent4")] = ModelBase::toJson(m_Accent4);
	}
	if (!m_Accent5.empty())
	{
		val[utility::conversions::to_string_t("Accent5")] = ModelBase::toJson(m_Accent5);
	}
	if (!m_Accent6.empty())
	{
		val[utility::conversions::to_string_t("Accent6")] = ModelBase::toJson(m_Accent6);
	}
	if (!m_Dark1.empty())
	{
		val[utility::conversions::to_string_t("Dark1")] = ModelBase::toJson(m_Dark1);
	}
	if (!m_Dark2.empty())
	{
		val[utility::conversions::to_string_t("Dark2")] = ModelBase::toJson(m_Dark2);
	}
	if (!m_FollowedHyperlink.empty())
	{
		val[utility::conversions::to_string_t("FollowedHyperlink")] = ModelBase::toJson(m_FollowedHyperlink);
	}
	if (!m_Hyperlink.empty())
	{
		val[utility::conversions::to_string_t("Hyperlink")] = ModelBase::toJson(m_Hyperlink);
	}
	if (!m_Light1.empty())
	{
		val[utility::conversions::to_string_t("Light1")] = ModelBase::toJson(m_Light1);
	}
	if (!m_Light2.empty())
	{
		val[utility::conversions::to_string_t("Light2")] = ModelBase::toJson(m_Light2);
	}
	return val;
}

void ColorScheme::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForAccent1 = ModelBase::getField(val, "Accent1");
	if(jsonForAccent1 != nullptr && !jsonForAccent1->is_null())
	{
		setAccent1(ModelBase::stringFromJson(*jsonForAccent1));
	}
	web::json::value* jsonForAccent2 = ModelBase::getField(val, "Accent2");
	if(jsonForAccent2 != nullptr && !jsonForAccent2->is_null())
	{
		setAccent2(ModelBase::stringFromJson(*jsonForAccent2));
	}
	web::json::value* jsonForAccent3 = ModelBase::getField(val, "Accent3");
	if(jsonForAccent3 != nullptr && !jsonForAccent3->is_null())
	{
		setAccent3(ModelBase::stringFromJson(*jsonForAccent3));
	}
	web::json::value* jsonForAccent4 = ModelBase::getField(val, "Accent4");
	if(jsonForAccent4 != nullptr && !jsonForAccent4->is_null())
	{
		setAccent4(ModelBase::stringFromJson(*jsonForAccent4));
	}
	web::json::value* jsonForAccent5 = ModelBase::getField(val, "Accent5");
	if(jsonForAccent5 != nullptr && !jsonForAccent5->is_null())
	{
		setAccent5(ModelBase::stringFromJson(*jsonForAccent5));
	}
	web::json::value* jsonForAccent6 = ModelBase::getField(val, "Accent6");
	if(jsonForAccent6 != nullptr && !jsonForAccent6->is_null())
	{
		setAccent6(ModelBase::stringFromJson(*jsonForAccent6));
	}
	web::json::value* jsonForDark1 = ModelBase::getField(val, "Dark1");
	if(jsonForDark1 != nullptr && !jsonForDark1->is_null())
	{
		setDark1(ModelBase::stringFromJson(*jsonForDark1));
	}
	web::json::value* jsonForDark2 = ModelBase::getField(val, "Dark2");
	if(jsonForDark2 != nullptr && !jsonForDark2->is_null())
	{
		setDark2(ModelBase::stringFromJson(*jsonForDark2));
	}
	web::json::value* jsonForFollowedHyperlink = ModelBase::getField(val, "FollowedHyperlink");
	if(jsonForFollowedHyperlink != nullptr && !jsonForFollowedHyperlink->is_null())
	{
		setFollowedHyperlink(ModelBase::stringFromJson(*jsonForFollowedHyperlink));
	}
	web::json::value* jsonForHyperlink = ModelBase::getField(val, "Hyperlink");
	if(jsonForHyperlink != nullptr && !jsonForHyperlink->is_null())
	{
		setHyperlink(ModelBase::stringFromJson(*jsonForHyperlink));
	}
	web::json::value* jsonForLight1 = ModelBase::getField(val, "Light1");
	if(jsonForLight1 != nullptr && !jsonForLight1->is_null())
	{
		setLight1(ModelBase::stringFromJson(*jsonForLight1));
	}
	web::json::value* jsonForLight2 = ModelBase::getField(val, "Light2");
	if(jsonForLight2 != nullptr && !jsonForLight2->is_null())
	{
		setLight2(ModelBase::stringFromJson(*jsonForLight2));
	}
}

}
}

