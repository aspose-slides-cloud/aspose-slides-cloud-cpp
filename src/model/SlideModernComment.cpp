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
#include "SlideModernComment.h"

namespace asposeslidescloud {
namespace model {

SlideModernComment::SlideModernComment()
{
	m_TextSelectionStartIsSet = false;
	m_TextSelectionLengthIsSet = false;
	setType(L"Modern");
}

SlideModernComment::~SlideModernComment()
{
}

int32_t SlideModernComment::getTextSelectionStart() const
{
	return m_TextSelectionStart;
}

void SlideModernComment::setTextSelectionStart(int32_t value)
{
	m_TextSelectionStart = value;
	m_TextSelectionStartIsSet = true;
}

bool SlideModernComment::textSelectionStartIsSet() const
{
	return m_TextSelectionStartIsSet;
}

void SlideModernComment::unsetTextSelectionStart()
{
	m_TextSelectionStartIsSet = false;
}

int32_t SlideModernComment::getTextSelectionLength() const
{
	return m_TextSelectionLength;
}

void SlideModernComment::setTextSelectionLength(int32_t value)
{
	m_TextSelectionLength = value;
	m_TextSelectionLengthIsSet = true;
}

bool SlideModernComment::textSelectionLengthIsSet() const
{
	return m_TextSelectionLengthIsSet;
}

void SlideModernComment::unsetTextSelectionLength()
{
	m_TextSelectionLengthIsSet = false;
}

utility::string_t SlideModernComment::getStatus() const
{
	return m_Status;
}

void SlideModernComment::setStatus(utility::string_t value)
{
	m_Status = value;
	
}

web::json::value SlideModernComment::toJson() const
{
	web::json::value val = this->SlideCommentBase::toJson();
	if(m_TextSelectionStartIsSet)
	{
		val[utility::conversions::to_string_t("TextSelectionStart")] = ModelBase::toJson(m_TextSelectionStart);
	}
	if(m_TextSelectionLengthIsSet)
	{
		val[utility::conversions::to_string_t("TextSelectionLength")] = ModelBase::toJson(m_TextSelectionLength);
	}
	if (!m_Status.empty())
	{
		val[utility::conversions::to_string_t("Status")] = ModelBase::toJson(m_Status);
	}
	return val;
}

void SlideModernComment::fromJson(web::json::value& val)
{
	this->SlideCommentBase::fromJson(val);
	web::json::value* jsonForTextSelectionStart = ModelBase::getField(val, "TextSelectionStart");
	if(jsonForTextSelectionStart != nullptr && !jsonForTextSelectionStart->is_null() && jsonForTextSelectionStart->is_number())
	{
		setTextSelectionStart(ModelBase::int32_tFromJson(*jsonForTextSelectionStart));
	}
	web::json::value* jsonForTextSelectionLength = ModelBase::getField(val, "TextSelectionLength");
	if(jsonForTextSelectionLength != nullptr && !jsonForTextSelectionLength->is_null() && jsonForTextSelectionLength->is_number())
	{
		setTextSelectionLength(ModelBase::int32_tFromJson(*jsonForTextSelectionLength));
	}
	web::json::value* jsonForStatus = ModelBase::getField(val, "Status");
	if(jsonForStatus != nullptr && !jsonForStatus->is_null())
	{
		setStatus(ModelBase::stringFromJson(*jsonForStatus));
	}
}

}
}

