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



#include "ShapeBevel.h"

namespace asposeslidescloud {
namespace model {

ShapeBevel::ShapeBevel()
{
	m_WidthIsSet = false;
	m_HeightIsSet = false;
}

ShapeBevel::~ShapeBevel()
{
}

utility::string_t ShapeBevel::getBevelType() const
{
	return m_BevelType;
}

void ShapeBevel::setBevelType(utility::string_t value)
{
	m_BevelType = value;
	
}

double ShapeBevel::getWidth() const
{
	return m_Width;
}

void ShapeBevel::setWidth(double value)
{
	m_Width = value;
	m_WidthIsSet = true;
}

bool ShapeBevel::widthIsSet() const
{
	return m_WidthIsSet;
}

void ShapeBevel::unsetWidth()
{
	m_WidthIsSet = false;
}

double ShapeBevel::getHeight() const
{
	return m_Height;
}

void ShapeBevel::setHeight(double value)
{
	m_Height = value;
	m_HeightIsSet = true;
}

bool ShapeBevel::heightIsSet() const
{
	return m_HeightIsSet;
}

void ShapeBevel::unsetHeight()
{
	m_HeightIsSet = false;
}

web::json::value ShapeBevel::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_BevelType.empty())
	{
		val[utility::conversions::to_string_t("BevelType")] = ModelBase::toJson(m_BevelType);
	}
	if(m_WidthIsSet)
	{
		val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
	}
	if(m_HeightIsSet)
	{
		val[utility::conversions::to_string_t("Height")] = ModelBase::toJson(m_Height);
	}
	return val;
}

void ShapeBevel::fromJson(web::json::value& val)
{
	web::json::value* jsonForBevelType = ModelBase::getField(val, "BevelType");
	if(jsonForBevelType != nullptr && !jsonForBevelType->is_null())
	{
		setBevelType(ModelBase::stringFromJson(*jsonForBevelType));
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

