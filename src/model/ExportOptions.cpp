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
#include "ExportOptions.h"

namespace asposeslidescloud {
namespace model {

ExportOptions::ExportOptions()
{
}

ExportOptions::~ExportOptions()
{
}

utility::string_t ExportOptions::getDefaultRegularFont() const
{
	return m_DefaultRegularFont;
}

void ExportOptions::setDefaultRegularFont(utility::string_t value)
{
	m_DefaultRegularFont = value;
	
}

std::vector<std::shared_ptr<FontFallbackRule>> ExportOptions::getFontFallbackRules() const
{
	return m_FontFallbackRules;
}

void ExportOptions::setFontFallbackRules(std::vector<std::shared_ptr<FontFallbackRule>> value)
{
	m_FontFallbackRules = value;
	
}

std::vector<std::shared_ptr<FontSubstRule>> ExportOptions::getFontSubstRules() const
{
	return m_FontSubstRules;
}

void ExportOptions::setFontSubstRules(std::vector<std::shared_ptr<FontSubstRule>> value)
{
	m_FontSubstRules = value;
	
}

utility::string_t ExportOptions::getFormat() const
{
	return m_Format;
}

void ExportOptions::setFormat(utility::string_t value)
{
	m_Format = value;
	
}

web::json::value ExportOptions::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_DefaultRegularFont.empty())
	{
		val[utility::conversions::to_string_t("DefaultRegularFont")] = ModelBase::toJson(m_DefaultRegularFont);
	}
	if (m_FontFallbackRules.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_FontFallbackRules)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("FontFallbackRules")] = web::json::value::array(jsonArray);
	}
	if (m_FontSubstRules.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_FontSubstRules)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("FontSubstRules")] = web::json::value::array(jsonArray);
	}
	if (!m_Format.empty())
	{
		val[utility::conversions::to_string_t("Format")] = ModelBase::toJson(m_Format);
	}
	return val;
}

void ExportOptions::fromJson(web::json::value& val)
{
	web::json::value* jsonForDefaultRegularFont = ModelBase::getField(val, "DefaultRegularFont");
	if(jsonForDefaultRegularFont != nullptr && !jsonForDefaultRegularFont->is_null())
	{
		setDefaultRegularFont(ModelBase::stringFromJson(*jsonForDefaultRegularFont));
	}
	web::json::value* jsonForFontFallbackRules = ModelBase::getField(val, "FontFallbackRules");
	if(jsonForFontFallbackRules != nullptr && !jsonForFontFallbackRules->is_null())
	{
		{
			m_FontFallbackRules.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForFontFallbackRules->as_array())
			{
				if(item.is_null())
				{
					m_FontFallbackRules.push_back(std::shared_ptr<FontFallbackRule>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"FontFallbackRule", item);
					m_FontFallbackRules.push_back(std::static_pointer_cast<FontFallbackRule>(newItem));
				}
			}
        	}
	}
	web::json::value* jsonForFontSubstRules = ModelBase::getField(val, "FontSubstRules");
	if(jsonForFontSubstRules != nullptr && !jsonForFontSubstRules->is_null())
	{
		{
			m_FontSubstRules.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForFontSubstRules->as_array())
			{
				if(item.is_null())
				{
					m_FontSubstRules.push_back(std::shared_ptr<FontSubstRule>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"FontSubstRule", item);
					m_FontSubstRules.push_back(std::static_pointer_cast<FontSubstRule>(newItem));
				}
			}
        	}
	}
	web::json::value* jsonForFormat = ModelBase::getField(val, "Format");
	if(jsonForFormat != nullptr && !jsonForFormat->is_null())
	{
		setFormat(ModelBase::stringFromJson(*jsonForFormat));
	}
}

}
}

