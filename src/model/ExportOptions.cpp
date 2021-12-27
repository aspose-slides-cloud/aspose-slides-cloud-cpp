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



#include "ExportOptions.h"

namespace asposeslidescloud {
namespace model {

ExportOptions::ExportOptions()
{
	m_HeightIsSet = false;
	m_WidthIsSet = false;
}

ExportOptions::~ExportOptions()
{
}

utility::string_t ExportOptions::getDefaultRegularFont() const
{
	return m_DefaultRegularFont;
}

void ExportOptions::setDefaultRegularFont(utility::string_t value)
{
	m_DefaultRegularFont = value;
	
}

int32_t ExportOptions::getHeight() const
{
	return m_Height;
}

void ExportOptions::setHeight(int32_t value)
{
	m_Height = value;
	m_HeightIsSet = true;
}

bool ExportOptions::heightIsSet() const
{
	return m_HeightIsSet;
}

void ExportOptions::unsetHeight()
{
	m_HeightIsSet = false;
}

int32_t ExportOptions::getWidth() const
{
	return m_Width;
}

void ExportOptions::setWidth(int32_t value)
{
	m_Width = value;
	m_WidthIsSet = true;
}

bool ExportOptions::widthIsSet() const
{
	return m_WidthIsSet;
}

void ExportOptions::unsetWidth()
{
	m_WidthIsSet = false;
}

utility::string_t ExportOptions::getFormat() const
{
	return m_Format;
}

void ExportOptions::setFormat(utility::string_t value)
{
	m_Format = value;
	
}

web::json::value ExportOptions::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_DefaultRegularFont.empty())
	{
		val[utility::conversions::to_string_t("DefaultRegularFont")] = ModelBase::toJson(m_DefaultRegularFont);
	}
	if(m_HeightIsSet)
	{
		val[utility::conversions::to_string_t("Height")] = ModelBase::toJson(m_Height);
	}
	if(m_WidthIsSet)
	{
		val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
	}
	if (!m_Format.empty())
	{
		val[utility::conversions::to_string_t("Format")] = ModelBase::toJson(m_Format);
	}
	return val;
}

void ExportOptions::fromJson(web::json::value& val)
{
	web::json::value* jsonForDefaultRegularFont = ModelBase::getField(val, "DefaultRegularFont");
	if(jsonForDefaultRegularFont != nullptr && !jsonForDefaultRegularFont->is_null())
	{
		setDefaultRegularFont(ModelBase::stringFromJson(*jsonForDefaultRegularFont));
	}
	web::json::value* jsonForHeight = ModelBase::getField(val, "Height");
	if(jsonForHeight != nullptr && !jsonForHeight->is_null() && jsonForHeight->is_number())
	{
		setHeight(ModelBase::int32_tFromJson(*jsonForHeight));
	}
	web::json::value* jsonForWidth = ModelBase::getField(val, "Width");
	if(jsonForWidth != nullptr && !jsonForWidth->is_null() && jsonForWidth->is_number())
	{
		setWidth(ModelBase::int32_tFromJson(*jsonForWidth));
	}
	web::json::value* jsonForFormat = ModelBase::getField(val, "Format");
	if(jsonForFormat != nullptr && !jsonForFormat->is_null())
	{
		setFormat(ModelBase::stringFromJson(*jsonForFormat));
	}
}

}
}

