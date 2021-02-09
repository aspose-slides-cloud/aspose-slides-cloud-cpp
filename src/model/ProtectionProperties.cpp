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



#include "ProtectionProperties.h"

namespace asposeslidescloud {
namespace model {

ProtectionProperties::ProtectionProperties()
{
	m_EncryptDocumentPropertiesIsSet = false;
	m_ReadOnlyRecommendedIsSet = false;
}

ProtectionProperties::~ProtectionProperties()
{
}

bool ProtectionProperties::getEncryptDocumentProperties() const
{
	return m_EncryptDocumentProperties;
}

void ProtectionProperties::setEncryptDocumentProperties(bool value)
{
	m_EncryptDocumentProperties = value;
	m_EncryptDocumentPropertiesIsSet = true;
}

bool ProtectionProperties::encryptDocumentPropertiesIsSet() const
{
	return m_EncryptDocumentPropertiesIsSet;
}

void ProtectionProperties::unsetEncryptDocumentProperties()
{
	m_EncryptDocumentPropertiesIsSet = false;
}

bool ProtectionProperties::getReadOnlyRecommended() const
{
	return m_ReadOnlyRecommended;
}

void ProtectionProperties::setReadOnlyRecommended(bool value)
{
	m_ReadOnlyRecommended = value;
	m_ReadOnlyRecommendedIsSet = true;
}

bool ProtectionProperties::readOnlyRecommendedIsSet() const
{
	return m_ReadOnlyRecommendedIsSet;
}

void ProtectionProperties::unsetReadOnlyRecommended()
{
	m_ReadOnlyRecommendedIsSet = false;
}

web::json::value ProtectionProperties::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if(m_EncryptDocumentPropertiesIsSet)
	{
		val[utility::conversions::to_string_t("EncryptDocumentProperties")] = ModelBase::toJson(m_EncryptDocumentProperties);
	}
	if(m_ReadOnlyRecommendedIsSet)
	{
		val[utility::conversions::to_string_t("ReadOnlyRecommended")] = ModelBase::toJson(m_ReadOnlyRecommended);
	}
	return val;
}

void ProtectionProperties::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForEncryptDocumentProperties = ModelBase::getField(val, "EncryptDocumentProperties");
	if(jsonForEncryptDocumentProperties != nullptr && !jsonForEncryptDocumentProperties->is_null())
	{
		setEncryptDocumentProperties(ModelBase::boolFromJson(*jsonForEncryptDocumentProperties));
	}
	web::json::value* jsonForReadOnlyRecommended = ModelBase::getField(val, "ReadOnlyRecommended");
	if(jsonForReadOnlyRecommended != nullptr && !jsonForReadOnlyRecommended->is_null())
	{
		setReadOnlyRecommended(ModelBase::boolFromJson(*jsonForReadOnlyRecommended));
	}
}

}
}

