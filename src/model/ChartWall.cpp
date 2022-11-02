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
#include "ChartWall.h"

namespace asposeslidescloud {
namespace model {

ChartWall::ChartWall()
{
	m_ThicknessIsSet = false;
}

ChartWall::~ChartWall()
{
}

std::shared_ptr<FillFormat> ChartWall::getFillFormat() const
{
	return m_FillFormat;
}

void ChartWall::setFillFormat(std::shared_ptr<FillFormat> value)
{
	m_FillFormat = value;
	
}

std::shared_ptr<EffectFormat> ChartWall::getEffectFormat() const
{
	return m_EffectFormat;
}

void ChartWall::setEffectFormat(std::shared_ptr<EffectFormat> value)
{
	m_EffectFormat = value;
	
}

std::shared_ptr<LineFormat> ChartWall::getLineFormat() const
{
	return m_LineFormat;
}

void ChartWall::setLineFormat(std::shared_ptr<LineFormat> value)
{
	m_LineFormat = value;
	
}

int32_t ChartWall::getThickness() const
{
	return m_Thickness;
}

void ChartWall::setThickness(int32_t value)
{
	m_Thickness = value;
	m_ThicknessIsSet = true;
}

bool ChartWall::thicknessIsSet() const
{
	return m_ThicknessIsSet;
}

void ChartWall::unsetThickness()
{
	m_ThicknessIsSet = false;
}

utility::string_t ChartWall::getPictureType() const
{
	return m_PictureType;
}

void ChartWall::setPictureType(utility::string_t value)
{
	m_PictureType = value;
	
}

web::json::value ChartWall::toJson() const
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
	if (m_LineFormat != nullptr)
	{
		val[utility::conversions::to_string_t("LineFormat")] = ModelBase::toJson(m_LineFormat);
	}
	if(m_ThicknessIsSet)
	{
		val[utility::conversions::to_string_t("Thickness")] = ModelBase::toJson(m_Thickness);
	}
	if (!m_PictureType.empty())
	{
		val[utility::conversions::to_string_t("PictureType")] = ModelBase::toJson(m_PictureType);
	}
	return val;
}

void ChartWall::fromJson(web::json::value& val)
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
	web::json::value* jsonForLineFormat = ModelBase::getField(val, "LineFormat");
	if(jsonForLineFormat != nullptr && !jsonForLineFormat->is_null())
	{
		std::shared_ptr<void> instanceForLineFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"LineFormat", *jsonForLineFormat);
		setLineFormat(std::static_pointer_cast<LineFormat>(instanceForLineFormat));
	}
	web::json::value* jsonForThickness = ModelBase::getField(val, "Thickness");
	if(jsonForThickness != nullptr && !jsonForThickness->is_null() && jsonForThickness->is_number())
	{
		setThickness(ModelBase::int32_tFromJson(*jsonForThickness));
	}
	web::json::value* jsonForPictureType = ModelBase::getField(val, "PictureType");
	if(jsonForPictureType != nullptr && !jsonForPictureType->is_null())
	{
		setPictureType(ModelBase::stringFromJson(*jsonForPictureType));
	}
}

}
}

