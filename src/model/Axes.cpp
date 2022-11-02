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
#include "Axes.h"

namespace asposeslidescloud {
namespace model {

Axes::Axes()
{
}

Axes::~Axes()
{
}

std::shared_ptr<Axis> Axes::getHorizontalAxis() const
{
	return m_HorizontalAxis;
}

void Axes::setHorizontalAxis(std::shared_ptr<Axis> value)
{
	m_HorizontalAxis = value;
	
}

std::shared_ptr<Axis> Axes::getVerticalAxis() const
{
	return m_VerticalAxis;
}

void Axes::setVerticalAxis(std::shared_ptr<Axis> value)
{
	m_VerticalAxis = value;
	
}

std::shared_ptr<Axis> Axes::getSecondaryHorizontalAxis() const
{
	return m_SecondaryHorizontalAxis;
}

void Axes::setSecondaryHorizontalAxis(std::shared_ptr<Axis> value)
{
	m_SecondaryHorizontalAxis = value;
	
}

std::shared_ptr<Axis> Axes::getSecondaryVerticalAxis() const
{
	return m_SecondaryVerticalAxis;
}

void Axes::setSecondaryVerticalAxis(std::shared_ptr<Axis> value)
{
	m_SecondaryVerticalAxis = value;
	
}

web::json::value Axes::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_HorizontalAxis != nullptr)
	{
		val[utility::conversions::to_string_t("HorizontalAxis")] = ModelBase::toJson(m_HorizontalAxis);
	}
	if (m_VerticalAxis != nullptr)
	{
		val[utility::conversions::to_string_t("VerticalAxis")] = ModelBase::toJson(m_VerticalAxis);
	}
	if (m_SecondaryHorizontalAxis != nullptr)
	{
		val[utility::conversions::to_string_t("SecondaryHorizontalAxis")] = ModelBase::toJson(m_SecondaryHorizontalAxis);
	}
	if (m_SecondaryVerticalAxis != nullptr)
	{
		val[utility::conversions::to_string_t("SecondaryVerticalAxis")] = ModelBase::toJson(m_SecondaryVerticalAxis);
	}
	return val;
}

void Axes::fromJson(web::json::value& val)
{
	web::json::value* jsonForHorizontalAxis = ModelBase::getField(val, "HorizontalAxis");
	if(jsonForHorizontalAxis != nullptr && !jsonForHorizontalAxis->is_null())
	{
		std::shared_ptr<void> instanceForHorizontalAxis = asposeslidescloud::api::ClassRegistry::deserialize(L"Axis", *jsonForHorizontalAxis);
		setHorizontalAxis(std::static_pointer_cast<Axis>(instanceForHorizontalAxis));
	}
	web::json::value* jsonForVerticalAxis = ModelBase::getField(val, "VerticalAxis");
	if(jsonForVerticalAxis != nullptr && !jsonForVerticalAxis->is_null())
	{
		std::shared_ptr<void> instanceForVerticalAxis = asposeslidescloud::api::ClassRegistry::deserialize(L"Axis", *jsonForVerticalAxis);
		setVerticalAxis(std::static_pointer_cast<Axis>(instanceForVerticalAxis));
	}
	web::json::value* jsonForSecondaryHorizontalAxis = ModelBase::getField(val, "SecondaryHorizontalAxis");
	if(jsonForSecondaryHorizontalAxis != nullptr && !jsonForSecondaryHorizontalAxis->is_null())
	{
		std::shared_ptr<void> instanceForSecondaryHorizontalAxis = asposeslidescloud::api::ClassRegistry::deserialize(L"Axis", *jsonForSecondaryHorizontalAxis);
		setSecondaryHorizontalAxis(std::static_pointer_cast<Axis>(instanceForSecondaryHorizontalAxis));
	}
	web::json::value* jsonForSecondaryVerticalAxis = ModelBase::getField(val, "SecondaryVerticalAxis");
	if(jsonForSecondaryVerticalAxis != nullptr && !jsonForSecondaryVerticalAxis->is_null())
	{
		std::shared_ptr<void> instanceForSecondaryVerticalAxis = asposeslidescloud::api::ClassRegistry::deserialize(L"Axis", *jsonForSecondaryVerticalAxis);
		setSecondaryVerticalAxis(std::static_pointer_cast<Axis>(instanceForSecondaryVerticalAxis));
	}
}

}
}

