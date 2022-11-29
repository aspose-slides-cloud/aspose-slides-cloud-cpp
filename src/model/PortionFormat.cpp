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
#include "PortionFormat.h"

namespace asposeslidescloud {
namespace model {

PortionFormat::PortionFormat()
{
	m_EscapementIsSet = false;
	m_SpacingIsSet = false;
	m_FontHeightIsSet = false;
	m_SmartTagCleanIsSet = false;
	m_KerningMinimalSizeIsSet = false;
}

PortionFormat::~PortionFormat()
{
}

utility::string_t PortionFormat::getFontBold() const
{
	return m_FontBold;
}

void PortionFormat::setFontBold(utility::string_t value)
{
	m_FontBold = value;
	
}

utility::string_t PortionFormat::getFontItalic() const
{
	return m_FontItalic;
}

void PortionFormat::setFontItalic(utility::string_t value)
{
	m_FontItalic = value;
	
}

utility::string_t PortionFormat::getFontUnderline() const
{
	return m_FontUnderline;
}

void PortionFormat::setFontUnderline(utility::string_t value)
{
	m_FontUnderline = value;
	
}

utility::string_t PortionFormat::getStrikethroughType() const
{
	return m_StrikethroughType;
}

void PortionFormat::setStrikethroughType(utility::string_t value)
{
	m_StrikethroughType = value;
	
}

utility::string_t PortionFormat::getTextCapType() const
{
	return m_TextCapType;
}

void PortionFormat::setTextCapType(utility::string_t value)
{
	m_TextCapType = value;
	
}

double PortionFormat::getEscapement() const
{
	return m_Escapement;
}

void PortionFormat::setEscapement(double value)
{
	m_Escapement = value;
	m_EscapementIsSet = true;
}

bool PortionFormat::escapementIsSet() const
{
	return m_EscapementIsSet;
}

void PortionFormat::unsetEscapement()
{
	m_EscapementIsSet = false;
}

double PortionFormat::getSpacing() const
{
	return m_Spacing;
}

void PortionFormat::setSpacing(double value)
{
	m_Spacing = value;
	m_SpacingIsSet = true;
}

bool PortionFormat::spacingIsSet() const
{
	return m_SpacingIsSet;
}

void PortionFormat::unsetSpacing()
{
	m_SpacingIsSet = false;
}

utility::string_t PortionFormat::getFontColor() const
{
	return m_FontColor;
}

void PortionFormat::setFontColor(utility::string_t value)
{
	m_FontColor = value;
	
}

utility::string_t PortionFormat::getHighlightColor() const
{
	return m_HighlightColor;
}

void PortionFormat::setHighlightColor(utility::string_t value)
{
	m_HighlightColor = value;
	
}

double PortionFormat::getFontHeight() const
{
	return m_FontHeight;
}

void PortionFormat::setFontHeight(double value)
{
	m_FontHeight = value;
	m_FontHeightIsSet = true;
}

bool PortionFormat::fontHeightIsSet() const
{
	return m_FontHeightIsSet;
}

void PortionFormat::unsetFontHeight()
{
	m_FontHeightIsSet = false;
}

utility::string_t PortionFormat::getNormaliseHeight() const
{
	return m_NormaliseHeight;
}

void PortionFormat::setNormaliseHeight(utility::string_t value)
{
	m_NormaliseHeight = value;
	
}

utility::string_t PortionFormat::getProofDisabled() const
{
	return m_ProofDisabled;
}

void PortionFormat::setProofDisabled(utility::string_t value)
{
	m_ProofDisabled = value;
	
}

bool PortionFormat::isSmartTagClean() const
{
	return m_SmartTagClean;
}

void PortionFormat::setSmartTagClean(bool value)
{
	m_SmartTagClean = value;
	m_SmartTagCleanIsSet = true;
}

bool PortionFormat::smartTagCleanIsSet() const
{
	return m_SmartTagCleanIsSet;
}

void PortionFormat::unsetSmartTagClean()
{
	m_SmartTagCleanIsSet = false;
}

double PortionFormat::getKerningMinimalSize() const
{
	return m_KerningMinimalSize;
}

void PortionFormat::setKerningMinimalSize(double value)
{
	m_KerningMinimalSize = value;
	m_KerningMinimalSizeIsSet = true;
}

bool PortionFormat::kerningMinimalSizeIsSet() const
{
	return m_KerningMinimalSizeIsSet;
}

void PortionFormat::unsetKerningMinimalSize()
{
	m_KerningMinimalSizeIsSet = false;
}

utility::string_t PortionFormat::getKumimoji() const
{
	return m_Kumimoji;
}

void PortionFormat::setKumimoji(utility::string_t value)
{
	m_Kumimoji = value;
	
}

utility::string_t PortionFormat::getLanguageId() const
{
	return m_LanguageId;
}

void PortionFormat::setLanguageId(utility::string_t value)
{
	m_LanguageId = value;
	
}

utility::string_t PortionFormat::getAlternativeLanguageId() const
{
	return m_AlternativeLanguageId;
}

void PortionFormat::setAlternativeLanguageId(utility::string_t value)
{
	m_AlternativeLanguageId = value;
	
}

utility::string_t PortionFormat::getIsHardUnderlineFill() const
{
	return m_IsHardUnderlineFill;
}

void PortionFormat::setIsHardUnderlineFill(utility::string_t value)
{
	m_IsHardUnderlineFill = value;
	
}

utility::string_t PortionFormat::getIsHardUnderlineLine() const
{
	return m_IsHardUnderlineLine;
}

void PortionFormat::setIsHardUnderlineLine(utility::string_t value)
{
	m_IsHardUnderlineLine = value;
	
}

std::shared_ptr<FillFormat> PortionFormat::getFillFormat() const
{
	return m_FillFormat;
}

void PortionFormat::setFillFormat(std::shared_ptr<FillFormat> value)
{
	m_FillFormat = value;
	
}

std::shared_ptr<EffectFormat> PortionFormat::getEffectFormat() const
{
	return m_EffectFormat;
}

void PortionFormat::setEffectFormat(std::shared_ptr<EffectFormat> value)
{
	m_EffectFormat = value;
	
}

std::shared_ptr<LineFormat> PortionFormat::getLineFormat() const
{
	return m_LineFormat;
}

void PortionFormat::setLineFormat(std::shared_ptr<LineFormat> value)
{
	m_LineFormat = value;
	
}

std::shared_ptr<FillFormat> PortionFormat::getUnderlineFillFormat() const
{
	return m_UnderlineFillFormat;
}

void PortionFormat::setUnderlineFillFormat(std::shared_ptr<FillFormat> value)
{
	m_UnderlineFillFormat = value;
	
}

std::shared_ptr<LineFormat> PortionFormat::getUnderlineLineFormat() const
{
	return m_UnderlineLineFormat;
}

void PortionFormat::setUnderlineLineFormat(std::shared_ptr<LineFormat> value)
{
	m_UnderlineLineFormat = value;
	
}

std::shared_ptr<Hyperlink> PortionFormat::getHyperlinkClick() const
{
	return m_HyperlinkClick;
}

void PortionFormat::setHyperlinkClick(std::shared_ptr<Hyperlink> value)
{
	m_HyperlinkClick = value;
	
}

std::shared_ptr<Hyperlink> PortionFormat::getHyperlinkMouseOver() const
{
	return m_HyperlinkMouseOver;
}

void PortionFormat::setHyperlinkMouseOver(std::shared_ptr<Hyperlink> value)
{
	m_HyperlinkMouseOver = value;
	
}

utility::string_t PortionFormat::getLatinFont() const
{
	return m_LatinFont;
}

void PortionFormat::setLatinFont(utility::string_t value)
{
	m_LatinFont = value;
	
}

utility::string_t PortionFormat::getEastAsianFont() const
{
	return m_EastAsianFont;
}

void PortionFormat::setEastAsianFont(utility::string_t value)
{
	m_EastAsianFont = value;
	
}

utility::string_t PortionFormat::getComplexScriptFont() const
{
	return m_ComplexScriptFont;
}

void PortionFormat::setComplexScriptFont(utility::string_t value)
{
	m_ComplexScriptFont = value;
	
}

web::json::value PortionFormat::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_FontBold.empty())
	{
		val[utility::conversions::to_string_t("FontBold")] = ModelBase::toJson(m_FontBold);
	}
	if (!m_FontItalic.empty())
	{
		val[utility::conversions::to_string_t("FontItalic")] = ModelBase::toJson(m_FontItalic);
	}
	if (!m_FontUnderline.empty())
	{
		val[utility::conversions::to_string_t("FontUnderline")] = ModelBase::toJson(m_FontUnderline);
	}
	if (!m_StrikethroughType.empty())
	{
		val[utility::conversions::to_string_t("StrikethroughType")] = ModelBase::toJson(m_StrikethroughType);
	}
	if (!m_TextCapType.empty())
	{
		val[utility::conversions::to_string_t("TextCapType")] = ModelBase::toJson(m_TextCapType);
	}
	if(m_EscapementIsSet)
	{
		val[utility::conversions::to_string_t("Escapement")] = ModelBase::toJson(m_Escapement);
	}
	if(m_SpacingIsSet)
	{
		val[utility::conversions::to_string_t("Spacing")] = ModelBase::toJson(m_Spacing);
	}
	if (!m_FontColor.empty())
	{
		val[utility::conversions::to_string_t("FontColor")] = ModelBase::toJson(m_FontColor);
	}
	if (!m_HighlightColor.empty())
	{
		val[utility::conversions::to_string_t("HighlightColor")] = ModelBase::toJson(m_HighlightColor);
	}
	if(m_FontHeightIsSet)
	{
		val[utility::conversions::to_string_t("FontHeight")] = ModelBase::toJson(m_FontHeight);
	}
	if (!m_NormaliseHeight.empty())
	{
		val[utility::conversions::to_string_t("NormaliseHeight")] = ModelBase::toJson(m_NormaliseHeight);
	}
	if (!m_ProofDisabled.empty())
	{
		val[utility::conversions::to_string_t("ProofDisabled")] = ModelBase::toJson(m_ProofDisabled);
	}
	if(m_SmartTagCleanIsSet)
	{
		val[utility::conversions::to_string_t("SmartTagClean")] = ModelBase::toJson(m_SmartTagClean);
	}
	if(m_KerningMinimalSizeIsSet)
	{
		val[utility::conversions::to_string_t("KerningMinimalSize")] = ModelBase::toJson(m_KerningMinimalSize);
	}
	if (!m_Kumimoji.empty())
	{
		val[utility::conversions::to_string_t("Kumimoji")] = ModelBase::toJson(m_Kumimoji);
	}
	if (!m_LanguageId.empty())
	{
		val[utility::conversions::to_string_t("LanguageId")] = ModelBase::toJson(m_LanguageId);
	}
	if (!m_AlternativeLanguageId.empty())
	{
		val[utility::conversions::to_string_t("AlternativeLanguageId")] = ModelBase::toJson(m_AlternativeLanguageId);
	}
	if (!m_IsHardUnderlineFill.empty())
	{
		val[utility::conversions::to_string_t("IsHardUnderlineFill")] = ModelBase::toJson(m_IsHardUnderlineFill);
	}
	if (!m_IsHardUnderlineLine.empty())
	{
		val[utility::conversions::to_string_t("IsHardUnderlineLine")] = ModelBase::toJson(m_IsHardUnderlineLine);
	}
	if (m_FillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("FillFormat")] = ModelBase::toJson(m_FillFormat);
	}
	if (m_EffectFormat != nullptr)
	{
		val[utility::conversions::to_string_t("EffectFormat")] = ModelBase::toJson(m_EffectFormat);
	}
	if (m_LineFormat != nullptr)
	{
		val[utility::conversions::to_string_t("LineFormat")] = ModelBase::toJson(m_LineFormat);
	}
	if (m_UnderlineFillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("UnderlineFillFormat")] = ModelBase::toJson(m_UnderlineFillFormat);
	}
	if (m_UnderlineLineFormat != nullptr)
	{
		val[utility::conversions::to_string_t("UnderlineLineFormat")] = ModelBase::toJson(m_UnderlineLineFormat);
	}
	if (m_HyperlinkClick != nullptr)
	{
		val[utility::conversions::to_string_t("HyperlinkClick")] = ModelBase::toJson(m_HyperlinkClick);
	}
	if (m_HyperlinkMouseOver != nullptr)
	{
		val[utility::conversions::to_string_t("HyperlinkMouseOver")] = ModelBase::toJson(m_HyperlinkMouseOver);
	}
	if (!m_LatinFont.empty())
	{
		val[utility::conversions::to_string_t("LatinFont")] = ModelBase::toJson(m_LatinFont);
	}
	if (!m_EastAsianFont.empty())
	{
		val[utility::conversions::to_string_t("EastAsianFont")] = ModelBase::toJson(m_EastAsianFont);
	}
	if (!m_ComplexScriptFont.empty())
	{
		val[utility::conversions::to_string_t("ComplexScriptFont")] = ModelBase::toJson(m_ComplexScriptFont);
	}
	return val;
}

void PortionFormat::fromJson(web::json::value& val)
{
	web::json::value* jsonForFontBold = ModelBase::getField(val, "FontBold");
	if(jsonForFontBold != nullptr && !jsonForFontBold->is_null())
	{
		setFontBold(ModelBase::stringFromJson(*jsonForFontBold));
	}
	web::json::value* jsonForFontItalic = ModelBase::getField(val, "FontItalic");
	if(jsonForFontItalic != nullptr && !jsonForFontItalic->is_null())
	{
		setFontItalic(ModelBase::stringFromJson(*jsonForFontItalic));
	}
	web::json::value* jsonForFontUnderline = ModelBase::getField(val, "FontUnderline");
	if(jsonForFontUnderline != nullptr && !jsonForFontUnderline->is_null())
	{
		setFontUnderline(ModelBase::stringFromJson(*jsonForFontUnderline));
	}
	web::json::value* jsonForStrikethroughType = ModelBase::getField(val, "StrikethroughType");
	if(jsonForStrikethroughType != nullptr && !jsonForStrikethroughType->is_null())
	{
		setStrikethroughType(ModelBase::stringFromJson(*jsonForStrikethroughType));
	}
	web::json::value* jsonForTextCapType = ModelBase::getField(val, "TextCapType");
	if(jsonForTextCapType != nullptr && !jsonForTextCapType->is_null())
	{
		setTextCapType(ModelBase::stringFromJson(*jsonForTextCapType));
	}
	web::json::value* jsonForEscapement = ModelBase::getField(val, "Escapement");
	if(jsonForEscapement != nullptr && !jsonForEscapement->is_null() && jsonForEscapement->is_number())
	{
		setEscapement(ModelBase::doubleFromJson(*jsonForEscapement));
	}
	web::json::value* jsonForSpacing = ModelBase::getField(val, "Spacing");
	if(jsonForSpacing != nullptr && !jsonForSpacing->is_null() && jsonForSpacing->is_number())
	{
		setSpacing(ModelBase::doubleFromJson(*jsonForSpacing));
	}
	web::json::value* jsonForFontColor = ModelBase::getField(val, "FontColor");
	if(jsonForFontColor != nullptr && !jsonForFontColor->is_null())
	{
		setFontColor(ModelBase::stringFromJson(*jsonForFontColor));
	}
	web::json::value* jsonForHighlightColor = ModelBase::getField(val, "HighlightColor");
	if(jsonForHighlightColor != nullptr && !jsonForHighlightColor->is_null())
	{
		setHighlightColor(ModelBase::stringFromJson(*jsonForHighlightColor));
	}
	web::json::value* jsonForFontHeight = ModelBase::getField(val, "FontHeight");
	if(jsonForFontHeight != nullptr && !jsonForFontHeight->is_null() && jsonForFontHeight->is_number())
	{
		setFontHeight(ModelBase::doubleFromJson(*jsonForFontHeight));
	}
	web::json::value* jsonForNormaliseHeight = ModelBase::getField(val, "NormaliseHeight");
	if(jsonForNormaliseHeight != nullptr && !jsonForNormaliseHeight->is_null())
	{
		setNormaliseHeight(ModelBase::stringFromJson(*jsonForNormaliseHeight));
	}
	web::json::value* jsonForProofDisabled = ModelBase::getField(val, "ProofDisabled");
	if(jsonForProofDisabled != nullptr && !jsonForProofDisabled->is_null())
	{
		setProofDisabled(ModelBase::stringFromJson(*jsonForProofDisabled));
	}
	web::json::value* jsonForSmartTagClean = ModelBase::getField(val, "SmartTagClean");
	if(jsonForSmartTagClean != nullptr && !jsonForSmartTagClean->is_null())
	{
		setSmartTagClean(ModelBase::boolFromJson(*jsonForSmartTagClean));
	}
	web::json::value* jsonForKerningMinimalSize = ModelBase::getField(val, "KerningMinimalSize");
	if(jsonForKerningMinimalSize != nullptr && !jsonForKerningMinimalSize->is_null() && jsonForKerningMinimalSize->is_number())
	{
		setKerningMinimalSize(ModelBase::doubleFromJson(*jsonForKerningMinimalSize));
	}
	web::json::value* jsonForKumimoji = ModelBase::getField(val, "Kumimoji");
	if(jsonForKumimoji != nullptr && !jsonForKumimoji->is_null())
	{
		setKumimoji(ModelBase::stringFromJson(*jsonForKumimoji));
	}
	web::json::value* jsonForLanguageId = ModelBase::getField(val, "LanguageId");
	if(jsonForLanguageId != nullptr && !jsonForLanguageId->is_null())
	{
		setLanguageId(ModelBase::stringFromJson(*jsonForLanguageId));
	}
	web::json::value* jsonForAlternativeLanguageId = ModelBase::getField(val, "AlternativeLanguageId");
	if(jsonForAlternativeLanguageId != nullptr && !jsonForAlternativeLanguageId->is_null())
	{
		setAlternativeLanguageId(ModelBase::stringFromJson(*jsonForAlternativeLanguageId));
	}
	web::json::value* jsonForIsHardUnderlineFill = ModelBase::getField(val, "IsHardUnderlineFill");
	if(jsonForIsHardUnderlineFill != nullptr && !jsonForIsHardUnderlineFill->is_null())
	{
		setIsHardUnderlineFill(ModelBase::stringFromJson(*jsonForIsHardUnderlineFill));
	}
	web::json::value* jsonForIsHardUnderlineLine = ModelBase::getField(val, "IsHardUnderlineLine");
	if(jsonForIsHardUnderlineLine != nullptr && !jsonForIsHardUnderlineLine->is_null())
	{
		setIsHardUnderlineLine(ModelBase::stringFromJson(*jsonForIsHardUnderlineLine));
	}
	web::json::value* jsonForFillFormat = ModelBase::getField(val, "FillFormat");
	if(jsonForFillFormat != nullptr && !jsonForFillFormat->is_null())
	{
		std::shared_ptr<void> instanceForFillFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"FillFormat", *jsonForFillFormat);
		setFillFormat(std::static_pointer_cast<FillFormat>(instanceForFillFormat));
	}
	web::json::value* jsonForEffectFormat = ModelBase::getField(val, "EffectFormat");
	if(jsonForEffectFormat != nullptr && !jsonForEffectFormat->is_null())
	{
		std::shared_ptr<void> instanceForEffectFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"EffectFormat", *jsonForEffectFormat);
		setEffectFormat(std::static_pointer_cast<EffectFormat>(instanceForEffectFormat));
	}
	web::json::value* jsonForLineFormat = ModelBase::getField(val, "LineFormat");
	if(jsonForLineFormat != nullptr && !jsonForLineFormat->is_null())
	{
		std::shared_ptr<void> instanceForLineFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"LineFormat", *jsonForLineFormat);
		setLineFormat(std::static_pointer_cast<LineFormat>(instanceForLineFormat));
	}
	web::json::value* jsonForUnderlineFillFormat = ModelBase::getField(val, "UnderlineFillFormat");
	if(jsonForUnderlineFillFormat != nullptr && !jsonForUnderlineFillFormat->is_null())
	{
		std::shared_ptr<void> instanceForUnderlineFillFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"FillFormat", *jsonForUnderlineFillFormat);
		setUnderlineFillFormat(std::static_pointer_cast<FillFormat>(instanceForUnderlineFillFormat));
	}
	web::json::value* jsonForUnderlineLineFormat = ModelBase::getField(val, "UnderlineLineFormat");
	if(jsonForUnderlineLineFormat != nullptr && !jsonForUnderlineLineFormat->is_null())
	{
		std::shared_ptr<void> instanceForUnderlineLineFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"LineFormat", *jsonForUnderlineLineFormat);
		setUnderlineLineFormat(std::static_pointer_cast<LineFormat>(instanceForUnderlineLineFormat));
	}
	web::json::value* jsonForHyperlinkClick = ModelBase::getField(val, "HyperlinkClick");
	if(jsonForHyperlinkClick != nullptr && !jsonForHyperlinkClick->is_null())
	{
		std::shared_ptr<void> instanceForHyperlinkClick = asposeslidescloud::api::ClassRegistry::deserialize(L"Hyperlink", *jsonForHyperlinkClick);
		setHyperlinkClick(std::static_pointer_cast<Hyperlink>(instanceForHyperlinkClick));
	}
	web::json::value* jsonForHyperlinkMouseOver = ModelBase::getField(val, "HyperlinkMouseOver");
	if(jsonForHyperlinkMouseOver != nullptr && !jsonForHyperlinkMouseOver->is_null())
	{
		std::shared_ptr<void> instanceForHyperlinkMouseOver = asposeslidescloud::api::ClassRegistry::deserialize(L"Hyperlink", *jsonForHyperlinkMouseOver);
		setHyperlinkMouseOver(std::static_pointer_cast<Hyperlink>(instanceForHyperlinkMouseOver));
	}
	web::json::value* jsonForLatinFont = ModelBase::getField(val, "LatinFont");
	if(jsonForLatinFont != nullptr && !jsonForLatinFont->is_null())
	{
		setLatinFont(ModelBase::stringFromJson(*jsonForLatinFont));
	}
	web::json::value* jsonForEastAsianFont = ModelBase::getField(val, "EastAsianFont");
	if(jsonForEastAsianFont != nullptr && !jsonForEastAsianFont->is_null())
	{
		setEastAsianFont(ModelBase::stringFromJson(*jsonForEastAsianFont));
	}
	web::json::value* jsonForComplexScriptFont = ModelBase::getField(val, "ComplexScriptFont");
	if(jsonForComplexScriptFont != nullptr && !jsonForComplexScriptFont->is_null())
	{
		setComplexScriptFont(ModelBase::stringFromJson(*jsonForComplexScriptFont));
	}
}

}
}

