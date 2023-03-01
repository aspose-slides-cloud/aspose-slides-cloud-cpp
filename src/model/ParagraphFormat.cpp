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
#include "ParagraphFormat.h"

namespace asposeslidescloud {
namespace model {

ParagraphFormat::ParagraphFormat()
{
	m_DepthIsSet = false;
	m_MarginLeftIsSet = false;
	m_MarginRightIsSet = false;
	m_SpaceBeforeIsSet = false;
	m_SpaceAfterIsSet = false;
	m_SpaceWithinIsSet = false;
	m_IndentIsSet = false;
	m_DefaultTabSizeIsSet = false;
	m_BulletHeightIsSet = false;
	m_NumberedBulletStartWithIsSet = false;
}

ParagraphFormat::~ParagraphFormat()
{
}

int32_t ParagraphFormat::getDepth() const
{
	return m_Depth;
}

void ParagraphFormat::setDepth(int32_t value)
{
	m_Depth = value;
	m_DepthIsSet = true;
}

bool ParagraphFormat::depthIsSet() const
{
	return m_DepthIsSet;
}

void ParagraphFormat::unsetDepth()
{
	m_DepthIsSet = false;
}

utility::string_t ParagraphFormat::getAlignment() const
{
	return m_Alignment;
}

void ParagraphFormat::setAlignment(utility::string_t value)
{
	m_Alignment = value;
	
}

double ParagraphFormat::getMarginLeft() const
{
	return m_MarginLeft;
}

void ParagraphFormat::setMarginLeft(double value)
{
	m_MarginLeft = value;
	m_MarginLeftIsSet = true;
}

bool ParagraphFormat::marginLeftIsSet() const
{
	return m_MarginLeftIsSet;
}

void ParagraphFormat::unsetMarginLeft()
{
	m_MarginLeftIsSet = false;
}

double ParagraphFormat::getMarginRight() const
{
	return m_MarginRight;
}

void ParagraphFormat::setMarginRight(double value)
{
	m_MarginRight = value;
	m_MarginRightIsSet = true;
}

bool ParagraphFormat::marginRightIsSet() const
{
	return m_MarginRightIsSet;
}

void ParagraphFormat::unsetMarginRight()
{
	m_MarginRightIsSet = false;
}

double ParagraphFormat::getSpaceBefore() const
{
	return m_SpaceBefore;
}

void ParagraphFormat::setSpaceBefore(double value)
{
	m_SpaceBefore = value;
	m_SpaceBeforeIsSet = true;
}

bool ParagraphFormat::spaceBeforeIsSet() const
{
	return m_SpaceBeforeIsSet;
}

void ParagraphFormat::unsetSpaceBefore()
{
	m_SpaceBeforeIsSet = false;
}

double ParagraphFormat::getSpaceAfter() const
{
	return m_SpaceAfter;
}

void ParagraphFormat::setSpaceAfter(double value)
{
	m_SpaceAfter = value;
	m_SpaceAfterIsSet = true;
}

bool ParagraphFormat::spaceAfterIsSet() const
{
	return m_SpaceAfterIsSet;
}

void ParagraphFormat::unsetSpaceAfter()
{
	m_SpaceAfterIsSet = false;
}

double ParagraphFormat::getSpaceWithin() const
{
	return m_SpaceWithin;
}

void ParagraphFormat::setSpaceWithin(double value)
{
	m_SpaceWithin = value;
	m_SpaceWithinIsSet = true;
}

bool ParagraphFormat::spaceWithinIsSet() const
{
	return m_SpaceWithinIsSet;
}

void ParagraphFormat::unsetSpaceWithin()
{
	m_SpaceWithinIsSet = false;
}

utility::string_t ParagraphFormat::getFontAlignment() const
{
	return m_FontAlignment;
}

void ParagraphFormat::setFontAlignment(utility::string_t value)
{
	m_FontAlignment = value;
	
}

double ParagraphFormat::getIndent() const
{
	return m_Indent;
}

void ParagraphFormat::setIndent(double value)
{
	m_Indent = value;
	m_IndentIsSet = true;
}

bool ParagraphFormat::indentIsSet() const
{
	return m_IndentIsSet;
}

void ParagraphFormat::unsetIndent()
{
	m_IndentIsSet = false;
}

utility::string_t ParagraphFormat::getRightToLeft() const
{
	return m_RightToLeft;
}

void ParagraphFormat::setRightToLeft(utility::string_t value)
{
	m_RightToLeft = value;
	
}

utility::string_t ParagraphFormat::getEastAsianLineBreak() const
{
	return m_EastAsianLineBreak;
}

void ParagraphFormat::setEastAsianLineBreak(utility::string_t value)
{
	m_EastAsianLineBreak = value;
	
}

utility::string_t ParagraphFormat::getLatinLineBreak() const
{
	return m_LatinLineBreak;
}

void ParagraphFormat::setLatinLineBreak(utility::string_t value)
{
	m_LatinLineBreak = value;
	
}

utility::string_t ParagraphFormat::getHangingPunctuation() const
{
	return m_HangingPunctuation;
}

void ParagraphFormat::setHangingPunctuation(utility::string_t value)
{
	m_HangingPunctuation = value;
	
}

double ParagraphFormat::getDefaultTabSize() const
{
	return m_DefaultTabSize;
}

void ParagraphFormat::setDefaultTabSize(double value)
{
	m_DefaultTabSize = value;
	m_DefaultTabSizeIsSet = true;
}

bool ParagraphFormat::defaultTabSizeIsSet() const
{
	return m_DefaultTabSizeIsSet;
}

void ParagraphFormat::unsetDefaultTabSize()
{
	m_DefaultTabSizeIsSet = false;
}

std::shared_ptr<PortionFormat> ParagraphFormat::getDefaultPortionFormat() const
{
	return m_DefaultPortionFormat;
}

void ParagraphFormat::setDefaultPortionFormat(std::shared_ptr<PortionFormat> value)
{
	m_DefaultPortionFormat = value;
	
}

utility::string_t ParagraphFormat::getBulletChar() const
{
	return m_BulletChar;
}

void ParagraphFormat::setBulletChar(utility::string_t value)
{
	m_BulletChar = value;
	
}

double ParagraphFormat::getBulletHeight() const
{
	return m_BulletHeight;
}

void ParagraphFormat::setBulletHeight(double value)
{
	m_BulletHeight = value;
	m_BulletHeightIsSet = true;
}

bool ParagraphFormat::bulletHeightIsSet() const
{
	return m_BulletHeightIsSet;
}

void ParagraphFormat::unsetBulletHeight()
{
	m_BulletHeightIsSet = false;
}

utility::string_t ParagraphFormat::getBulletType() const
{
	return m_BulletType;
}

void ParagraphFormat::setBulletType(utility::string_t value)
{
	m_BulletType = value;
	
}

int32_t ParagraphFormat::getNumberedBulletStartWith() const
{
	return m_NumberedBulletStartWith;
}

void ParagraphFormat::setNumberedBulletStartWith(int32_t value)
{
	m_NumberedBulletStartWith = value;
	m_NumberedBulletStartWithIsSet = true;
}

bool ParagraphFormat::numberedBulletStartWithIsSet() const
{
	return m_NumberedBulletStartWithIsSet;
}

void ParagraphFormat::unsetNumberedBulletStartWith()
{
	m_NumberedBulletStartWithIsSet = false;
}

utility::string_t ParagraphFormat::getNumberedBulletStyle() const
{
	return m_NumberedBulletStyle;
}

void ParagraphFormat::setNumberedBulletStyle(utility::string_t value)
{
	m_NumberedBulletStyle = value;
	
}

std::shared_ptr<FillFormat> ParagraphFormat::getBulletFillFormat() const
{
	return m_BulletFillFormat;
}

void ParagraphFormat::setBulletFillFormat(std::shared_ptr<FillFormat> value)
{
	m_BulletFillFormat = value;
	
}

web::json::value ParagraphFormat::toJson() const
{
	web::json::value val = web::json::value::object();
	if(m_DepthIsSet)
	{
		val[utility::conversions::to_string_t("Depth")] = ModelBase::toJson(m_Depth);
	}
	if (!m_Alignment.empty())
	{
		val[utility::conversions::to_string_t("Alignment")] = ModelBase::toJson(m_Alignment);
	}
	if(m_MarginLeftIsSet)
	{
		val[utility::conversions::to_string_t("MarginLeft")] = ModelBase::toJson(m_MarginLeft);
	}
	if(m_MarginRightIsSet)
	{
		val[utility::conversions::to_string_t("MarginRight")] = ModelBase::toJson(m_MarginRight);
	}
	if(m_SpaceBeforeIsSet)
	{
		val[utility::conversions::to_string_t("SpaceBefore")] = ModelBase::toJson(m_SpaceBefore);
	}
	if(m_SpaceAfterIsSet)
	{
		val[utility::conversions::to_string_t("SpaceAfter")] = ModelBase::toJson(m_SpaceAfter);
	}
	if(m_SpaceWithinIsSet)
	{
		val[utility::conversions::to_string_t("SpaceWithin")] = ModelBase::toJson(m_SpaceWithin);
	}
	if (!m_FontAlignment.empty())
	{
		val[utility::conversions::to_string_t("FontAlignment")] = ModelBase::toJson(m_FontAlignment);
	}
	if(m_IndentIsSet)
	{
		val[utility::conversions::to_string_t("Indent")] = ModelBase::toJson(m_Indent);
	}
	if (!m_RightToLeft.empty())
	{
		val[utility::conversions::to_string_t("RightToLeft")] = ModelBase::toJson(m_RightToLeft);
	}
	if (!m_EastAsianLineBreak.empty())
	{
		val[utility::conversions::to_string_t("EastAsianLineBreak")] = ModelBase::toJson(m_EastAsianLineBreak);
	}
	if (!m_LatinLineBreak.empty())
	{
		val[utility::conversions::to_string_t("LatinLineBreak")] = ModelBase::toJson(m_LatinLineBreak);
	}
	if (!m_HangingPunctuation.empty())
	{
		val[utility::conversions::to_string_t("HangingPunctuation")] = ModelBase::toJson(m_HangingPunctuation);
	}
	if(m_DefaultTabSizeIsSet)
	{
		val[utility::conversions::to_string_t("DefaultTabSize")] = ModelBase::toJson(m_DefaultTabSize);
	}
	if (m_DefaultPortionFormat != nullptr)
	{
		val[utility::conversions::to_string_t("DefaultPortionFormat")] = ModelBase::toJson(m_DefaultPortionFormat);
	}
	if (!m_BulletChar.empty())
	{
		val[utility::conversions::to_string_t("BulletChar")] = ModelBase::toJson(m_BulletChar);
	}
	if(m_BulletHeightIsSet)
	{
		val[utility::conversions::to_string_t("BulletHeight")] = ModelBase::toJson(m_BulletHeight);
	}
	if (!m_BulletType.empty())
	{
		val[utility::conversions::to_string_t("BulletType")] = ModelBase::toJson(m_BulletType);
	}
	if(m_NumberedBulletStartWithIsSet)
	{
		val[utility::conversions::to_string_t("NumberedBulletStartWith")] = ModelBase::toJson(m_NumberedBulletStartWith);
	}
	if (!m_NumberedBulletStyle.empty())
	{
		val[utility::conversions::to_string_t("NumberedBulletStyle")] = ModelBase::toJson(m_NumberedBulletStyle);
	}
	if (m_BulletFillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("BulletFillFormat")] = ModelBase::toJson(m_BulletFillFormat);
	}
	return val;
}

void ParagraphFormat::fromJson(web::json::value& val)
{
	web::json::value* jsonForDepth = ModelBase::getField(val, "Depth");
	if(jsonForDepth != nullptr && !jsonForDepth->is_null() && jsonForDepth->is_number())
	{
		setDepth(ModelBase::int32_tFromJson(*jsonForDepth));
	}
	web::json::value* jsonForAlignment = ModelBase::getField(val, "Alignment");
	if(jsonForAlignment != nullptr && !jsonForAlignment->is_null())
	{
		setAlignment(ModelBase::stringFromJson(*jsonForAlignment));
	}
	web::json::value* jsonForMarginLeft = ModelBase::getField(val, "MarginLeft");
	if(jsonForMarginLeft != nullptr && !jsonForMarginLeft->is_null() && jsonForMarginLeft->is_number())
	{
		setMarginLeft(ModelBase::doubleFromJson(*jsonForMarginLeft));
	}
	web::json::value* jsonForMarginRight = ModelBase::getField(val, "MarginRight");
	if(jsonForMarginRight != nullptr && !jsonForMarginRight->is_null() && jsonForMarginRight->is_number())
	{
		setMarginRight(ModelBase::doubleFromJson(*jsonForMarginRight));
	}
	web::json::value* jsonForSpaceBefore = ModelBase::getField(val, "SpaceBefore");
	if(jsonForSpaceBefore != nullptr && !jsonForSpaceBefore->is_null() && jsonForSpaceBefore->is_number())
	{
		setSpaceBefore(ModelBase::doubleFromJson(*jsonForSpaceBefore));
	}
	web::json::value* jsonForSpaceAfter = ModelBase::getField(val, "SpaceAfter");
	if(jsonForSpaceAfter != nullptr && !jsonForSpaceAfter->is_null() && jsonForSpaceAfter->is_number())
	{
		setSpaceAfter(ModelBase::doubleFromJson(*jsonForSpaceAfter));
	}
	web::json::value* jsonForSpaceWithin = ModelBase::getField(val, "SpaceWithin");
	if(jsonForSpaceWithin != nullptr && !jsonForSpaceWithin->is_null() && jsonForSpaceWithin->is_number())
	{
		setSpaceWithin(ModelBase::doubleFromJson(*jsonForSpaceWithin));
	}
	web::json::value* jsonForFontAlignment = ModelBase::getField(val, "FontAlignment");
	if(jsonForFontAlignment != nullptr && !jsonForFontAlignment->is_null())
	{
		setFontAlignment(ModelBase::stringFromJson(*jsonForFontAlignment));
	}
	web::json::value* jsonForIndent = ModelBase::getField(val, "Indent");
	if(jsonForIndent != nullptr && !jsonForIndent->is_null() && jsonForIndent->is_number())
	{
		setIndent(ModelBase::doubleFromJson(*jsonForIndent));
	}
	web::json::value* jsonForRightToLeft = ModelBase::getField(val, "RightToLeft");
	if(jsonForRightToLeft != nullptr && !jsonForRightToLeft->is_null())
	{
		setRightToLeft(ModelBase::stringFromJson(*jsonForRightToLeft));
	}
	web::json::value* jsonForEastAsianLineBreak = ModelBase::getField(val, "EastAsianLineBreak");
	if(jsonForEastAsianLineBreak != nullptr && !jsonForEastAsianLineBreak->is_null())
	{
		setEastAsianLineBreak(ModelBase::stringFromJson(*jsonForEastAsianLineBreak));
	}
	web::json::value* jsonForLatinLineBreak = ModelBase::getField(val, "LatinLineBreak");
	if(jsonForLatinLineBreak != nullptr && !jsonForLatinLineBreak->is_null())
	{
		setLatinLineBreak(ModelBase::stringFromJson(*jsonForLatinLineBreak));
	}
	web::json::value* jsonForHangingPunctuation = ModelBase::getField(val, "HangingPunctuation");
	if(jsonForHangingPunctuation != nullptr && !jsonForHangingPunctuation->is_null())
	{
		setHangingPunctuation(ModelBase::stringFromJson(*jsonForHangingPunctuation));
	}
	web::json::value* jsonForDefaultTabSize = ModelBase::getField(val, "DefaultTabSize");
	if(jsonForDefaultTabSize != nullptr && !jsonForDefaultTabSize->is_null() && jsonForDefaultTabSize->is_number())
	{
		setDefaultTabSize(ModelBase::doubleFromJson(*jsonForDefaultTabSize));
	}
	web::json::value* jsonForDefaultPortionFormat = ModelBase::getField(val, "DefaultPortionFormat");
	if(jsonForDefaultPortionFormat != nullptr && !jsonForDefaultPortionFormat->is_null())
	{
		std::shared_ptr<void> instanceForDefaultPortionFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"PortionFormat", *jsonForDefaultPortionFormat);
		setDefaultPortionFormat(std::static_pointer_cast<PortionFormat>(instanceForDefaultPortionFormat));
	}
	web::json::value* jsonForBulletChar = ModelBase::getField(val, "BulletChar");
	if(jsonForBulletChar != nullptr && !jsonForBulletChar->is_null())
	{
		setBulletChar(ModelBase::stringFromJson(*jsonForBulletChar));
	}
	web::json::value* jsonForBulletHeight = ModelBase::getField(val, "BulletHeight");
	if(jsonForBulletHeight != nullptr && !jsonForBulletHeight->is_null() && jsonForBulletHeight->is_number())
	{
		setBulletHeight(ModelBase::doubleFromJson(*jsonForBulletHeight));
	}
	web::json::value* jsonForBulletType = ModelBase::getField(val, "BulletType");
	if(jsonForBulletType != nullptr && !jsonForBulletType->is_null())
	{
		setBulletType(ModelBase::stringFromJson(*jsonForBulletType));
	}
	web::json::value* jsonForNumberedBulletStartWith = ModelBase::getField(val, "NumberedBulletStartWith");
	if(jsonForNumberedBulletStartWith != nullptr && !jsonForNumberedBulletStartWith->is_null() && jsonForNumberedBulletStartWith->is_number())
	{
		setNumberedBulletStartWith(ModelBase::int32_tFromJson(*jsonForNumberedBulletStartWith));
	}
	web::json::value* jsonForNumberedBulletStyle = ModelBase::getField(val, "NumberedBulletStyle");
	if(jsonForNumberedBulletStyle != nullptr && !jsonForNumberedBulletStyle->is_null())
	{
		setNumberedBulletStyle(ModelBase::stringFromJson(*jsonForNumberedBulletStyle));
	}
	web::json::value* jsonForBulletFillFormat = ModelBase::getField(val, "BulletFillFormat");
	if(jsonForBulletFillFormat != nullptr && !jsonForBulletFillFormat->is_null())
	{
		std::shared_ptr<void> instanceForBulletFillFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"FillFormat", *jsonForBulletFillFormat);
		setBulletFillFormat(std::static_pointer_cast<FillFormat>(instanceForBulletFillFormat));
	}
}

}
}

