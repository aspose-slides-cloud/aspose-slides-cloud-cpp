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



#include "ImageExportOptionsBase.h"

namespace asposeslidescloud {
namespace model {

ImageExportOptionsBase::ImageExportOptionsBase()
{
	m_HeightIsSet = false;
	m_WidthIsSet = false;
}

ImageExportOptionsBase::~ImageExportOptionsBase()
{
}

int32_t ImageExportOptionsBase::getHeight() const
{
	return m_Height;
}

void ImageExportOptionsBase::setHeight(int32_t value)
{
	m_Height = value;
	m_HeightIsSet = true;
}

bool ImageExportOptionsBase::heightIsSet() const
{
	return m_HeightIsSet;
}

void ImageExportOptionsBase::unsetHeight()
{
	m_HeightIsSet = false;
}

int32_t ImageExportOptionsBase::getWidth() const
{
	return m_Width;
}

void ImageExportOptionsBase::setWidth(int32_t value)
{
	m_Width = value;
	m_WidthIsSet = true;
}

bool ImageExportOptionsBase::widthIsSet() const
{
	return m_WidthIsSet;
}

void ImageExportOptionsBase::unsetWidth()
{
	m_WidthIsSet = false;
}

web::json::value ImageExportOptionsBase::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	if(m_HeightIsSet)
	{
		val[utility::conversions::to_string_t("Height")] = ModelBase::toJson(m_Height);
	}
	if(m_WidthIsSet)
	{
		val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
	}
	return val;
}

void ImageExportOptionsBase::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
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
}

}
}

