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
#include "FunctionElement.h"

namespace asposeslidescloud {
namespace model {

FunctionElement::FunctionElement()
{
	setType(L"Function");
}

FunctionElement::~FunctionElement()
{
}

std::shared_ptr<MathElement> FunctionElement::getName() const
{
	return m_Name;
}

void FunctionElement::setName(std::shared_ptr<MathElement> value)
{
	m_Name = value;
	
}

std::shared_ptr<MathElement> FunctionElement::getBase() const
{
	return m_Base;
}

void FunctionElement::setBase(std::shared_ptr<MathElement> value)
{
	m_Base = value;
	
}

web::json::value FunctionElement::toJson() const
{
	web::json::value val = this->MathElement::toJson();
	if (m_Name != nullptr)
	{
		val[utility::conversions::to_string_t("Name")] = ModelBase::toJson(m_Name);
	}
	if (m_Base != nullptr)
	{
		val[utility::conversions::to_string_t("Base")] = ModelBase::toJson(m_Base);
	}
	return val;
}

void FunctionElement::fromJson(web::json::value& val)
{
	this->MathElement::fromJson(val);
	web::json::value* jsonForName = ModelBase::getField(val, "Name");
	if(jsonForName != nullptr && !jsonForName->is_null())
	{
		std::shared_ptr<void> instanceForName = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForName);
		setName(std::static_pointer_cast<MathElement>(instanceForName));
	}
	web::json::value* jsonForBase = ModelBase::getField(val, "Base");
	if(jsonForBase != nullptr && !jsonForBase->is_null())
	{
		std::shared_ptr<void> instanceForBase = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForBase);
		setBase(std::static_pointer_cast<MathElement>(instanceForBase));
	}
}

}
}

