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
#include "ApiInfo.h"

namespace asposeslidescloud {
namespace model {

ApiInfo::ApiInfo()
{
}

ApiInfo::~ApiInfo()
{
}

utility::string_t ApiInfo::getName() const
{
	return m_Name;
}

void ApiInfo::setName(utility::string_t value)
{
	m_Name = value;
	
}

utility::string_t ApiInfo::getVersion() const
{
	return m_Version;
}

void ApiInfo::setVersion(utility::string_t value)
{
	m_Version = value;
	
}

web::json::value ApiInfo::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Name.empty())
	{
		val[utility::conversions::to_string_t("Name")] = ModelBase::toJson(m_Name);
	}
	if (!m_Version.empty())
	{
		val[utility::conversions::to_string_t("Version")] = ModelBase::toJson(m_Version);
	}
	return val;
}

void ApiInfo::fromJson(web::json::value& val)
{
	web::json::value* jsonForName = ModelBase::getField(val, "Name");
	if(jsonForName != nullptr && !jsonForName->is_null())
	{
		setName(ModelBase::stringFromJson(*jsonForName));
	}
	web::json::value* jsonForVersion = ModelBase::getField(val, "Version");
	if(jsonForVersion != nullptr && !jsonForVersion->is_null())
	{
		setVersion(ModelBase::stringFromJson(*jsonForVersion));
	}
}

}
}

