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
 * ParagraphFormat.h
 *
 * Paragraph formatting properties.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_ParagraphFormat_H_
#define ASPOSESLIDESCLOUD_MODEL_ParagraphFormat_H_

#include "../ModelBase.h"

#include "../model/PortionFormat.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Paragraph formatting properties.
/// </summary>
class  ParagraphFormat : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ParagraphFormat();
	ASPOSE_DLL_EXPORT virtual ~ParagraphFormat();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Depth.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getDepth() const;
	ASPOSE_DLL_EXPORT void setDepth(int32_t value);
	ASPOSE_DLL_EXPORT bool depthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDepth();
	/// <summary>
	/// Text alignment.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAlignment() const;
	ASPOSE_DLL_EXPORT void setAlignment(utility::string_t value);
	/// <summary>
	/// Left margin.
	/// </summary>
	ASPOSE_DLL_EXPORT double getMarginLeft() const;
	ASPOSE_DLL_EXPORT void setMarginLeft(double value);
	ASPOSE_DLL_EXPORT bool marginLeftIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMarginLeft();
	/// <summary>
	/// Right margin.
	/// </summary>
	ASPOSE_DLL_EXPORT double getMarginRight() const;
	ASPOSE_DLL_EXPORT void setMarginRight(double value);
	ASPOSE_DLL_EXPORT bool marginRightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMarginRight();
	/// <summary>
	/// Left spacing.
	/// </summary>
	ASPOSE_DLL_EXPORT double getSpaceBefore() const;
	ASPOSE_DLL_EXPORT void setSpaceBefore(double value);
	ASPOSE_DLL_EXPORT bool spaceBeforeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSpaceBefore();
	/// <summary>
	/// Right spacing.
	/// </summary>
	ASPOSE_DLL_EXPORT double getSpaceAfter() const;
	ASPOSE_DLL_EXPORT void setSpaceAfter(double value);
	ASPOSE_DLL_EXPORT bool spaceAfterIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSpaceAfter();
	/// <summary>
	/// Spacing between lines.
	/// </summary>
	ASPOSE_DLL_EXPORT double getSpaceWithin() const;
	ASPOSE_DLL_EXPORT void setSpaceWithin(double value);
	ASPOSE_DLL_EXPORT bool spaceWithinIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSpaceWithin();
	/// <summary>
	/// Font alignment.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFontAlignment() const;
	ASPOSE_DLL_EXPORT void setFontAlignment(utility::string_t value);
	/// <summary>
	/// First line indent.
	/// </summary>
	ASPOSE_DLL_EXPORT double getIndent() const;
	ASPOSE_DLL_EXPORT void setIndent(double value);
	ASPOSE_DLL_EXPORT bool indentIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIndent();
	/// <summary>
	/// Determines whether the Right to Left writing is used in a paragraph. No inheritance applied.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getRightToLeft() const;
	ASPOSE_DLL_EXPORT void setRightToLeft(utility::string_t value);
	/// <summary>
	/// Determines whether the East Asian line break is used in a paragraph. No inheritance applied.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getEastAsianLineBreak() const;
	ASPOSE_DLL_EXPORT void setEastAsianLineBreak(utility::string_t value);
	/// <summary>
	/// Determines whether the Latin line break is used in a paragraph. No inheritance applied.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLatinLineBreak() const;
	ASPOSE_DLL_EXPORT void setLatinLineBreak(utility::string_t value);
	/// <summary>
	/// Determines whether the hanging punctuation is used in a paragraph. No inheritance applied.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getHangingPunctuation() const;
	ASPOSE_DLL_EXPORT void setHangingPunctuation(utility::string_t value);
	/// <summary>
	/// Returns or sets default tabulation size with no inheritance.
	/// </summary>
	ASPOSE_DLL_EXPORT double getDefaultTabSize() const;
	ASPOSE_DLL_EXPORT void setDefaultTabSize(double value);
	ASPOSE_DLL_EXPORT bool defaultTabSizeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDefaultTabSize();
	/// <summary>
	/// Default portion format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<PortionFormat> getDefaultPortionFormat() const;
	ASPOSE_DLL_EXPORT void setDefaultPortionFormat(std::shared_ptr<PortionFormat> value);
	/// <summary>
	/// Bullet char.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getBulletChar() const;
	ASPOSE_DLL_EXPORT void setBulletChar(utility::string_t value);
	/// <summary>
	/// Bullet height.
	/// </summary>
	ASPOSE_DLL_EXPORT double getBulletHeight() const;
	ASPOSE_DLL_EXPORT void setBulletHeight(double value);
	ASPOSE_DLL_EXPORT bool bulletHeightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetBulletHeight();
	/// <summary>
	/// Bullet type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getBulletType() const;
	ASPOSE_DLL_EXPORT void setBulletType(utility::string_t value);
	/// <summary>
	/// Starting number for a numbered bullet.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getNumberedBulletStartWith() const;
	ASPOSE_DLL_EXPORT void setNumberedBulletStartWith(int32_t value);
	ASPOSE_DLL_EXPORT bool numberedBulletStartWithIsSet() const;
	ASPOSE_DLL_EXPORT void unsetNumberedBulletStartWith();
	/// <summary>
	/// Numbered bullet style.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getNumberedBulletStyle() const;
	ASPOSE_DLL_EXPORT void setNumberedBulletStyle(utility::string_t value);
	/// <summary>
	/// Bullet fill format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FillFormat> getBulletFillFormat() const;
	ASPOSE_DLL_EXPORT void setBulletFillFormat(std::shared_ptr<FillFormat> value);

protected:
	int32_t m_Depth;
	bool m_DepthIsSet;
	utility::string_t m_Alignment;
	double m_MarginLeft;
	bool m_MarginLeftIsSet;
	double m_MarginRight;
	bool m_MarginRightIsSet;
	double m_SpaceBefore;
	bool m_SpaceBeforeIsSet;
	double m_SpaceAfter;
	bool m_SpaceAfterIsSet;
	double m_SpaceWithin;
	bool m_SpaceWithinIsSet;
	utility::string_t m_FontAlignment;
	double m_Indent;
	bool m_IndentIsSet;
	utility::string_t m_RightToLeft;
	utility::string_t m_EastAsianLineBreak;
	utility::string_t m_LatinLineBreak;
	utility::string_t m_HangingPunctuation;
	double m_DefaultTabSize;
	bool m_DefaultTabSizeIsSet;
	std::shared_ptr<PortionFormat> m_DefaultPortionFormat;
	utility::string_t m_BulletChar;
	double m_BulletHeight;
	bool m_BulletHeightIsSet;
	utility::string_t m_BulletType;
	int32_t m_NumberedBulletStartWith;
	bool m_NumberedBulletStartWithIsSet;
	utility::string_t m_NumberedBulletStyle;
	std::shared_ptr<FillFormat> m_BulletFillFormat;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_ParagraphFormat_H_ */
