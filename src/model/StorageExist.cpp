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
#include "StorageExist.h"

namespace asposeslidescloud {
namespace model {

StorageExist::StorageExist()
{
}

StorageExist::~StorageExist()
{
}

bool StorageExist::getExists() const
{
	return m_Exists;
}

void StorageExist::setExists(bool value)
{
	m_Exists = value;
	
}

web::json::value StorageExist::toJson() const
{
	web::json::value val = web::json::value::object();
	val[utility::conversions::to_string_t("Exists")] = ModelBase::toJson(m_Exists);
	return val;
}

void StorageExist::fromJson(web::json::value& val)
{
	web::json::value* jsonForExists = ModelBase::getField(val, "Exists");
	if(jsonForExists != nullptr && !jsonForExists->is_null())
	{
		setExists(ModelBase::boolFromJson(*jsonForExists));
	}
}

}
}

