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
#include "SeriesMarker.h"

namespace asposeslidescloud {
namespace model {

SeriesMarker::SeriesMarker()
{
	m_SizeIsSet = false;
}

SeriesMarker::~SeriesMarker()
{
}

int32_t SeriesMarker::getSize() const
{
	return m_Size;
}

void SeriesMarker::setSize(int32_t value)
{
	m_Size = value;
	m_SizeIsSet = true;
}

bool SeriesMarker::sizeIsSet() const
{
	return m_SizeIsSet;
}

void SeriesMarker::unsetSize()
{
	m_SizeIsSet = false;
}

utility::string_t SeriesMarker::getSymbol() const
{
	return m_Symbol;
}

void SeriesMarker::setSymbol(utility::string_t value)
{
	m_Symbol = value;
	
}

std::shared_ptr<FillFormat> SeriesMarker::getFillFormat() const
{
	return m_FillFormat;
}

void SeriesMarker::setFillFormat(std::shared_ptr<FillFormat> value)
{
	m_FillFormat = value;
	
}

std::shared_ptr<EffectFormat> SeriesMarker::getEffectFormat() const
{
	return m_EffectFormat;
}

void SeriesMarker::setEffectFormat(std::shared_ptr<EffectFormat> value)
{
	m_EffectFormat = value;
	
}

std::shared_ptr<LineFormat> SeriesMarker::getLineFormat() const
{
	return m_LineFormat;
}

void SeriesMarker::setLineFormat(std::shared_ptr<LineFormat> value)
{
	m_LineFormat = value;
	
}

web::json::value SeriesMarker::toJson() const
{
	web::json::value val = web::json::value::object();
	if(m_SizeIsSet)
	{
		val[utility::conversions::to_string_t("Size")] = ModelBase::toJson(m_Size);
	}
	if (!m_Symbol.empty())
	{
		val[utility::conversions::to_string_t("Symbol")] = ModelBase::toJson(m_Symbol);
	}
	if (m_FillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("FillFormat")] = ModelBase::toJson(m_FillFormat);
	}
	if (m_EffectFormat != nullptr)
	{
		val[utility::conversions::to_string_t("EffectFormat")] = ModelBase::toJson(m_EffectFormat);
	}
	if (m_LineFormat != nullptr)
	{
		val[utility::conversions::to_string_t("LineFormat")] = ModelBase::toJson(m_LineFormat);
	}
	return val;
}

void SeriesMarker::fromJson(web::json::value& val)
{
	web::json::value* jsonForSize = ModelBase::getField(val, "Size");
	if(jsonForSize != nullptr && !jsonForSize->is_null() && jsonForSize->is_number())
	{
		setSize(ModelBase::int32_tFromJson(*jsonForSize));
	}
	web::json::value* jsonForSymbol = ModelBase::getField(val, "Symbol");
	if(jsonForSymbol != nullptr && !jsonForSymbol->is_null())
	{
		setSymbol(ModelBase::stringFromJson(*jsonForSymbol));
	}
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
	web::json::value* jsonForLineFormat = ModelBase::getField(val, "LineFormat");
	if(jsonForLineFormat != nullptr && !jsonForLineFormat->is_null())
	{
		std::shared_ptr<void> instanceForLineFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"LineFormat", *jsonForLineFormat);
		setLineFormat(std::static_pointer_cast<LineFormat>(instanceForLineFormat));
	}
}

}
}

