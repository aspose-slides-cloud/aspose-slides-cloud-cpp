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



#include "DelimiterElement.h"

namespace asposeslidescloud {
namespace model {

DelimiterElement::DelimiterElement()
{
	m_GrowToMatchOperandHeightIsSet = false;
}

DelimiterElement::~DelimiterElement()
{
}

std::vector<std::shared_ptr<MathElement>> DelimiterElement::getArguments() const
{
	return m_Arguments;
}

void DelimiterElement::setArguments(std::vector<std::shared_ptr<MathElement>> value)
{
	m_Arguments = value;
	
}

utility::string_t DelimiterElement::getBeginningCharacter() const
{
	return m_BeginningCharacter;
}

void DelimiterElement::setBeginningCharacter(utility::string_t value)
{
	m_BeginningCharacter = value;
	
}

utility::string_t DelimiterElement::getSeparatorCharacter() const
{
	return m_SeparatorCharacter;
}

void DelimiterElement::setSeparatorCharacter(utility::string_t value)
{
	m_SeparatorCharacter = value;
	
}

utility::string_t DelimiterElement::getEndingCharacter() const
{
	return m_EndingCharacter;
}

void DelimiterElement::setEndingCharacter(utility::string_t value)
{
	m_EndingCharacter = value;
	
}

bool DelimiterElement::getGrowToMatchOperandHeight() const
{
	return m_GrowToMatchOperandHeight;
}

void DelimiterElement::setGrowToMatchOperandHeight(bool value)
{
	m_GrowToMatchOperandHeight = value;
	m_GrowToMatchOperandHeightIsSet = true;
}

bool DelimiterElement::growToMatchOperandHeightIsSet() const
{
	return m_GrowToMatchOperandHeightIsSet;
}

void DelimiterElement::unsetGrowToMatchOperandHeight()
{
	m_GrowToMatchOperandHeightIsSet = false;
}

utility::string_t DelimiterElement::getDelimiterShape() const
{
	return m_DelimiterShape;
}

void DelimiterElement::setDelimiterShape(utility::string_t value)
{
	m_DelimiterShape = value;
	
}

web::json::value DelimiterElement::toJson() const
{
	web::json::value val = this->MathElement::toJson();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Arguments)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		if (jsonArray.size() > 0)
		{
			val[utility::conversions::to_string_t("Arguments")] = web::json::value::array(jsonArray);
		}
	}
	if (!m_BeginningCharacter.empty())
	{
		val[utility::conversions::to_string_t("BeginningCharacter")] = ModelBase::toJson(m_BeginningCharacter);
	}
	if (!m_SeparatorCharacter.empty())
	{
		val[utility::conversions::to_string_t("SeparatorCharacter")] = ModelBase::toJson(m_SeparatorCharacter);
	}
	if (!m_EndingCharacter.empty())
	{
		val[utility::conversions::to_string_t("EndingCharacter")] = ModelBase::toJson(m_EndingCharacter);
	}
	if(m_GrowToMatchOperandHeightIsSet)
	{
		val[utility::conversions::to_string_t("GrowToMatchOperandHeight")] = ModelBase::toJson(m_GrowToMatchOperandHeight);
	}
	if (!m_DelimiterShape.empty())
	{
		val[utility::conversions::to_string_t("DelimiterShape")] = ModelBase::toJson(m_DelimiterShape);
	}
	return val;
}

void DelimiterElement::fromJson(web::json::value& val)
{
	this->MathElement::fromJson(val);
	web::json::value* jsonForArguments = ModelBase::getField(val, "Arguments");
	if(jsonForArguments != nullptr && !jsonForArguments->is_null())
	{
		{
			m_Arguments.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForArguments->as_array())
			{
				if(item.is_null())
				{
					m_Arguments.push_back(std::shared_ptr<MathElement>(nullptr));
				}
				else
				{
					std::shared_ptr<MathElement> newItem(new MathElement());
					newItem->fromJson(item);
					m_Arguments.push_back( newItem );
				}
			}
        	}
	}
	web::json::value* jsonForBeginningCharacter = ModelBase::getField(val, "BeginningCharacter");
	if(jsonForBeginningCharacter != nullptr && !jsonForBeginningCharacter->is_null())
	{
		setBeginningCharacter(ModelBase::stringFromJson(*jsonForBeginningCharacter));
	}
	web::json::value* jsonForSeparatorCharacter = ModelBase::getField(val, "SeparatorCharacter");
	if(jsonForSeparatorCharacter != nullptr && !jsonForSeparatorCharacter->is_null())
	{
		setSeparatorCharacter(ModelBase::stringFromJson(*jsonForSeparatorCharacter));
	}
	web::json::value* jsonForEndingCharacter = ModelBase::getField(val, "EndingCharacter");
	if(jsonForEndingCharacter != nullptr && !jsonForEndingCharacter->is_null())
	{
		setEndingCharacter(ModelBase::stringFromJson(*jsonForEndingCharacter));
	}
	web::json::value* jsonForGrowToMatchOperandHeight = ModelBase::getField(val, "GrowToMatchOperandHeight");
	if(jsonForGrowToMatchOperandHeight != nullptr && !jsonForGrowToMatchOperandHeight->is_null())
	{
		setGrowToMatchOperandHeight(ModelBase::boolFromJson(*jsonForGrowToMatchOperandHeight));
	}
	web::json::value* jsonForDelimiterShape = ModelBase::getField(val, "DelimiterShape");
	if(jsonForDelimiterShape != nullptr && !jsonForDelimiterShape->is_null())
	{
		setDelimiterShape(ModelBase::stringFromJson(*jsonForDelimiterShape));
	}
}

}
}

