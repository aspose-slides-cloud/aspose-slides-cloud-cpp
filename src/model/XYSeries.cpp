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
#include "XYSeries.h"

namespace asposeslidescloud {
namespace model {

XYSeries::XYSeries()
{
}

XYSeries::~XYSeries()
{
}

utility::string_t XYSeries::getNumberFormatOfYValues() const
{
	return m_NumberFormatOfYValues;
}

void XYSeries::setNumberFormatOfYValues(utility::string_t value)
{
	m_NumberFormatOfYValues = value;
	
}

utility::string_t XYSeries::getNumberFormatOfXValues() const
{
	return m_NumberFormatOfXValues;
}

void XYSeries::setNumberFormatOfXValues(utility::string_t value)
{
	m_NumberFormatOfXValues = value;
	
}

std::shared_ptr<DataSource> XYSeries::getDataSourceForXValues() const
{
	return m_DataSourceForXValues;
}

void XYSeries::setDataSourceForXValues(std::shared_ptr<DataSource> value)
{
	m_DataSourceForXValues = value;
	
}

std::shared_ptr<DataSource> XYSeries::getDataSourceForYValues() const
{
	return m_DataSourceForYValues;
}

void XYSeries::setDataSourceForYValues(std::shared_ptr<DataSource> value)
{
	m_DataSourceForYValues = value;
	
}

web::json::value XYSeries::toJson() const
{
	web::json::value val = this->Series::toJson();
	if (!m_NumberFormatOfYValues.empty())
	{
		val[utility::conversions::to_string_t("NumberFormatOfYValues")] = ModelBase::toJson(m_NumberFormatOfYValues);
	}
	if (!m_NumberFormatOfXValues.empty())
	{
		val[utility::conversions::to_string_t("NumberFormatOfXValues")] = ModelBase::toJson(m_NumberFormatOfXValues);
	}
	if (m_DataSourceForXValues != nullptr)
	{
		val[utility::conversions::to_string_t("DataSourceForXValues")] = ModelBase::toJson(m_DataSourceForXValues);
	}
	if (m_DataSourceForYValues != nullptr)
	{
		val[utility::conversions::to_string_t("DataSourceForYValues")] = ModelBase::toJson(m_DataSourceForYValues);
	}
	return val;
}

void XYSeries::fromJson(web::json::value& val)
{
	this->Series::fromJson(val);
	web::json::value* jsonForNumberFormatOfYValues = ModelBase::getField(val, "NumberFormatOfYValues");
	if(jsonForNumberFormatOfYValues != nullptr && !jsonForNumberFormatOfYValues->is_null())
	{
		setNumberFormatOfYValues(ModelBase::stringFromJson(*jsonForNumberFormatOfYValues));
	}
	web::json::value* jsonForNumberFormatOfXValues = ModelBase::getField(val, "NumberFormatOfXValues");
	if(jsonForNumberFormatOfXValues != nullptr && !jsonForNumberFormatOfXValues->is_null())
	{
		setNumberFormatOfXValues(ModelBase::stringFromJson(*jsonForNumberFormatOfXValues));
	}
	web::json::value* jsonForDataSourceForXValues = ModelBase::getField(val, "DataSourceForXValues");
	if(jsonForDataSourceForXValues != nullptr && !jsonForDataSourceForXValues->is_null())
	{
		std::shared_ptr<void> instanceForDataSourceForXValues = asposeslidescloud::api::ClassRegistry::deserialize(L"DataSource", *jsonForDataSourceForXValues);
		setDataSourceForXValues(std::static_pointer_cast<DataSource>(instanceForDataSourceForXValues));
	}
	web::json::value* jsonForDataSourceForYValues = ModelBase::getField(val, "DataSourceForYValues");
	if(jsonForDataSourceForYValues != nullptr && !jsonForDataSourceForYValues->is_null())
	{
		std::shared_ptr<void> instanceForDataSourceForYValues = asposeslidescloud::api::ClassRegistry::deserialize(L"DataSource", *jsonForDataSourceForYValues);
		setDataSourceForYValues(std::static_pointer_cast<DataSource>(instanceForDataSourceForYValues));
	}
}

}
}

