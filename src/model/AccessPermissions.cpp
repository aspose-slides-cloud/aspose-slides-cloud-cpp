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



#include "AccessPermissions.h"

namespace asposeslidescloud {
namespace model {

AccessPermissions::AccessPermissions()
{
}

AccessPermissions::~AccessPermissions()
{
}

bool AccessPermissions::getPrintDocument() const
{
	return m_PrintDocument;
}

void AccessPermissions::setPrintDocument(bool value)
{
	m_PrintDocument = value;
	
}

bool AccessPermissions::getModifyContent() const
{
	return m_ModifyContent;
}

void AccessPermissions::setModifyContent(bool value)
{
	m_ModifyContent = value;
	
}

bool AccessPermissions::getCopyTextAndGraphics() const
{
	return m_CopyTextAndGraphics;
}

void AccessPermissions::setCopyTextAndGraphics(bool value)
{
	m_CopyTextAndGraphics = value;
	
}

bool AccessPermissions::getAddOrModifyFields() const
{
	return m_AddOrModifyFields;
}

void AccessPermissions::setAddOrModifyFields(bool value)
{
	m_AddOrModifyFields = value;
	
}

bool AccessPermissions::getFillExistingFields() const
{
	return m_FillExistingFields;
}

void AccessPermissions::setFillExistingFields(bool value)
{
	m_FillExistingFields = value;
	
}

bool AccessPermissions::getExtractTextAndGraphics() const
{
	return m_ExtractTextAndGraphics;
}

void AccessPermissions::setExtractTextAndGraphics(bool value)
{
	m_ExtractTextAndGraphics = value;
	
}

bool AccessPermissions::getAssembleDocument() const
{
	return m_AssembleDocument;
}

void AccessPermissions::setAssembleDocument(bool value)
{
	m_AssembleDocument = value;
	
}

bool AccessPermissions::getHighQualityPrint() const
{
	return m_HighQualityPrint;
}

void AccessPermissions::setHighQualityPrint(bool value)
{
	m_HighQualityPrint = value;
	
}

web::json::value AccessPermissions::toJson() const
{
	web::json::value val = web::json::value::object();
	val[utility::conversions::to_string_t("PrintDocument")] = ModelBase::toJson(m_PrintDocument);
	val[utility::conversions::to_string_t("ModifyContent")] = ModelBase::toJson(m_ModifyContent);
	val[utility::conversions::to_string_t("CopyTextAndGraphics")] = ModelBase::toJson(m_CopyTextAndGraphics);
	val[utility::conversions::to_string_t("AddOrModifyFields")] = ModelBase::toJson(m_AddOrModifyFields);
	val[utility::conversions::to_string_t("FillExistingFields")] = ModelBase::toJson(m_FillExistingFields);
	val[utility::conversions::to_string_t("ExtractTextAndGraphics")] = ModelBase::toJson(m_ExtractTextAndGraphics);
	val[utility::conversions::to_string_t("AssembleDocument")] = ModelBase::toJson(m_AssembleDocument);
	val[utility::conversions::to_string_t("HighQualityPrint")] = ModelBase::toJson(m_HighQualityPrint);
	return val;
}

void AccessPermissions::fromJson(web::json::value& val)
{
	web::json::value* jsonForPrintDocument = ModelBase::getField(val, "PrintDocument");
	if(jsonForPrintDocument != nullptr && !jsonForPrintDocument->is_null())
	{
		setPrintDocument(ModelBase::boolFromJson(*jsonForPrintDocument));
	}
	web::json::value* jsonForModifyContent = ModelBase::getField(val, "ModifyContent");
	if(jsonForModifyContent != nullptr && !jsonForModifyContent->is_null())
	{
		setModifyContent(ModelBase::boolFromJson(*jsonForModifyContent));
	}
	web::json::value* jsonForCopyTextAndGraphics = ModelBase::getField(val, "CopyTextAndGraphics");
	if(jsonForCopyTextAndGraphics != nullptr && !jsonForCopyTextAndGraphics->is_null())
	{
		setCopyTextAndGraphics(ModelBase::boolFromJson(*jsonForCopyTextAndGraphics));
	}
	web::json::value* jsonForAddOrModifyFields = ModelBase::getField(val, "AddOrModifyFields");
	if(jsonForAddOrModifyFields != nullptr && !jsonForAddOrModifyFields->is_null())
	{
		setAddOrModifyFields(ModelBase::boolFromJson(*jsonForAddOrModifyFields));
	}
	web::json::value* jsonForFillExistingFields = ModelBase::getField(val, "FillExistingFields");
	if(jsonForFillExistingFields != nullptr && !jsonForFillExistingFields->is_null())
	{
		setFillExistingFields(ModelBase::boolFromJson(*jsonForFillExistingFields));
	}
	web::json::value* jsonForExtractTextAndGraphics = ModelBase::getField(val, "ExtractTextAndGraphics");
	if(jsonForExtractTextAndGraphics != nullptr && !jsonForExtractTextAndGraphics->is_null())
	{
		setExtractTextAndGraphics(ModelBase::boolFromJson(*jsonForExtractTextAndGraphics));
	}
	web::json::value* jsonForAssembleDocument = ModelBase::getField(val, "AssembleDocument");
	if(jsonForAssembleDocument != nullptr && !jsonForAssembleDocument->is_null())
	{
		setAssembleDocument(ModelBase::boolFromJson(*jsonForAssembleDocument));
	}
	web::json::value* jsonForHighQualityPrint = ModelBase::getField(val, "HighQualityPrint");
	if(jsonForHighQualityPrint != nullptr && !jsonForHighQualityPrint->is_null())
	{
		setHighQualityPrint(ModelBase::boolFromJson(*jsonForHighQualityPrint));
	}
}

}
}

