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
#include "StorageFile.h"

namespace asposeslidescloud {
namespace model {

StorageFile::StorageFile()
{
}

StorageFile::~StorageFile()
{
}

utility::string_t StorageFile::getName() const
{
	return m_Name;
}

void StorageFile::setName(utility::string_t value)
{
	m_Name = value;
	
}

bool StorageFile::isIsFolder() const
{
	return m_IsFolder;
}

void StorageFile::setIsFolder(bool value)
{
	m_IsFolder = value;
	
}

utility::datetime StorageFile::getModifiedDate() const
{
	return m_ModifiedDate;
}

void StorageFile::setModifiedDate(utility::datetime value)
{
	m_ModifiedDate = value;
	
}

int64_t StorageFile::getSize() const
{
	return m_Size;
}

void StorageFile::setSize(int64_t value)
{
	m_Size = value;
	
}

utility::string_t StorageFile::getPath() const
{
	return m_Path;
}

void StorageFile::setPath(utility::string_t value)
{
	m_Path = value;
	
}

web::json::value StorageFile::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Name.empty())
	{
		val[utility::conversions::to_string_t("Name")] = ModelBase::toJson(m_Name);
	}
	val[utility::conversions::to_string_t("IsFolder")] = ModelBase::toJson(m_IsFolder);
	if (m_ModifiedDate.is_initialized())
	{
		val[utility::conversions::to_string_t("ModifiedDate")] = ModelBase::toJson(m_ModifiedDate);
	}
	val[utility::conversions::to_string_t("Size")] = ModelBase::toJson(m_Size);
	if (!m_Path.empty())
	{
		val[utility::conversions::to_string_t("Path")] = ModelBase::toJson(m_Path);
	}
	return val;
}

void StorageFile::fromJson(web::json::value& val)
{
	web::json::value* jsonForName = ModelBase::getField(val, "Name");
	if(jsonForName != nullptr && !jsonForName->is_null())
	{
		setName(ModelBase::stringFromJson(*jsonForName));
	}
	web::json::value* jsonForIsFolder = ModelBase::getField(val, "IsFolder");
	if(jsonForIsFolder != nullptr && !jsonForIsFolder->is_null())
	{
		setIsFolder(ModelBase::boolFromJson(*jsonForIsFolder));
	}
	web::json::value* jsonForModifiedDate = ModelBase::getField(val, "ModifiedDate");
	if(jsonForModifiedDate != nullptr && !jsonForModifiedDate->is_null())
	{
		setModifiedDate(ModelBase::dateFromJson(*jsonForModifiedDate));
	}
	web::json::value* jsonForSize = ModelBase::getField(val, "Size");
	if(jsonForSize != nullptr && !jsonForSize->is_null())
	{
		setSize(ModelBase::int64_tFromJson(*jsonForSize));
	}
	web::json::value* jsonForPath = ModelBase::getField(val, "Path");
	if(jsonForPath != nullptr && !jsonForPath->is_null())
	{
		setPath(ModelBase::stringFromJson(*jsonForPath));
	}
}

}
}

