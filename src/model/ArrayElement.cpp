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



#include "ArrayElement.h"

namespace asposeslidescloud {
namespace model {

ArrayElement::ArrayElement()
{
	m_MaximumDistributionIsSet = false;
	m_ObjectDistributionIsSet = false;
	m_RowSpacingIsSet = false;
}

ArrayElement::~ArrayElement()
{
}

std::vector<std::shared_ptr<MathElement>> ArrayElement::getArguments() const
{
	return m_Arguments;
}

void ArrayElement::setArguments(std::vector<std::shared_ptr<MathElement>> value)
{
	m_Arguments = value;
	
}

utility::string_t ArrayElement::getBaseJustification() const
{
	return m_BaseJustification;
}

void ArrayElement::setBaseJustification(utility::string_t value)
{
	m_BaseJustification = value;
	
}

bool ArrayElement::getMaximumDistribution() const
{
	return m_MaximumDistribution;
}

void ArrayElement::setMaximumDistribution(bool value)
{
	m_MaximumDistribution = value;
	m_MaximumDistributionIsSet = true;
}

bool ArrayElement::maximumDistributionIsSet() const
{
	return m_MaximumDistributionIsSet;
}

void ArrayElement::unsetMaximumDistribution()
{
	m_MaximumDistributionIsSet = false;
}

bool ArrayElement::getObjectDistribution() const
{
	return m_ObjectDistribution;
}

void ArrayElement::setObjectDistribution(bool value)
{
	m_ObjectDistribution = value;
	m_ObjectDistributionIsSet = true;
}

bool ArrayElement::objectDistributionIsSet() const
{
	return m_ObjectDistributionIsSet;
}

void ArrayElement::unsetObjectDistribution()
{
	m_ObjectDistributionIsSet = false;
}

utility::string_t ArrayElement::getRowSpacingRule() const
{
	return m_RowSpacingRule;
}

void ArrayElement::setRowSpacingRule(utility::string_t value)
{
	m_RowSpacingRule = value;
	
}

int32_t ArrayElement::getRowSpacing() const
{
	return m_RowSpacing;
}

void ArrayElement::setRowSpacing(int32_t value)
{
	m_RowSpacing = value;
	m_RowSpacingIsSet = true;
}

bool ArrayElement::rowSpacingIsSet() const
{
	return m_RowSpacingIsSet;
}

void ArrayElement::unsetRowSpacing()
{
	m_RowSpacingIsSet = false;
}

web::json::value ArrayElement::toJson() const
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
	if (!m_BaseJustification.empty())
	{
		val[utility::conversions::to_string_t("BaseJustification")] = ModelBase::toJson(m_BaseJustification);
	}
	if(m_MaximumDistributionIsSet)
	{
		val[utility::conversions::to_string_t("MaximumDistribution")] = ModelBase::toJson(m_MaximumDistribution);
	}
	if(m_ObjectDistributionIsSet)
	{
		val[utility::conversions::to_string_t("ObjectDistribution")] = ModelBase::toJson(m_ObjectDistribution);
	}
	if (!m_RowSpacingRule.empty())
	{
		val[utility::conversions::to_string_t("RowSpacingRule")] = ModelBase::toJson(m_RowSpacingRule);
	}
	if(m_RowSpacingIsSet)
	{
		val[utility::conversions::to_string_t("RowSpacing")] = ModelBase::toJson(m_RowSpacing);
	}
	return val;
}

void ArrayElement::fromJson(web::json::value& val)
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
	web::json::value* jsonForBaseJustification = ModelBase::getField(val, "BaseJustification");
	if(jsonForBaseJustification != nullptr && !jsonForBaseJustification->is_null())
	{
		setBaseJustification(ModelBase::stringFromJson(*jsonForBaseJustification));
	}
	web::json::value* jsonForMaximumDistribution = ModelBase::getField(val, "MaximumDistribution");
	if(jsonForMaximumDistribution != nullptr && !jsonForMaximumDistribution->is_null())
	{
		setMaximumDistribution(ModelBase::boolFromJson(*jsonForMaximumDistribution));
	}
	web::json::value* jsonForObjectDistribution = ModelBase::getField(val, "ObjectDistribution");
	if(jsonForObjectDistribution != nullptr && !jsonForObjectDistribution->is_null())
	{
		setObjectDistribution(ModelBase::boolFromJson(*jsonForObjectDistribution));
	}
	web::json::value* jsonForRowSpacingRule = ModelBase::getField(val, "RowSpacingRule");
	if(jsonForRowSpacingRule != nullptr && !jsonForRowSpacingRule->is_null())
	{
		setRowSpacingRule(ModelBase::stringFromJson(*jsonForRowSpacingRule));
	}
	web::json::value* jsonForRowSpacing = ModelBase::getField(val, "RowSpacing");
	if(jsonForRowSpacing != nullptr && !jsonForRowSpacing->is_null() && jsonForRowSpacing->is_number())
	{
		setRowSpacing(ModelBase::int32_tFromJson(*jsonForRowSpacing));
	}
}

}
}

