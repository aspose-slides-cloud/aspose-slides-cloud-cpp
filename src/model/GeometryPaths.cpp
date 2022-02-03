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



#include "GeometryPaths.h"

namespace asposeslidescloud {
namespace model {

GeometryPaths::GeometryPaths()
{
}

GeometryPaths::~GeometryPaths()
{
}

std::vector<std::shared_ptr<GeometryPath>> GeometryPaths::getPaths() const
{
	return m_Paths;
}

void GeometryPaths::setPaths(std::vector<std::shared_ptr<GeometryPath>> value)
{
	m_Paths = value;
	
}

web::json::value GeometryPaths::toJson() const
{
	web::json::value val = web::json::value::object();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Paths)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		if (jsonArray.size() > 0)
		{
			val[utility::conversions::to_string_t("Paths")] = web::json::value::array(jsonArray);
		}
	}
	return val;
}

void GeometryPaths::fromJson(web::json::value& val)
{
	web::json::value* jsonForPaths = ModelBase::getField(val, "Paths");
	if(jsonForPaths != nullptr && !jsonForPaths->is_null())
	{
		{
			m_Paths.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForPaths->as_array())
			{
				if(item.is_null())
				{
					m_Paths.push_back(std::shared_ptr<GeometryPath>(nullptr));
				}
				else
				{
					std::shared_ptr<GeometryPath> newItem(new GeometryPath());
					newItem->fromJson(item);
					m_Paths.push_back( newItem );
				}
			}
        	}
	}
}

}
}

