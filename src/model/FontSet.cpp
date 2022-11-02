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
#include "FontSet.h"

namespace asposeslidescloud {
namespace model {

FontSet::FontSet()
{
}

FontSet::~FontSet()
{
}

utility::string_t FontSet::getComplexScript() const
{
	return m_ComplexScript;
}

void FontSet::setComplexScript(utility::string_t value)
{
	m_ComplexScript = value;
	
}

utility::string_t FontSet::getEastAsian() const
{
	return m_EastAsian;
}

void FontSet::setEastAsian(utility::string_t value)
{
	m_EastAsian = value;
	
}

utility::string_t FontSet::getLatin() const
{
	return m_Latin;
}

void FontSet::setLatin(utility::string_t value)
{
	m_Latin = value;
	
}

web::json::value FontSet::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_ComplexScript.empty())
	{
		val[utility::conversions::to_string_t("ComplexScript")] = ModelBase::toJson(m_ComplexScript);
	}
	if (!m_EastAsian.empty())
	{
		val[utility::conversions::to_string_t("EastAsian")] = ModelBase::toJson(m_EastAsian);
	}
	if (!m_Latin.empty())
	{
		val[utility::conversions::to_string_t("Latin")] = ModelBase::toJson(m_Latin);
	}
	return val;
}

void FontSet::fromJson(web::json::value& val)
{
	web::json::value* jsonForComplexScript = ModelBase::getField(val, "ComplexScript");
	if(jsonForComplexScript != nullptr && !jsonForComplexScript->is_null())
	{
		setComplexScript(ModelBase::stringFromJson(*jsonForComplexScript));
	}
	web::json::value* jsonForEastAsian = ModelBase::getField(val, "EastAsian");
	if(jsonForEastAsian != nullptr && !jsonForEastAsian->is_null())
	{
		setEastAsian(ModelBase::stringFromJson(*jsonForEastAsian));
	}
	web::json::value* jsonForLatin = ModelBase::getField(val, "Latin");
	if(jsonForLatin != nullptr && !jsonForLatin->is_null())
	{
		setLatin(ModelBase::stringFromJson(*jsonForLatin));
	}
}

}
}

