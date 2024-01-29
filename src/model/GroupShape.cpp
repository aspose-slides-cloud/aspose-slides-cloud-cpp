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
#include "GroupShape.h"

namespace asposeslidescloud {
namespace model {

GroupShape::GroupShape()
{
	setZOrderPosition(0);
	setType(L"GroupShape");
}

GroupShape::~GroupShape()
{
}

std::shared_ptr<ResourceUri> GroupShape::getShapes() const
{
	return m_Shapes;
}

void GroupShape::setShapes(std::shared_ptr<ResourceUri> value)
{
	m_Shapes = value;
	
}

web::json::value GroupShape::toJson() const
{
	web::json::value val = this->ShapeBase::toJson();
	if (m_Shapes != nullptr)
	{
		val[utility::conversions::to_string_t("Shapes")] = ModelBase::toJson(m_Shapes);
	}
	return val;
}

void GroupShape::fromJson(web::json::value& val)
{
	this->ShapeBase::fromJson(val);
	web::json::value* jsonForShapes = ModelBase::getField(val, "Shapes");
	if(jsonForShapes != nullptr && !jsonForShapes->is_null())
	{
		std::shared_ptr<void> instanceForShapes = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForShapes);
		setShapes(std::static_pointer_cast<ResourceUri>(instanceForShapes));
	}
}

}
}

