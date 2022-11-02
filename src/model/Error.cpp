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
#include "Error.h"

namespace asposeslidescloud {
namespace model {

Error::Error()
{
}

Error::~Error()
{
}

utility::string_t Error::getCode() const
{
	return m_Code;
}

void Error::setCode(utility::string_t value)
{
	m_Code = value;
	
}

utility::string_t Error::getMessage() const
{
	return m_Message;
}

void Error::setMessage(utility::string_t value)
{
	m_Message = value;
	
}

utility::string_t Error::getDescription() const
{
	return m_Description;
}

void Error::setDescription(utility::string_t value)
{
	m_Description = value;
	
}

std::shared_ptr<ErrorDetails> Error::getInnerError() const
{
	return m_InnerError;
}

void Error::setInnerError(std::shared_ptr<ErrorDetails> value)
{
	m_InnerError = value;
	
}

web::json::value Error::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Code.empty())
	{
		val[utility::conversions::to_string_t("Code")] = ModelBase::toJson(m_Code);
	}
	if (!m_Message.empty())
	{
		val[utility::conversions::to_string_t("Message")] = ModelBase::toJson(m_Message);
	}
	if (!m_Description.empty())
	{
		val[utility::conversions::to_string_t("Description")] = ModelBase::toJson(m_Description);
	}
	if (m_InnerError != nullptr)
	{
		val[utility::conversions::to_string_t("InnerError")] = ModelBase::toJson(m_InnerError);
	}
	return val;
}

void Error::fromJson(web::json::value& val)
{
	web::json::value* jsonForCode = ModelBase::getField(val, "Code");
	if(jsonForCode != nullptr && !jsonForCode->is_null())
	{
		setCode(ModelBase::stringFromJson(*jsonForCode));
	}
	web::json::value* jsonForMessage = ModelBase::getField(val, "Message");
	if(jsonForMessage != nullptr && !jsonForMessage->is_null())
	{
		setMessage(ModelBase::stringFromJson(*jsonForMessage));
	}
	web::json::value* jsonForDescription = ModelBase::getField(val, "Description");
	if(jsonForDescription != nullptr && !jsonForDescription->is_null())
	{
		setDescription(ModelBase::stringFromJson(*jsonForDescription));
	}
	web::json::value* jsonForInnerError = ModelBase::getField(val, "InnerError");
	if(jsonForInnerError != nullptr && !jsonForInnerError->is_null())
	{
		std::shared_ptr<void> instanceForInnerError = asposeslidescloud::api::ClassRegistry::deserialize(L"ErrorDetails", *jsonForInnerError);
		setInnerError(std::static_pointer_cast<ErrorDetails>(instanceForInnerError));
	}
}

}
}

