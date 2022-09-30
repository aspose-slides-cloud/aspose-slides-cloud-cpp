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



#include "GradientFill.h"

namespace asposeslidescloud {
namespace model {

GradientFill::GradientFill()
{
	setType(L"Gradient");
}

GradientFill::~GradientFill()
{
}

utility::string_t GradientFill::getDirection() const
{
	return m_Direction;
}

void GradientFill::setDirection(utility::string_t value)
{
	m_Direction = value;
	
}

utility::string_t GradientFill::getShape() const
{
	return m_Shape;
}

void GradientFill::setShape(utility::string_t value)
{
	m_Shape = value;
	
}

std::vector<std::shared_ptr<GradientFillStop>> GradientFill::getStops() const
{
	return m_Stops;
}

void GradientFill::setStops(std::vector<std::shared_ptr<GradientFillStop>> value)
{
	m_Stops = value;
	
}

double GradientFill::getLinearAngle() const
{
	return m_LinearAngle;
}

void GradientFill::setLinearAngle(double value)
{
	m_LinearAngle = value;
	
}

bool GradientFill::getIsScaled() const
{
	return m_IsScaled;
}

void GradientFill::setIsScaled(bool value)
{
	m_IsScaled = value;
	
}

utility::string_t GradientFill::getTileFlip() const
{
	return m_TileFlip;
}

void GradientFill::setTileFlip(utility::string_t value)
{
	m_TileFlip = value;
	
}

web::json::value GradientFill::toJson() const
{
	web::json::value val = this->FillFormat::toJson();
	if (!m_Direction.empty())
	{
		val[utility::conversions::to_string_t("Direction")] = ModelBase::toJson(m_Direction);
	}
	if (!m_Shape.empty())
	{
		val[utility::conversions::to_string_t("Shape")] = ModelBase::toJson(m_Shape);
	}
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Stops)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Stops")] = web::json::value::array(jsonArray);
	}
	val[utility::conversions::to_string_t("LinearAngle")] = ModelBase::toJson(m_LinearAngle);
	val[utility::conversions::to_string_t("IsScaled")] = ModelBase::toJson(m_IsScaled);
	if (!m_TileFlip.empty())
	{
		val[utility::conversions::to_string_t("TileFlip")] = ModelBase::toJson(m_TileFlip);
	}
	return val;
}

void GradientFill::fromJson(web::json::value& val)
{
	this->FillFormat::fromJson(val);
	web::json::value* jsonForDirection = ModelBase::getField(val, "Direction");
	if(jsonForDirection != nullptr && !jsonForDirection->is_null())
	{
		setDirection(ModelBase::stringFromJson(*jsonForDirection));
	}
	web::json::value* jsonForShape = ModelBase::getField(val, "Shape");
	if(jsonForShape != nullptr && !jsonForShape->is_null())
	{
		setShape(ModelBase::stringFromJson(*jsonForShape));
	}
	web::json::value* jsonForStops = ModelBase::getField(val, "Stops");
	if(jsonForStops != nullptr && !jsonForStops->is_null())
	{
		{
			m_Stops.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForStops->as_array())
			{
				if(item.is_null())
				{
					m_Stops.push_back(std::shared_ptr<GradientFillStop>(nullptr));
				}
				else
				{
					std::shared_ptr<GradientFillStop> newItem(new GradientFillStop());
					newItem->fromJson(item);
					m_Stops.push_back( newItem );
				}
			}
        	}
	}
	web::json::value* jsonForLinearAngle = ModelBase::getField(val, "LinearAngle");
	if(jsonForLinearAngle != nullptr && !jsonForLinearAngle->is_null() && jsonForLinearAngle->is_number())
	{
		setLinearAngle(ModelBase::doubleFromJson(*jsonForLinearAngle));
	}
	web::json::value* jsonForIsScaled = ModelBase::getField(val, "IsScaled");
	if(jsonForIsScaled != nullptr && !jsonForIsScaled->is_null())
	{
		setIsScaled(ModelBase::boolFromJson(*jsonForIsScaled));
	}
	web::json::value* jsonForTileFlip = ModelBase::getField(val, "TileFlip");
	if(jsonForTileFlip != nullptr && !jsonForTileFlip->is_null())
	{
		setTileFlip(ModelBase::stringFromJson(*jsonForTileFlip));
	}
}

}
}

