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
#include "HandoutLayoutingOptions.h"

namespace asposeslidescloud {
namespace model {

HandoutLayoutingOptions::HandoutLayoutingOptions()
{
	m_PrintSlideNumbersIsSet = false;
	m_PrintCommentsIsSet = false;
	m_PrintFrameSlideIsSet = false;
	setLayoutType(L"Handout");
}

HandoutLayoutingOptions::~HandoutLayoutingOptions()
{
}

utility::string_t HandoutLayoutingOptions::getHandout() const
{
	return m_Handout;
}

void HandoutLayoutingOptions::setHandout(utility::string_t value)
{
	m_Handout = value;
	
}

bool HandoutLayoutingOptions::isPrintSlideNumbers() const
{
	return m_PrintSlideNumbers;
}

void HandoutLayoutingOptions::setPrintSlideNumbers(bool value)
{
	m_PrintSlideNumbers = value;
	m_PrintSlideNumbersIsSet = true;
}

bool HandoutLayoutingOptions::printSlideNumbersIsSet() const
{
	return m_PrintSlideNumbersIsSet;
}

void HandoutLayoutingOptions::unsetPrintSlideNumbers()
{
	m_PrintSlideNumbersIsSet = false;
}

bool HandoutLayoutingOptions::isPrintComments() const
{
	return m_PrintComments;
}

void HandoutLayoutingOptions::setPrintComments(bool value)
{
	m_PrintComments = value;
	m_PrintCommentsIsSet = true;
}

bool HandoutLayoutingOptions::printCommentsIsSet() const
{
	return m_PrintCommentsIsSet;
}

void HandoutLayoutingOptions::unsetPrintComments()
{
	m_PrintCommentsIsSet = false;
}

bool HandoutLayoutingOptions::isPrintFrameSlide() const
{
	return m_PrintFrameSlide;
}

void HandoutLayoutingOptions::setPrintFrameSlide(bool value)
{
	m_PrintFrameSlide = value;
	m_PrintFrameSlideIsSet = true;
}

bool HandoutLayoutingOptions::printFrameSlideIsSet() const
{
	return m_PrintFrameSlideIsSet;
}

void HandoutLayoutingOptions::unsetPrintFrameSlide()
{
	m_PrintFrameSlideIsSet = false;
}

web::json::value HandoutLayoutingOptions::toJson() const
{
	web::json::value val = this->SlidesLayoutOptions::toJson();
	if (!m_Handout.empty())
	{
		val[utility::conversions::to_string_t("Handout")] = ModelBase::toJson(m_Handout);
	}
	if(m_PrintSlideNumbersIsSet)
	{
		val[utility::conversions::to_string_t("PrintSlideNumbers")] = ModelBase::toJson(m_PrintSlideNumbers);
	}
	if(m_PrintCommentsIsSet)
	{
		val[utility::conversions::to_string_t("PrintComments")] = ModelBase::toJson(m_PrintComments);
	}
	if(m_PrintFrameSlideIsSet)
	{
		val[utility::conversions::to_string_t("PrintFrameSlide")] = ModelBase::toJson(m_PrintFrameSlide);
	}
	return val;
}

void HandoutLayoutingOptions::fromJson(web::json::value& val)
{
	this->SlidesLayoutOptions::fromJson(val);
	web::json::value* jsonForHandout = ModelBase::getField(val, "Handout");
	if(jsonForHandout != nullptr && !jsonForHandout->is_null())
	{
		setHandout(ModelBase::stringFromJson(*jsonForHandout));
	}
	web::json::value* jsonForPrintSlideNumbers = ModelBase::getField(val, "PrintSlideNumbers");
	if(jsonForPrintSlideNumbers != nullptr && !jsonForPrintSlideNumbers->is_null())
	{
		setPrintSlideNumbers(ModelBase::boolFromJson(*jsonForPrintSlideNumbers));
	}
	web::json::value* jsonForPrintComments = ModelBase::getField(val, "PrintComments");
	if(jsonForPrintComments != nullptr && !jsonForPrintComments->is_null())
	{
		setPrintComments(ModelBase::boolFromJson(*jsonForPrintComments));
	}
	web::json::value* jsonForPrintFrameSlide = ModelBase::getField(val, "PrintFrameSlide");
	if(jsonForPrintFrameSlide != nullptr && !jsonForPrintFrameSlide->is_null())
	{
		setPrintFrameSlide(ModelBase::boolFromJson(*jsonForPrintFrameSlide));
	}
}

}
}

