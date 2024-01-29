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
#include "FontData.h"

namespace asposeslidescloud {
namespace model {

FontData::FontData()
{
	m_IsEmbeddedIsSet = false;
	m_IsCustomIsSet = false;
}

FontData::~FontData()
{
}

utility::string_t FontData::getFontName() const
{
	return m_FontName;
}

void FontData::setFontName(utility::string_t value)
{
	m_FontName = value;
	
}

bool FontData::getIsEmbedded() const
{
	return m_IsEmbedded;
}

void FontData::setIsEmbedded(bool value)
{
	m_IsEmbedded = value;
	m_IsEmbeddedIsSet = true;
}

bool FontData::isEmbeddedIsSet() const
{
	return m_IsEmbeddedIsSet;
}

void FontData::unsetIsEmbedded()
{
	m_IsEmbeddedIsSet = false;
}

bool FontData::getIsCustom() const
{
	return m_IsCustom;
}

void FontData::setIsCustom(bool value)
{
	m_IsCustom = value;
	m_IsCustomIsSet = true;
}

bool FontData::isCustomIsSet() const
{
	return m_IsCustomIsSet;
}

void FontData::unsetIsCustom()
{
	m_IsCustomIsSet = false;
}

web::json::value FontData::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_FontName.empty())
	{
		val[utility::conversions::to_string_t("FontName")] = ModelBase::toJson(m_FontName);
	}
	if(m_IsEmbeddedIsSet)
	{
		val[utility::conversions::to_string_t("IsEmbedded")] = ModelBase::toJson(m_IsEmbedded);
	}
	if(m_IsCustomIsSet)
	{
		val[utility::conversions::to_string_t("IsCustom")] = ModelBase::toJson(m_IsCustom);
	}
	return val;
}

void FontData::fromJson(web::json::value& val)
{
	web::json::value* jsonForFontName = ModelBase::getField(val, "FontName");
	if(jsonForFontName != nullptr && !jsonForFontName->is_null())
	{
		setFontName(ModelBase::stringFromJson(*jsonForFontName));
	}
	web::json::value* jsonForIsEmbedded = ModelBase::getField(val, "IsEmbedded");
	if(jsonForIsEmbedded != nullptr && !jsonForIsEmbedded->is_null())
	{
		setIsEmbedded(ModelBase::boolFromJson(*jsonForIsEmbedded));
	}
	web::json::value* jsonForIsCustom = ModelBase::getField(val, "IsCustom");
	if(jsonForIsCustom != nullptr && !jsonForIsCustom->is_null())
	{
		setIsCustom(ModelBase::boolFromJson(*jsonForIsCustom));
	}
}

}
}

