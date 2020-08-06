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



#include "TableRow.h"

namespace asposeslidescloud {
namespace model {

TableRow::TableRow()
{
}

TableRow::~TableRow()
{
}

std::vector<std::shared_ptr<TableCell>> TableRow::getCells() const
{
	return m_Cells;
}

void TableRow::setCells(std::vector<std::shared_ptr<TableCell>> value)
{
	m_Cells = value;
	
}

double TableRow::getMinimalHeight() const
{
	return m_MinimalHeight;
}

void TableRow::setMinimalHeight(double value)
{
	m_MinimalHeight = value;
	
}

double TableRow::getHeight() const
{
	return m_Height;
}

void TableRow::setHeight(double value)
{
	m_Height = value;
	
}

web::json::value TableRow::toJson() const
{
	web::json::value val = web::json::value::object();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Cells)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		if (jsonArray.size() > 0)
		{
			val[utility::conversions::to_string_t("Cells")] = web::json::value::array(jsonArray);
		}
	}
	val[utility::conversions::to_string_t("MinimalHeight")] = ModelBase::toJson(m_MinimalHeight);
	val[utility::conversions::to_string_t("Height")] = ModelBase::toJson(m_Height);
	return val;
}

void TableRow::fromJson(web::json::value& val)
{
	web::json::value* jsonForCells = ModelBase::getField(val, "Cells");
	if(jsonForCells != nullptr && !jsonForCells->is_null())
	{
		{
			m_Cells.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForCells->as_array())
			{
				if(item.is_null())
				{
					m_Cells.push_back(std::shared_ptr<TableCell>(nullptr));
				}
				else
				{
					std::shared_ptr<TableCell> newItem(new TableCell());
					newItem->fromJson(item);
					m_Cells.push_back( newItem );
				}
			}
        	}
	}
	web::json::value* jsonForMinimalHeight = ModelBase::getField(val, "MinimalHeight");
	if(jsonForMinimalHeight != nullptr && !jsonForMinimalHeight->is_null() && jsonForMinimalHeight->is_number())
	{
		setMinimalHeight(ModelBase::doubleFromJson(*jsonForMinimalHeight));
	}
	web::json::value* jsonForHeight = ModelBase::getField(val, "Height");
	if(jsonForHeight != nullptr && !jsonForHeight->is_null() && jsonForHeight->is_number())
	{
		setHeight(ModelBase::doubleFromJson(*jsonForHeight));
	}
}

}
}

