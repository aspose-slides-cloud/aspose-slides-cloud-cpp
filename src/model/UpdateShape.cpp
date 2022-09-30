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



#include "UpdateShape.h"

namespace asposeslidescloud {
namespace model {

UpdateShape::UpdateShape()
{
	setType(L"UpdateShape");
}

UpdateShape::~UpdateShape()
{
}

std::shared_ptr<ShapeBase> UpdateShape::getShape() const
{
	return m_Shape;
}

void UpdateShape::setShape(std::shared_ptr<ShapeBase> value)
{
	m_Shape = value;
	
}

utility::string_t UpdateShape::getShapePath() const
{
	return m_ShapePath;
}

void UpdateShape::setShapePath(utility::string_t value)
{
	m_ShapePath = value;
	
}

web::json::value UpdateShape::toJson() const
{
	web::json::value val = this->Task::toJson();
	if (m_Shape != nullptr)
	{
		val[utility::conversions::to_string_t("Shape")] = ModelBase::toJson(m_Shape);
	}
	if (!m_ShapePath.empty())
	{
		val[utility::conversions::to_string_t("ShapePath")] = ModelBase::toJson(m_ShapePath);
	}
	return val;
}

void UpdateShape::fromJson(web::json::value& val)
{
	this->Task::fromJson(val);
	web::json::value* jsonForShape = ModelBase::getField(val, "Shape");
	if(jsonForShape != nullptr && !jsonForShape->is_null())
	{
		std::shared_ptr<ShapeBase> newItem(new ShapeBase());
		newItem->fromJson(*jsonForShape);
		setShape(newItem);
	}
	web::json::value* jsonForShapePath = ModelBase::getField(val, "ShapePath");
	if(jsonForShapePath != nullptr && !jsonForShapePath->is_null())
	{
		setShapePath(ModelBase::stringFromJson(*jsonForShapePath));
	}
}

}
}

