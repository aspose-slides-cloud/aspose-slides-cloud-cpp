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
#include "OperationError.h"

namespace asposeslidescloud {
namespace model {

OperationError::OperationError()
{
	setHttpStatusCode(0);
}

OperationError::~OperationError()
{
}

utility::string_t OperationError::getCode() const
{
	return m_Code;
}

void OperationError::setCode(utility::string_t value)
{
	m_Code = value;
	
}

utility::string_t OperationError::getDescription() const
{
	return m_Description;
}

void OperationError::setDescription(utility::string_t value)
{
	m_Description = value;
	
}

int32_t OperationError::getHttpStatusCode() const
{
	return m_HttpStatusCode;
}

void OperationError::setHttpStatusCode(int32_t value)
{
	m_HttpStatusCode = value;
	
}

utility::string_t OperationError::getMessage() const
{
	return m_Message;
}

void OperationError::setMessage(utility::string_t value)
{
	m_Message = value;
	
}

web::json::value OperationError::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Code.empty())
	{
		val[utility::conversions::to_string_t("Code")] = ModelBase::toJson(m_Code);
	}
	if (!m_Description.empty())
	{
		val[utility::conversions::to_string_t("Description")] = ModelBase::toJson(m_Description);
	}
	val[utility::conversions::to_string_t("HttpStatusCode")] = ModelBase::toJson(m_HttpStatusCode);
	if (!m_Message.empty())
	{
		val[utility::conversions::to_string_t("Message")] = ModelBase::toJson(m_Message);
	}
	return val;
}

void OperationError::fromJson(web::json::value& val)
{
	web::json::value* jsonForCode = ModelBase::getField(val, "Code");
	if(jsonForCode != nullptr && !jsonForCode->is_null())
	{
		setCode(ModelBase::stringFromJson(*jsonForCode));
	}
	web::json::value* jsonForDescription = ModelBase::getField(val, "Description");
	if(jsonForDescription != nullptr && !jsonForDescription->is_null())
	{
		setDescription(ModelBase::stringFromJson(*jsonForDescription));
	}
	web::json::value* jsonForHttpStatusCode = ModelBase::getField(val, "HttpStatusCode");
	if(jsonForHttpStatusCode != nullptr && !jsonForHttpStatusCode->is_null() && jsonForHttpStatusCode->is_number())
	{
		setHttpStatusCode(ModelBase::int32_tFromJson(*jsonForHttpStatusCode));
	}
	web::json::value* jsonForMessage = ModelBase::getField(val, "Message");
	if(jsonForMessage != nullptr && !jsonForMessage->is_null())
	{
		setMessage(ModelBase::stringFromJson(*jsonForMessage));
	}
}

}
}

