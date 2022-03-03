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



#include "SummaryZoomSection.h"

namespace asposeslidescloud {
namespace model {

SummaryZoomSection::SummaryZoomSection()
{
}

SummaryZoomSection::~SummaryZoomSection()
{
}

utility::string_t SummaryZoomSection::getTitle() const
{
	return m_Title;
}

void SummaryZoomSection::setTitle(utility::string_t value)
{
	m_Title = value;
	
}

utility::string_t SummaryZoomSection::getDescription() const
{
	return m_Description;
}

void SummaryZoomSection::setDescription(utility::string_t value)
{
	m_Description = value;
	
}

web::json::value SummaryZoomSection::toJson() const
{
	web::json::value val = this->SectionZoomFrame::toJson();
	if (!m_Title.empty())
	{
		val[utility::conversions::to_string_t("Title")] = ModelBase::toJson(m_Title);
	}
	if (!m_Description.empty())
	{
		val[utility::conversions::to_string_t("Description")] = ModelBase::toJson(m_Description);
	}
	return val;
}

void SummaryZoomSection::fromJson(web::json::value& val)
{
	this->SectionZoomFrame::fromJson(val);
	web::json::value* jsonForTitle = ModelBase::getField(val, "Title");
	if(jsonForTitle != nullptr && !jsonForTitle->is_null())
	{
		setTitle(ModelBase::stringFromJson(*jsonForTitle));
	}
	web::json::value* jsonForDescription = ModelBase::getField(val, "Description");
	if(jsonForDescription != nullptr && !jsonForDescription->is_null())
	{
		setDescription(ModelBase::stringFromJson(*jsonForDescription));
	}
}

}
}

