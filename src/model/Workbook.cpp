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
#include "Workbook.h"

namespace asposeslidescloud {
namespace model {

Workbook::Workbook()
{
	setType(L"Workbook");
	setWorksheetIndex(0);
	setColumnIndex(0);
	setRowIndex(0);
}

Workbook::~Workbook()
{
}

int32_t Workbook::getWorksheetIndex() const
{
	return m_WorksheetIndex;
}

void Workbook::setWorksheetIndex(int32_t value)
{
	m_WorksheetIndex = value;
	
}

int32_t Workbook::getColumnIndex() const
{
	return m_ColumnIndex;
}

void Workbook::setColumnIndex(int32_t value)
{
	m_ColumnIndex = value;
	
}

int32_t Workbook::getRowIndex() const
{
	return m_RowIndex;
}

void Workbook::setRowIndex(int32_t value)
{
	m_RowIndex = value;
	
}

web::json::value Workbook::toJson() const
{
	web::json::value val = this->DataSource::toJson();
	val[utility::conversions::to_string_t("WorksheetIndex")] = ModelBase::toJson(m_WorksheetIndex);
	val[utility::conversions::to_string_t("ColumnIndex")] = ModelBase::toJson(m_ColumnIndex);
	val[utility::conversions::to_string_t("RowIndex")] = ModelBase::toJson(m_RowIndex);
	return val;
}

void Workbook::fromJson(web::json::value& val)
{
	this->DataSource::fromJson(val);
	web::json::value* jsonForWorksheetIndex = ModelBase::getField(val, "WorksheetIndex");
	if(jsonForWorksheetIndex != nullptr && !jsonForWorksheetIndex->is_null() && jsonForWorksheetIndex->is_number())
	{
		setWorksheetIndex(ModelBase::int32_tFromJson(*jsonForWorksheetIndex));
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

