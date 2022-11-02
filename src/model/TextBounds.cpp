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
#include "TextBounds.h"

namespace asposeslidescloud {
namespace model {

TextBounds::TextBounds()
{
}

TextBounds::~TextBounds()
{
}

double TextBounds::getX() const
{
	return m_X;
}

void TextBounds::setX(double value)
{
	m_X = value;
	
}

double TextBounds::getY() const
{
	return m_Y;
}

void TextBounds::setY(double value)
{
	m_Y = value;
	
}

double TextBounds::getWidth() const
{
	return m_Width;
}

void TextBounds::setWidth(double value)
{
	m_Width = value;
	
}

double TextBounds::getHeight() const
{
	return m_Height;
}

void TextBounds::setHeight(double value)
{
	m_Height = value;
	
}

web::json::value TextBounds::toJson() const
{
	web::json::value val = web::json::value::object();
	val[utility::conversions::to_string_t("X")] = ModelBase::toJson(m_X);
	val[utility::conversions::to_string_t("Y")] = ModelBase::toJson(m_Y);
	val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
	val[utility::conversions::to_string_t("Height")] = ModelBase::toJson(m_Height);
	return val;
}

void TextBounds::fromJson(web::json::value& val)
{
	web::json::value* jsonForX = ModelBase::getField(val, "X");
	if(jsonForX != nullptr && !jsonForX->is_null() && jsonForX->is_number())
	{
		setX(ModelBase::doubleFromJson(*jsonForX));
	}
	web::json::value* jsonForY = ModelBase::getField(val, "Y");
	if(jsonForY != nullptr && !jsonForY->is_null() && jsonForY->is_number())
	{
		setY(ModelBase::doubleFromJson(*jsonForY));
	}
	web::json::value* jsonForWidth = ModelBase::getField(val, "Width");
	if(jsonForWidth != nullptr && !jsonForWidth->is_null() && jsonForWidth->is_number())
	{
		setWidth(ModelBase::doubleFromJson(*jsonForWidth));
	}
	web::json::value* jsonForHeight = ModelBase::getField(val, "Height");
	if(jsonForHeight != nullptr && !jsonForHeight->is_null() && jsonForHeight->is_number())
	{
		setHeight(ModelBase::doubleFromJson(*jsonForHeight));
	}
}

}
}

