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
#include "VbaProject.h"

namespace asposeslidescloud {
namespace model {

VbaProject::VbaProject()
{
}

VbaProject::~VbaProject()
{
}

std::vector<std::shared_ptr<ResourceUri>> VbaProject::getModules() const
{
	return m_Modules;
}

void VbaProject::setModules(std::vector<std::shared_ptr<ResourceUri>> value)
{
	m_Modules = value;
	
}

std::vector<std::shared_ptr<VbaReference>> VbaProject::getReferences() const
{
	return m_References;
}

void VbaProject::setReferences(std::vector<std::shared_ptr<VbaReference>> value)
{
	m_References = value;
	
}

web::json::value VbaProject::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (m_Modules.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Modules)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Modules")] = web::json::value::array(jsonArray);
	}
	if (m_References.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_References)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("References")] = web::json::value::array(jsonArray);
	}
	return val;
}

void VbaProject::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForModules = ModelBase::getField(val, "Modules");
	if(jsonForModules != nullptr && !jsonForModules->is_null())
	{
		{
			m_Modules.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForModules->as_array())
			{
				if(item.is_null())
				{
					m_Modules.push_back(std::shared_ptr<ResourceUri>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", item);
					m_Modules.push_back(std::static_pointer_cast<ResourceUri>(newItem));
				}
			}
        	}
	}
	web::json::value* jsonForReferences = ModelBase::getField(val, "References");
	if(jsonForReferences != nullptr && !jsonForReferences->is_null())
	{
		{
			m_References.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForReferences->as_array())
			{
				if(item.is_null())
				{
					m_References.push_back(std::shared_ptr<VbaReference>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"VbaReference", item);
					m_References.push_back(std::static_pointer_cast<VbaReference>(newItem));
				}
			}
        	}
	}
}

}
}

