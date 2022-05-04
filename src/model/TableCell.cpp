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



#include "TableCell.h"

namespace asposeslidescloud {
namespace model {

TableCell::TableCell()
{
	m_RowSpanIsSet = false;
	m_ColSpanIsSet = false;
	m_MarginTopIsSet = false;
	m_MarginRightIsSet = false;
	m_MarginLeftIsSet = false;
	m_MarginBottomIsSet = false;
	m_ColumnIndexIsSet = false;
	m_RowIndexIsSet = false;
}

TableCell::~TableCell()
{
}

utility::string_t TableCell::getText() const
{
	return m_Text;
}

void TableCell::setText(utility::string_t value)
{
	m_Text = value;
	
}

int32_t TableCell::getRowSpan() const
{
	return m_RowSpan;
}

void TableCell::setRowSpan(int32_t value)
{
	m_RowSpan = value;
	m_RowSpanIsSet = true;
}

bool TableCell::rowSpanIsSet() const
{
	return m_RowSpanIsSet;
}

void TableCell::unsetRowSpan()
{
	m_RowSpanIsSet = false;
}

int32_t TableCell::getColSpan() const
{
	return m_ColSpan;
}

void TableCell::setColSpan(int32_t value)
{
	m_ColSpan = value;
	m_ColSpanIsSet = true;
}

bool TableCell::colSpanIsSet() const
{
	return m_ColSpanIsSet;
}

void TableCell::unsetColSpan()
{
	m_ColSpanIsSet = false;
}

double TableCell::getMarginTop() const
{
	return m_MarginTop;
}

void TableCell::setMarginTop(double value)
{
	m_MarginTop = value;
	m_MarginTopIsSet = true;
}

bool TableCell::marginTopIsSet() const
{
	return m_MarginTopIsSet;
}

void TableCell::unsetMarginTop()
{
	m_MarginTopIsSet = false;
}

double TableCell::getMarginRight() const
{
	return m_MarginRight;
}

void TableCell::setMarginRight(double value)
{
	m_MarginRight = value;
	m_MarginRightIsSet = true;
}

bool TableCell::marginRightIsSet() const
{
	return m_MarginRightIsSet;
}

void TableCell::unsetMarginRight()
{
	m_MarginRightIsSet = false;
}

double TableCell::getMarginLeft() const
{
	return m_MarginLeft;
}

void TableCell::setMarginLeft(double value)
{
	m_MarginLeft = value;
	m_MarginLeftIsSet = true;
}

bool TableCell::marginLeftIsSet() const
{
	return m_MarginLeftIsSet;
}

void TableCell::unsetMarginLeft()
{
	m_MarginLeftIsSet = false;
}

double TableCell::getMarginBottom() const
{
	return m_MarginBottom;
}

void TableCell::setMarginBottom(double value)
{
	m_MarginBottom = value;
	m_MarginBottomIsSet = true;
}

bool TableCell::marginBottomIsSet() const
{
	return m_MarginBottomIsSet;
}

void TableCell::unsetMarginBottom()
{
	m_MarginBottomIsSet = false;
}

utility::string_t TableCell::getTextAnchorType() const
{
	return m_TextAnchorType;
}

void TableCell::setTextAnchorType(utility::string_t value)
{
	m_TextAnchorType = value;
	
}

utility::string_t TableCell::getTextVerticalType() const
{
	return m_TextVerticalType;
}

void TableCell::setTextVerticalType(utility::string_t value)
{
	m_TextVerticalType = value;
	
}

std::shared_ptr<FillFormat> TableCell::getFillFormat() const
{
	return m_FillFormat;
}

void TableCell::setFillFormat(std::shared_ptr<FillFormat> value)
{
	m_FillFormat = value;
	
}

std::shared_ptr<LineFormat> TableCell::getBorderTop() const
{
	return m_BorderTop;
}

void TableCell::setBorderTop(std::shared_ptr<LineFormat> value)
{
	m_BorderTop = value;
	
}

std::shared_ptr<LineFormat> TableCell::getBorderRight() const
{
	return m_BorderRight;
}

void TableCell::setBorderRight(std::shared_ptr<LineFormat> value)
{
	m_BorderRight = value;
	
}

std::shared_ptr<LineFormat> TableCell::getBorderLeft() const
{
	return m_BorderLeft;
}

void TableCell::setBorderLeft(std::shared_ptr<LineFormat> value)
{
	m_BorderLeft = value;
	
}

std::shared_ptr<LineFormat> TableCell::getBorderBottom() const
{
	return m_BorderBottom;
}

void TableCell::setBorderBottom(std::shared_ptr<LineFormat> value)
{
	m_BorderBottom = value;
	
}

std::shared_ptr<LineFormat> TableCell::getBorderDiagonalUp() const
{
	return m_BorderDiagonalUp;
}

void TableCell::setBorderDiagonalUp(std::shared_ptr<LineFormat> value)
{
	m_BorderDiagonalUp = value;
	
}

std::shared_ptr<LineFormat> TableCell::getBorderDiagonalDown() const
{
	return m_BorderDiagonalDown;
}

void TableCell::setBorderDiagonalDown(std::shared_ptr<LineFormat> value)
{
	m_BorderDiagonalDown = value;
	
}

int32_t TableCell::getColumnIndex() const
{
	return m_ColumnIndex;
}

void TableCell::setColumnIndex(int32_t value)
{
	m_ColumnIndex = value;
	m_ColumnIndexIsSet = true;
}

bool TableCell::columnIndexIsSet() const
{
	return m_ColumnIndexIsSet;
}

void TableCell::unsetColumnIndex()
{
	m_ColumnIndexIsSet = false;
}

int32_t TableCell::getRowIndex() const
{
	return m_RowIndex;
}

void TableCell::setRowIndex(int32_t value)
{
	m_RowIndex = value;
	m_RowIndexIsSet = true;
}

bool TableCell::rowIndexIsSet() const
{
	return m_RowIndexIsSet;
}

void TableCell::unsetRowIndex()
{
	m_RowIndexIsSet = false;
}

web::json::value TableCell::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Text.empty())
	{
		val[utility::conversions::to_string_t("Text")] = ModelBase::toJson(m_Text);
	}
	if(m_RowSpanIsSet)
	{
		val[utility::conversions::to_string_t("RowSpan")] = ModelBase::toJson(m_RowSpan);
	}
	if(m_ColSpanIsSet)
	{
		val[utility::conversions::to_string_t("ColSpan")] = ModelBase::toJson(m_ColSpan);
	}
	if(m_MarginTopIsSet)
	{
		val[utility::conversions::to_string_t("MarginTop")] = ModelBase::toJson(m_MarginTop);
	}
	if(m_MarginRightIsSet)
	{
		val[utility::conversions::to_string_t("MarginRight")] = ModelBase::toJson(m_MarginRight);
	}
	if(m_MarginLeftIsSet)
	{
		val[utility::conversions::to_string_t("MarginLeft")] = ModelBase::toJson(m_MarginLeft);
	}
	if(m_MarginBottomIsSet)
	{
		val[utility::conversions::to_string_t("MarginBottom")] = ModelBase::toJson(m_MarginBottom);
	}
	if (!m_TextAnchorType.empty())
	{
		val[utility::conversions::to_string_t("TextAnchorType")] = ModelBase::toJson(m_TextAnchorType);
	}
	if (!m_TextVerticalType.empty())
	{
		val[utility::conversions::to_string_t("TextVerticalType")] = ModelBase::toJson(m_TextVerticalType);
	}
	if (m_FillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("FillFormat")] = ModelBase::toJson(m_FillFormat);
	}
	if (m_BorderTop != nullptr)
	{
		val[utility::conversions::to_string_t("BorderTop")] = ModelBase::toJson(m_BorderTop);
	}
	if (m_BorderRight != nullptr)
	{
		val[utility::conversions::to_string_t("BorderRight")] = ModelBase::toJson(m_BorderRight);
	}
	if (m_BorderLeft != nullptr)
	{
		val[utility::conversions::to_string_t("BorderLeft")] = ModelBase::toJson(m_BorderLeft);
	}
	if (m_BorderBottom != nullptr)
	{
		val[utility::conversions::to_string_t("BorderBottom")] = ModelBase::toJson(m_BorderBottom);
	}
	if (m_BorderDiagonalUp != nullptr)
	{
		val[utility::conversions::to_string_t("BorderDiagonalUp")] = ModelBase::toJson(m_BorderDiagonalUp);
	}
	if (m_BorderDiagonalDown != nullptr)
	{
		val[utility::conversions::to_string_t("BorderDiagonalDown")] = ModelBase::toJson(m_BorderDiagonalDown);
	}
	if(m_ColumnIndexIsSet)
	{
		val[utility::conversions::to_string_t("ColumnIndex")] = ModelBase::toJson(m_ColumnIndex);
	}
	if(m_RowIndexIsSet)
	{
		val[utility::conversions::to_string_t("RowIndex")] = ModelBase::toJson(m_RowIndex);
	}
	return val;
}

void TableCell::fromJson(web::json::value& val)
{
	web::json::value* jsonForText = ModelBase::getField(val, "Text");
	if(jsonForText != nullptr && !jsonForText->is_null())
	{
		setText(ModelBase::stringFromJson(*jsonForText));
	}
	web::json::value* jsonForRowSpan = ModelBase::getField(val, "RowSpan");
	if(jsonForRowSpan != nullptr && !jsonForRowSpan->is_null() && jsonForRowSpan->is_number())
	{
		setRowSpan(ModelBase::int32_tFromJson(*jsonForRowSpan));
	}
	web::json::value* jsonForColSpan = ModelBase::getField(val, "ColSpan");
	if(jsonForColSpan != nullptr && !jsonForColSpan->is_null() && jsonForColSpan->is_number())
	{
		setColSpan(ModelBase::int32_tFromJson(*jsonForColSpan));
	}
	web::json::value* jsonForMarginTop = ModelBase::getField(val, "MarginTop");
	if(jsonForMarginTop != nullptr && !jsonForMarginTop->is_null() && jsonForMarginTop->is_number())
	{
		setMarginTop(ModelBase::doubleFromJson(*jsonForMarginTop));
	}
	web::json::value* jsonForMarginRight = ModelBase::getField(val, "MarginRight");
	if(jsonForMarginRight != nullptr && !jsonForMarginRight->is_null() && jsonForMarginRight->is_number())
	{
		setMarginRight(ModelBase::doubleFromJson(*jsonForMarginRight));
	}
	web::json::value* jsonForMarginLeft = ModelBase::getField(val, "MarginLeft");
	if(jsonForMarginLeft != nullptr && !jsonForMarginLeft->is_null() && jsonForMarginLeft->is_number())
	{
		setMarginLeft(ModelBase::doubleFromJson(*jsonForMarginLeft));
	}
	web::json::value* jsonForMarginBottom = ModelBase::getField(val, "MarginBottom");
	if(jsonForMarginBottom != nullptr && !jsonForMarginBottom->is_null() && jsonForMarginBottom->is_number())
	{
		setMarginBottom(ModelBase::doubleFromJson(*jsonForMarginBottom));
	}
	web::json::value* jsonForTextAnchorType = ModelBase::getField(val, "TextAnchorType");
	if(jsonForTextAnchorType != nullptr && !jsonForTextAnchorType->is_null())
	{
		setTextAnchorType(ModelBase::stringFromJson(*jsonForTextAnchorType));
	}
	web::json::value* jsonForTextVerticalType = ModelBase::getField(val, "TextVerticalType");
	if(jsonForTextVerticalType != nullptr && !jsonForTextVerticalType->is_null())
	{
		setTextVerticalType(ModelBase::stringFromJson(*jsonForTextVerticalType));
	}
	web::json::value* jsonForFillFormat = ModelBase::getField(val, "FillFormat");
	if(jsonForFillFormat != nullptr && !jsonForFillFormat->is_null())
	{
		std::shared_ptr<FillFormat> newItem(new FillFormat());
		newItem->fromJson(*jsonForFillFormat);
		setFillFormat(newItem);
	}
	web::json::value* jsonForBorderTop = ModelBase::getField(val, "BorderTop");
	if(jsonForBorderTop != nullptr && !jsonForBorderTop->is_null())
	{
		std::shared_ptr<LineFormat> newItem(new LineFormat());
		newItem->fromJson(*jsonForBorderTop);
		setBorderTop(newItem);
	}
	web::json::value* jsonForBorderRight = ModelBase::getField(val, "BorderRight");
	if(jsonForBorderRight != nullptr && !jsonForBorderRight->is_null())
	{
		std::shared_ptr<LineFormat> newItem(new LineFormat());
		newItem->fromJson(*jsonForBorderRight);
		setBorderRight(newItem);
	}
	web::json::value* jsonForBorderLeft = ModelBase::getField(val, "BorderLeft");
	if(jsonForBorderLeft != nullptr && !jsonForBorderLeft->is_null())
	{
		std::shared_ptr<LineFormat> newItem(new LineFormat());
		newItem->fromJson(*jsonForBorderLeft);
		setBorderLeft(newItem);
	}
	web::json::value* jsonForBorderBottom = ModelBase::getField(val, "BorderBottom");
	if(jsonForBorderBottom != nullptr && !jsonForBorderBottom->is_null())
	{
		std::shared_ptr<LineFormat> newItem(new LineFormat());
		newItem->fromJson(*jsonForBorderBottom);
		setBorderBottom(newItem);
	}
	web::json::value* jsonForBorderDiagonalUp = ModelBase::getField(val, "BorderDiagonalUp");
	if(jsonForBorderDiagonalUp != nullptr && !jsonForBorderDiagonalUp->is_null())
	{
		std::shared_ptr<LineFormat> newItem(new LineFormat());
		newItem->fromJson(*jsonForBorderDiagonalUp);
		setBorderDiagonalUp(newItem);
	}
	web::json::value* jsonForBorderDiagonalDown = ModelBase::getField(val, "BorderDiagonalDown");
	if(jsonForBorderDiagonalDown != nullptr && !jsonForBorderDiagonalDown->is_null())
	{
		std::shared_ptr<LineFormat> newItem(new LineFormat());
		newItem->fromJson(*jsonForBorderDiagonalDown);
		setBorderDiagonalDown(newItem);
	}
	web::json::value* jsonForColumnIndex = ModelBase::getField(val, "ColumnIndex");
	if(jsonForColumnIndex != nullptr && !jsonForColumnIndex->is_null() && jsonForColumnIndex->is_number())
	{
		setColumnIndex(ModelBase::int32_tFromJson(*jsonForColumnIndex));
	}
	web::json::value* jsonForRowIndex = ModelBase::getField(val, "RowIndex");
	if(jsonForRowIndex != nullptr && !jsonForRowIndex->is_null() && jsonForRowIndex->is_number())
	{
		setRowIndex(ModelBase::int32_tFromJson(*jsonForRowIndex));
	}
}

}
}

