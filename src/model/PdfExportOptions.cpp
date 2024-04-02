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
#include "PdfExportOptions.h"

namespace asposeslidescloud {
namespace model {

PdfExportOptions::PdfExportOptions()
{
	m_EmbedFullFontsIsSet = false;
	m_SufficientResolutionIsSet = false;
	m_JpegQualityIsSet = false;
	m_DrawSlidesFrameIsSet = false;
	m_ShowHiddenSlidesIsSet = false;
	m_SaveMetafilesAsPngIsSet = false;
	m_EmbedTrueTypeFontsForASCIIIsSet = false;
	m_ApplyImageTransparentIsSet = false;
	setFormat(L"pdf");
}

PdfExportOptions::~PdfExportOptions()
{
}

utility::string_t PdfExportOptions::getTextCompression() const
{
	return m_TextCompression;
}

void PdfExportOptions::setTextCompression(utility::string_t value)
{
	m_TextCompression = value;
	
}

bool PdfExportOptions::isEmbedFullFonts() const
{
	return m_EmbedFullFonts;
}

void PdfExportOptions::setEmbedFullFonts(bool value)
{
	m_EmbedFullFonts = value;
	m_EmbedFullFontsIsSet = true;
}

bool PdfExportOptions::embedFullFontsIsSet() const
{
	return m_EmbedFullFontsIsSet;
}

void PdfExportOptions::unsetEmbedFullFonts()
{
	m_EmbedFullFontsIsSet = false;
}

utility::string_t PdfExportOptions::getCompliance() const
{
	return m_Compliance;
}

void PdfExportOptions::setCompliance(utility::string_t value)
{
	m_Compliance = value;
	
}

double PdfExportOptions::getSufficientResolution() const
{
	return m_SufficientResolution;
}

void PdfExportOptions::setSufficientResolution(double value)
{
	m_SufficientResolution = value;
	m_SufficientResolutionIsSet = true;
}

bool PdfExportOptions::sufficientResolutionIsSet() const
{
	return m_SufficientResolutionIsSet;
}

void PdfExportOptions::unsetSufficientResolution()
{
	m_SufficientResolutionIsSet = false;
}

int32_t PdfExportOptions::getJpegQuality() const
{
	return m_JpegQuality;
}

void PdfExportOptions::setJpegQuality(int32_t value)
{
	m_JpegQuality = value;
	m_JpegQualityIsSet = true;
}

bool PdfExportOptions::jpegQualityIsSet() const
{
	return m_JpegQualityIsSet;
}

void PdfExportOptions::unsetJpegQuality()
{
	m_JpegQualityIsSet = false;
}

bool PdfExportOptions::isDrawSlidesFrame() const
{
	return m_DrawSlidesFrame;
}

void PdfExportOptions::setDrawSlidesFrame(bool value)
{
	m_DrawSlidesFrame = value;
	m_DrawSlidesFrameIsSet = true;
}

bool PdfExportOptions::drawSlidesFrameIsSet() const
{
	return m_DrawSlidesFrameIsSet;
}

void PdfExportOptions::unsetDrawSlidesFrame()
{
	m_DrawSlidesFrameIsSet = false;
}

bool PdfExportOptions::isShowHiddenSlides() const
{
	return m_ShowHiddenSlides;
}

void PdfExportOptions::setShowHiddenSlides(bool value)
{
	m_ShowHiddenSlides = value;
	m_ShowHiddenSlidesIsSet = true;
}

bool PdfExportOptions::showHiddenSlidesIsSet() const
{
	return m_ShowHiddenSlidesIsSet;
}

void PdfExportOptions::unsetShowHiddenSlides()
{
	m_ShowHiddenSlidesIsSet = false;
}

bool PdfExportOptions::isSaveMetafilesAsPng() const
{
	return m_SaveMetafilesAsPng;
}

void PdfExportOptions::setSaveMetafilesAsPng(bool value)
{
	m_SaveMetafilesAsPng = value;
	m_SaveMetafilesAsPngIsSet = true;
}

bool PdfExportOptions::saveMetafilesAsPngIsSet() const
{
	return m_SaveMetafilesAsPngIsSet;
}

void PdfExportOptions::unsetSaveMetafilesAsPng()
{
	m_SaveMetafilesAsPngIsSet = false;
}

utility::string_t PdfExportOptions::getPassword() const
{
	return m_Password;
}

void PdfExportOptions::setPassword(utility::string_t value)
{
	m_Password = value;
	
}

bool PdfExportOptions::isEmbedTrueTypeFontsForASCII() const
{
	return m_EmbedTrueTypeFontsForASCII;
}

void PdfExportOptions::setEmbedTrueTypeFontsForASCII(bool value)
{
	m_EmbedTrueTypeFontsForASCII = value;
	m_EmbedTrueTypeFontsForASCIIIsSet = true;
}

bool PdfExportOptions::embedTrueTypeFontsForASCIIIsSet() const
{
	return m_EmbedTrueTypeFontsForASCIIIsSet;
}

void PdfExportOptions::unsetEmbedTrueTypeFontsForASCII()
{
	m_EmbedTrueTypeFontsForASCIIIsSet = false;
}

std::vector<utility::string_t> PdfExportOptions::getAdditionalCommonFontFamilies() const
{
	return m_AdditionalCommonFontFamilies;
}

void PdfExportOptions::setAdditionalCommonFontFamilies(std::vector<utility::string_t> value)
{
	m_AdditionalCommonFontFamilies = value;
	
}

std::shared_ptr<SlidesLayoutOptions> PdfExportOptions::getSlidesLayoutOptions() const
{
	return m_SlidesLayoutOptions;
}

void PdfExportOptions::setSlidesLayoutOptions(std::shared_ptr<SlidesLayoutOptions> value)
{
	m_SlidesLayoutOptions = value;
	
}

utility::string_t PdfExportOptions::getImageTransparentColor() const
{
	return m_ImageTransparentColor;
}

void PdfExportOptions::setImageTransparentColor(utility::string_t value)
{
	m_ImageTransparentColor = value;
	
}

bool PdfExportOptions::isApplyImageTransparent() const
{
	return m_ApplyImageTransparent;
}

void PdfExportOptions::setApplyImageTransparent(bool value)
{
	m_ApplyImageTransparent = value;
	m_ApplyImageTransparentIsSet = true;
}

bool PdfExportOptions::applyImageTransparentIsSet() const
{
	return m_ApplyImageTransparentIsSet;
}

void PdfExportOptions::unsetApplyImageTransparent()
{
	m_ApplyImageTransparentIsSet = false;
}

std::shared_ptr<AccessPermissions> PdfExportOptions::getAccessPermissions() const
{
	return m_AccessPermissions;
}

void PdfExportOptions::setAccessPermissions(std::shared_ptr<AccessPermissions> value)
{
	m_AccessPermissions = value;
	
}

web::json::value PdfExportOptions::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	if (!m_TextCompression.empty())
	{
		val[utility::conversions::to_string_t("TextCompression")] = ModelBase::toJson(m_TextCompression);
	}
	if(m_EmbedFullFontsIsSet)
	{
		val[utility::conversions::to_string_t("EmbedFullFonts")] = ModelBase::toJson(m_EmbedFullFonts);
	}
	if (!m_Compliance.empty())
	{
		val[utility::conversions::to_string_t("Compliance")] = ModelBase::toJson(m_Compliance);
	}
	if(m_SufficientResolutionIsSet)
	{
		val[utility::conversions::to_string_t("SufficientResolution")] = ModelBase::toJson(m_SufficientResolution);
	}
	if(m_JpegQualityIsSet)
	{
		val[utility::conversions::to_string_t("JpegQuality")] = ModelBase::toJson(m_JpegQuality);
	}
	if(m_DrawSlidesFrameIsSet)
	{
		val[utility::conversions::to_string_t("DrawSlidesFrame")] = ModelBase::toJson(m_DrawSlidesFrame);
	}
	if(m_ShowHiddenSlidesIsSet)
	{
		val[utility::conversions::to_string_t("ShowHiddenSlides")] = ModelBase::toJson(m_ShowHiddenSlides);
	}
	if(m_SaveMetafilesAsPngIsSet)
	{
		val[utility::conversions::to_string_t("SaveMetafilesAsPng")] = ModelBase::toJson(m_SaveMetafilesAsPng);
	}
	if (!m_Password.empty())
	{
		val[utility::conversions::to_string_t("Password")] = ModelBase::toJson(m_Password);
	}
	if(m_EmbedTrueTypeFontsForASCIIIsSet)
	{
		val[utility::conversions::to_string_t("EmbedTrueTypeFontsForASCII")] = ModelBase::toJson(m_EmbedTrueTypeFontsForASCII);
	}
	if (m_AdditionalCommonFontFamilies.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_AdditionalCommonFontFamilies)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("AdditionalCommonFontFamilies")] = web::json::value::array(jsonArray);
	}
	if (m_SlidesLayoutOptions != nullptr)
	{
		val[utility::conversions::to_string_t("SlidesLayoutOptions")] = ModelBase::toJson(m_SlidesLayoutOptions);
	}
	if (!m_ImageTransparentColor.empty())
	{
		val[utility::conversions::to_string_t("ImageTransparentColor")] = ModelBase::toJson(m_ImageTransparentColor);
	}
	if(m_ApplyImageTransparentIsSet)
	{
		val[utility::conversions::to_string_t("ApplyImageTransparent")] = ModelBase::toJson(m_ApplyImageTransparent);
	}
	if (m_AccessPermissions != nullptr)
	{
		val[utility::conversions::to_string_t("AccessPermissions")] = ModelBase::toJson(m_AccessPermissions);
	}
	return val;
}

void PdfExportOptions::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
	web::json::value* jsonForTextCompression = ModelBase::getField(val, "TextCompression");
	if(jsonForTextCompression != nullptr && !jsonForTextCompression->is_null())
	{
		setTextCompression(ModelBase::stringFromJson(*jsonForTextCompression));
	}
	web::json::value* jsonForEmbedFullFonts = ModelBase::getField(val, "EmbedFullFonts");
	if(jsonForEmbedFullFonts != nullptr && !jsonForEmbedFullFonts->is_null())
	{
		setEmbedFullFonts(ModelBase::boolFromJson(*jsonForEmbedFullFonts));
	}
	web::json::value* jsonForCompliance = ModelBase::getField(val, "Compliance");
	if(jsonForCompliance != nullptr && !jsonForCompliance->is_null())
	{
		setCompliance(ModelBase::stringFromJson(*jsonForCompliance));
	}
	web::json::value* jsonForSufficientResolution = ModelBase::getField(val, "SufficientResolution");
	if(jsonForSufficientResolution != nullptr && !jsonForSufficientResolution->is_null() && jsonForSufficientResolution->is_number())
	{
		setSufficientResolution(ModelBase::doubleFromJson(*jsonForSufficientResolution));
	}
	web::json::value* jsonForJpegQuality = ModelBase::getField(val, "JpegQuality");
	if(jsonForJpegQuality != nullptr && !jsonForJpegQuality->is_null() && jsonForJpegQuality->is_number())
	{
		setJpegQuality(ModelBase::int32_tFromJson(*jsonForJpegQuality));
	}
	web::json::value* jsonForDrawSlidesFrame = ModelBase::getField(val, "DrawSlidesFrame");
	if(jsonForDrawSlidesFrame != nullptr && !jsonForDrawSlidesFrame->is_null())
	{
		setDrawSlidesFrame(ModelBase::boolFromJson(*jsonForDrawSlidesFrame));
	}
	web::json::value* jsonForShowHiddenSlides = ModelBase::getField(val, "ShowHiddenSlides");
	if(jsonForShowHiddenSlides != nullptr && !jsonForShowHiddenSlides->is_null())
	{
		setShowHiddenSlides(ModelBase::boolFromJson(*jsonForShowHiddenSlides));
	}
	web::json::value* jsonForSaveMetafilesAsPng = ModelBase::getField(val, "SaveMetafilesAsPng");
	if(jsonForSaveMetafilesAsPng != nullptr && !jsonForSaveMetafilesAsPng->is_null())
	{
		setSaveMetafilesAsPng(ModelBase::boolFromJson(*jsonForSaveMetafilesAsPng));
	}
	web::json::value* jsonForPassword = ModelBase::getField(val, "Password");
	if(jsonForPassword != nullptr && !jsonForPassword->is_null())
	{
		setPassword(ModelBase::stringFromJson(*jsonForPassword));
	}
	web::json::value* jsonForEmbedTrueTypeFontsForASCII = ModelBase::getField(val, "EmbedTrueTypeFontsForASCII");
	if(jsonForEmbedTrueTypeFontsForASCII != nullptr && !jsonForEmbedTrueTypeFontsForASCII->is_null())
	{
		setEmbedTrueTypeFontsForASCII(ModelBase::boolFromJson(*jsonForEmbedTrueTypeFontsForASCII));
	}
	web::json::value* jsonForAdditionalCommonFontFamilies = ModelBase::getField(val, "AdditionalCommonFontFamilies");
	if(jsonForAdditionalCommonFontFamilies != nullptr && !jsonForAdditionalCommonFontFamilies->is_null())
	{
		{
			m_AdditionalCommonFontFamilies.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForAdditionalCommonFontFamilies->as_array())
			{
				m_AdditionalCommonFontFamilies.push_back(ModelBase::stringFromJson(item));
			}
        	}
	}
	web::json::value* jsonForSlidesLayoutOptions = ModelBase::getField(val, "SlidesLayoutOptions");
	if(jsonForSlidesLayoutOptions != nullptr && !jsonForSlidesLayoutOptions->is_null())
	{
		std::shared_ptr<void> instanceForSlidesLayoutOptions = asposeslidescloud::api::ClassRegistry::deserialize(L"SlidesLayoutOptions", *jsonForSlidesLayoutOptions);
		setSlidesLayoutOptions(std::static_pointer_cast<SlidesLayoutOptions>(instanceForSlidesLayoutOptions));
	}
	web::json::value* jsonForImageTransparentColor = ModelBase::getField(val, "ImageTransparentColor");
	if(jsonForImageTransparentColor != nullptr && !jsonForImageTransparentColor->is_null())
	{
		setImageTransparentColor(ModelBase::stringFromJson(*jsonForImageTransparentColor));
	}
	web::json::value* jsonForApplyImageTransparent = ModelBase::getField(val, "ApplyImageTransparent");
	if(jsonForApplyImageTransparent != nullptr && !jsonForApplyImageTransparent->is_null())
	{
		setApplyImageTransparent(ModelBase::boolFromJson(*jsonForApplyImageTransparent));
	}
	web::json::value* jsonForAccessPermissions = ModelBase::getField(val, "AccessPermissions");
	if(jsonForAccessPermissions != nullptr && !jsonForAccessPermissions->is_null())
	{
		std::shared_ptr<void> instanceForAccessPermissions = asposeslidescloud::api::ClassRegistry::deserialize(L"AccessPermissions", *jsonForAccessPermissions);
		setAccessPermissions(std::static_pointer_cast<AccessPermissions>(instanceForAccessPermissions));
	}
}

}
}

