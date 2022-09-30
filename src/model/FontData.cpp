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



#include "FontData.h"

namespace asposeslidescloud {
namespace model {

FontData::FontData()
{
	m_IsEmbeddedIsSet = false;
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
}

}
}

