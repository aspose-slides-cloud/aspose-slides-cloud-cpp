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



#include "LineFormat.h"

namespace asposeslidescloud {
namespace model {

LineFormat::LineFormat()
{
	m_MiterLimitIsSet = false;
	m_WidthIsSet = false;
}

LineFormat::~LineFormat()
{
}

utility::string_t LineFormat::getAlignment() const
{
	return m_Alignment;
}

void LineFormat::setAlignment(utility::string_t value)
{
	m_Alignment = value;
	
}

utility::string_t LineFormat::getCapStyle() const
{
	return m_CapStyle;
}

void LineFormat::setCapStyle(utility::string_t value)
{
	m_CapStyle = value;
	
}

utility::string_t LineFormat::getDashStyle() const
{
	return m_DashStyle;
}

void LineFormat::setDashStyle(utility::string_t value)
{
	m_DashStyle = value;
	
}

utility::string_t LineFormat::getJoinStyle() const
{
	return m_JoinStyle;
}

void LineFormat::setJoinStyle(utility::string_t value)
{
	m_JoinStyle = value;
	
}

utility::string_t LineFormat::getStyle() const
{
	return m_Style;
}

void LineFormat::setStyle(utility::string_t value)
{
	m_Style = value;
	
}

utility::string_t LineFormat::getSketchType() const
{
	return m_SketchType;
}

void LineFormat::setSketchType(utility::string_t value)
{
	m_SketchType = value;
	
}

std::shared_ptr<ArrowHeadProperties> LineFormat::getBeginArrowHead() const
{
	return m_BeginArrowHead;
}

void LineFormat::setBeginArrowHead(std::shared_ptr<ArrowHeadProperties> value)
{
	m_BeginArrowHead = value;
	
}

std::shared_ptr<ArrowHeadProperties> LineFormat::getEndArrowHead() const
{
	return m_EndArrowHead;
}

void LineFormat::setEndArrowHead(std::shared_ptr<ArrowHeadProperties> value)
{
	m_EndArrowHead = value;
	
}

std::shared_ptr<CustomDashPattern> LineFormat::getCustomDashPattern() const
{
	return m_CustomDashPattern;
}

void LineFormat::setCustomDashPattern(std::shared_ptr<CustomDashPattern> value)
{
	m_CustomDashPattern = value;
	
}

std::shared_ptr<FillFormat> LineFormat::getFillFormat() const
{
	return m_FillFormat;
}

void LineFormat::setFillFormat(std::shared_ptr<FillFormat> value)
{
	m_FillFormat = value;
	
}

double LineFormat::getMiterLimit() const
{
	return m_MiterLimit;
}

void LineFormat::setMiterLimit(double value)
{
	m_MiterLimit = value;
	m_MiterLimitIsSet = true;
}

bool LineFormat::miterLimitIsSet() const
{
	return m_MiterLimitIsSet;
}

void LineFormat::unsetMiterLimit()
{
	m_MiterLimitIsSet = false;
}

double LineFormat::getWidth() const
{
	return m_Width;
}

void LineFormat::setWidth(double value)
{
	m_Width = value;
	m_WidthIsSet = true;
}

bool LineFormat::widthIsSet() const
{
	return m_WidthIsSet;
}

void LineFormat::unsetWidth()
{
	m_WidthIsSet = false;
}

web::json::value LineFormat::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Alignment.empty())
	{
		val[utility::conversions::to_string_t("Alignment")] = ModelBase::toJson(m_Alignment);
	}
	if (!m_CapStyle.empty())
	{
		val[utility::conversions::to_string_t("CapStyle")] = ModelBase::toJson(m_CapStyle);
	}
	if (!m_DashStyle.empty())
	{
		val[utility::conversions::to_string_t("DashStyle")] = ModelBase::toJson(m_DashStyle);
	}
	if (!m_JoinStyle.empty())
	{
		val[utility::conversions::to_string_t("JoinStyle")] = ModelBase::toJson(m_JoinStyle);
	}
	if (!m_Style.empty())
	{
		val[utility::conversions::to_string_t("Style")] = ModelBase::toJson(m_Style);
	}
	if (!m_SketchType.empty())
	{
		val[utility::conversions::to_string_t("SketchType")] = ModelBase::toJson(m_SketchType);
	}
	if (m_BeginArrowHead != nullptr)
	{
		val[utility::conversions::to_string_t("BeginArrowHead")] = ModelBase::toJson(m_BeginArrowHead);
	}
	if (m_EndArrowHead != nullptr)
	{
		val[utility::conversions::to_string_t("EndArrowHead")] = ModelBase::toJson(m_EndArrowHead);
	}
	if (m_CustomDashPattern != nullptr)
	{
		val[utility::conversions::to_string_t("CustomDashPattern")] = ModelBase::toJson(m_CustomDashPattern);
	}
	if (m_FillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("FillFormat")] = ModelBase::toJson(m_FillFormat);
	}
	if(m_MiterLimitIsSet)
	{
		val[utility::conversions::to_string_t("MiterLimit")] = ModelBase::toJson(m_MiterLimit);
	}
	if(m_WidthIsSet)
	{
		val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
	}
	return val;
}

void LineFormat::fromJson(web::json::value& val)
{
	web::json::value* jsonForAlignment = ModelBase::getField(val, "Alignment");
	if(jsonForAlignment != nullptr && !jsonForAlignment->is_null())
	{
		setAlignment(ModelBase::stringFromJson(*jsonForAlignment));
	}
	web::json::value* jsonForCapStyle = ModelBase::getField(val, "CapStyle");
	if(jsonForCapStyle != nullptr && !jsonForCapStyle->is_null())
	{
		setCapStyle(ModelBase::stringFromJson(*jsonForCapStyle));
	}
	web::json::value* jsonForDashStyle = ModelBase::getField(val, "DashStyle");
	if(jsonForDashStyle != nullptr && !jsonForDashStyle->is_null())
	{
		setDashStyle(ModelBase::stringFromJson(*jsonForDashStyle));
	}
	web::json::value* jsonForJoinStyle = ModelBase::getField(val, "JoinStyle");
	if(jsonForJoinStyle != nullptr && !jsonForJoinStyle->is_null())
	{
		setJoinStyle(ModelBase::stringFromJson(*jsonForJoinStyle));
	}
	web::json::value* jsonForStyle = ModelBase::getField(val, "Style");
	if(jsonForStyle != nullptr && !jsonForStyle->is_null())
	{
		setStyle(ModelBase::stringFromJson(*jsonForStyle));
	}
	web::json::value* jsonForSketchType = ModelBase::getField(val, "SketchType");
	if(jsonForSketchType != nullptr && !jsonForSketchType->is_null())
	{
		setSketchType(ModelBase::stringFromJson(*jsonForSketchType));
	}
	web::json::value* jsonForBeginArrowHead = ModelBase::getField(val, "BeginArrowHead");
	if(jsonForBeginArrowHead != nullptr && !jsonForBeginArrowHead->is_null())
	{
		std::shared_ptr<ArrowHeadProperties> newItem(new ArrowHeadProperties());
		newItem->fromJson(*jsonForBeginArrowHead);
		setBeginArrowHead(newItem);
	}
	web::json::value* jsonForEndArrowHead = ModelBase::getField(val, "EndArrowHead");
	if(jsonForEndArrowHead != nullptr && !jsonForEndArrowHead->is_null())
	{
		std::shared_ptr<ArrowHeadProperties> newItem(new ArrowHeadProperties());
		newItem->fromJson(*jsonForEndArrowHead);
		setEndArrowHead(newItem);
	}
	web::json::value* jsonForCustomDashPattern = ModelBase::getField(val, "CustomDashPattern");
	if(jsonForCustomDashPattern != nullptr && !jsonForCustomDashPattern->is_null())
	{
		std::shared_ptr<CustomDashPattern> newItem(new CustomDashPattern());
		newItem->fromJson(*jsonForCustomDashPattern);
		setCustomDashPattern(newItem);
	}
	web::json::value* jsonForFillFormat = ModelBase::getField(val, "FillFormat");
	if(jsonForFillFormat != nullptr && !jsonForFillFormat->is_null())
	{
		std::shared_ptr<FillFormat> newItem(new FillFormat());
		newItem->fromJson(*jsonForFillFormat);
		setFillFormat(newItem);
	}
	web::json::value* jsonForMiterLimit = ModelBase::getField(val, "MiterLimit");
	if(jsonForMiterLimit != nullptr && !jsonForMiterLimit->is_null() && jsonForMiterLimit->is_number())
	{
		setMiterLimit(ModelBase::doubleFromJson(*jsonForMiterLimit));
	}
	web::json::value* jsonForWidth = ModelBase::getField(val, "Width");
	if(jsonForWidth != nullptr && !jsonForWidth->is_null() && jsonForWidth->is_number())
	{
		setWidth(ModelBase::doubleFromJson(*jsonForWidth));
	}
}

}
}

