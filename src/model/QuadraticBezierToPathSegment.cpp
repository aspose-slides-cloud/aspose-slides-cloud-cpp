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



#include "QuadraticBezierToPathSegment.h"

namespace asposeslidescloud {
namespace model {

QuadraticBezierToPathSegment::QuadraticBezierToPathSegment()
{
	setType(L"QuadBezierTo");
}

QuadraticBezierToPathSegment::~QuadraticBezierToPathSegment()
{
}

double QuadraticBezierToPathSegment::getX1() const
{
	return m_X1;
}

void QuadraticBezierToPathSegment::setX1(double value)
{
	m_X1 = value;
	
}

double QuadraticBezierToPathSegment::getY1() const
{
	return m_Y1;
}

void QuadraticBezierToPathSegment::setY1(double value)
{
	m_Y1 = value;
	
}

double QuadraticBezierToPathSegment::getX2() const
{
	return m_X2;
}

void QuadraticBezierToPathSegment::setX2(double value)
{
	m_X2 = value;
	
}

double QuadraticBezierToPathSegment::getY2() const
{
	return m_Y2;
}

void QuadraticBezierToPathSegment::setY2(double value)
{
	m_Y2 = value;
	
}

web::json::value QuadraticBezierToPathSegment::toJson() const
{
	web::json::value val = this->PathSegment::toJson();
	val[utility::conversions::to_string_t("X1")] = ModelBase::toJson(m_X1);
	val[utility::conversions::to_string_t("Y1")] = ModelBase::toJson(m_Y1);
	val[utility::conversions::to_string_t("X2")] = ModelBase::toJson(m_X2);
	val[utility::conversions::to_string_t("Y2")] = ModelBase::toJson(m_Y2);
	return val;
}

void QuadraticBezierToPathSegment::fromJson(web::json::value& val)
{
	this->PathSegment::fromJson(val);
	web::json::value* jsonForX1 = ModelBase::getField(val, "X1");
	if(jsonForX1 != nullptr && !jsonForX1->is_null() && jsonForX1->is_number())
	{
		setX1(ModelBase::doubleFromJson(*jsonForX1));
	}
	web::json::value* jsonForY1 = ModelBase::getField(val, "Y1");
	if(jsonForY1 != nullptr && !jsonForY1->is_null() && jsonForY1->is_number())
	{
		setY1(ModelBase::doubleFromJson(*jsonForY1));
	}
	web::json::value* jsonForX2 = ModelBase::getField(val, "X2");
	if(jsonForX2 != nullptr && !jsonForX2->is_null() && jsonForX2->is_number())
	{
		setX2(ModelBase::doubleFromJson(*jsonForX2));
	}
	web::json::value* jsonForY2 = ModelBase::getField(val, "Y2");
	if(jsonForY2 != nullptr && !jsonForY2->is_null() && jsonForY2->is_number())
	{
		setY2(ModelBase::doubleFromJson(*jsonForY2));
	}
}

}
}

