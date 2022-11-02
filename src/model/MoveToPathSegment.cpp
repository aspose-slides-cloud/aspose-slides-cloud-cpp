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
#include "MoveToPathSegment.h"

namespace asposeslidescloud {
namespace model {

MoveToPathSegment::MoveToPathSegment()
{
	setType(L"MoveTo");
}

MoveToPathSegment::~MoveToPathSegment()
{
}

double MoveToPathSegment::getX() const
{
	return m_X;
}

void MoveToPathSegment::setX(double value)
{
	m_X = value;
	
}

double MoveToPathSegment::getY() const
{
	return m_Y;
}

void MoveToPathSegment::setY(double value)
{
	m_Y = value;
	
}

web::json::value MoveToPathSegment::toJson() const
{
	web::json::value val = this->PathSegment::toJson();
	val[utility::conversions::to_string_t("X")] = ModelBase::toJson(m_X);
	val[utility::conversions::to_string_t("Y")] = ModelBase::toJson(m_Y);
	return val;
}

void MoveToPathSegment::fromJson(web::json::value& val)
{
	this->PathSegment::fromJson(val);
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
}

}
}

