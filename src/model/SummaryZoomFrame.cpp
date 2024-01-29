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
#include "SummaryZoomFrame.h"

namespace asposeslidescloud {
namespace model {

SummaryZoomFrame::SummaryZoomFrame()
{
	setZOrderPosition(0);
	setType(L"SummaryZoomFrame");
}

SummaryZoomFrame::~SummaryZoomFrame()
{
}

utility::string_t SummaryZoomFrame::getZoomLayout() const
{
	return m_ZoomLayout;
}

void SummaryZoomFrame::setZoomLayout(utility::string_t value)
{
	m_ZoomLayout = value;
	
}

std::vector<std::shared_ptr<SummaryZoomSection>> SummaryZoomFrame::getSections() const
{
	return m_Sections;
}

void SummaryZoomFrame::setSections(std::vector<std::shared_ptr<SummaryZoomSection>> value)
{
	m_Sections = value;
	
}

web::json::value SummaryZoomFrame::toJson() const
{
	web::json::value val = this->ShapeBase::toJson();
	if (!m_ZoomLayout.empty())
	{
		val[utility::conversions::to_string_t("ZoomLayout")] = ModelBase::toJson(m_ZoomLayout);
	}
	if (m_Sections.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Sections)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Sections")] = web::json::value::array(jsonArray);
	}
	return val;
}

void SummaryZoomFrame::fromJson(web::json::value& val)
{
	this->ShapeBase::fromJson(val);
	web::json::value* jsonForZoomLayout = ModelBase::getField(val, "ZoomLayout");
	if(jsonForZoomLayout != nullptr && !jsonForZoomLayout->is_null())
	{
		setZoomLayout(ModelBase::stringFromJson(*jsonForZoomLayout));
	}
	web::json::value* jsonForSections = ModelBase::getField(val, "Sections");
	if(jsonForSections != nullptr && !jsonForSections->is_null())
	{
		{
			m_Sections.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForSections->as_array())
			{
				if(item.is_null())
				{
					m_Sections.push_back(std::shared_ptr<SummaryZoomSection>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"SummaryZoomSection", item);
					m_Sections.push_back(std::static_pointer_cast<SummaryZoomSection>(newItem));
				}
			}
        	}
	}
}

}
}

