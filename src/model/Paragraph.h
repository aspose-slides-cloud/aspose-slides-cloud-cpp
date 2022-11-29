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
 * Paragraph.h
 *
 * Represents paragraph resource
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_Paragraph_H_
#define ASPOSESLIDESCLOUD_MODEL_Paragraph_H_

#include "ResourceBase.h"

#include "../model/PortionFormat.h"
#include "../model/Portion.h"
#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents paragraph resource
/// </summary>
class  Paragraph : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT Paragraph();
	ASPOSE_DLL_EXPORT virtual ~Paragraph();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

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
	/// First line indent.
	/// </summary>
	ASPOSE_DLL_EXPORT double getIndent() const;
	ASPOSE_DLL_EXPORT void setIndent(double value);
	ASPOSE_DLL_EXPORT bool indentIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIndent();
	/// <summary>
	/// Text alignment.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAlignment() const;
	ASPOSE_DLL_EXPORT void setAlignment(utility::string_t value);
	/// <summary>
	/// Font alignment.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFontAlignment() const;
	ASPOSE_DLL_EXPORT void setFontAlignment(utility::string_t value);
	/// <summary>
	/// Default tabulation size.
	/// </summary>
	ASPOSE_DLL_EXPORT double getDefaultTabSize() const;
	ASPOSE_DLL_EXPORT void setDefaultTabSize(double value);
	ASPOSE_DLL_EXPORT bool defaultTabSizeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDefaultTabSize();
	/// <summary>
	/// Depth.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getDepth() const;
	ASPOSE_DLL_EXPORT void setDepth(int32_t value);
	ASPOSE_DLL_EXPORT bool depthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDepth();
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
	/// True if hanging punctuation is used with the paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getHangingPunctuation() const;
	ASPOSE_DLL_EXPORT void setHangingPunctuation(utility::string_t value);
	/// <summary>
	/// True if East Asian line break is used with the paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getEastAsianLineBreak() const;
	ASPOSE_DLL_EXPORT void setEastAsianLineBreak(utility::string_t value);
	/// <summary>
	/// True if Latin line break is used with the paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLatinLineBreak() const;
	ASPOSE_DLL_EXPORT void setLatinLineBreak(utility::string_t value);
	/// <summary>
	/// True if right to left direction is used with the paragraph.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getRightToLeft() const;
	ASPOSE_DLL_EXPORT void setRightToLeft(utility::string_t value);
	/// <summary>
	/// List of portion links.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<Portion>> getPortionList() const;
	ASPOSE_DLL_EXPORT void setPortionList(std::vector<std::shared_ptr<Portion>> value);
	/// <summary>
	/// Default portion format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<PortionFormat> getDefaultPortionFormat() const;
	ASPOSE_DLL_EXPORT void setDefaultPortionFormat(std::shared_ptr<PortionFormat> value);

protected:
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
	double m_Indent;
	bool m_IndentIsSet;
	utility::string_t m_Alignment;
	utility::string_t m_FontAlignment;
	double m_DefaultTabSize;
	bool m_DefaultTabSizeIsSet;
	int32_t m_Depth;
	bool m_DepthIsSet;
	utility::string_t m_BulletChar;
	double m_BulletHeight;
	bool m_BulletHeightIsSet;
	utility::string_t m_BulletType;
	int32_t m_NumberedBulletStartWith;
	bool m_NumberedBulletStartWithIsSet;
	utility::string_t m_NumberedBulletStyle;
	utility::string_t m_HangingPunctuation;
	utility::string_t m_EastAsianLineBreak;
	utility::string_t m_LatinLineBreak;
	utility::string_t m_RightToLeft;
	std::vector<std::shared_ptr<Portion>> m_PortionList;
	std::shared_ptr<PortionFormat> m_DefaultPortionFormat;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_Paragraph_H_ */
