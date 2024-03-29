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
#include "ResourceBase.h"

namespace asposeslidescloud {
namespace model {

ResourceBase::ResourceBase()
{
}

ResourceBase::~ResourceBase()
{
}

std::shared_ptr<ResourceUri> ResourceBase::getSelfUri() const
{
	return m_SelfUri;
}

void ResourceBase::setSelfUri(std::shared_ptr<ResourceUri> value)
{
	m_SelfUri = value;
	
}

std::vector<std::shared_ptr<ResourceUri>> ResourceBase::getAlternateLinks() const
{
	return m_AlternateLinks;
}

void ResourceBase::setAlternateLinks(std::vector<std::shared_ptr<ResourceUri>> value)
{
	m_AlternateLinks = value;
	
}

web::json::value ResourceBase::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_SelfUri != nullptr)
	{
		val[utility::conversions::to_string_t("SelfUri")] = ModelBase::toJson(m_SelfUri);
	}
	if (m_AlternateLinks.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_AlternateLinks)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("AlternateLinks")] = web::json::value::array(jsonArray);
	}
	return val;
}

void ResourceBase::fromJson(web::json::value& val)
{
	web::json::value* jsonForSelfUri = ModelBase::getField(val, "SelfUri");
	if(jsonForSelfUri != nullptr && !jsonForSelfUri->is_null())
	{
		std::shared_ptr<void> instanceForSelfUri = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForSelfUri);
		setSelfUri(std::static_pointer_cast<ResourceUri>(instanceForSelfUri));
	}
	web::json::value* jsonForAlternateLinks = ModelBase::getField(val, "AlternateLinks");
	if(jsonForAlternateLinks != nullptr && !jsonForAlternateLinks->is_null())
	{
		{
			m_AlternateLinks.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForAlternateLinks->as_array())
			{
				if(item.is_null())
				{
					m_AlternateLinks.push_back(std::shared_ptr<ResourceUri>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", item);
					m_AlternateLinks.push_back(std::static_pointer_cast<ResourceUri>(newItem));
				}
			}
        	}
	}
}

}
}

