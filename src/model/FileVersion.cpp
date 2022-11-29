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
#include "FileVersion.h"

namespace asposeslidescloud {
namespace model {

FileVersion::FileVersion()
{
}

FileVersion::~FileVersion()
{
}

utility::string_t FileVersion::getVersionId() const
{
	return m_VersionId;
}

void FileVersion::setVersionId(utility::string_t value)
{
	m_VersionId = value;
	
}

bool FileVersion::isIsLatest() const
{
	return m_IsLatest;
}

void FileVersion::setIsLatest(bool value)
{
	m_IsLatest = value;
	
}

web::json::value FileVersion::toJson() const
{
	web::json::value val = this->StorageFile::toJson();
	if (!m_VersionId.empty())
	{
		val[utility::conversions::to_string_t("VersionId")] = ModelBase::toJson(m_VersionId);
	}
	val[utility::conversions::to_string_t("IsLatest")] = ModelBase::toJson(m_IsLatest);
	return val;
}

void FileVersion::fromJson(web::json::value& val)
{
	this->StorageFile::fromJson(val);
	web::json::value* jsonForVersionId = ModelBase::getField(val, "VersionId");
	if(jsonForVersionId != nullptr && !jsonForVersionId->is_null())
	{
		setVersionId(ModelBase::stringFromJson(*jsonForVersionId));
	}
	web::json::value* jsonForIsLatest = ModelBase::getField(val, "IsLatest");
	if(jsonForIsLatest != nullptr && !jsonForIsLatest->is_null())
	{
		setIsLatest(ModelBase::boolFromJson(*jsonForIsLatest));
	}
}

}
}

