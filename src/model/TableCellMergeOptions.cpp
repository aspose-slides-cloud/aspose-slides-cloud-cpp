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
#include "TableCellMergeOptions.h"

namespace asposeslidescloud {
namespace model {

TableCellMergeOptions::TableCellMergeOptions()
{
	setFirstRowIndex(0);
	setFirstCellIndex(0);
	setLastRowIndex(0);
	setLastCellIndex(0);
}

TableCellMergeOptions::~TableCellMergeOptions()
{
}

int32_t TableCellMergeOptions::getFirstRowIndex() const
{
	return m_FirstRowIndex;
}

void TableCellMergeOptions::setFirstRowIndex(int32_t value)
{
	m_FirstRowIndex = value;
	
}

int32_t TableCellMergeOptions::getFirstCellIndex() const
{
	return m_FirstCellIndex;
}

void TableCellMergeOptions::setFirstCellIndex(int32_t value)
{
	m_FirstCellIndex = value;
	
}

int32_t TableCellMergeOptions::getLastRowIndex() const
{
	return m_LastRowIndex;
}

void TableCellMergeOptions::setLastRowIndex(int32_t value)
{
	m_LastRowIndex = value;
	
}

int32_t TableCellMergeOptions::getLastCellIndex() const
{
	return m_LastCellIndex;
}

void TableCellMergeOptions::setLastCellIndex(int32_t value)
{
	m_LastCellIndex = value;
	
}

bool TableCellMergeOptions::isAllowSplitting() const
{
	return m_AllowSplitting;
}

void TableCellMergeOptions::setAllowSplitting(bool value)
{
	m_AllowSplitting = value;
	
}

web::json::value TableCellMergeOptions::toJson() const
{
	web::json::value val = web::json::value::object();
	val[utility::conversions::to_string_t("FirstRowIndex")] = ModelBase::toJson(m_FirstRowIndex);
	val[utility::conversions::to_string_t("FirstCellIndex")] = ModelBase::toJson(m_FirstCellIndex);
	val[utility::conversions::to_string_t("LastRowIndex")] = ModelBase::toJson(m_LastRowIndex);
	val[utility::conversions::to_string_t("LastCellIndex")] = ModelBase::toJson(m_LastCellIndex);
	val[utility::conversions::to_string_t("AllowSplitting")] = ModelBase::toJson(m_AllowSplitting);
	return val;
}

void TableCellMergeOptions::fromJson(web::json::value& val)
{
	web::json::value* jsonForFirstRowIndex = ModelBase::getField(val, "FirstRowIndex");
	if(jsonForFirstRowIndex != nullptr && !jsonForFirstRowIndex->is_null() && jsonForFirstRowIndex->is_number())
	{
		setFirstRowIndex(ModelBase::int32_tFromJson(*jsonForFirstRowIndex));
	}
	web::json::value* jsonForFirstCellIndex = ModelBase::getField(val, "FirstCellIndex");
	if(jsonForFirstCellIndex != nullptr && !jsonForFirstCellIndex->is_null() && jsonForFirstCellIndex->is_number())
	{
		setFirstCellIndex(ModelBase::int32_tFromJson(*jsonForFirstCellIndex));
	}
	web::json::value* jsonForLastRowIndex = ModelBase::getField(val, "LastRowIndex");
	if(jsonForLastRowIndex != nullptr && !jsonForLastRowIndex->is_null() && jsonForLastRowIndex->is_number())
	{
		setLastRowIndex(ModelBase::int32_tFromJson(*jsonForLastRowIndex));
	}
	web::json::value* jsonForLastCellIndex = ModelBase::getField(val, "LastCellIndex");
	if(jsonForLastCellIndex != nullptr && !jsonForLastCellIndex->is_null() && jsonForLastCellIndex->is_number())
	{
		setLastCellIndex(ModelBase::int32_tFromJson(*jsonForLastCellIndex));
	}
	web::json::value* jsonForAllowSplitting = ModelBase::getField(val, "AllowSplitting");
	if(jsonForAllowSplitting != nullptr && !jsonForAllowSplitting->is_null())
	{
		setAllowSplitting(ModelBase::boolFromJson(*jsonForAllowSplitting));
	}
}

}
}

