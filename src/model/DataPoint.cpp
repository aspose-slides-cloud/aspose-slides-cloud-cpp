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
#include "DataPoint.h"

namespace asposeslidescloud {
namespace model {

DataPoint::DataPoint()
{
}

DataPoint::~DataPoint()
{
}

std::shared_ptr<FillFormat> DataPoint::getFillFormat() const
{
	return m_FillFormat;
}

void DataPoint::setFillFormat(std::shared_ptr<FillFormat> value)
{
	m_FillFormat = value;
	
}

std::shared_ptr<EffectFormat> DataPoint::getEffectFormat() const
{
	return m_EffectFormat;
}

void DataPoint::setEffectFormat(std::shared_ptr<EffectFormat> value)
{
	m_EffectFormat = value;
	
}

std::shared_ptr<ThreeDFormat> DataPoint::getThreeDFormat() const
{
	return m_ThreeDFormat;
}

void DataPoint::setThreeDFormat(std::shared_ptr<ThreeDFormat> value)
{
	m_ThreeDFormat = value;
	
}

std::shared_ptr<LineFormat> DataPoint::getLineFormat() const
{
	return m_LineFormat;
}

void DataPoint::setLineFormat(std::shared_ptr<LineFormat> value)
{
	m_LineFormat = value;
	
}

utility::string_t DataPoint::getType() const
{
	return m_Type;
}

void DataPoint::setType(utility::string_t value)
{
	m_Type = value;
	
}

web::json::value DataPoint::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_FillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("FillFormat")] = ModelBase::toJson(m_FillFormat);
	}
	if (m_EffectFormat != nullptr)
	{
		val[utility::conversions::to_string_t("EffectFormat")] = ModelBase::toJson(m_EffectFormat);
	}
	if (m_ThreeDFormat != nullptr)
	{
		val[utility::conversions::to_string_t("ThreeDFormat")] = ModelBase::toJson(m_ThreeDFormat);
	}
	if (m_LineFormat != nullptr)
	{
		val[utility::conversions::to_string_t("LineFormat")] = ModelBase::toJson(m_LineFormat);
	}
	if (!m_Type.empty())
	{
		val[utility::conversions::to_string_t("Type")] = ModelBase::toJson(m_Type);
	}
	return val;
}

void DataPoint::fromJson(web::json::value& val)
{
	web::json::value* jsonForFillFormat = ModelBase::getField(val, "FillFormat");
	if(jsonForFillFormat != nullptr && !jsonForFillFormat->is_null())
	{
		std::shared_ptr<void> instanceForFillFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"FillFormat", *jsonForFillFormat);
		setFillFormat(std::static_pointer_cast<FillFormat>(instanceForFillFormat));
	}
	web::json::value* jsonForEffectFormat = ModelBase::getField(val, "EffectFormat");
	if(jsonForEffectFormat != nullptr && !jsonForEffectFormat->is_null())
	{
		std::shared_ptr<void> instanceForEffectFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"EffectFormat", *jsonForEffectFormat);
		setEffectFormat(std::static_pointer_cast<EffectFormat>(instanceForEffectFormat));
	}
	web::json::value* jsonForThreeDFormat = ModelBase::getField(val, "ThreeDFormat");
	if(jsonForThreeDFormat != nullptr && !jsonForThreeDFormat->is_null())
	{
		std::shared_ptr<void> instanceForThreeDFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"ThreeDFormat", *jsonForThreeDFormat);
		setThreeDFormat(std::static_pointer_cast<ThreeDFormat>(instanceForThreeDFormat));
	}
	web::json::value* jsonForLineFormat = ModelBase::getField(val, "LineFormat");
	if(jsonForLineFormat != nullptr && !jsonForLineFormat->is_null())
	{
		std::shared_ptr<void> instanceForLineFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"LineFormat", *jsonForLineFormat);
		setLineFormat(std::static_pointer_cast<LineFormat>(instanceForLineFormat));
	}
	web::json::value* jsonForType = ModelBase::getField(val, "Type");
	if(jsonForType != nullptr && !jsonForType->is_null())
	{
		setType(ModelBase::stringFromJson(*jsonForType));
	}
}

}
}

