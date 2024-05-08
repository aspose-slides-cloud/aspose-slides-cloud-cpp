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
#include "MarkdownExportOptions.h"

namespace asposeslidescloud {
namespace model {

MarkdownExportOptions::MarkdownExportOptions()
{
	m_ShowSlideNumberIsSet = false;
	m_ShowCommentsIsSet = false;
	m_ShowHiddenSlidesIsSet = false;
	setFormat(L"md");
}

MarkdownExportOptions::~MarkdownExportOptions()
{
}

utility::string_t MarkdownExportOptions::getExportType() const
{
	return m_ExportType;
}

void MarkdownExportOptions::setExportType(utility::string_t value)
{
	m_ExportType = value;
	
}

utility::string_t MarkdownExportOptions::getFlavor() const
{
	return m_Flavor;
}

void MarkdownExportOptions::setFlavor(utility::string_t value)
{
	m_Flavor = value;
	
}

utility::string_t MarkdownExportOptions::getNewLineType() const
{
	return m_NewLineType;
}

void MarkdownExportOptions::setNewLineType(utility::string_t value)
{
	m_NewLineType = value;
	
}

utility::string_t MarkdownExportOptions::getImagesSaveFolderName() const
{
	return m_ImagesSaveFolderName;
}

void MarkdownExportOptions::setImagesSaveFolderName(utility::string_t value)
{
	m_ImagesSaveFolderName = value;
	
}

bool MarkdownExportOptions::isShowSlideNumber() const
{
	return m_ShowSlideNumber;
}

void MarkdownExportOptions::setShowSlideNumber(bool value)
{
	m_ShowSlideNumber = value;
	m_ShowSlideNumberIsSet = true;
}

bool MarkdownExportOptions::showSlideNumberIsSet() const
{
	return m_ShowSlideNumberIsSet;
}

void MarkdownExportOptions::unsetShowSlideNumber()
{
	m_ShowSlideNumberIsSet = false;
}

bool MarkdownExportOptions::isShowComments() const
{
	return m_ShowComments;
}

void MarkdownExportOptions::setShowComments(bool value)
{
	m_ShowComments = value;
	m_ShowCommentsIsSet = true;
}

bool MarkdownExportOptions::showCommentsIsSet() const
{
	return m_ShowCommentsIsSet;
}

void MarkdownExportOptions::unsetShowComments()
{
	m_ShowCommentsIsSet = false;
}

bool MarkdownExportOptions::isShowHiddenSlides() const
{
	return m_ShowHiddenSlides;
}

void MarkdownExportOptions::setShowHiddenSlides(bool value)
{
	m_ShowHiddenSlides = value;
	m_ShowHiddenSlidesIsSet = true;
}

bool MarkdownExportOptions::showHiddenSlidesIsSet() const
{
	return m_ShowHiddenSlidesIsSet;
}

void MarkdownExportOptions::unsetShowHiddenSlides()
{
	m_ShowHiddenSlidesIsSet = false;
}

web::json::value MarkdownExportOptions::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	if (!m_ExportType.empty())
	{
		val[utility::conversions::to_string_t("ExportType")] = ModelBase::toJson(m_ExportType);
	}
	if (!m_Flavor.empty())
	{
		val[utility::conversions::to_string_t("Flavor")] = ModelBase::toJson(m_Flavor);
	}
	if (!m_NewLineType.empty())
	{
		val[utility::conversions::to_string_t("NewLineType")] = ModelBase::toJson(m_NewLineType);
	}
	if (!m_ImagesSaveFolderName.empty())
	{
		val[utility::conversions::to_string_t("ImagesSaveFolderName")] = ModelBase::toJson(m_ImagesSaveFolderName);
	}
	if(m_ShowSlideNumberIsSet)
	{
		val[utility::conversions::to_string_t("ShowSlideNumber")] = ModelBase::toJson(m_ShowSlideNumber);
	}
	if(m_ShowCommentsIsSet)
	{
		val[utility::conversions::to_string_t("ShowComments")] = ModelBase::toJson(m_ShowComments);
	}
	if(m_ShowHiddenSlidesIsSet)
	{
		val[utility::conversions::to_string_t("ShowHiddenSlides")] = ModelBase::toJson(m_ShowHiddenSlides);
	}
	return val;
}

void MarkdownExportOptions::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
	web::json::value* jsonForExportType = ModelBase::getField(val, "ExportType");
	if(jsonForExportType != nullptr && !jsonForExportType->is_null())
	{
		setExportType(ModelBase::stringFromJson(*jsonForExportType));
	}
	web::json::value* jsonForFlavor = ModelBase::getField(val, "Flavor");
	if(jsonForFlavor != nullptr && !jsonForFlavor->is_null())
	{
		setFlavor(ModelBase::stringFromJson(*jsonForFlavor));
	}
	web::json::value* jsonForNewLineType = ModelBase::getField(val, "NewLineType");
	if(jsonForNewLineType != nullptr && !jsonForNewLineType->is_null())
	{
		setNewLineType(ModelBase::stringFromJson(*jsonForNewLineType));
	}
	web::json::value* jsonForImagesSaveFolderName = ModelBase::getField(val, "ImagesSaveFolderName");
	if(jsonForImagesSaveFolderName != nullptr && !jsonForImagesSaveFolderName->is_null())
	{
		setImagesSaveFolderName(ModelBase::stringFromJson(*jsonForImagesSaveFolderName));
	}
	web::json::value* jsonForShowSlideNumber = ModelBase::getField(val, "ShowSlideNumber");
	if(jsonForShowSlideNumber != nullptr && !jsonForShowSlideNumber->is_null())
	{
		setShowSlideNumber(ModelBase::boolFromJson(*jsonForShowSlideNumber));
	}
	web::json::value* jsonForShowComments = ModelBase::getField(val, "ShowComments");
	if(jsonForShowComments != nullptr && !jsonForShowComments->is_null())
	{
		setShowComments(ModelBase::boolFromJson(*jsonForShowComments));
	}
	web::json::value* jsonForShowHiddenSlides = ModelBase::getField(val, "ShowHiddenSlides");
	if(jsonForShowHiddenSlides != nullptr && !jsonForShowHiddenSlides->is_null())
	{
		setShowHiddenSlides(ModelBase::boolFromJson(*jsonForShowHiddenSlides));
	}
}

}
}

