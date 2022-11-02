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
#include "FontFallbackRule.h"

namespace asposeslidescloud {
namespace model {

FontFallbackRule::FontFallbackRule()
{
}

FontFallbackRule::~FontFallbackRule()
{
}

int32_t FontFallbackRule::getRangeStartIndex() const
{
	return m_RangeStartIndex;
}

void FontFallbackRule::setRangeStartIndex(int32_t value)
{
	m_RangeStartIndex = value;
	
}

int32_t FontFallbackRule::getRangeEndIndex() const
{
	return m_RangeEndIndex;
}

void FontFallbackRule::setRangeEndIndex(int32_t value)
{
	m_RangeEndIndex = value;
	
}

std::vector<utility::string_t> FontFallbackRule::getFallbackFontList() const
{
	return m_FallbackFontList;
}

void FontFallbackRule::setFallbackFontList(std::vector<utility::string_t> value)
{
	m_FallbackFontList = value;
	
}

web::json::value FontFallbackRule::toJson() const
{
	web::json::value val = web::json::value::object();
	val[utility::conversions::to_string_t("RangeStartIndex")] = ModelBase::toJson(m_RangeStartIndex);
	val[utility::conversions::to_string_t("RangeEndIndex")] = ModelBase::toJson(m_RangeEndIndex);
	if (m_FallbackFontList.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_FallbackFontList)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("FallbackFontList")] = web::json::value::array(jsonArray);
	}
	return val;
}

void FontFallbackRule::fromJson(web::json::value& val)
{
	web::json::value* jsonForRangeStartIndex = ModelBase::getField(val, "RangeStartIndex");
	if(jsonForRangeStartIndex != nullptr && !jsonForRangeStartIndex->is_null() && jsonForRangeStartIndex->is_number())
	{
		setRangeStartIndex(ModelBase::int32_tFromJson(*jsonForRangeStartIndex));
	}
	web::json::value* jsonForRangeEndIndex = ModelBase::getField(val, "RangeEndIndex");
	if(jsonForRangeEndIndex != nullptr && !jsonForRangeEndIndex->is_null() && jsonForRangeEndIndex->is_number())
	{
		setRangeEndIndex(ModelBase::int32_tFromJson(*jsonForRangeEndIndex));
	}
	web::json::value* jsonForFallbackFontList = ModelBase::getField(val, "FallbackFontList");
	if(jsonForFallbackFontList != nullptr && !jsonForFallbackFontList->is_null())
	{
		{
			m_FallbackFontList.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForFallbackFontList->as_array())
			{
				m_FallbackFontList.push_back(ModelBase::stringFromJson(item));
			}
        	}
	}
}

}
}

