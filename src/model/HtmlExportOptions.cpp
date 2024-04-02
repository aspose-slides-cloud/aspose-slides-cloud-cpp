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
#include "HtmlExportOptions.h"

namespace asposeslidescloud {
namespace model {

HtmlExportOptions::HtmlExportOptions()
{
	m_SaveAsZipIsSet = false;
	m_ShowHiddenSlidesIsSet = false;
	m_SvgResponsiveLayoutIsSet = false;
	m_JpegQualityIsSet = false;
	m_DeletePicturesCroppedAreasIsSet = false;
	setFormat(L"html");
}

HtmlExportOptions::~HtmlExportOptions()
{
}

bool HtmlExportOptions::isSaveAsZip() const
{
	return m_SaveAsZip;
}

void HtmlExportOptions::setSaveAsZip(bool value)
{
	m_SaveAsZip = value;
	m_SaveAsZipIsSet = true;
}

bool HtmlExportOptions::saveAsZipIsSet() const
{
	return m_SaveAsZipIsSet;
}

void HtmlExportOptions::unsetSaveAsZip()
{
	m_SaveAsZipIsSet = false;
}

utility::string_t HtmlExportOptions::getSubDirectoryName() const
{
	return m_SubDirectoryName;
}

void HtmlExportOptions::setSubDirectoryName(utility::string_t value)
{
	m_SubDirectoryName = value;
	
}

bool HtmlExportOptions::isShowHiddenSlides() const
{
	return m_ShowHiddenSlides;
}

void HtmlExportOptions::setShowHiddenSlides(bool value)
{
	m_ShowHiddenSlides = value;
	m_ShowHiddenSlidesIsSet = true;
}

bool HtmlExportOptions::showHiddenSlidesIsSet() const
{
	return m_ShowHiddenSlidesIsSet;
}

void HtmlExportOptions::unsetShowHiddenSlides()
{
	m_ShowHiddenSlidesIsSet = false;
}

bool HtmlExportOptions::isSvgResponsiveLayout() const
{
	return m_SvgResponsiveLayout;
}

void HtmlExportOptions::setSvgResponsiveLayout(bool value)
{
	m_SvgResponsiveLayout = value;
	m_SvgResponsiveLayoutIsSet = true;
}

bool HtmlExportOptions::svgResponsiveLayoutIsSet() const
{
	return m_SvgResponsiveLayoutIsSet;
}

void HtmlExportOptions::unsetSvgResponsiveLayout()
{
	m_SvgResponsiveLayoutIsSet = false;
}

int32_t HtmlExportOptions::getJpegQuality() const
{
	return m_JpegQuality;
}

void HtmlExportOptions::setJpegQuality(int32_t value)
{
	m_JpegQuality = value;
	m_JpegQualityIsSet = true;
}

bool HtmlExportOptions::jpegQualityIsSet() const
{
	return m_JpegQualityIsSet;
}

void HtmlExportOptions::unsetJpegQuality()
{
	m_JpegQualityIsSet = false;
}

utility::string_t HtmlExportOptions::getPicturesCompression() const
{
	return m_PicturesCompression;
}

void HtmlExportOptions::setPicturesCompression(utility::string_t value)
{
	m_PicturesCompression = value;
	
}

bool HtmlExportOptions::isDeletePicturesCroppedAreas() const
{
	return m_DeletePicturesCroppedAreas;
}

void HtmlExportOptions::setDeletePicturesCroppedAreas(bool value)
{
	m_DeletePicturesCroppedAreas = value;
	m_DeletePicturesCroppedAreasIsSet = true;
}

bool HtmlExportOptions::deletePicturesCroppedAreasIsSet() const
{
	return m_DeletePicturesCroppedAreasIsSet;
}

void HtmlExportOptions::unsetDeletePicturesCroppedAreas()
{
	m_DeletePicturesCroppedAreasIsSet = false;
}

std::shared_ptr<SlidesLayoutOptions> HtmlExportOptions::getSlidesLayoutOptions() const
{
	return m_SlidesLayoutOptions;
}

void HtmlExportOptions::setSlidesLayoutOptions(std::shared_ptr<SlidesLayoutOptions> value)
{
	m_SlidesLayoutOptions = value;
	
}

web::json::value HtmlExportOptions::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	if(m_SaveAsZipIsSet)
	{
		val[utility::conversions::to_string_t("SaveAsZip")] = ModelBase::toJson(m_SaveAsZip);
	}
	if (!m_SubDirectoryName.empty())
	{
		val[utility::conversions::to_string_t("SubDirectoryName")] = ModelBase::toJson(m_SubDirectoryName);
	}
	if(m_ShowHiddenSlidesIsSet)
	{
		val[utility::conversions::to_string_t("ShowHiddenSlides")] = ModelBase::toJson(m_ShowHiddenSlides);
	}
	if(m_SvgResponsiveLayoutIsSet)
	{
		val[utility::conversions::to_string_t("SvgResponsiveLayout")] = ModelBase::toJson(m_SvgResponsiveLayout);
	}
	if(m_JpegQualityIsSet)
	{
		val[utility::conversions::to_string_t("JpegQuality")] = ModelBase::toJson(m_JpegQuality);
	}
	if (!m_PicturesCompression.empty())
	{
		val[utility::conversions::to_string_t("PicturesCompression")] = ModelBase::toJson(m_PicturesCompression);
	}
	if(m_DeletePicturesCroppedAreasIsSet)
	{
		val[utility::conversions::to_string_t("DeletePicturesCroppedAreas")] = ModelBase::toJson(m_DeletePicturesCroppedAreas);
	}
	if (m_SlidesLayoutOptions != nullptr)
	{
		val[utility::conversions::to_string_t("SlidesLayoutOptions")] = ModelBase::toJson(m_SlidesLayoutOptions);
	}
	return val;
}

void HtmlExportOptions::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
	web::json::value* jsonForSaveAsZip = ModelBase::getField(val, "SaveAsZip");
	if(jsonForSaveAsZip != nullptr && !jsonForSaveAsZip->is_null())
	{
		setSaveAsZip(ModelBase::boolFromJson(*jsonForSaveAsZip));
	}
	web::json::value* jsonForSubDirectoryName = ModelBase::getField(val, "SubDirectoryName");
	if(jsonForSubDirectoryName != nullptr && !jsonForSubDirectoryName->is_null())
	{
		setSubDirectoryName(ModelBase::stringFromJson(*jsonForSubDirectoryName));
	}
	web::json::value* jsonForShowHiddenSlides = ModelBase::getField(val, "ShowHiddenSlides");
	if(jsonForShowHiddenSlides != nullptr && !jsonForShowHiddenSlides->is_null())
	{
		setShowHiddenSlides(ModelBase::boolFromJson(*jsonForShowHiddenSlides));
	}
	web::json::value* jsonForSvgResponsiveLayout = ModelBase::getField(val, "SvgResponsiveLayout");
	if(jsonForSvgResponsiveLayout != nullptr && !jsonForSvgResponsiveLayout->is_null())
	{
		setSvgResponsiveLayout(ModelBase::boolFromJson(*jsonForSvgResponsiveLayout));
	}
	web::json::value* jsonForJpegQuality = ModelBase::getField(val, "JpegQuality");
	if(jsonForJpegQuality != nullptr && !jsonForJpegQuality->is_null() && jsonForJpegQuality->is_number())
	{
		setJpegQuality(ModelBase::int32_tFromJson(*jsonForJpegQuality));
	}
	web::json::value* jsonForPicturesCompression = ModelBase::getField(val, "PicturesCompression");
	if(jsonForPicturesCompression != nullptr && !jsonForPicturesCompression->is_null())
	{
		setPicturesCompression(ModelBase::stringFromJson(*jsonForPicturesCompression));
	}
	web::json::value* jsonForDeletePicturesCroppedAreas = ModelBase::getField(val, "DeletePicturesCroppedAreas");
	if(jsonForDeletePicturesCroppedAreas != nullptr && !jsonForDeletePicturesCroppedAreas->is_null())
	{
		setDeletePicturesCroppedAreas(ModelBase::boolFromJson(*jsonForDeletePicturesCroppedAreas));
	}
	web::json::value* jsonForSlidesLayoutOptions = ModelBase::getField(val, "SlidesLayoutOptions");
	if(jsonForSlidesLayoutOptions != nullptr && !jsonForSlidesLayoutOptions->is_null())
	{
		std::shared_ptr<void> instanceForSlidesLayoutOptions = asposeslidescloud::api::ClassRegistry::deserialize(L"SlidesLayoutOptions", *jsonForSlidesLayoutOptions);
		setSlidesLayoutOptions(std::static_pointer_cast<SlidesLayoutOptions>(instanceForSlidesLayoutOptions));
	}
}

}
}

