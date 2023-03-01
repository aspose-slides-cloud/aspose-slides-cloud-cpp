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
#include "TextFrameFormat.h"

namespace asposeslidescloud {
namespace model {

TextFrameFormat::TextFrameFormat()
{
	m_MarginLeftIsSet = false;
	m_MarginRightIsSet = false;
	m_MarginTopIsSet = false;
	m_MarginBottomIsSet = false;
	m_ColumnCountIsSet = false;
	m_ColumnSpacingIsSet = false;
	m_KeepTextFlatIsSet = false;
	m_RotationAngleIsSet = false;
}

TextFrameFormat::~TextFrameFormat()
{
}

std::shared_ptr<ThreeDFormat> TextFrameFormat::getThreeDFormat() const
{
	return m_ThreeDFormat;
}

void TextFrameFormat::setThreeDFormat(std::shared_ptr<ThreeDFormat> value)
{
	m_ThreeDFormat = value;
	
}

utility::string_t TextFrameFormat::getTransform() const
{
	return m_Transform;
}

void TextFrameFormat::setTransform(utility::string_t value)
{
	m_Transform = value;
	
}

double TextFrameFormat::getMarginLeft() const
{
	return m_MarginLeft;
}

void TextFrameFormat::setMarginLeft(double value)
{
	m_MarginLeft = value;
	m_MarginLeftIsSet = true;
}

bool TextFrameFormat::marginLeftIsSet() const
{
	return m_MarginLeftIsSet;
}

void TextFrameFormat::unsetMarginLeft()
{
	m_MarginLeftIsSet = false;
}

double TextFrameFormat::getMarginRight() const
{
	return m_MarginRight;
}

void TextFrameFormat::setMarginRight(double value)
{
	m_MarginRight = value;
	m_MarginRightIsSet = true;
}

bool TextFrameFormat::marginRightIsSet() const
{
	return m_MarginRightIsSet;
}

void TextFrameFormat::unsetMarginRight()
{
	m_MarginRightIsSet = false;
}

double TextFrameFormat::getMarginTop() const
{
	return m_MarginTop;
}

void TextFrameFormat::setMarginTop(double value)
{
	m_MarginTop = value;
	m_MarginTopIsSet = true;
}

bool TextFrameFormat::marginTopIsSet() const
{
	return m_MarginTopIsSet;
}

void TextFrameFormat::unsetMarginTop()
{
	m_MarginTopIsSet = false;
}

double TextFrameFormat::getMarginBottom() const
{
	return m_MarginBottom;
}

void TextFrameFormat::setMarginBottom(double value)
{
	m_MarginBottom = value;
	m_MarginBottomIsSet = true;
}

bool TextFrameFormat::marginBottomIsSet() const
{
	return m_MarginBottomIsSet;
}

void TextFrameFormat::unsetMarginBottom()
{
	m_MarginBottomIsSet = false;
}

utility::string_t TextFrameFormat::getWrapText() const
{
	return m_WrapText;
}

void TextFrameFormat::setWrapText(utility::string_t value)
{
	m_WrapText = value;
	
}

utility::string_t TextFrameFormat::getAnchoringType() const
{
	return m_AnchoringType;
}

void TextFrameFormat::setAnchoringType(utility::string_t value)
{
	m_AnchoringType = value;
	
}

utility::string_t TextFrameFormat::getCenterText() const
{
	return m_CenterText;
}

void TextFrameFormat::setCenterText(utility::string_t value)
{
	m_CenterText = value;
	
}

utility::string_t TextFrameFormat::getTextVerticalType() const
{
	return m_TextVerticalType;
}

void TextFrameFormat::setTextVerticalType(utility::string_t value)
{
	m_TextVerticalType = value;
	
}

utility::string_t TextFrameFormat::getAutofitType() const
{
	return m_AutofitType;
}

void TextFrameFormat::setAutofitType(utility::string_t value)
{
	m_AutofitType = value;
	
}

int32_t TextFrameFormat::getColumnCount() const
{
	return m_ColumnCount;
}

void TextFrameFormat::setColumnCount(int32_t value)
{
	m_ColumnCount = value;
	m_ColumnCountIsSet = true;
}

bool TextFrameFormat::columnCountIsSet() const
{
	return m_ColumnCountIsSet;
}

void TextFrameFormat::unsetColumnCount()
{
	m_ColumnCountIsSet = false;
}

double TextFrameFormat::getColumnSpacing() const
{
	return m_ColumnSpacing;
}

void TextFrameFormat::setColumnSpacing(double value)
{
	m_ColumnSpacing = value;
	m_ColumnSpacingIsSet = true;
}

bool TextFrameFormat::columnSpacingIsSet() const
{
	return m_ColumnSpacingIsSet;
}

void TextFrameFormat::unsetColumnSpacing()
{
	m_ColumnSpacingIsSet = false;
}

bool TextFrameFormat::isKeepTextFlat() const
{
	return m_KeepTextFlat;
}

void TextFrameFormat::setKeepTextFlat(bool value)
{
	m_KeepTextFlat = value;
	m_KeepTextFlatIsSet = true;
}

bool TextFrameFormat::keepTextFlatIsSet() const
{
	return m_KeepTextFlatIsSet;
}

void TextFrameFormat::unsetKeepTextFlat()
{
	m_KeepTextFlatIsSet = false;
}

double TextFrameFormat::getRotationAngle() const
{
	return m_RotationAngle;
}

void TextFrameFormat::setRotationAngle(double value)
{
	m_RotationAngle = value;
	m_RotationAngleIsSet = true;
}

bool TextFrameFormat::rotationAngleIsSet() const
{
	return m_RotationAngleIsSet;
}

void TextFrameFormat::unsetRotationAngle()
{
	m_RotationAngleIsSet = false;
}

std::shared_ptr<ParagraphFormat> TextFrameFormat::getDefaultParagraphFormat() const
{
	return m_DefaultParagraphFormat;
}

void TextFrameFormat::setDefaultParagraphFormat(std::shared_ptr<ParagraphFormat> value)
{
	m_DefaultParagraphFormat = value;
	
}

web::json::value TextFrameFormat::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_ThreeDFormat != nullptr)
	{
		val[utility::conversions::to_string_t("ThreeDFormat")] = ModelBase::toJson(m_ThreeDFormat);
	}
	if (!m_Transform.empty())
	{
		val[utility::conversions::to_string_t("Transform")] = ModelBase::toJson(m_Transform);
	}
	if(m_MarginLeftIsSet)
	{
		val[utility::conversions::to_string_t("MarginLeft")] = ModelBase::toJson(m_MarginLeft);
	}
	if(m_MarginRightIsSet)
	{
		val[utility::conversions::to_string_t("MarginRight")] = ModelBase::toJson(m_MarginRight);
	}
	if(m_MarginTopIsSet)
	{
		val[utility::conversions::to_string_t("MarginTop")] = ModelBase::toJson(m_MarginTop);
	}
	if(m_MarginBottomIsSet)
	{
		val[utility::conversions::to_string_t("MarginBottom")] = ModelBase::toJson(m_MarginBottom);
	}
	if (!m_WrapText.empty())
	{
		val[utility::conversions::to_string_t("WrapText")] = ModelBase::toJson(m_WrapText);
	}
	if (!m_AnchoringType.empty())
	{
		val[utility::conversions::to_string_t("AnchoringType")] = ModelBase::toJson(m_AnchoringType);
	}
	if (!m_CenterText.empty())
	{
		val[utility::conversions::to_string_t("CenterText")] = ModelBase::toJson(m_CenterText);
	}
	if (!m_TextVerticalType.empty())
	{
		val[utility::conversions::to_string_t("TextVerticalType")] = ModelBase::toJson(m_TextVerticalType);
	}
	if (!m_AutofitType.empty())
	{
		val[utility::conversions::to_string_t("AutofitType")] = ModelBase::toJson(m_AutofitType);
	}
	if(m_ColumnCountIsSet)
	{
		val[utility::conversions::to_string_t("ColumnCount")] = ModelBase::toJson(m_ColumnCount);
	}
	if(m_ColumnSpacingIsSet)
	{
		val[utility::conversions::to_string_t("ColumnSpacing")] = ModelBase::toJson(m_ColumnSpacing);
	}
	if(m_KeepTextFlatIsSet)
	{
		val[utility::conversions::to_string_t("KeepTextFlat")] = ModelBase::toJson(m_KeepTextFlat);
	}
	if(m_RotationAngleIsSet)
	{
		val[utility::conversions::to_string_t("RotationAngle")] = ModelBase::toJson(m_RotationAngle);
	}
	if (m_DefaultParagraphFormat != nullptr)
	{
		val[utility::conversions::to_string_t("DefaultParagraphFormat")] = ModelBase::toJson(m_DefaultParagraphFormat);
	}
	return val;
}

void TextFrameFormat::fromJson(web::json::value& val)
{
	web::json::value* jsonForThreeDFormat = ModelBase::getField(val, "ThreeDFormat");
	if(jsonForThreeDFormat != nullptr && !jsonForThreeDFormat->is_null())
	{
		std::shared_ptr<void> instanceForThreeDFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"ThreeDFormat", *jsonForThreeDFormat);
		setThreeDFormat(std::static_pointer_cast<ThreeDFormat>(instanceForThreeDFormat));
	}
	web::json::value* jsonForTransform = ModelBase::getField(val, "Transform");
	if(jsonForTransform != nullptr && !jsonForTransform->is_null())
	{
		setTransform(ModelBase::stringFromJson(*jsonForTransform));
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
	web::json::value* jsonForMarginTop = ModelBase::getField(val, "MarginTop");
	if(jsonForMarginTop != nullptr && !jsonForMarginTop->is_null() && jsonForMarginTop->is_number())
	{
		setMarginTop(ModelBase::doubleFromJson(*jsonForMarginTop));
	}
	web::json::value* jsonForMarginBottom = ModelBase::getField(val, "MarginBottom");
	if(jsonForMarginBottom != nullptr && !jsonForMarginBottom->is_null() && jsonForMarginBottom->is_number())
	{
		setMarginBottom(ModelBase::doubleFromJson(*jsonForMarginBottom));
	}
	web::json::value* jsonForWrapText = ModelBase::getField(val, "WrapText");
	if(jsonForWrapText != nullptr && !jsonForWrapText->is_null())
	{
		setWrapText(ModelBase::stringFromJson(*jsonForWrapText));
	}
	web::json::value* jsonForAnchoringType = ModelBase::getField(val, "AnchoringType");
	if(jsonForAnchoringType != nullptr && !jsonForAnchoringType->is_null())
	{
		setAnchoringType(ModelBase::stringFromJson(*jsonForAnchoringType));
	}
	web::json::value* jsonForCenterText = ModelBase::getField(val, "CenterText");
	if(jsonForCenterText != nullptr && !jsonForCenterText->is_null())
	{
		setCenterText(ModelBase::stringFromJson(*jsonForCenterText));
	}
	web::json::value* jsonForTextVerticalType = ModelBase::getField(val, "TextVerticalType");
	if(jsonForTextVerticalType != nullptr && !jsonForTextVerticalType->is_null())
	{
		setTextVerticalType(ModelBase::stringFromJson(*jsonForTextVerticalType));
	}
	web::json::value* jsonForAutofitType = ModelBase::getField(val, "AutofitType");
	if(jsonForAutofitType != nullptr && !jsonForAutofitType->is_null())
	{
		setAutofitType(ModelBase::stringFromJson(*jsonForAutofitType));
	}
	web::json::value* jsonForColumnCount = ModelBase::getField(val, "ColumnCount");
	if(jsonForColumnCount != nullptr && !jsonForColumnCount->is_null() && jsonForColumnCount->is_number())
	{
		setColumnCount(ModelBase::int32_tFromJson(*jsonForColumnCount));
	}
	web::json::value* jsonForColumnSpacing = ModelBase::getField(val, "ColumnSpacing");
	if(jsonForColumnSpacing != nullptr && !jsonForColumnSpacing->is_null() && jsonForColumnSpacing->is_number())
	{
		setColumnSpacing(ModelBase::doubleFromJson(*jsonForColumnSpacing));
	}
	web::json::value* jsonForKeepTextFlat = ModelBase::getField(val, "KeepTextFlat");
	if(jsonForKeepTextFlat != nullptr && !jsonForKeepTextFlat->is_null())
	{
		setKeepTextFlat(ModelBase::boolFromJson(*jsonForKeepTextFlat));
	}
	web::json::value* jsonForRotationAngle = ModelBase::getField(val, "RotationAngle");
	if(jsonForRotationAngle != nullptr && !jsonForRotationAngle->is_null() && jsonForRotationAngle->is_number())
	{
		setRotationAngle(ModelBase::doubleFromJson(*jsonForRotationAngle));
	}
	web::json::value* jsonForDefaultParagraphFormat = ModelBase::getField(val, "DefaultParagraphFormat");
	if(jsonForDefaultParagraphFormat != nullptr && !jsonForDefaultParagraphFormat->is_null())
	{
		std::shared_ptr<void> instanceForDefaultParagraphFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"ParagraphFormat", *jsonForDefaultParagraphFormat);
		setDefaultParagraphFormat(std::static_pointer_cast<ParagraphFormat>(instanceForDefaultParagraphFormat));
	}
}

}
}

