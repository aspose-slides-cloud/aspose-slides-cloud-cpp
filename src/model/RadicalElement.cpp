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
#include "RadicalElement.h"

namespace asposeslidescloud {
namespace model {

RadicalElement::RadicalElement()
{
	m_HideDegreeIsSet = false;
	setType(L"Radical");
}

RadicalElement::~RadicalElement()
{
}

std::shared_ptr<MathElement> RadicalElement::getBase() const
{
	return m_Base;
}

void RadicalElement::setBase(std::shared_ptr<MathElement> value)
{
	m_Base = value;
	
}

std::shared_ptr<MathElement> RadicalElement::getDegree() const
{
	return m_Degree;
}

void RadicalElement::setDegree(std::shared_ptr<MathElement> value)
{
	m_Degree = value;
	
}

bool RadicalElement::isHideDegree() const
{
	return m_HideDegree;
}

void RadicalElement::setHideDegree(bool value)
{
	m_HideDegree = value;
	m_HideDegreeIsSet = true;
}

bool RadicalElement::hideDegreeIsSet() const
{
	return m_HideDegreeIsSet;
}

void RadicalElement::unsetHideDegree()
{
	m_HideDegreeIsSet = false;
}

web::json::value RadicalElement::toJson() const
{
	web::json::value val = this->MathElement::toJson();
	if (m_Base != nullptr)
	{
		val[utility::conversions::to_string_t("Base")] = ModelBase::toJson(m_Base);
	}
	if (m_Degree != nullptr)
	{
		val[utility::conversions::to_string_t("Degree")] = ModelBase::toJson(m_Degree);
	}
	if(m_HideDegreeIsSet)
	{
		val[utility::conversions::to_string_t("HideDegree")] = ModelBase::toJson(m_HideDegree);
	}
	return val;
}

void RadicalElement::fromJson(web::json::value& val)
{
	this->MathElement::fromJson(val);
	web::json::value* jsonForBase = ModelBase::getField(val, "Base");
	if(jsonForBase != nullptr && !jsonForBase->is_null())
	{
		std::shared_ptr<void> instanceForBase = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForBase);
		setBase(std::static_pointer_cast<MathElement>(instanceForBase));
	}
	web::json::value* jsonForDegree = ModelBase::getField(val, "Degree");
	if(jsonForDegree != nullptr && !jsonForDegree->is_null())
	{
		std::shared_ptr<void> instanceForDegree = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForDegree);
		setDegree(std::static_pointer_cast<MathElement>(instanceForDegree));
	}
	web::json::value* jsonForHideDegree = ModelBase::getField(val, "HideDegree");
	if(jsonForHideDegree != nullptr && !jsonForHideDegree->is_null())
	{
		setHideDegree(ModelBase::boolFromJson(*jsonForHideDegree));
	}
}

}
}

