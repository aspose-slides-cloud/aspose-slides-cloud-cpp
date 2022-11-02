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
#include "Image.h"

namespace asposeslidescloud {
namespace model {

Image::Image()
{
}

Image::~Image()
{
}

int32_t Image::getWidth() const
{
	return m_Width;
}

void Image::setWidth(int32_t value)
{
	m_Width = value;
	
}

int32_t Image::getHeight() const
{
	return m_Height;
}

void Image::setHeight(int32_t value)
{
	m_Height = value;
	
}

utility::string_t Image::getContentType() const
{
	return m_ContentType;
}

void Image::setContentType(utility::string_t value)
{
	m_ContentType = value;
	
}

web::json::value Image::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
	val[utility::conversions::to_string_t("Height")] = ModelBase::toJson(m_Height);
	if (!m_ContentType.empty())
	{
		val[utility::conversions::to_string_t("ContentType")] = ModelBase::toJson(m_ContentType);
	}
	return val;
}

void Image::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForWidth = ModelBase::getField(val, "Width");
	if(jsonForWidth != nullptr && !jsonForWidth->is_null() && jsonForWidth->is_number())
	{
		setWidth(ModelBase::int32_tFromJson(*jsonForWidth));
	}
	web::json::value* jsonForHeight = ModelBase::getField(val, "Height");
	if(jsonForHeight != nullptr && !jsonForHeight->is_null() && jsonForHeight->is_number())
	{
		setHeight(ModelBase::int32_tFromJson(*jsonForHeight));
	}
	web::json::value* jsonForContentType = ModelBase::getField(val, "ContentType");
	if(jsonForContentType != nullptr && !jsonForContentType->is_null())
	{
		setContentType(ModelBase::stringFromJson(*jsonForContentType));
	}
}

}
}

