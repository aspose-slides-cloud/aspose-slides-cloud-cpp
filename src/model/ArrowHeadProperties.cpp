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
#include "ArrowHeadProperties.h"

namespace asposeslidescloud {
namespace model {

ArrowHeadProperties::ArrowHeadProperties()
{
}

ArrowHeadProperties::~ArrowHeadProperties()
{
}

utility::string_t ArrowHeadProperties::getLength() const
{
	return m_Length;
}

void ArrowHeadProperties::setLength(utility::string_t value)
{
	m_Length = value;
	
}

utility::string_t ArrowHeadProperties::getStyle() const
{
	return m_Style;
}

void ArrowHeadProperties::setStyle(utility::string_t value)
{
	m_Style = value;
	
}

utility::string_t ArrowHeadProperties::getWidth() const
{
	return m_Width;
}

void ArrowHeadProperties::setWidth(utility::string_t value)
{
	m_Width = value;
	
}

web::json::value ArrowHeadProperties::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Length.empty())
	{
		val[utility::conversions::to_string_t("Length")] = ModelBase::toJson(m_Length);
	}
	if (!m_Style.empty())
	{
		val[utility::conversions::to_string_t("Style")] = ModelBase::toJson(m_Style);
	}
	if (!m_Width.empty())
	{
		val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
	}
	return val;
}

void ArrowHeadProperties::fromJson(web::json::value& val)
{
	web::json::value* jsonForLength = ModelBase::getField(val, "Length");
	if(jsonForLength != nullptr && !jsonForLength->is_null())
	{
		setLength(ModelBase::stringFromJson(*jsonForLength));
	}
	web::json::value* jsonForStyle = ModelBase::getField(val, "Style");
	if(jsonForStyle != nullptr && !jsonForStyle->is_null())
	{
		setStyle(ModelBase::stringFromJson(*jsonForStyle));
	}
	web::json::value* jsonForWidth = ModelBase::getField(val, "Width");
	if(jsonForWidth != nullptr && !jsonForWidth->is_null())
	{
		setWidth(ModelBase::stringFromJson(*jsonForWidth));
	}
}

}
}

