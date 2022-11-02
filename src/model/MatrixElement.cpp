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
#include "MatrixElement.h"

namespace asposeslidescloud {
namespace model {

MatrixElement::MatrixElement()
{
	m_HidePlaceholdersIsSet = false;
	m_MinColumnWidthIsSet = false;
	m_ColumnGapIsSet = false;
	m_RowGapIsSet = false;
	setType(L"Matrix");
}

MatrixElement::~MatrixElement()
{
}

bool MatrixElement::getHidePlaceholders() const
{
	return m_HidePlaceholders;
}

void MatrixElement::setHidePlaceholders(bool value)
{
	m_HidePlaceholders = value;
	m_HidePlaceholdersIsSet = true;
}

bool MatrixElement::hidePlaceholdersIsSet() const
{
	return m_HidePlaceholdersIsSet;
}

void MatrixElement::unsetHidePlaceholders()
{
	m_HidePlaceholdersIsSet = false;
}

utility::string_t MatrixElement::getBaseJustification() const
{
	return m_BaseJustification;
}

void MatrixElement::setBaseJustification(utility::string_t value)
{
	m_BaseJustification = value;
	
}

int32_t MatrixElement::getMinColumnWidth() const
{
	return m_MinColumnWidth;
}

void MatrixElement::setMinColumnWidth(int32_t value)
{
	m_MinColumnWidth = value;
	m_MinColumnWidthIsSet = true;
}

bool MatrixElement::minColumnWidthIsSet() const
{
	return m_MinColumnWidthIsSet;
}

void MatrixElement::unsetMinColumnWidth()
{
	m_MinColumnWidthIsSet = false;
}

utility::string_t MatrixElement::getColumnGapRule() const
{
	return m_ColumnGapRule;
}

void MatrixElement::setColumnGapRule(utility::string_t value)
{
	m_ColumnGapRule = value;
	
}

int32_t MatrixElement::getColumnGap() const
{
	return m_ColumnGap;
}

void MatrixElement::setColumnGap(int32_t value)
{
	m_ColumnGap = value;
	m_ColumnGapIsSet = true;
}

bool MatrixElement::columnGapIsSet() const
{
	return m_ColumnGapIsSet;
}

void MatrixElement::unsetColumnGap()
{
	m_ColumnGapIsSet = false;
}

utility::string_t MatrixElement::getRowGapRule() const
{
	return m_RowGapRule;
}

void MatrixElement::setRowGapRule(utility::string_t value)
{
	m_RowGapRule = value;
	
}

int32_t MatrixElement::getRowGap() const
{
	return m_RowGap;
}

void MatrixElement::setRowGap(int32_t value)
{
	m_RowGap = value;
	m_RowGapIsSet = true;
}

bool MatrixElement::rowGapIsSet() const
{
	return m_RowGapIsSet;
}

void MatrixElement::unsetRowGap()
{
	m_RowGapIsSet = false;
}

std::vector<std::vector<std::shared_ptr<MathElement>>> MatrixElement::getItems() const
{
	return m_Items;
}

void MatrixElement::setItems(std::vector<std::vector<std::shared_ptr<MathElement>>> value)
{
	m_Items = value;
	
}

web::json::value MatrixElement::toJson() const
{
	web::json::value val = this->MathElement::toJson();
	if(m_HidePlaceholdersIsSet)
	{
		val[utility::conversions::to_string_t("HidePlaceholders")] = ModelBase::toJson(m_HidePlaceholders);
	}
	if (!m_BaseJustification.empty())
	{
		val[utility::conversions::to_string_t("BaseJustification")] = ModelBase::toJson(m_BaseJustification);
	}
	if(m_MinColumnWidthIsSet)
	{
		val[utility::conversions::to_string_t("MinColumnWidth")] = ModelBase::toJson(m_MinColumnWidth);
	}
	if (!m_ColumnGapRule.empty())
	{
		val[utility::conversions::to_string_t("ColumnGapRule")] = ModelBase::toJson(m_ColumnGapRule);
	}
	if(m_ColumnGapIsSet)
	{
		val[utility::conversions::to_string_t("ColumnGap")] = ModelBase::toJson(m_ColumnGap);
	}
	if (!m_RowGapRule.empty())
	{
		val[utility::conversions::to_string_t("RowGapRule")] = ModelBase::toJson(m_RowGapRule);
	}
	if(m_RowGapIsSet)
	{
		val[utility::conversions::to_string_t("RowGap")] = ModelBase::toJson(m_RowGap);
	}
	return val;
}

void MatrixElement::fromJson(web::json::value& val)
{
	this->MathElement::fromJson(val);
	web::json::value* jsonForHidePlaceholders = ModelBase::getField(val, "HidePlaceholders");
	if(jsonForHidePlaceholders != nullptr && !jsonForHidePlaceholders->is_null())
	{
		setHidePlaceholders(ModelBase::boolFromJson(*jsonForHidePlaceholders));
	}
	web::json::value* jsonForBaseJustification = ModelBase::getField(val, "BaseJustification");
	if(jsonForBaseJustification != nullptr && !jsonForBaseJustification->is_null())
	{
		setBaseJustification(ModelBase::stringFromJson(*jsonForBaseJustification));
	}
	web::json::value* jsonForMinColumnWidth = ModelBase::getField(val, "MinColumnWidth");
	if(jsonForMinColumnWidth != nullptr && !jsonForMinColumnWidth->is_null() && jsonForMinColumnWidth->is_number())
	{
		setMinColumnWidth(ModelBase::int32_tFromJson(*jsonForMinColumnWidth));
	}
	web::json::value* jsonForColumnGapRule = ModelBase::getField(val, "ColumnGapRule");
	if(jsonForColumnGapRule != nullptr && !jsonForColumnGapRule->is_null())
	{
		setColumnGapRule(ModelBase::stringFromJson(*jsonForColumnGapRule));
	}
	web::json::value* jsonForColumnGap = ModelBase::getField(val, "ColumnGap");
	if(jsonForColumnGap != nullptr && !jsonForColumnGap->is_null() && jsonForColumnGap->is_number())
	{
		setColumnGap(ModelBase::int32_tFromJson(*jsonForColumnGap));
	}
	web::json::value* jsonForRowGapRule = ModelBase::getField(val, "RowGapRule");
	if(jsonForRowGapRule != nullptr && !jsonForRowGapRule->is_null())
	{
		setRowGapRule(ModelBase::stringFromJson(*jsonForRowGapRule));
	}
	web::json::value* jsonForRowGap = ModelBase::getField(val, "RowGap");
	if(jsonForRowGap != nullptr && !jsonForRowGap->is_null() && jsonForRowGap->is_number())
	{
		setRowGap(ModelBase::int32_tFromJson(*jsonForRowGap));
	}
	web::json::value* jsonForItems = ModelBase::getField(val, "Items");
	if(jsonForItems != nullptr && !jsonForItems->is_null())
	{
		{
			m_Items.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForItems->as_array())
			{
			}
        	}
	}
}

}
}

