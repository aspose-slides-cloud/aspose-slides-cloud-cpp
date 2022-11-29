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
#include "FontSubstRule.h"

namespace asposeslidescloud {
namespace model {

FontSubstRule::FontSubstRule()
{
	m_NotFoundOnlyIsSet = false;
}

FontSubstRule::~FontSubstRule()
{
}

utility::string_t FontSubstRule::getSourceFont() const
{
	return m_SourceFont;
}

void FontSubstRule::setSourceFont(utility::string_t value)
{
	m_SourceFont = value;
	
}

utility::string_t FontSubstRule::getTargetFont() const
{
	return m_TargetFont;
}

void FontSubstRule::setTargetFont(utility::string_t value)
{
	m_TargetFont = value;
	
}

bool FontSubstRule::isNotFoundOnly() const
{
	return m_NotFoundOnly;
}

void FontSubstRule::setNotFoundOnly(bool value)
{
	m_NotFoundOnly = value;
	m_NotFoundOnlyIsSet = true;
}

bool FontSubstRule::notFoundOnlyIsSet() const
{
	return m_NotFoundOnlyIsSet;
}

void FontSubstRule::unsetNotFoundOnly()
{
	m_NotFoundOnlyIsSet = false;
}

web::json::value FontSubstRule::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_SourceFont.empty())
	{
		val[utility::conversions::to_string_t("SourceFont")] = ModelBase::toJson(m_SourceFont);
	}
	if (!m_TargetFont.empty())
	{
		val[utility::conversions::to_string_t("TargetFont")] = ModelBase::toJson(m_TargetFont);
	}
	if(m_NotFoundOnlyIsSet)
	{
		val[utility::conversions::to_string_t("NotFoundOnly")] = ModelBase::toJson(m_NotFoundOnly);
	}
	return val;
}

void FontSubstRule::fromJson(web::json::value& val)
{
	web::json::value* jsonForSourceFont = ModelBase::getField(val, "SourceFont");
	if(jsonForSourceFont != nullptr && !jsonForSourceFont->is_null())
	{
		setSourceFont(ModelBase::stringFromJson(*jsonForSourceFont));
	}
	web::json::value* jsonForTargetFont = ModelBase::getField(val, "TargetFont");
	if(jsonForTargetFont != nullptr && !jsonForTargetFont->is_null())
	{
		setTargetFont(ModelBase::stringFromJson(*jsonForTargetFont));
	}
	web::json::value* jsonForNotFoundOnly = ModelBase::getField(val, "NotFoundOnly");
	if(jsonForNotFoundOnly != nullptr && !jsonForNotFoundOnly->is_null())
	{
		setNotFoundOnly(ModelBase::boolFromJson(*jsonForNotFoundOnly));
	}
}

}
}

