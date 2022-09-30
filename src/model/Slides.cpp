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



#include "Slides.h"

namespace asposeslidescloud {
namespace model {

Slides::Slides()
{
}

Slides::~Slides()
{
}

std::vector<std::shared_ptr<ResourceUri>> Slides::getSlideList() const
{
	return m_SlideList;
}

void Slides::setSlideList(std::vector<std::shared_ptr<ResourceUri>> value)
{
	m_SlideList = value;
	
}

web::json::value Slides::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_SlideList)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("SlideList")] = web::json::value::array(jsonArray);
	}
	return val;
}

void Slides::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForSlideList = ModelBase::getField(val, "SlideList");
	if(jsonForSlideList != nullptr && !jsonForSlideList->is_null())
	{
		{
			m_SlideList.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForSlideList->as_array())
			{
				if(item.is_null())
				{
					m_SlideList.push_back(std::shared_ptr<ResourceUri>(nullptr));
				}
				else
				{
					std::shared_ptr<ResourceUri> newItem(new ResourceUri());
					newItem->fromJson(item);
					m_SlideList.push_back( newItem );
				}
			}
        	}
	}
}

}
}

