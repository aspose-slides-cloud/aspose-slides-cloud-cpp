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
#include "OleObjectFrame.h"

namespace asposeslidescloud {
namespace model {

OleObjectFrame::OleObjectFrame()
{
	m_UpdateAutomaticIsSet = false;
	setType(L"OleObjectFrame");
}

OleObjectFrame::~OleObjectFrame()
{
}

bool OleObjectFrame::getIsObjectIcon() const
{
	return m_IsObjectIcon;
}

void OleObjectFrame::setIsObjectIcon(bool value)
{
	m_IsObjectIcon = value;
	
}

utility::string_t OleObjectFrame::getSubstitutePictureTitle() const
{
	return m_SubstitutePictureTitle;
}

void OleObjectFrame::setSubstitutePictureTitle(utility::string_t value)
{
	m_SubstitutePictureTitle = value;
	
}

std::shared_ptr<PictureFill> OleObjectFrame::getSubstitutePictureFormat() const
{
	return m_SubstitutePictureFormat;
}

void OleObjectFrame::setSubstitutePictureFormat(std::shared_ptr<PictureFill> value)
{
	m_SubstitutePictureFormat = value;
	
}

utility::string_t OleObjectFrame::getObjectName() const
{
	return m_ObjectName;
}

void OleObjectFrame::setObjectName(utility::string_t value)
{
	m_ObjectName = value;
	
}

utility::string_t OleObjectFrame::getEmbeddedFileBase64Data() const
{
	return m_EmbeddedFileBase64Data;
}

void OleObjectFrame::setEmbeddedFileBase64Data(utility::string_t value)
{
	m_EmbeddedFileBase64Data = value;
	
}

utility::string_t OleObjectFrame::getEmbeddedFileExtension() const
{
	return m_EmbeddedFileExtension;
}

void OleObjectFrame::setEmbeddedFileExtension(utility::string_t value)
{
	m_EmbeddedFileExtension = value;
	
}

utility::string_t OleObjectFrame::getObjectProgId() const
{
	return m_ObjectProgId;
}

void OleObjectFrame::setObjectProgId(utility::string_t value)
{
	m_ObjectProgId = value;
	
}

utility::string_t OleObjectFrame::getLinkPath() const
{
	return m_LinkPath;
}

void OleObjectFrame::setLinkPath(utility::string_t value)
{
	m_LinkPath = value;
	
}

bool OleObjectFrame::getUpdateAutomatic() const
{
	return m_UpdateAutomatic;
}

void OleObjectFrame::setUpdateAutomatic(bool value)
{
	m_UpdateAutomatic = value;
	m_UpdateAutomaticIsSet = true;
}

bool OleObjectFrame::updateAutomaticIsSet() const
{
	return m_UpdateAutomaticIsSet;
}

void OleObjectFrame::unsetUpdateAutomatic()
{
	m_UpdateAutomaticIsSet = false;
}

web::json::value OleObjectFrame::toJson() const
{
	web::json::value val = this->ShapeBase::toJson();
	val[utility::conversions::to_string_t("IsObjectIcon")] = ModelBase::toJson(m_IsObjectIcon);
	if (!m_SubstitutePictureTitle.empty())
	{
		val[utility::conversions::to_string_t("SubstitutePictureTitle")] = ModelBase::toJson(m_SubstitutePictureTitle);
	}
	if (m_SubstitutePictureFormat != nullptr)
	{
		val[utility::conversions::to_string_t("SubstitutePictureFormat")] = ModelBase::toJson(m_SubstitutePictureFormat);
	}
	if (!m_ObjectName.empty())
	{
		val[utility::conversions::to_string_t("ObjectName")] = ModelBase::toJson(m_ObjectName);
	}
	if (!m_EmbeddedFileBase64Data.empty())
	{
		val[utility::conversions::to_string_t("EmbeddedFileBase64Data")] = ModelBase::toJson(m_EmbeddedFileBase64Data);
	}
	if (!m_EmbeddedFileExtension.empty())
	{
		val[utility::conversions::to_string_t("EmbeddedFileExtension")] = ModelBase::toJson(m_EmbeddedFileExtension);
	}
	if (!m_ObjectProgId.empty())
	{
		val[utility::conversions::to_string_t("ObjectProgId")] = ModelBase::toJson(m_ObjectProgId);
	}
	if (!m_LinkPath.empty())
	{
		val[utility::conversions::to_string_t("LinkPath")] = ModelBase::toJson(m_LinkPath);
	}
	if(m_UpdateAutomaticIsSet)
	{
		val[utility::conversions::to_string_t("UpdateAutomatic")] = ModelBase::toJson(m_UpdateAutomatic);
	}
	return val;
}

void OleObjectFrame::fromJson(web::json::value& val)
{
	this->ShapeBase::fromJson(val);
	web::json::value* jsonForIsObjectIcon = ModelBase::getField(val, "IsObjectIcon");
	if(jsonForIsObjectIcon != nullptr && !jsonForIsObjectIcon->is_null())
	{
		setIsObjectIcon(ModelBase::boolFromJson(*jsonForIsObjectIcon));
	}
	web::json::value* jsonForSubstitutePictureTitle = ModelBase::getField(val, "SubstitutePictureTitle");
	if(jsonForSubstitutePictureTitle != nullptr && !jsonForSubstitutePictureTitle->is_null())
	{
		setSubstitutePictureTitle(ModelBase::stringFromJson(*jsonForSubstitutePictureTitle));
	}
	web::json::value* jsonForSubstitutePictureFormat = ModelBase::getField(val, "SubstitutePictureFormat");
	if(jsonForSubstitutePictureFormat != nullptr && !jsonForSubstitutePictureFormat->is_null())
	{
		std::shared_ptr<void> instanceForSubstitutePictureFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"PictureFill", *jsonForSubstitutePictureFormat);
		setSubstitutePictureFormat(std::static_pointer_cast<PictureFill>(instanceForSubstitutePictureFormat));
	}
	web::json::value* jsonForObjectName = ModelBase::getField(val, "ObjectName");
	if(jsonForObjectName != nullptr && !jsonForObjectName->is_null())
	{
		setObjectName(ModelBase::stringFromJson(*jsonForObjectName));
	}
	web::json::value* jsonForEmbeddedFileBase64Data = ModelBase::getField(val, "EmbeddedFileBase64Data");
	if(jsonForEmbeddedFileBase64Data != nullptr && !jsonForEmbeddedFileBase64Data->is_null())
	{
		setEmbeddedFileBase64Data(ModelBase::stringFromJson(*jsonForEmbeddedFileBase64Data));
	}
	web::json::value* jsonForEmbeddedFileExtension = ModelBase::getField(val, "EmbeddedFileExtension");
	if(jsonForEmbeddedFileExtension != nullptr && !jsonForEmbeddedFileExtension->is_null())
	{
		setEmbeddedFileExtension(ModelBase::stringFromJson(*jsonForEmbeddedFileExtension));
	}
	web::json::value* jsonForObjectProgId = ModelBase::getField(val, "ObjectProgId");
	if(jsonForObjectProgId != nullptr && !jsonForObjectProgId->is_null())
	{
		setObjectProgId(ModelBase::stringFromJson(*jsonForObjectProgId));
	}
	web::json::value* jsonForLinkPath = ModelBase::getField(val, "LinkPath");
	if(jsonForLinkPath != nullptr && !jsonForLinkPath->is_null())
	{
		setLinkPath(ModelBase::stringFromJson(*jsonForLinkPath));
	}
	web::json::value* jsonForUpdateAutomatic = ModelBase::getField(val, "UpdateAutomatic");
	if(jsonForUpdateAutomatic != nullptr && !jsonForUpdateAutomatic->is_null())
	{
		setUpdateAutomatic(ModelBase::boolFromJson(*jsonForUpdateAutomatic));
	}
}

}
}

