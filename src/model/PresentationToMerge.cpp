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



#include "PresentationToMerge.h"

namespace asposeslidescloud {
namespace model {

PresentationToMerge::PresentationToMerge()
{
	m_SlidesIsSet = false;
}

PresentationToMerge::~PresentationToMerge()
{
}

utility::string_t PresentationToMerge::getPath() const
{
	return m_Path;
}

void PresentationToMerge::setPath(utility::string_t value)
{
	m_Path = value;
	
}

utility::string_t PresentationToMerge::getPassword() const
{
	return m_Password;
}

void PresentationToMerge::setPassword(utility::string_t value)
{
	m_Password = value;
	
}

std::vector<int32_t> PresentationToMerge::getSlides() const
{
	return m_Slides;
}

void PresentationToMerge::setSlides(std::vector<int32_t> value)
{
	m_Slides = value;
	m_SlidesIsSet = true;
}

bool PresentationToMerge::slidesIsSet() const
{
	return m_SlidesIsSet;
}

void PresentationToMerge::unsetSlides()
{
	m_SlidesIsSet = false;
}

utility::string_t PresentationToMerge::getSource() const
{
	return m_Source;
}

void PresentationToMerge::setSource(utility::string_t value)
{
	m_Source = value;
	
}

web::json::value PresentationToMerge::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Path.empty())
	{
		val[utility::conversions::to_string_t("Path")] = ModelBase::toJson(m_Path);
	}
	if (!m_Password.empty())
	{
		val[utility::conversions::to_string_t("Password")] = ModelBase::toJson(m_Password);
	}
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Slides)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		if (jsonArray.size() > 0)
		{
			val[utility::conversions::to_string_t("Slides")] = web::json::value::array(jsonArray);
		}
	}
	if (!m_Source.empty())
	{
		val[utility::conversions::to_string_t("Source")] = ModelBase::toJson(m_Source);
	}
	return val;
}

void PresentationToMerge::fromJson(web::json::value& val)
{
	web::json::value* jsonForPath = ModelBase::getField(val, "Path");
	if(jsonForPath != nullptr && !jsonForPath->is_null())
	{
		setPath(ModelBase::stringFromJson(*jsonForPath));
	}
	web::json::value* jsonForPassword = ModelBase::getField(val, "Password");
	if(jsonForPassword != nullptr && !jsonForPassword->is_null())
	{
		setPassword(ModelBase::stringFromJson(*jsonForPassword));
	}
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
	web::json::value* jsonForSource = ModelBase::getField(val, "Source");
	if(jsonForSource != nullptr && !jsonForSource->is_null())
	{
		setSource(ModelBase::stringFromJson(*jsonForSource));
	}
}

}
}

