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



#include "Shapes.h"

namespace asposeslidescloud {
namespace model {

Shapes::Shapes()
{
}

Shapes::~Shapes()
{
}

std::vector<std::shared_ptr<ResourceUri>> Shapes::getShapesLinks() const
{
	return m_ShapesLinks;
}

void Shapes::setShapesLinks(std::vector<std::shared_ptr<ResourceUri>> value)
{
	m_ShapesLinks = value;
	
}

web::json::value Shapes::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_ShapesLinks)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("ShapesLinks")] = web::json::value::array(jsonArray);
	}
	return val;
}

void Shapes::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForShapesLinks = ModelBase::getField(val, "ShapesLinks");
	if(jsonForShapesLinks != nullptr && !jsonForShapesLinks->is_null())
	{
		{
			m_ShapesLinks.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForShapesLinks->as_array())
			{
				if(item.is_null())
				{
					m_ShapesLinks.push_back(std::shared_ptr<ResourceUri>(nullptr));
				}
				else
				{
					std::shared_ptr<ResourceUri> newItem(new ResourceUri());
					newItem->fromJson(item);
					m_ShapesLinks.push_back( newItem );
				}
			}
        	}
	}
}

}
}

