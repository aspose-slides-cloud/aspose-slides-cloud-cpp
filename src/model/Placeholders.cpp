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
#include "Placeholders.h"

namespace asposeslidescloud {
namespace model {

Placeholders::Placeholders()
{
}

Placeholders::~Placeholders()
{
}

std::vector<std::shared_ptr<ResourceUri>> Placeholders::getPlaceholderLinks() const
{
	return m_PlaceholderLinks;
}

void Placeholders::setPlaceholderLinks(std::vector<std::shared_ptr<ResourceUri>> value)
{
	m_PlaceholderLinks = value;
	
}

web::json::value Placeholders::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (m_PlaceholderLinks.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_PlaceholderLinks)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("PlaceholderLinks")] = web::json::value::array(jsonArray);
	}
	return val;
}

void Placeholders::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForPlaceholderLinks = ModelBase::getField(val, "PlaceholderLinks");
	if(jsonForPlaceholderLinks != nullptr && !jsonForPlaceholderLinks->is_null())
	{
		{
			m_PlaceholderLinks.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForPlaceholderLinks->as_array())
			{
				if(item.is_null())
				{
					m_PlaceholderLinks.push_back(std::shared_ptr<ResourceUri>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", item);
					m_PlaceholderLinks.push_back(std::static_pointer_cast<ResourceUri>(newItem));
				}
			}
        	}
	}
}

}
}

