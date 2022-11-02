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
#include "FontScheme.h"

namespace asposeslidescloud {
namespace model {

FontScheme::FontScheme()
{
}

FontScheme::~FontScheme()
{
}

std::shared_ptr<FontSet> FontScheme::getMajor() const
{
	return m_Major;
}

void FontScheme::setMajor(std::shared_ptr<FontSet> value)
{
	m_Major = value;
	
}

std::shared_ptr<FontSet> FontScheme::getMinor() const
{
	return m_Minor;
}

void FontScheme::setMinor(std::shared_ptr<FontSet> value)
{
	m_Minor = value;
	
}

utility::string_t FontScheme::getName() const
{
	return m_Name;
}

void FontScheme::setName(utility::string_t value)
{
	m_Name = value;
	
}

web::json::value FontScheme::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (m_Major != nullptr)
	{
		val[utility::conversions::to_string_t("Major")] = ModelBase::toJson(m_Major);
	}
	if (m_Minor != nullptr)
	{
		val[utility::conversions::to_string_t("Minor")] = ModelBase::toJson(m_Minor);
	}
	if (!m_Name.empty())
	{
		val[utility::conversions::to_string_t("Name")] = ModelBase::toJson(m_Name);
	}
	return val;
}

void FontScheme::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForMajor = ModelBase::getField(val, "Major");
	if(jsonForMajor != nullptr && !jsonForMajor->is_null())
	{
		std::shared_ptr<void> instanceForMajor = asposeslidescloud::api::ClassRegistry::deserialize(L"FontSet", *jsonForMajor);
		setMajor(std::static_pointer_cast<FontSet>(instanceForMajor));
	}
	web::json::value* jsonForMinor = ModelBase::getField(val, "Minor");
	if(jsonForMinor != nullptr && !jsonForMinor->is_null())
	{
		std::shared_ptr<void> instanceForMinor = asposeslidescloud::api::ClassRegistry::deserialize(L"FontSet", *jsonForMinor);
		setMinor(std::static_pointer_cast<FontSet>(instanceForMinor));
	}
	web::json::value* jsonForName = ModelBase::getField(val, "Name");
	if(jsonForName != nullptr && !jsonForName->is_null())
	{
		setName(ModelBase::stringFromJson(*jsonForName));
	}
}

}
}

