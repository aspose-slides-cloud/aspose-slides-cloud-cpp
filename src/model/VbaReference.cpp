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
#include "VbaReference.h"

namespace asposeslidescloud {
namespace model {

VbaReference::VbaReference()
{
}

VbaReference::~VbaReference()
{
}

utility::string_t VbaReference::getName() const
{
	return m_Name;
}

void VbaReference::setName(utility::string_t value)
{
	m_Name = value;
	
}

utility::string_t VbaReference::getLibId() const
{
	return m_LibId;
}

void VbaReference::setLibId(utility::string_t value)
{
	m_LibId = value;
	
}

web::json::value VbaReference::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Name.empty())
	{
		val[utility::conversions::to_string_t("Name")] = ModelBase::toJson(m_Name);
	}
	if (!m_LibId.empty())
	{
		val[utility::conversions::to_string_t("LibId")] = ModelBase::toJson(m_LibId);
	}
	return val;
}

void VbaReference::fromJson(web::json::value& val)
{
	web::json::value* jsonForName = ModelBase::getField(val, "Name");
	if(jsonForName != nullptr && !jsonForName->is_null())
	{
		setName(ModelBase::stringFromJson(*jsonForName));
	}
	web::json::value* jsonForLibId = ModelBase::getField(val, "LibId");
	if(jsonForLibId != nullptr && !jsonForLibId->is_null())
	{
		setLibId(ModelBase::stringFromJson(*jsonForLibId));
	}
}

}
}

