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
#include "ViewProperties.h"

namespace asposeslidescloud {
namespace model {

ViewProperties::ViewProperties()
{
	m_PreferSingleViewIsSet = false;
}

ViewProperties::~ViewProperties()
{
}

utility::string_t ViewProperties::getLastView() const
{
	return m_LastView;
}

void ViewProperties::setLastView(utility::string_t value)
{
	m_LastView = value;
	
}

utility::string_t ViewProperties::getHorizontalBarState() const
{
	return m_HorizontalBarState;
}

void ViewProperties::setHorizontalBarState(utility::string_t value)
{
	m_HorizontalBarState = value;
	
}

utility::string_t ViewProperties::getVerticalBarState() const
{
	return m_VerticalBarState;
}

void ViewProperties::setVerticalBarState(utility::string_t value)
{
	m_VerticalBarState = value;
	
}

bool ViewProperties::getPreferSingleView() const
{
	return m_PreferSingleView;
}

void ViewProperties::setPreferSingleView(bool value)
{
	m_PreferSingleView = value;
	m_PreferSingleViewIsSet = true;
}

bool ViewProperties::preferSingleViewIsSet() const
{
	return m_PreferSingleViewIsSet;
}

void ViewProperties::unsetPreferSingleView()
{
	m_PreferSingleViewIsSet = false;
}

std::shared_ptr<NormalViewRestoredProperties> ViewProperties::getRestoredLeft() const
{
	return m_RestoredLeft;
}

void ViewProperties::setRestoredLeft(std::shared_ptr<NormalViewRestoredProperties> value)
{
	m_RestoredLeft = value;
	
}

std::shared_ptr<NormalViewRestoredProperties> ViewProperties::getRestoredTop() const
{
	return m_RestoredTop;
}

void ViewProperties::setRestoredTop(std::shared_ptr<NormalViewRestoredProperties> value)
{
	m_RestoredTop = value;
	
}

std::shared_ptr<CommonSlideViewProperties> ViewProperties::getSlideViewProperties() const
{
	return m_SlideViewProperties;
}

void ViewProperties::setSlideViewProperties(std::shared_ptr<CommonSlideViewProperties> value)
{
	m_SlideViewProperties = value;
	
}

std::shared_ptr<CommonSlideViewProperties> ViewProperties::getNotesViewProperties() const
{
	return m_NotesViewProperties;
}

void ViewProperties::setNotesViewProperties(std::shared_ptr<CommonSlideViewProperties> value)
{
	m_NotesViewProperties = value;
	
}

utility::string_t ViewProperties::getShowComments() const
{
	return m_ShowComments;
}

void ViewProperties::setShowComments(utility::string_t value)
{
	m_ShowComments = value;
	
}

web::json::value ViewProperties::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (!m_LastView.empty())
	{
		val[utility::conversions::to_string_t("LastView")] = ModelBase::toJson(m_LastView);
	}
	if (!m_HorizontalBarState.empty())
	{
		val[utility::conversions::to_string_t("HorizontalBarState")] = ModelBase::toJson(m_HorizontalBarState);
	}
	if (!m_VerticalBarState.empty())
	{
		val[utility::conversions::to_string_t("VerticalBarState")] = ModelBase::toJson(m_VerticalBarState);
	}
	if(m_PreferSingleViewIsSet)
	{
		val[utility::conversions::to_string_t("PreferSingleView")] = ModelBase::toJson(m_PreferSingleView);
	}
	if (m_RestoredLeft != nullptr)
	{
		val[utility::conversions::to_string_t("RestoredLeft")] = ModelBase::toJson(m_RestoredLeft);
	}
	if (m_RestoredTop != nullptr)
	{
		val[utility::conversions::to_string_t("RestoredTop")] = ModelBase::toJson(m_RestoredTop);
	}
	if (m_SlideViewProperties != nullptr)
	{
		val[utility::conversions::to_string_t("SlideViewProperties")] = ModelBase::toJson(m_SlideViewProperties);
	}
	if (m_NotesViewProperties != nullptr)
	{
		val[utility::conversions::to_string_t("NotesViewProperties")] = ModelBase::toJson(m_NotesViewProperties);
	}
	if (!m_ShowComments.empty())
	{
		val[utility::conversions::to_string_t("ShowComments")] = ModelBase::toJson(m_ShowComments);
	}
	return val;
}

void ViewProperties::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForLastView = ModelBase::getField(val, "LastView");
	if(jsonForLastView != nullptr && !jsonForLastView->is_null())
	{
		setLastView(ModelBase::stringFromJson(*jsonForLastView));
	}
	web::json::value* jsonForHorizontalBarState = ModelBase::getField(val, "HorizontalBarState");
	if(jsonForHorizontalBarState != nullptr && !jsonForHorizontalBarState->is_null())
	{
		setHorizontalBarState(ModelBase::stringFromJson(*jsonForHorizontalBarState));
	}
	web::json::value* jsonForVerticalBarState = ModelBase::getField(val, "VerticalBarState");
	if(jsonForVerticalBarState != nullptr && !jsonForVerticalBarState->is_null())
	{
		setVerticalBarState(ModelBase::stringFromJson(*jsonForVerticalBarState));
	}
	web::json::value* jsonForPreferSingleView = ModelBase::getField(val, "PreferSingleView");
	if(jsonForPreferSingleView != nullptr && !jsonForPreferSingleView->is_null())
	{
		setPreferSingleView(ModelBase::boolFromJson(*jsonForPreferSingleView));
	}
	web::json::value* jsonForRestoredLeft = ModelBase::getField(val, "RestoredLeft");
	if(jsonForRestoredLeft != nullptr && !jsonForRestoredLeft->is_null())
	{
		std::shared_ptr<void> instanceForRestoredLeft = asposeslidescloud::api::ClassRegistry::deserialize(L"NormalViewRestoredProperties", *jsonForRestoredLeft);
		setRestoredLeft(std::static_pointer_cast<NormalViewRestoredProperties>(instanceForRestoredLeft));
	}
	web::json::value* jsonForRestoredTop = ModelBase::getField(val, "RestoredTop");
	if(jsonForRestoredTop != nullptr && !jsonForRestoredTop->is_null())
	{
		std::shared_ptr<void> instanceForRestoredTop = asposeslidescloud::api::ClassRegistry::deserialize(L"NormalViewRestoredProperties", *jsonForRestoredTop);
		setRestoredTop(std::static_pointer_cast<NormalViewRestoredProperties>(instanceForRestoredTop));
	}
	web::json::value* jsonForSlideViewProperties = ModelBase::getField(val, "SlideViewProperties");
	if(jsonForSlideViewProperties != nullptr && !jsonForSlideViewProperties->is_null())
	{
		std::shared_ptr<void> instanceForSlideViewProperties = asposeslidescloud::api::ClassRegistry::deserialize(L"CommonSlideViewProperties", *jsonForSlideViewProperties);
		setSlideViewProperties(std::static_pointer_cast<CommonSlideViewProperties>(instanceForSlideViewProperties));
	}
	web::json::value* jsonForNotesViewProperties = ModelBase::getField(val, "NotesViewProperties");
	if(jsonForNotesViewProperties != nullptr && !jsonForNotesViewProperties->is_null())
	{
		std::shared_ptr<void> instanceForNotesViewProperties = asposeslidescloud::api::ClassRegistry::deserialize(L"CommonSlideViewProperties", *jsonForNotesViewProperties);
		setNotesViewProperties(std::static_pointer_cast<CommonSlideViewProperties>(instanceForNotesViewProperties));
	}
	web::json::value* jsonForShowComments = ModelBase::getField(val, "ShowComments");
	if(jsonForShowComments != nullptr && !jsonForShowComments->is_null())
	{
		setShowComments(ModelBase::stringFromJson(*jsonForShowComments));
	}
}

}
}

