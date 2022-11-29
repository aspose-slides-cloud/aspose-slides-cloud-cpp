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
#include "GeometryPath.h"

namespace asposeslidescloud {
namespace model {

GeometryPath::GeometryPath()
{
	m_StrokeIsSet = false;
}

GeometryPath::~GeometryPath()
{
}

utility::string_t GeometryPath::getFillMode() const
{
	return m_FillMode;
}

void GeometryPath::setFillMode(utility::string_t value)
{
	m_FillMode = value;
	
}

bool GeometryPath::isStroke() const
{
	return m_Stroke;
}

void GeometryPath::setStroke(bool value)
{
	m_Stroke = value;
	m_StrokeIsSet = true;
}

bool GeometryPath::strokeIsSet() const
{
	return m_StrokeIsSet;
}

void GeometryPath::unsetStroke()
{
	m_StrokeIsSet = false;
}

std::vector<std::shared_ptr<PathSegment>> GeometryPath::getPathData() const
{
	return m_PathData;
}

void GeometryPath::setPathData(std::vector<std::shared_ptr<PathSegment>> value)
{
	m_PathData = value;
	
}

web::json::value GeometryPath::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_FillMode.empty())
	{
		val[utility::conversions::to_string_t("FillMode")] = ModelBase::toJson(m_FillMode);
	}
	if(m_StrokeIsSet)
	{
		val[utility::conversions::to_string_t("Stroke")] = ModelBase::toJson(m_Stroke);
	}
	if (m_PathData.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_PathData)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("PathData")] = web::json::value::array(jsonArray);
	}
	return val;
}

void GeometryPath::fromJson(web::json::value& val)
{
	web::json::value* jsonForFillMode = ModelBase::getField(val, "FillMode");
	if(jsonForFillMode != nullptr && !jsonForFillMode->is_null())
	{
		setFillMode(ModelBase::stringFromJson(*jsonForFillMode));
	}
	web::json::value* jsonForStroke = ModelBase::getField(val, "Stroke");
	if(jsonForStroke != nullptr && !jsonForStroke->is_null())
	{
		setStroke(ModelBase::boolFromJson(*jsonForStroke));
	}
	web::json::value* jsonForPathData = ModelBase::getField(val, "PathData");
	if(jsonForPathData != nullptr && !jsonForPathData->is_null())
	{
		{
			m_PathData.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForPathData->as_array())
			{
				if(item.is_null())
				{
					m_PathData.push_back(std::shared_ptr<PathSegment>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"PathSegment", item);
					m_PathData.push_back(std::static_pointer_cast<PathSegment>(newItem));
				}
			}
        	}
	}
}

}
}

