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



#include "LimitElement.h"

namespace asposeslidescloud {
namespace model {

LimitElement::LimitElement()
{
	m_UpperLimitIsSet = false;
	setType(L"Limit");
}

LimitElement::~LimitElement()
{
}

std::shared_ptr<MathElement> LimitElement::getBase() const
{
	return m_Base;
}

void LimitElement::setBase(std::shared_ptr<MathElement> value)
{
	m_Base = value;
	
}

std::shared_ptr<MathElement> LimitElement::getLimit() const
{
	return m_Limit;
}

void LimitElement::setLimit(std::shared_ptr<MathElement> value)
{
	m_Limit = value;
	
}

bool LimitElement::getUpperLimit() const
{
	return m_UpperLimit;
}

void LimitElement::setUpperLimit(bool value)
{
	m_UpperLimit = value;
	m_UpperLimitIsSet = true;
}

bool LimitElement::upperLimitIsSet() const
{
	return m_UpperLimitIsSet;
}

void LimitElement::unsetUpperLimit()
{
	m_UpperLimitIsSet = false;
}

web::json::value LimitElement::toJson() const
{
	web::json::value val = this->MathElement::toJson();
	if (m_Base != nullptr)
	{
		val[utility::conversions::to_string_t("Base")] = ModelBase::toJson(m_Base);
	}
	if (m_Limit != nullptr)
	{
		val[utility::conversions::to_string_t("Limit")] = ModelBase::toJson(m_Limit);
	}
	if(m_UpperLimitIsSet)
	{
		val[utility::conversions::to_string_t("UpperLimit")] = ModelBase::toJson(m_UpperLimit);
	}
	return val;
}

void LimitElement::fromJson(web::json::value& val)
{
	this->MathElement::fromJson(val);
	web::json::value* jsonForBase = ModelBase::getField(val, "Base");
	if(jsonForBase != nullptr && !jsonForBase->is_null())
	{
		std::shared_ptr<MathElement> newItem(new MathElement());
		newItem->fromJson(*jsonForBase);
		setBase(newItem);
	}
	web::json::value* jsonForLimit = ModelBase::getField(val, "Limit");
	if(jsonForLimit != nullptr && !jsonForLimit->is_null())
	{
		std::shared_ptr<MathElement> newItem(new MathElement());
		newItem->fromJson(*jsonForLimit);
		setLimit(newItem);
	}
	web::json::value* jsonForUpperLimit = ModelBase::getField(val, "UpperLimit");
	if(jsonForUpperLimit != nullptr && !jsonForUpperLimit->is_null())
	{
		setUpperLimit(ModelBase::boolFromJson(*jsonForUpperLimit));
	}
}

}
}

