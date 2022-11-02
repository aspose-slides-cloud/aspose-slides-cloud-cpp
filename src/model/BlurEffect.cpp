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
#include "BlurEffect.h"

namespace asposeslidescloud {
namespace model {

BlurEffect::BlurEffect()
{
}

BlurEffect::~BlurEffect()
{
}

double BlurEffect::getRadius() const
{
	return m_Radius;
}

void BlurEffect::setRadius(double value)
{
	m_Radius = value;
	
}

bool BlurEffect::getGrow() const
{
	return m_Grow;
}

void BlurEffect::setGrow(bool value)
{
	m_Grow = value;
	
}

web::json::value BlurEffect::toJson() const
{
	web::json::value val = web::json::value::object();
	val[utility::conversions::to_string_t("Radius")] = ModelBase::toJson(m_Radius);
	val[utility::conversions::to_string_t("Grow")] = ModelBase::toJson(m_Grow);
	return val;
}

void BlurEffect::fromJson(web::json::value& val)
{
	web::json::value* jsonForRadius = ModelBase::getField(val, "Radius");
	if(jsonForRadius != nullptr && !jsonForRadius->is_null() && jsonForRadius->is_number())
	{
		setRadius(ModelBase::doubleFromJson(*jsonForRadius));
	}
	web::json::value* jsonForGrow = ModelBase::getField(val, "Grow");
	if(jsonForGrow != nullptr && !jsonForGrow->is_null())
	{
		setGrow(ModelBase::boolFromJson(*jsonForGrow));
	}
}

}
}

