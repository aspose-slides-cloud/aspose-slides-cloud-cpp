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
#include "Theme.h"

namespace asposeslidescloud {
namespace model {

Theme::Theme()
{
}

Theme::~Theme()
{
}

utility::string_t Theme::getName() const
{
	return m_Name;
}

void Theme::setName(utility::string_t value)
{
	m_Name = value;
	
}

std::shared_ptr<ResourceUri> Theme::getColorScheme() const
{
	return m_ColorScheme;
}

void Theme::setColorScheme(std::shared_ptr<ResourceUri> value)
{
	m_ColorScheme = value;
	
}

std::shared_ptr<ResourceUri> Theme::getFontScheme() const
{
	return m_FontScheme;
}

void Theme::setFontScheme(std::shared_ptr<ResourceUri> value)
{
	m_FontScheme = value;
	
}

std::shared_ptr<ResourceUri> Theme::getFormatScheme() const
{
	return m_FormatScheme;
}

void Theme::setFormatScheme(std::shared_ptr<ResourceUri> value)
{
	m_FormatScheme = value;
	
}

web::json::value Theme::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (!m_Name.empty())
	{
		val[utility::conversions::to_string_t("Name")] = ModelBase::toJson(m_Name);
	}
	if (m_ColorScheme != nullptr)
	{
		val[utility::conversions::to_string_t("ColorScheme")] = ModelBase::toJson(m_ColorScheme);
	}
	if (m_FontScheme != nullptr)
	{
		val[utility::conversions::to_string_t("FontScheme")] = ModelBase::toJson(m_FontScheme);
	}
	if (m_FormatScheme != nullptr)
	{
		val[utility::conversions::to_string_t("FormatScheme")] = ModelBase::toJson(m_FormatScheme);
	}
	return val;
}

void Theme::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForName = ModelBase::getField(val, "Name");
	if(jsonForName != nullptr && !jsonForName->is_null())
	{
		setName(ModelBase::stringFromJson(*jsonForName));
	}
	web::json::value* jsonForColorScheme = ModelBase::getField(val, "ColorScheme");
	if(jsonForColorScheme != nullptr && !jsonForColorScheme->is_null())
	{
		std::shared_ptr<void> instanceForColorScheme = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForColorScheme);
		setColorScheme(std::static_pointer_cast<ResourceUri>(instanceForColorScheme));
	}
	web::json::value* jsonForFontScheme = ModelBase::getField(val, "FontScheme");
	if(jsonForFontScheme != nullptr && !jsonForFontScheme->is_null())
	{
		std::shared_ptr<void> instanceForFontScheme = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForFontScheme);
		setFontScheme(std::static_pointer_cast<ResourceUri>(instanceForFontScheme));
	}
	web::json::value* jsonForFormatScheme = ModelBase::getField(val, "FormatScheme");
	if(jsonForFormatScheme != nullptr && !jsonForFormatScheme->is_null())
	{
		std::shared_ptr<void> instanceForFormatScheme = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForFormatScheme);
		setFormatScheme(std::static_pointer_cast<ResourceUri>(instanceForFormatScheme));
	}
}

}
}

