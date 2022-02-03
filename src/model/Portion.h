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

/*
 * Portion.h
 *
 * Represents portion resource
 */

#ifndef _Portion_H_
#define _Portion_H_

#include "ResourceBase.h"

#include "../model/Hyperlink.h"
#include "../model/EffectFormat.h"
#include <cpprest/details/basic_types.h>
#include "../model/MathParagraph.h"
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents portion resource
/// </summary>
class  Portion : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT Portion();
	ASPOSE_DLL_EXPORT virtual ~Portion();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Text.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getText() const;
	ASPOSE_DLL_EXPORT void setText(utility::string_t value);
	/// <summary>
	/// Math paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathParagraph> getMathParagraph() const;
	ASPOSE_DLL_EXPORT void setMathParagraph(std::shared_ptr<MathParagraph> value);
	/// <summary>
	/// True for bold font.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFontBold() const;
	ASPOSE_DLL_EXPORT void setFontBold(utility::string_t value);
	/// <summary>
	/// True for italic font.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFontItalic() const;
	ASPOSE_DLL_EXPORT void setFontItalic(utility::string_t value);
	/// <summary>
	/// Text underline type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFontUnderline() const;
	ASPOSE_DLL_EXPORT void setFontUnderline(utility::string_t value);
	/// <summary>
	/// Text strikethrough type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getStrikethroughType() const;
	ASPOSE_DLL_EXPORT void setStrikethroughType(utility::string_t value);
	/// <summary>
	/// Text capitalization type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTextCapType() const;
	ASPOSE_DLL_EXPORT void setTextCapType(utility::string_t value);
	/// <summary>
	/// Superscript or subscript of the text.
	/// </summary>
	ASPOSE_DLL_EXPORT double getEscapement() const;
	ASPOSE_DLL_EXPORT void setEscapement(double value);
	ASPOSE_DLL_EXPORT bool escapementIsSet() const;
	ASPOSE_DLL_EXPORT void unsetEscapement();
	/// <summary>
	/// Intercharacter spacing increment.
	/// </summary>
	ASPOSE_DLL_EXPORT double getSpacing() const;
	ASPOSE_DLL_EXPORT void setSpacing(double value);
	ASPOSE_DLL_EXPORT bool spacingIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSpacing();
	/// <summary>
	/// Font color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFontColor() const;
	ASPOSE_DLL_EXPORT void setFontColor(utility::string_t value);
	/// <summary>
	/// Highlight color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getHighlightColor() const;
	ASPOSE_DLL_EXPORT void setHighlightColor(utility::string_t value);
	/// <summary>
	/// Font height.
	/// </summary>
	ASPOSE_DLL_EXPORT double getFontHeight() const;
	ASPOSE_DLL_EXPORT void setFontHeight(double value);
	ASPOSE_DLL_EXPORT bool fontHeightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetFontHeight();
	/// <summary>
	/// True to normalize the text.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getNormaliseHeight() const;
	ASPOSE_DLL_EXPORT void setNormaliseHeight(utility::string_t value);
	/// <summary>
	/// True if the text proof should be disabled.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getProofDisabled() const;
	ASPOSE_DLL_EXPORT void setProofDisabled(utility::string_t value);
	/// <summary>
	/// True if smart tag should be cleaned.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getSmartTagClean() const;
	ASPOSE_DLL_EXPORT void setSmartTagClean(bool value);
	ASPOSE_DLL_EXPORT bool smartTagCleanIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSmartTagClean();
	/// <summary>
	/// Minimal font size for kerning.
	/// </summary>
	ASPOSE_DLL_EXPORT double getKerningMinimalSize() const;
	ASPOSE_DLL_EXPORT void setKerningMinimalSize(double value);
	ASPOSE_DLL_EXPORT bool kerningMinimalSizeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetKerningMinimalSize();
	/// <summary>
	/// True if numbers should ignore East-Asian specific vertical text layout.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getKumimoji() const;
	ASPOSE_DLL_EXPORT void setKumimoji(utility::string_t value);
	/// <summary>
	/// Proving language ID.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLanguageId() const;
	ASPOSE_DLL_EXPORT void setLanguageId(utility::string_t value);
	/// <summary>
	/// Alternative proving language ID.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAlternativeLanguageId() const;
	ASPOSE_DLL_EXPORT void setAlternativeLanguageId(utility::string_t value);
	/// <summary>
	/// True if underline style has own FillFormat properties.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getIsHardUnderlineFill() const;
	ASPOSE_DLL_EXPORT void setIsHardUnderlineFill(utility::string_t value);
	/// <summary>
	/// True if underline style has own LineFormat properties.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getIsHardUnderlineLine() const;
	ASPOSE_DLL_EXPORT void setIsHardUnderlineLine(utility::string_t value);
	/// <summary>
	/// Fill format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FillFormat> getFillFormat() const;
	ASPOSE_DLL_EXPORT void setFillFormat(std::shared_ptr<FillFormat> value);
	/// <summary>
	/// Effect format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<EffectFormat> getEffectFormat() const;
	ASPOSE_DLL_EXPORT void setEffectFormat(std::shared_ptr<EffectFormat> value);
	/// <summary>
	/// Line format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LineFormat> getLineFormat() const;
	ASPOSE_DLL_EXPORT void setLineFormat(std::shared_ptr<LineFormat> value);
	/// <summary>
	/// Underline fill format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FillFormat> getUnderlineFillFormat() const;
	ASPOSE_DLL_EXPORT void setUnderlineFillFormat(std::shared_ptr<FillFormat> value);
	/// <summary>
	/// Underline line format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LineFormat> getUnderlineLineFormat() const;
	ASPOSE_DLL_EXPORT void setUnderlineLineFormat(std::shared_ptr<LineFormat> value);
	/// <summary>
	/// Hyperlink defined for mouse click.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<Hyperlink> getHyperlinkClick() const;
	ASPOSE_DLL_EXPORT void setHyperlinkClick(std::shared_ptr<Hyperlink> value);
	/// <summary>
	/// Hyperlink defined for mouse over.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<Hyperlink> getHyperlinkMouseOver() const;
	ASPOSE_DLL_EXPORT void setHyperlinkMouseOver(std::shared_ptr<Hyperlink> value);

protected:
	utility::string_t m_Text;
	std::shared_ptr<MathParagraph> m_MathParagraph;
	utility::string_t m_FontBold;
	utility::string_t m_FontItalic;
	utility::string_t m_FontUnderline;
	utility::string_t m_StrikethroughType;
	utility::string_t m_TextCapType;
	double m_Escapement;
	bool m_EscapementIsSet;
	double m_Spacing;
	bool m_SpacingIsSet;
	utility::string_t m_FontColor;
	utility::string_t m_HighlightColor;
	double m_FontHeight;
	bool m_FontHeightIsSet;
	utility::string_t m_NormaliseHeight;
	utility::string_t m_ProofDisabled;
	bool m_SmartTagClean;
	bool m_SmartTagCleanIsSet;
	double m_KerningMinimalSize;
	bool m_KerningMinimalSizeIsSet;
	utility::string_t m_Kumimoji;
	utility::string_t m_LanguageId;
	utility::string_t m_AlternativeLanguageId;
	utility::string_t m_IsHardUnderlineFill;
	utility::string_t m_IsHardUnderlineLine;
	std::shared_ptr<FillFormat> m_FillFormat;
	std::shared_ptr<EffectFormat> m_EffectFormat;
	std::shared_ptr<LineFormat> m_LineFormat;
	std::shared_ptr<FillFormat> m_UnderlineFillFormat;
	std::shared_ptr<LineFormat> m_UnderlineLineFormat;
	std::shared_ptr<Hyperlink> m_HyperlinkClick;
	std::shared_ptr<Hyperlink> m_HyperlinkMouseOver;
};

}
}

#endif /* _Portion_H_ */
