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



#include "LayoutSlide.h"

namespace asposeslidescloud {
namespace model {

LayoutSlide::LayoutSlide()
{
}

LayoutSlide::~LayoutSlide()
{
}

utility::string_t LayoutSlide::getName() const
{
	return m_Name;
}

void LayoutSlide::setName(utility::string_t value)
{
	m_Name = value;
	
}

utility::string_t LayoutSlide::getType() const
{
	return m_Type;
}

void LayoutSlide::setType(utility::string_t value)
{
	m_Type = value;
	
}

std::shared_ptr<ResourceUri> LayoutSlide::getMasterSlide() const
{
	return m_MasterSlide;
}

void LayoutSlide::setMasterSlide(std::shared_ptr<ResourceUri> value)
{
	m_MasterSlide = value;
	
}

std::vector<std::shared_ptr<ResourceUri>> LayoutSlide::getDependingSlides() const
{
	return m_DependingSlides;
}

void LayoutSlide::setDependingSlides(std::vector<std::shared_ptr<ResourceUri>> value)
{
	m_DependingSlides = value;
	
}

web::json::value LayoutSlide::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (!m_Name.empty())
	{
		val[utility::conversions::to_string_t("Name")] = ModelBase::toJson(m_Name);
	}
	if (!m_Type.empty())
	{
		val[utility::conversions::to_string_t("Type")] = ModelBase::toJson(m_Type);
	}
	if (m_MasterSlide != nullptr)
	{
		val[utility::conversions::to_string_t("MasterSlide")] = ModelBase::toJson(m_MasterSlide);
	}
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_DependingSlides)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("DependingSlides")] = web::json::value::array(jsonArray);
	}
	return val;
}

void LayoutSlide::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForName = ModelBase::getField(val, "Name");
	if(jsonForName != nullptr && !jsonForName->is_null())
	{
		setName(ModelBase::stringFromJson(*jsonForName));
	}
	web::json::value* jsonForType = ModelBase::getField(val, "Type");
	if(jsonForType != nullptr && !jsonForType->is_null())
	{
		setType(ModelBase::stringFromJson(*jsonForType));
	}
	web::json::value* jsonForMasterSlide = ModelBase::getField(val, "MasterSlide");
	if(jsonForMasterSlide != nullptr && !jsonForMasterSlide->is_null())
	{
		std::shared_ptr<ResourceUri> newItem(new ResourceUri());
		newItem->fromJson(*jsonForMasterSlide);
		setMasterSlide(newItem);
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
					m_DependingSlides.push_back(std::shared_ptr<ResourceUri>(nullptr));
				}
				else
				{
					std::shared_ptr<ResourceUri> newItem(new ResourceUri());
					newItem->fromJson(item);
					m_DependingSlides.push_back( newItem );
				}
			}
        	}
	}
}

}
}

