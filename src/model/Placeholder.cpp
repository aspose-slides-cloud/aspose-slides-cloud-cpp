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
#include "Placeholder.h"

namespace asposeslidescloud {
namespace model {

Placeholder::Placeholder()
{
}

Placeholder::~Placeholder()
{
}

int32_t Placeholder::getIndex() const
{
	return m_Index;
}

void Placeholder::setIndex(int32_t value)
{
	m_Index = value;
	
}

utility::string_t Placeholder::getOrientation() const
{
	return m_Orientation;
}

void Placeholder::setOrientation(utility::string_t value)
{
	m_Orientation = value;
	
}

utility::string_t Placeholder::getSize() const
{
	return m_Size;
}

void Placeholder::setSize(utility::string_t value)
{
	m_Size = value;
	
}

utility::string_t Placeholder::getType() const
{
	return m_Type;
}

void Placeholder::setType(utility::string_t value)
{
	m_Type = value;
	
}

std::shared_ptr<ResourceUri> Placeholder::getShape() const
{
	return m_Shape;
}

void Placeholder::setShape(std::shared_ptr<ResourceUri> value)
{
	m_Shape = value;
	
}

web::json::value Placeholder::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	val[utility::conversions::to_string_t("Index")] = ModelBase::toJson(m_Index);
	if (!m_Orientation.empty())
	{
		val[utility::conversions::to_string_t("Orientation")] = ModelBase::toJson(m_Orientation);
	}
	if (!m_Size.empty())
	{
		val[utility::conversions::to_string_t("Size")] = ModelBase::toJson(m_Size);
	}
	if (!m_Type.empty())
	{
		val[utility::conversions::to_string_t("Type")] = ModelBase::toJson(m_Type);
	}
	if (m_Shape != nullptr)
	{
		val[utility::conversions::to_string_t("Shape")] = ModelBase::toJson(m_Shape);
	}
	return val;
}

void Placeholder::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForIndex = ModelBase::getField(val, "Index");
	if(jsonForIndex != nullptr && !jsonForIndex->is_null() && jsonForIndex->is_number())
	{
		setIndex(ModelBase::int32_tFromJson(*jsonForIndex));
	}
	web::json::value* jsonForOrientation = ModelBase::getField(val, "Orientation");
	if(jsonForOrientation != nullptr && !jsonForOrientation->is_null())
	{
		setOrientation(ModelBase::stringFromJson(*jsonForOrientation));
	}
	web::json::value* jsonForSize = ModelBase::getField(val, "Size");
	if(jsonForSize != nullptr && !jsonForSize->is_null())
	{
		setSize(ModelBase::stringFromJson(*jsonForSize));
	}
	web::json::value* jsonForType = ModelBase::getField(val, "Type");
	if(jsonForType != nullptr && !jsonForType->is_null())
	{
		setType(ModelBase::stringFromJson(*jsonForType));
	}
	web::json::value* jsonForShape = ModelBase::getField(val, "Shape");
	if(jsonForShape != nullptr && !jsonForShape->is_null())
	{
		std::shared_ptr<void> instanceForShape = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForShape);
		setShape(std::static_pointer_cast<ResourceUri>(instanceForShape));
	}
}

}
}

