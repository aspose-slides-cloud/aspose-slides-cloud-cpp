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
#include "PresentationsMergeRequest.h"

namespace asposeslidescloud {
namespace model {

PresentationsMergeRequest::PresentationsMergeRequest()
{
}

PresentationsMergeRequest::~PresentationsMergeRequest()
{
}

std::vector<utility::string_t> PresentationsMergeRequest::getPresentationPaths() const
{
	return m_PresentationPaths;
}

void PresentationsMergeRequest::setPresentationPaths(std::vector<utility::string_t> value)
{
	m_PresentationPaths = value;
	
}

std::vector<utility::string_t> PresentationsMergeRequest::getPresentationPasswords() const
{
	return m_PresentationPasswords;
}

void PresentationsMergeRequest::setPresentationPasswords(std::vector<utility::string_t> value)
{
	m_PresentationPasswords = value;
	
}

web::json::value PresentationsMergeRequest::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_PresentationPaths.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_PresentationPaths)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("PresentationPaths")] = web::json::value::array(jsonArray);
	}
	if (m_PresentationPasswords.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_PresentationPasswords)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("PresentationPasswords")] = web::json::value::array(jsonArray);
	}
	return val;
}

void PresentationsMergeRequest::fromJson(web::json::value& val)
{
	web::json::value* jsonForPresentationPaths = ModelBase::getField(val, "PresentationPaths");
	if(jsonForPresentationPaths != nullptr && !jsonForPresentationPaths->is_null())
	{
		{
			m_PresentationPaths.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForPresentationPaths->as_array())
			{
				m_PresentationPaths.push_back(ModelBase::stringFromJson(item));
			}
        	}
	}
	web::json::value* jsonForPresentationPasswords = ModelBase::getField(val, "PresentationPasswords");
	if(jsonForPresentationPasswords != nullptr && !jsonForPresentationPasswords->is_null())
	{
		{
			m_PresentationPasswords.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForPresentationPasswords->as_array())
			{
				m_PresentationPasswords.push_back(ModelBase::stringFromJson(item));
			}
        	}
	}
}

}
}

