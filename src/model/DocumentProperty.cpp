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
#include "DocumentProperty.h"

namespace asposeslidescloud {
namespace model {

DocumentProperty::DocumentProperty()
{
	m_BuiltInIsSet = false;
}

DocumentProperty::~DocumentProperty()
{
}

utility::string_t DocumentProperty::getName() const
{
	return m_Name;
}

void DocumentProperty::setName(utility::string_t value)
{
	m_Name = value;
	
}

utility::string_t DocumentProperty::getValue() const
{
	return m_Value;
}

void DocumentProperty::setValue(utility::string_t value)
{
	m_Value = value;
	
}

bool DocumentProperty::isBuiltIn() const
{
	return m_BuiltIn;
}

void DocumentProperty::setBuiltIn(bool value)
{
	m_BuiltIn = value;
	m_BuiltInIsSet = true;
}

bool DocumentProperty::builtInIsSet() const
{
	return m_BuiltInIsSet;
}

void DocumentProperty::unsetBuiltIn()
{
	m_BuiltInIsSet = false;
}

web::json::value DocumentProperty::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (!m_Name.empty())
	{
		val[utility::conversions::to_string_t("Name")] = ModelBase::toJson(m_Name);
	}
	if (!m_Value.empty())
	{
		val[utility::conversions::to_string_t("Value")] = ModelBase::toJson(m_Value);
	}
	if(m_BuiltInIsSet)
	{
		val[utility::conversions::to_string_t("BuiltIn")] = ModelBase::toJson(m_BuiltIn);
	}
	return val;
}

void DocumentProperty::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForName = ModelBase::getField(val, "Name");
	if(jsonForName != nullptr && !jsonForName->is_null())
	{
		setName(ModelBase::stringFromJson(*jsonForName));
	}
	web::json::value* jsonForValue = ModelBase::getField(val, "Value");
	if(jsonForValue != nullptr && !jsonForValue->is_null())
	{
		setValue(ModelBase::stringFromJson(*jsonForValue));
	}
	web::json::value* jsonForBuiltIn = ModelBase::getField(val, "BuiltIn");
	if(jsonForBuiltIn != nullptr && !jsonForBuiltIn->is_null())
	{
		setBuiltIn(ModelBase::boolFromJson(*jsonForBuiltIn));
	}
}

}
}

