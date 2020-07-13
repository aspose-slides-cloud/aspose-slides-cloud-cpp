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



#include "MasterSlide.h"

namespace asposeslidescloud {
namespace model {

MasterSlide::MasterSlide()
{
}

MasterSlide::~MasterSlide()
{
}

utility::string_t MasterSlide::getName() const
{
	return m_Name;
}

void MasterSlide::setName(utility::string_t value)
{
	m_Name = value;
	
}

std::vector<std::shared_ptr<ResourceUriElement>> MasterSlide::getLayoutSlides() const
{
	return m_LayoutSlides;
}

void MasterSlide::setLayoutSlides(std::vector<std::shared_ptr<ResourceUriElement>> value)
{
	m_LayoutSlides = value;
	
}

std::vector<std::shared_ptr<ResourceUriElement>> MasterSlide::getDependingSlides() const
{
	return m_DependingSlides;
}

void MasterSlide::setDependingSlides(std::vector<std::shared_ptr<ResourceUriElement>> value)
{
	m_DependingSlides = value;
	
}

web::json::value MasterSlide::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (!m_Name.empty())
	{
		val[utility::conversions::to_string_t("Name")] = ModelBase::toJson(m_Name);
	}
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_LayoutSlides)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		if (jsonArray.size() > 0)
		{
			val[utility::conversions::to_string_t("LayoutSlides")] = web::json::value::array(jsonArray);
		}
	}
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_DependingSlides)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		if (jsonArray.size() > 0)
		{
			val[utility::conversions::to_string_t("DependingSlides")] = web::json::value::array(jsonArray);
		}
	}
	return val;
}

void MasterSlide::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForName = ModelBase::getField(val, "Name");
	if(jsonForName != nullptr && !jsonForName->is_null())
	{
		setName(ModelBase::stringFromJson(*jsonForName));
	}
	web::json::value* jsonForLayoutSlides = ModelBase::getField(val, "LayoutSlides");
	if(jsonForLayoutSlides != nullptr && !jsonForLayoutSlides->is_null())
	{
		{
			m_LayoutSlides.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForLayoutSlides->as_array())
			{
				if(item.is_null())
				{
					m_LayoutSlides.push_back(std::shared_ptr<ResourceUriElement>(nullptr));
				}
				else
				{
					std::shared_ptr<ResourceUriElement> newItem(new ResourceUriElement());
					newItem->fromJson(item);
					m_LayoutSlides.push_back( newItem );
				}
			}
        	}
	}
	web::json::value* jsonForDependingSlides = ModelBase::getField(val, "DependingSlides");
	if(jsonForDependingSlides != nullptr && !jsonForDependingSlides->is_null())
	{
		{
			m_DependingSlides.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForDependingSlides->as_array())
			{
				if(item.is_null())
				{
					m_DependingSlides.push_back(std::shared_ptr<ResourceUriElement>(nullptr));
				}
				else
				{
					std::shared_ptr<ResourceUriElement> newItem(new ResourceUriElement());
					newItem->fromJson(item);
					m_DependingSlides.push_back( newItem );
				}
			}
        	}
	}
}

}
}

