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
#include "ChartSeriesGroup.h"

namespace asposeslidescloud {
namespace model {

ChartSeriesGroup::ChartSeriesGroup()
{
	m_GapWidthIsSet = false;
	m_GapDepthIsSet = false;
	m_FirstSliceAngleIsSet = false;
	m_IsColorVariedIsSet = false;
	m_HasSeriesLinesIsSet = false;
	m_OverlapIsSet = false;
	m_SecondPieSizeIsSet = false;
	m_PieSplitPositionIsSet = false;
	m_DoughnutHoleSizeIsSet = false;
	m_BubbleSizeScaleIsSet = false;
}

ChartSeriesGroup::~ChartSeriesGroup()
{
}

utility::string_t ChartSeriesGroup::getType() const
{
	return m_Type;
}

void ChartSeriesGroup::setType(utility::string_t value)
{
	m_Type = value;
	
}

int32_t ChartSeriesGroup::getGapWidth() const
{
	return m_GapWidth;
}

void ChartSeriesGroup::setGapWidth(int32_t value)
{
	m_GapWidth = value;
	m_GapWidthIsSet = true;
}

bool ChartSeriesGroup::gapWidthIsSet() const
{
	return m_GapWidthIsSet;
}

void ChartSeriesGroup::unsetGapWidth()
{
	m_GapWidthIsSet = false;
}

int32_t ChartSeriesGroup::getGapDepth() const
{
	return m_GapDepth;
}

void ChartSeriesGroup::setGapDepth(int32_t value)
{
	m_GapDepth = value;
	m_GapDepthIsSet = true;
}

bool ChartSeriesGroup::gapDepthIsSet() const
{
	return m_GapDepthIsSet;
}

void ChartSeriesGroup::unsetGapDepth()
{
	m_GapDepthIsSet = false;
}

int32_t ChartSeriesGroup::getFirstSliceAngle() const
{
	return m_FirstSliceAngle;
}

void ChartSeriesGroup::setFirstSliceAngle(int32_t value)
{
	m_FirstSliceAngle = value;
	m_FirstSliceAngleIsSet = true;
}

bool ChartSeriesGroup::firstSliceAngleIsSet() const
{
	return m_FirstSliceAngleIsSet;
}

void ChartSeriesGroup::unsetFirstSliceAngle()
{
	m_FirstSliceAngleIsSet = false;
}

bool ChartSeriesGroup::getIsColorVaried() const
{
	return m_IsColorVaried;
}

void ChartSeriesGroup::setIsColorVaried(bool value)
{
	m_IsColorVaried = value;
	m_IsColorVariedIsSet = true;
}

bool ChartSeriesGroup::isColorVariedIsSet() const
{
	return m_IsColorVariedIsSet;
}

void ChartSeriesGroup::unsetIsColorVaried()
{
	m_IsColorVariedIsSet = false;
}

bool ChartSeriesGroup::getHasSeriesLines() const
{
	return m_HasSeriesLines;
}

void ChartSeriesGroup::setHasSeriesLines(bool value)
{
	m_HasSeriesLines = value;
	m_HasSeriesLinesIsSet = true;
}

bool ChartSeriesGroup::hasSeriesLinesIsSet() const
{
	return m_HasSeriesLinesIsSet;
}

void ChartSeriesGroup::unsetHasSeriesLines()
{
	m_HasSeriesLinesIsSet = false;
}

int32_t ChartSeriesGroup::getOverlap() const
{
	return m_Overlap;
}

void ChartSeriesGroup::setOverlap(int32_t value)
{
	m_Overlap = value;
	m_OverlapIsSet = true;
}

bool ChartSeriesGroup::overlapIsSet() const
{
	return m_OverlapIsSet;
}

void ChartSeriesGroup::unsetOverlap()
{
	m_OverlapIsSet = false;
}

int32_t ChartSeriesGroup::getSecondPieSize() const
{
	return m_SecondPieSize;
}

void ChartSeriesGroup::setSecondPieSize(int32_t value)
{
	m_SecondPieSize = value;
	m_SecondPieSizeIsSet = true;
}

bool ChartSeriesGroup::secondPieSizeIsSet() const
{
	return m_SecondPieSizeIsSet;
}

void ChartSeriesGroup::unsetSecondPieSize()
{
	m_SecondPieSizeIsSet = false;
}

double ChartSeriesGroup::getPieSplitPosition() const
{
	return m_PieSplitPosition;
}

void ChartSeriesGroup::setPieSplitPosition(double value)
{
	m_PieSplitPosition = value;
	m_PieSplitPositionIsSet = true;
}

bool ChartSeriesGroup::pieSplitPositionIsSet() const
{
	return m_PieSplitPositionIsSet;
}

void ChartSeriesGroup::unsetPieSplitPosition()
{
	m_PieSplitPositionIsSet = false;
}

utility::string_t ChartSeriesGroup::getPieSplitBy() const
{
	return m_PieSplitBy;
}

void ChartSeriesGroup::setPieSplitBy(utility::string_t value)
{
	m_PieSplitBy = value;
	
}

int32_t ChartSeriesGroup::getDoughnutHoleSize() const
{
	return m_DoughnutHoleSize;
}

void ChartSeriesGroup::setDoughnutHoleSize(int32_t value)
{
	m_DoughnutHoleSize = value;
	m_DoughnutHoleSizeIsSet = true;
}

bool ChartSeriesGroup::doughnutHoleSizeIsSet() const
{
	return m_DoughnutHoleSizeIsSet;
}

void ChartSeriesGroup::unsetDoughnutHoleSize()
{
	m_DoughnutHoleSizeIsSet = false;
}

int32_t ChartSeriesGroup::getBubbleSizeScale() const
{
	return m_BubbleSizeScale;
}

void ChartSeriesGroup::setBubbleSizeScale(int32_t value)
{
	m_BubbleSizeScale = value;
	m_BubbleSizeScaleIsSet = true;
}

bool ChartSeriesGroup::bubbleSizeScaleIsSet() const
{
	return m_BubbleSizeScaleIsSet;
}

void ChartSeriesGroup::unsetBubbleSizeScale()
{
	m_BubbleSizeScaleIsSet = false;
}

std::shared_ptr<ChartLinesFormat> ChartSeriesGroup::getHiLowLinesFormat() const
{
	return m_HiLowLinesFormat;
}

void ChartSeriesGroup::setHiLowLinesFormat(std::shared_ptr<ChartLinesFormat> value)
{
	m_HiLowLinesFormat = value;
	
}

utility::string_t ChartSeriesGroup::getBubbleSizeRepresentation() const
{
	return m_BubbleSizeRepresentation;
}

void ChartSeriesGroup::setBubbleSizeRepresentation(utility::string_t value)
{
	m_BubbleSizeRepresentation = value;
	
}

web::json::value ChartSeriesGroup::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Type.empty())
	{
		val[utility::conversions::to_string_t("Type")] = ModelBase::toJson(m_Type);
	}
	if(m_GapWidthIsSet)
	{
		val[utility::conversions::to_string_t("GapWidth")] = ModelBase::toJson(m_GapWidth);
	}
	if(m_GapDepthIsSet)
	{
		val[utility::conversions::to_string_t("GapDepth")] = ModelBase::toJson(m_GapDepth);
	}
	if(m_FirstSliceAngleIsSet)
	{
		val[utility::conversions::to_string_t("FirstSliceAngle")] = ModelBase::toJson(m_FirstSliceAngle);
	}
	if(m_IsColorVariedIsSet)
	{
		val[utility::conversions::to_string_t("IsColorVaried")] = ModelBase::toJson(m_IsColorVaried);
	}
	if(m_HasSeriesLinesIsSet)
	{
		val[utility::conversions::to_string_t("HasSeriesLines")] = ModelBase::toJson(m_HasSeriesLines);
	}
	if(m_OverlapIsSet)
	{
		val[utility::conversions::to_string_t("Overlap")] = ModelBase::toJson(m_Overlap);
	}
	if(m_SecondPieSizeIsSet)
	{
		val[utility::conversions::to_string_t("SecondPieSize")] = ModelBase::toJson(m_SecondPieSize);
	}
	if(m_PieSplitPositionIsSet)
	{
		val[utility::conversions::to_string_t("PieSplitPosition")] = ModelBase::toJson(m_PieSplitPosition);
	}
	if (!m_PieSplitBy.empty())
	{
		val[utility::conversions::to_string_t("PieSplitBy")] = ModelBase::toJson(m_PieSplitBy);
	}
	if(m_DoughnutHoleSizeIsSet)
	{
		val[utility::conversions::to_string_t("DoughnutHoleSize")] = ModelBase::toJson(m_DoughnutHoleSize);
	}
	if(m_BubbleSizeScaleIsSet)
	{
		val[utility::conversions::to_string_t("BubbleSizeScale")] = ModelBase::toJson(m_BubbleSizeScale);
	}
	if (m_HiLowLinesFormat != nullptr)
	{
		val[utility::conversions::to_string_t("HiLowLinesFormat")] = ModelBase::toJson(m_HiLowLinesFormat);
	}
	if (!m_BubbleSizeRepresentation.empty())
	{
		val[utility::conversions::to_string_t("BubbleSizeRepresentation")] = ModelBase::toJson(m_BubbleSizeRepresentation);
	}
	return val;
}

void ChartSeriesGroup::fromJson(web::json::value& val)
{
	web::json::value* jsonForType = ModelBase::getField(val, "Type");
	if(jsonForType != nullptr && !jsonForType->is_null())
	{
		setType(ModelBase::stringFromJson(*jsonForType));
	}
	web::json::value* jsonForGapWidth = ModelBase::getField(val, "GapWidth");
	if(jsonForGapWidth != nullptr && !jsonForGapWidth->is_null() && jsonForGapWidth->is_number())
	{
		setGapWidth(ModelBase::int32_tFromJson(*jsonForGapWidth));
	}
	web::json::value* jsonForGapDepth = ModelBase::getField(val, "GapDepth");
	if(jsonForGapDepth != nullptr && !jsonForGapDepth->is_null() && jsonForGapDepth->is_number())
	{
		setGapDepth(ModelBase::int32_tFromJson(*jsonForGapDepth));
	}
	web::json::value* jsonForFirstSliceAngle = ModelBase::getField(val, "FirstSliceAngle");
	if(jsonForFirstSliceAngle != nullptr && !jsonForFirstSliceAngle->is_null() && jsonForFirstSliceAngle->is_number())
	{
		setFirstSliceAngle(ModelBase::int32_tFromJson(*jsonForFirstSliceAngle));
	}
	web::json::value* jsonForIsColorVaried = ModelBase::getField(val, "IsColorVaried");
	if(jsonForIsColorVaried != nullptr && !jsonForIsColorVaried->is_null())
	{
		setIsColorVaried(ModelBase::boolFromJson(*jsonForIsColorVaried));
	}
	web::json::value* jsonForHasSeriesLines = ModelBase::getField(val, "HasSeriesLines");
	if(jsonForHasSeriesLines != nullptr && !jsonForHasSeriesLines->is_null())
	{
		setHasSeriesLines(ModelBase::boolFromJson(*jsonForHasSeriesLines));
	}
	web::json::value* jsonForOverlap = ModelBase::getField(val, "Overlap");
	if(jsonForOverlap != nullptr && !jsonForOverlap->is_null() && jsonForOverlap->is_number())
	{
		setOverlap(ModelBase::int32_tFromJson(*jsonForOverlap));
	}
	web::json::value* jsonForSecondPieSize = ModelBase::getField(val, "SecondPieSize");
	if(jsonForSecondPieSize != nullptr && !jsonForSecondPieSize->is_null() && jsonForSecondPieSize->is_number())
	{
		setSecondPieSize(ModelBase::int32_tFromJson(*jsonForSecondPieSize));
	}
	web::json::value* jsonForPieSplitPosition = ModelBase::getField(val, "PieSplitPosition");
	if(jsonForPieSplitPosition != nullptr && !jsonForPieSplitPosition->is_null() && jsonForPieSplitPosition->is_number())
	{
		setPieSplitPosition(ModelBase::doubleFromJson(*jsonForPieSplitPosition));
	}
	web::json::value* jsonForPieSplitBy = ModelBase::getField(val, "PieSplitBy");
	if(jsonForPieSplitBy != nullptr && !jsonForPieSplitBy->is_null())
	{
		setPieSplitBy(ModelBase::stringFromJson(*jsonForPieSplitBy));
	}
	web::json::value* jsonForDoughnutHoleSize = ModelBase::getField(val, "DoughnutHoleSize");
	if(jsonForDoughnutHoleSize != nullptr && !jsonForDoughnutHoleSize->is_null() && jsonForDoughnutHoleSize->is_number())
	{
		setDoughnutHoleSize(ModelBase::int32_tFromJson(*jsonForDoughnutHoleSize));
	}
	web::json::value* jsonForBubbleSizeScale = ModelBase::getField(val, "BubbleSizeScale");
	if(jsonForBubbleSizeScale != nullptr && !jsonForBubbleSizeScale->is_null() && jsonForBubbleSizeScale->is_number())
	{
		setBubbleSizeScale(ModelBase::int32_tFromJson(*jsonForBubbleSizeScale));
	}
	web::json::value* jsonForHiLowLinesFormat = ModelBase::getField(val, "HiLowLinesFormat");
	if(jsonForHiLowLinesFormat != nullptr && !jsonForHiLowLinesFormat->is_null())
	{
		std::shared_ptr<void> instanceForHiLowLinesFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"ChartLinesFormat", *jsonForHiLowLinesFormat);
		setHiLowLinesFormat(std::static_pointer_cast<ChartLinesFormat>(instanceForHiLowLinesFormat));
	}
	web::json::value* jsonForBubbleSizeRepresentation = ModelBase::getField(val, "BubbleSizeRepresentation");
	if(jsonForBubbleSizeRepresentation != nullptr && !jsonForBubbleSizeRepresentation->is_null())
	{
		setBubbleSizeRepresentation(ModelBase::stringFromJson(*jsonForBubbleSizeRepresentation));
	}
}

}
}

