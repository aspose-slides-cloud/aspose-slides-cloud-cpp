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
#include "Table.h"

namespace asposeslidescloud {
namespace model {

Table::Table()
{
	m_FirstColIsSet = false;
	m_FirstRowIsSet = false;
	m_HorizontalBandingIsSet = false;
	m_LastColIsSet = false;
	m_LastRowIsSet = false;
	m_RightToLeftIsSet = false;
	m_VerticalBandingIsSet = false;
	setType(L"Table");
}

Table::~Table()
{
}

utility::string_t Table::getStyle() const
{
	return m_Style;
}

void Table::setStyle(utility::string_t value)
{
	m_Style = value;
	
}

std::vector<std::shared_ptr<TableRow>> Table::getRows() const
{
	return m_Rows;
}

void Table::setRows(std::vector<std::shared_ptr<TableRow>> value)
{
	m_Rows = value;
	
}

std::vector<std::shared_ptr<TableColumn>> Table::getColumns() const
{
	return m_Columns;
}

void Table::setColumns(std::vector<std::shared_ptr<TableColumn>> value)
{
	m_Columns = value;
	
}

bool Table::getFirstCol() const
{
	return m_FirstCol;
}

void Table::setFirstCol(bool value)
{
	m_FirstCol = value;
	m_FirstColIsSet = true;
}

bool Table::firstColIsSet() const
{
	return m_FirstColIsSet;
}

void Table::unsetFirstCol()
{
	m_FirstColIsSet = false;
}

bool Table::getFirstRow() const
{
	return m_FirstRow;
}

void Table::setFirstRow(bool value)
{
	m_FirstRow = value;
	m_FirstRowIsSet = true;
}

bool Table::firstRowIsSet() const
{
	return m_FirstRowIsSet;
}

void Table::unsetFirstRow()
{
	m_FirstRowIsSet = false;
}

bool Table::getHorizontalBanding() const
{
	return m_HorizontalBanding;
}

void Table::setHorizontalBanding(bool value)
{
	m_HorizontalBanding = value;
	m_HorizontalBandingIsSet = true;
}

bool Table::horizontalBandingIsSet() const
{
	return m_HorizontalBandingIsSet;
}

void Table::unsetHorizontalBanding()
{
	m_HorizontalBandingIsSet = false;
}

bool Table::getLastCol() const
{
	return m_LastCol;
}

void Table::setLastCol(bool value)
{
	m_LastCol = value;
	m_LastColIsSet = true;
}

bool Table::lastColIsSet() const
{
	return m_LastColIsSet;
}

void Table::unsetLastCol()
{
	m_LastColIsSet = false;
}

bool Table::getLastRow() const
{
	return m_LastRow;
}

void Table::setLastRow(bool value)
{
	m_LastRow = value;
	m_LastRowIsSet = true;
}

bool Table::lastRowIsSet() const
{
	return m_LastRowIsSet;
}

void Table::unsetLastRow()
{
	m_LastRowIsSet = false;
}

bool Table::getRightToLeft() const
{
	return m_RightToLeft;
}

void Table::setRightToLeft(bool value)
{
	m_RightToLeft = value;
	m_RightToLeftIsSet = true;
}

bool Table::rightToLeftIsSet() const
{
	return m_RightToLeftIsSet;
}

void Table::unsetRightToLeft()
{
	m_RightToLeftIsSet = false;
}

bool Table::getVerticalBanding() const
{
	return m_VerticalBanding;
}

void Table::setVerticalBanding(bool value)
{
	m_VerticalBanding = value;
	m_VerticalBandingIsSet = true;
}

bool Table::verticalBandingIsSet() const
{
	return m_VerticalBandingIsSet;
}

void Table::unsetVerticalBanding()
{
	m_VerticalBandingIsSet = false;
}

web::json::value Table::toJson() const
{
	web::json::value val = this->ShapeBase::toJson();
	if (!m_Style.empty())
	{
		val[utility::conversions::to_string_t("Style")] = ModelBase::toJson(m_Style);
	}
	if (m_Rows.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Rows)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Rows")] = web::json::value::array(jsonArray);
	}
	if (m_Columns.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Columns)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Columns")] = web::json::value::array(jsonArray);
	}
	if(m_FirstColIsSet)
	{
		val[utility::conversions::to_string_t("FirstCol")] = ModelBase::toJson(m_FirstCol);
	}
	if(m_FirstRowIsSet)
	{
		val[utility::conversions::to_string_t("FirstRow")] = ModelBase::toJson(m_FirstRow);
	}
	if(m_HorizontalBandingIsSet)
	{
		val[utility::conversions::to_string_t("HorizontalBanding")] = ModelBase::toJson(m_HorizontalBanding);
	}
	if(m_LastColIsSet)
	{
		val[utility::conversions::to_string_t("LastCol")] = ModelBase::toJson(m_LastCol);
	}
	if(m_LastRowIsSet)
	{
		val[utility::conversions::to_string_t("LastRow")] = ModelBase::toJson(m_LastRow);
	}
	if(m_RightToLeftIsSet)
	{
		val[utility::conversions::to_string_t("RightToLeft")] = ModelBase::toJson(m_RightToLeft);
	}
	if(m_VerticalBandingIsSet)
	{
		val[utility::conversions::to_string_t("VerticalBanding")] = ModelBase::toJson(m_VerticalBanding);
	}
	return val;
}

void Table::fromJson(web::json::value& val)
{
	this->ShapeBase::fromJson(val);
	web::json::value* jsonForStyle = ModelBase::getField(val, "Style");
	if(jsonForStyle != nullptr && !jsonForStyle->is_null())
	{
		setStyle(ModelBase::stringFromJson(*jsonForStyle));
	}
	web::json::value* jsonForRows = ModelBase::getField(val, "Rows");
	if(jsonForRows != nullptr && !jsonForRows->is_null())
	{
		{
			m_Rows.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForRows->as_array())
			{
				if(item.is_null())
				{
					m_Rows.push_back(std::shared_ptr<TableRow>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"TableRow", item);
					m_Rows.push_back(std::static_pointer_cast<TableRow>(newItem));
				}
			}
        	}
	}
	web::json::value* jsonForColumns = ModelBase::getField(val, "Columns");
	if(jsonForColumns != nullptr && !jsonForColumns->is_null())
	{
		{
			m_Columns.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForColumns->as_array())
			{
				if(item.is_null())
				{
					m_Columns.push_back(std::shared_ptr<TableColumn>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"TableColumn", item);
					m_Columns.push_back(std::static_pointer_cast<TableColumn>(newItem));
				}
			}
        	}
	}
	web::json::value* jsonForFirstCol = ModelBase::getField(val, "FirstCol");
	if(jsonForFirstCol != nullptr && !jsonForFirstCol->is_null())
	{
		setFirstCol(ModelBase::boolFromJson(*jsonForFirstCol));
	}
	web::json::value* jsonForFirstRow = ModelBase::getField(val, "FirstRow");
	if(jsonForFirstRow != nullptr && !jsonForFirstRow->is_null())
	{
		setFirstRow(ModelBase::boolFromJson(*jsonForFirstRow));
	}
	web::json::value* jsonForHorizontalBanding = ModelBase::getField(val, "HorizontalBanding");
	if(jsonForHorizontalBanding != nullptr && !jsonForHorizontalBanding->is_null())
	{
		setHorizontalBanding(ModelBase::boolFromJson(*jsonForHorizontalBanding));
	}
	web::json::value* jsonForLastCol = ModelBase::getField(val, "LastCol");
	if(jsonForLastCol != nullptr && !jsonForLastCol->is_null())
	{
		setLastCol(ModelBase::boolFromJson(*jsonForLastCol));
	}
	web::json::value* jsonForLastRow = ModelBase::getField(val, "LastRow");
	if(jsonForLastRow != nullptr && !jsonForLastRow->is_null())
	{
		setLastRow(ModelBase::boolFromJson(*jsonForLastRow));
	}
	web::json::value* jsonForRightToLeft = ModelBase::getField(val, "RightToLeft");
	if(jsonForRightToLeft != nullptr && !jsonForRightToLeft->is_null())
	{
		setRightToLeft(ModelBase::boolFromJson(*jsonForRightToLeft));
	}
	web::json::value* jsonForVerticalBanding = ModelBase::getField(val, "VerticalBanding");
	if(jsonForVerticalBanding != nullptr && !jsonForVerticalBanding->is_null())
	{
		setVerticalBanding(ModelBase::boolFromJson(*jsonForVerticalBanding));
	}
}

}
}

