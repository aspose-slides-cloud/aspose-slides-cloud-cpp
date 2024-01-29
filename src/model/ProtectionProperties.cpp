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

bool ProtectionProperties::isEncryptDocumentProperties() const
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

bool ProtectionProperties::isReadOnlyRecommended() const
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

utility::string_t ProtectionProperties::getReadPassword() const
{
	return m_ReadPassword;
}

void ProtectionProperties::setReadPassword(utility::string_t value)
{
	m_ReadPassword = value;
	
}

utility::string_t ProtectionProperties::getWritePassword() const
{
	return m_WritePassword;
}

void ProtectionProperties::setWritePassword(utility::string_t value)
{
	m_WritePassword = value;
	
}

bool ProtectionProperties::getIsWriteProtected() const
{
	return m_IsWriteProtected;
}

void ProtectionProperties::setIsWriteProtected(bool value)
{
	m_IsWriteProtected = value;
	
}

bool ProtectionProperties::getIsEncrypted() const
{
	return m_IsEncrypted;
}

void ProtectionProperties::setIsEncrypted(bool value)
{
	m_IsEncrypted = value;
	
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
	if (!m_ReadPassword.empty())
	{
		val[utility::conversions::to_string_t("ReadPassword")] = ModelBase::toJson(m_ReadPassword);
	}
	if (!m_WritePassword.empty())
	{
		val[utility::conversions::to_string_t("WritePassword")] = ModelBase::toJson(m_WritePassword);
	}
	val[utility::conversions::to_string_t("IsWriteProtected")] = ModelBase::toJson(m_IsWriteProtected);
	val[utility::conversions::to_string_t("IsEncrypted")] = ModelBase::toJson(m_IsEncrypted);
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
	web::json::value* jsonForReadPassword = ModelBase::getField(val, "ReadPassword");
	if(jsonForReadPassword != nullptr && !jsonForReadPassword->is_null())
	{
		setReadPassword(ModelBase::stringFromJson(*jsonForReadPassword));
	}
	web::json::value* jsonForWritePassword = ModelBase::getField(val, "WritePassword");
	if(jsonForWritePassword != nullptr && !jsonForWritePassword->is_null())
	{
		setWritePassword(ModelBase::stringFromJson(*jsonForWritePassword));
	}
	web::json::value* jsonForIsWriteProtected = ModelBase::getField(val, "IsWriteProtected");
	if(jsonForIsWriteProtected != nullptr && !jsonForIsWriteProtected->is_null())
	{
		setIsWriteProtected(ModelBase::boolFromJson(*jsonForIsWriteProtected));
	}
	web::json::value* jsonForIsEncrypted = ModelBase::getField(val, "IsEncrypted");
	if(jsonForIsEncrypted != nullptr && !jsonForIsEncrypted->is_null())
	{
		setIsEncrypted(ModelBase::boolFromJson(*jsonForIsEncrypted));
	}
}

}
}

