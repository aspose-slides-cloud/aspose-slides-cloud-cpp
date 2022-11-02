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
#include "ErrorDetails.h"

namespace asposeslidescloud {
namespace model {

ErrorDetails::ErrorDetails()
{
}

ErrorDetails::~ErrorDetails()
{
}

utility::string_t ErrorDetails::getRequestId() const
{
	return m_RequestId;
}

void ErrorDetails::setRequestId(utility::string_t value)
{
	m_RequestId = value;
	
}

utility::datetime ErrorDetails::getDate() const
{
	return m_Date;
}

void ErrorDetails::setDate(utility::datetime value)
{
	m_Date = value;
	
}

web::json::value ErrorDetails::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_RequestId.empty())
	{
		val[utility::conversions::to_string_t("RequestId")] = ModelBase::toJson(m_RequestId);
	}
	if (m_Date.is_initialized())
	{
		val[utility::conversions::to_string_t("Date")] = ModelBase::toJson(m_Date);
	}
	return val;
}

void ErrorDetails::fromJson(web::json::value& val)
{
	web::json::value* jsonForRequestId = ModelBase::getField(val, "RequestId");
	if(jsonForRequestId != nullptr && !jsonForRequestId->is_null())
	{
		setRequestId(ModelBase::stringFromJson(*jsonForRequestId));
	}
	web::json::value* jsonForDate = ModelBase::getField(val, "Date");
	if(jsonForDate != nullptr && !jsonForDate->is_null())
	{
		setDate(ModelBase::dateFromJson(*jsonForDate));
	}
}

}
}

