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



#include "Series.h"

namespace asposeslidescloud {
namespace model {

Series::Series()
{
	m_IsColorVariedIsSet = false;
	m_SmoothIsSet = false;
	m_PlotOnSecondAxisIsSet = false;
	m_OrderIsSet = false;
	m_InvertIfNegativeIsSet = false;
	m_ExplosionIsSet = false;
}

Series::~Series()
{
}

utility::string_t Series::getType() const
{
	return m_Type;
}

void Series::setType(utility::string_t value)
{
	m_Type = value;
	
}

utility::string_t Series::getName() const
{
	return m_Name;
}

void Series::setName(utility::string_t value)
{
	m_Name = value;
	
}

bool Series::getIsColorVaried() const
{
	return m_IsColorVaried;
}

void Series::setIsColorVaried(bool value)
{
	m_IsColorVaried = value;
	m_IsColorVariedIsSet = true;
}

bool Series::isColorVariedIsSet() const
{
	return m_IsColorVariedIsSet;
}

void Series::unsetIsColorVaried()
{
	m_IsColorVariedIsSet = false;
}

utility::string_t Series::getInvertedSolidFillColor() const
{
	return m_InvertedSolidFillColor;
}

void Series::setInvertedSolidFillColor(utility::string_t value)
{
	m_InvertedSolidFillColor = value;
	
}

bool Series::getSmooth() const
{
	return m_Smooth;
}

void Series::setSmooth(bool value)
{
	m_Smooth = value;
	m_SmoothIsSet = true;
}

bool Series::smoothIsSet() const
{
	return m_SmoothIsSet;
}

void Series::unsetSmooth()
{
	m_SmoothIsSet = false;
}

bool Series::getPlotOnSecondAxis() const
{
	return m_PlotOnSecondAxis;
}

void Series::setPlotOnSecondAxis(bool value)
{
	m_PlotOnSecondAxis = value;
	m_PlotOnSecondAxisIsSet = true;
}

bool Series::plotOnSecondAxisIsSet() const
{
	return m_PlotOnSecondAxisIsSet;
}

void Series::unsetPlotOnSecondAxis()
{
	m_PlotOnSecondAxisIsSet = false;
}

int32_t Series::getOrder() const
{
	return m_Order;
}

void Series::setOrder(int32_t value)
{
	m_Order = value;
	m_OrderIsSet = true;
}

bool Series::orderIsSet() const
{
	return m_OrderIsSet;
}

void Series::unsetOrder()
{
	m_OrderIsSet = false;
}

bool Series::getInvertIfNegative() const
{
	return m_InvertIfNegative;
}

void Series::setInvertIfNegative(bool value)
{
	m_InvertIfNegative = value;
	m_InvertIfNegativeIsSet = true;
}

bool Series::invertIfNegativeIsSet() const
{
	return m_InvertIfNegativeIsSet;
}

void Series::unsetInvertIfNegative()
{
	m_InvertIfNegativeIsSet = false;
}

int32_t Series::getExplosion() const
{
	return m_Explosion;
}

void Series::setExplosion(int32_t value)
{
	m_Explosion = value;
	m_ExplosionIsSet = true;
}

bool Series::explosionIsSet() const
{
	return m_ExplosionIsSet;
}

void Series::unsetExplosion()
{
	m_ExplosionIsSet = false;
}

std::shared_ptr<SeriesMarker> Series::getMarker() const
{
	return m_Marker;
}

void Series::setMarker(std::shared_ptr<SeriesMarker> value)
{
	m_Marker = value;
	
}

std::shared_ptr<FillFormat> Series::getFillFormat() const
{
	return m_FillFormat;
}

void Series::setFillFormat(std::shared_ptr<FillFormat> value)
{
	m_FillFormat = value;
	
}

std::shared_ptr<EffectFormat> Series::getEffectFormat() const
{
	return m_EffectFormat;
}

void Series::setEffectFormat(std::shared_ptr<EffectFormat> value)
{
	m_EffectFormat = value;
	
}

std::shared_ptr<LineFormat> Series::getLineFormat() const
{
	return m_LineFormat;
}

void Series::setLineFormat(std::shared_ptr<LineFormat> value)
{
	m_LineFormat = value;
	
}

utility::string_t Series::getDataPointType() const
{
	return m_DataPointType;
}

void Series::setDataPointType(utility::string_t value)
{
	m_DataPointType = value;
	
}

web::json::value Series::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Type.empty())
	{
		val[utility::conversions::to_string_t("Type")] = ModelBase::toJson(m_Type);
	}
	if (!m_Name.empty())
	{
		val[utility::conversions::to_string_t("Name")] = ModelBase::toJson(m_Name);
	}
	if(m_IsColorVariedIsSet)
	{
		val[utility::conversions::to_string_t("IsColorVaried")] = ModelBase::toJson(m_IsColorVaried);
	}
	if (!m_InvertedSolidFillColor.empty())
	{
		val[utility::conversions::to_string_t("InvertedSolidFillColor")] = ModelBase::toJson(m_InvertedSolidFillColor);
	}
	if(m_SmoothIsSet)
	{
		val[utility::conversions::to_string_t("Smooth")] = ModelBase::toJson(m_Smooth);
	}
	if(m_PlotOnSecondAxisIsSet)
	{
		val[utility::conversions::to_string_t("PlotOnSecondAxis")] = ModelBase::toJson(m_PlotOnSecondAxis);
	}
	if(m_OrderIsSet)
	{
		val[utility::conversions::to_string_t("Order")] = ModelBase::toJson(m_Order);
	}
	if(m_InvertIfNegativeIsSet)
	{
		val[utility::conversions::to_string_t("InvertIfNegative")] = ModelBase::toJson(m_InvertIfNegative);
	}
	if(m_ExplosionIsSet)
	{
		val[utility::conversions::to_string_t("Explosion")] = ModelBase::toJson(m_Explosion);
	}
	if (m_Marker != nullptr)
	{
		val[utility::conversions::to_string_t("Marker")] = ModelBase::toJson(m_Marker);
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
	if (!m_DataPointType.empty())
	{
		val[utility::conversions::to_string_t("DataPointType")] = ModelBase::toJson(m_DataPointType);
	}
	return val;
}

void Series::fromJson(web::json::value& val)
{
	web::json::value* jsonForType = ModelBase::getField(val, "Type");
	if(jsonForType != nullptr && !jsonForType->is_null())
	{
		setType(ModelBase::stringFromJson(*jsonForType));
	}
	web::json::value* jsonForName = ModelBase::getField(val, "Name");
	if(jsonForName != nullptr && !jsonForName->is_null())
	{
		setName(ModelBase::stringFromJson(*jsonForName));
	}
	web::json::value* jsonForIsColorVaried = ModelBase::getField(val, "IsColorVaried");
	if(jsonForIsColorVaried != nullptr && !jsonForIsColorVaried->is_null())
	{
		setIsColorVaried(ModelBase::boolFromJson(*jsonForIsColorVaried));
	}
	web::json::value* jsonForInvertedSolidFillColor = ModelBase::getField(val, "InvertedSolidFillColor");
	if(jsonForInvertedSolidFillColor != nullptr && !jsonForInvertedSolidFillColor->is_null())
	{
		setInvertedSolidFillColor(ModelBase::stringFromJson(*jsonForInvertedSolidFillColor));
	}
	web::json::value* jsonForSmooth = ModelBase::getField(val, "Smooth");
	if(jsonForSmooth != nullptr && !jsonForSmooth->is_null())
	{
		setSmooth(ModelBase::boolFromJson(*jsonForSmooth));
	}
	web::json::value* jsonForPlotOnSecondAxis = ModelBase::getField(val, "PlotOnSecondAxis");
	if(jsonForPlotOnSecondAxis != nullptr && !jsonForPlotOnSecondAxis->is_null())
	{
		setPlotOnSecondAxis(ModelBase::boolFromJson(*jsonForPlotOnSecondAxis));
	}
	web::json::value* jsonForOrder = ModelBase::getField(val, "Order");
	if(jsonForOrder != nullptr && !jsonForOrder->is_null() && jsonForOrder->is_number())
	{
		setOrder(ModelBase::int32_tFromJson(*jsonForOrder));
	}
	web::json::value* jsonForInvertIfNegative = ModelBase::getField(val, "InvertIfNegative");
	if(jsonForInvertIfNegative != nullptr && !jsonForInvertIfNegative->is_null())
	{
		setInvertIfNegative(ModelBase::boolFromJson(*jsonForInvertIfNegative));
	}
	web::json::value* jsonForExplosion = ModelBase::getField(val, "Explosion");
	if(jsonForExplosion != nullptr && !jsonForExplosion->is_null() && jsonForExplosion->is_number())
	{
		setExplosion(ModelBase::int32_tFromJson(*jsonForExplosion));
	}
	web::json::value* jsonForMarker = ModelBase::getField(val, "Marker");
	if(jsonForMarker != nullptr && !jsonForMarker->is_null())
	{
		std::shared_ptr<SeriesMarker> newItem(new SeriesMarker());
		newItem->fromJson(*jsonForMarker);
		setMarker(newItem);
	}
	web::json::value* jsonForFillFormat = ModelBase::getField(val, "FillFormat");
	if(jsonForFillFormat != nullptr && !jsonForFillFormat->is_null())
	{
		std::shared_ptr<FillFormat> newItem(new FillFormat());
		newItem->fromJson(*jsonForFillFormat);
		setFillFormat(newItem);
	}
	web::json::value* jsonForEffectFormat = ModelBase::getField(val, "EffectFormat");
	if(jsonForEffectFormat != nullptr && !jsonForEffectFormat->is_null())
	{
		std::shared_ptr<EffectFormat> newItem(new EffectFormat());
		newItem->fromJson(*jsonForEffectFormat);
		setEffectFormat(newItem);
	}
	web::json::value* jsonForLineFormat = ModelBase::getField(val, "LineFormat");
	if(jsonForLineFormat != nullptr && !jsonForLineFormat->is_null())
	{
		std::shared_ptr<LineFormat> newItem(new LineFormat());
		newItem->fromJson(*jsonForLineFormat);
		setLineFormat(newItem);
	}
	web::json::value* jsonForDataPointType = ModelBase::getField(val, "DataPointType");
	if(jsonForDataPointType != nullptr && !jsonForDataPointType->is_null())
	{
		setDataPointType(ModelBase::stringFromJson(*jsonForDataPointType));
	}
}

}
}

