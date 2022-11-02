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
#include "GradientFillStop.h"

namespace asposeslidescloud {
namespace model {

GradientFillStop::GradientFillStop()
{
}

GradientFillStop::~GradientFillStop()
{
}

utility::string_t GradientFillStop::getColor() const
{
	return m_Color;
}

void GradientFillStop::setColor(utility::string_t value)
{
	m_Color = value;
	
}

double GradientFillStop::getPosition() const
{
	return m_Position;
}

void GradientFillStop::setPosition(double value)
{
	m_Position = value;
	
}

web::json::value GradientFillStop::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Color.empty())
	{
		val[utility::conversions::to_string_t("Color")] = ModelBase::toJson(m_Color);
	}
	val[utility::conversions::to_string_t("Position")] = ModelBase::toJson(m_Position);
	return val;
}

void GradientFillStop::fromJson(web::json::value& val)
{
	web::json::value* jsonForColor = ModelBase::getField(val, "Color");
	if(jsonForColor != nullptr && !jsonForColor->is_null())
	{
		setColor(ModelBase::stringFromJson(*jsonForColor));
	}
	web::json::value* jsonForPosition = ModelBase::getField(val, "Position");
	if(jsonForPosition != nullptr && !jsonForPosition->is_null() && jsonForPosition->is_number())
	{
		setPosition(ModelBase::doubleFromJson(*jsonForPosition));
	}
}

}
}

