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



#include "UpdateBackground.h"

namespace asposeslidescloud {
namespace model {

UpdateBackground::UpdateBackground()
{
	m_SlidesIsSet = false;
	setType(L"UpdateBackground");
}

UpdateBackground::~UpdateBackground()
{
}

std::vector<int32_t> UpdateBackground::getSlides() const
{
	return m_Slides;
}

void UpdateBackground::setSlides(std::vector<int32_t> value)
{
	m_Slides = value;
	m_SlidesIsSet = true;
}

bool UpdateBackground::slidesIsSet() const
{
	return m_SlidesIsSet;
}

void UpdateBackground::unsetSlides()
{
	m_SlidesIsSet = false;
}

std::shared_ptr<SlideBackground> UpdateBackground::getBackground() const
{
	return m_Background;
}

void UpdateBackground::setBackground(std::shared_ptr<SlideBackground> value)
{
	m_Background = value;
	
}

web::json::value UpdateBackground::toJson() const
{
	web::json::value val = this->Task::toJson();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Slides)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Slides")] = web::json::value::array(jsonArray);
	}
	if (m_Background != nullptr)
	{
		val[utility::conversions::to_string_t("Background")] = ModelBase::toJson(m_Background);
	}
	return val;
}

void UpdateBackground::fromJson(web::json::value& val)
{
	this->Task::fromJson(val);
	web::json::value* jsonForSlides = ModelBase::getField(val, "Slides");
	if(jsonForSlides != nullptr && !jsonForSlides->is_null())
	{
		{
			m_Slides.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForSlides->as_array())
			{
				m_Slides.push_back(ModelBase::int32_tFromJson(item));
			}
        	}
	}
	web::json::value* jsonForBackground = ModelBase::getField(val, "Background");
	if(jsonForBackground != nullptr && !jsonForBackground->is_null())
	{
		std::shared_ptr<SlideBackground> newItem(new SlideBackground());
		newItem->fromJson(*jsonForBackground);
		setBackground(newItem);
	}
}

}
}

