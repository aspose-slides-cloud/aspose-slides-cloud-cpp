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
#include "PathInputFile.h"

namespace asposeslidescloud {
namespace model {

PathInputFile::PathInputFile()
{
	setType(L"Path");
}

PathInputFile::~PathInputFile()
{
}

utility::string_t PathInputFile::getPath() const
{
	return m_Path;
}

void PathInputFile::setPath(utility::string_t value)
{
	m_Path = value;
	
}

utility::string_t PathInputFile::getStorage() const
{
	return m_Storage;
}

void PathInputFile::setStorage(utility::string_t value)
{
	m_Storage = value;
	
}

web::json::value PathInputFile::toJson() const
{
	web::json::value val = this->InputFile::toJson();
	if (!m_Path.empty())
	{
		val[utility::conversions::to_string_t("Path")] = ModelBase::toJson(m_Path);
	}
	if (!m_Storage.empty())
	{
		val[utility::conversions::to_string_t("Storage")] = ModelBase::toJson(m_Storage);
	}
	return val;
}

void PathInputFile::fromJson(web::json::value& val)
{
	this->InputFile::fromJson(val);
	web::json::value* jsonForPath = ModelBase::getField(val, "Path");
	if(jsonForPath != nullptr && !jsonForPath->is_null())
	{
		setPath(ModelBase::stringFromJson(*jsonForPath));
	}
	web::json::value* jsonForStorage = ModelBase::getField(val, "Storage");
	if(jsonForStorage != nullptr && !jsonForStorage->is_null())
	{
		setStorage(ModelBase::stringFromJson(*jsonForStorage));
	}
}

}
}

