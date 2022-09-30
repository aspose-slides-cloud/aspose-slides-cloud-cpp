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



#include "MathParagraph.h"

namespace asposeslidescloud {
namespace model {

MathParagraph::MathParagraph()
{
}

MathParagraph::~MathParagraph()
{
}

std::vector<std::shared_ptr<BlockElement>> MathParagraph::getMathBlockList() const
{
	return m_MathBlockList;
}

void MathParagraph::setMathBlockList(std::vector<std::shared_ptr<BlockElement>> value)
{
	m_MathBlockList = value;
	
}

utility::string_t MathParagraph::getJustification() const
{
	return m_Justification;
}

void MathParagraph::setJustification(utility::string_t value)
{
	m_Justification = value;
	
}

web::json::value MathParagraph::toJson() const
{
	web::json::value val = web::json::value::object();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_MathBlockList)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("MathBlockList")] = web::json::value::array(jsonArray);
	}
	if (!m_Justification.empty())
	{
		val[utility::conversions::to_string_t("Justification")] = ModelBase::toJson(m_Justification);
	}
	return val;
}

void MathParagraph::fromJson(web::json::value& val)
{
	web::json::value* jsonForMathBlockList = ModelBase::getField(val, "MathBlockList");
	if(jsonForMathBlockList != nullptr && !jsonForMathBlockList->is_null())
	{
		{
			m_MathBlockList.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForMathBlockList->as_array())
			{
				if(item.is_null())
				{
					m_MathBlockList.push_back(std::shared_ptr<BlockElement>(nullptr));
				}
				else
				{
					std::shared_ptr<BlockElement> newItem(new BlockElement());
					newItem->fromJson(item);
					m_MathBlockList.push_back( newItem );
				}
			}
        	}
	}
	web::json::value* jsonForJustification = ModelBase::getField(val, "Justification");
	if(jsonForJustification != nullptr && !jsonForJustification->is_null())
	{
		setJustification(ModelBase::stringFromJson(*jsonForJustification));
	}
}

}
}

