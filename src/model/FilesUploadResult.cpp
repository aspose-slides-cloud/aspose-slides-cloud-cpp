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
#include "FilesUploadResult.h"

namespace asposeslidescloud {
namespace model {

FilesUploadResult::FilesUploadResult()
{
}

FilesUploadResult::~FilesUploadResult()
{
}

std::vector<utility::string_t> FilesUploadResult::getUploaded() const
{
	return m_Uploaded;
}

void FilesUploadResult::setUploaded(std::vector<utility::string_t> value)
{
	m_Uploaded = value;
	
}

std::vector<std::shared_ptr<Error>> FilesUploadResult::getErrors() const
{
	return m_Errors;
}

void FilesUploadResult::setErrors(std::vector<std::shared_ptr<Error>> value)
{
	m_Errors = value;
	
}

web::json::value FilesUploadResult::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_Uploaded.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Uploaded)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Uploaded")] = web::json::value::array(jsonArray);
	}
	if (m_Errors.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Errors)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Errors")] = web::json::value::array(jsonArray);
	}
	return val;
}

void FilesUploadResult::fromJson(web::json::value& val)
{
	web::json::value* jsonForUploaded = ModelBase::getField(val, "Uploaded");
	if(jsonForUploaded != nullptr && !jsonForUploaded->is_null())
	{
		{
			m_Uploaded.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForUploaded->as_array())
			{
				m_Uploaded.push_back(ModelBase::stringFromJson(item));
			}
        	}
	}
	web::json::value* jsonForErrors = ModelBase::getField(val, "Errors");
	if(jsonForErrors != nullptr && !jsonForErrors->is_null())
	{
		{
			m_Errors.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForErrors->as_array())
			{
				if(item.is_null())
				{
					m_Errors.push_back(std::shared_ptr<Error>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"Error", item);
					m_Errors.push_back(std::static_pointer_cast<Error>(newItem));
				}
			}
        	}
	}
}

}
}

