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



#include "BlockElement.h"

namespace asposeslidescloud {
namespace model {

BlockElement::BlockElement()
{
	setType(L"Block");
}

BlockElement::~BlockElement()
{
}

std::vector<std::shared_ptr<MathElement>> BlockElement::getMathElementList() const
{
	return m_MathElementList;
}

void BlockElement::setMathElementList(std::vector<std::shared_ptr<MathElement>> value)
{
	m_MathElementList = value;
	
}

web::json::value BlockElement::toJson() const
{
	web::json::value val = this->MathElement::toJson();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_MathElementList)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("MathElementList")] = web::json::value::array(jsonArray);
	}
	return val;
}

void BlockElement::fromJson(web::json::value& val)
{
	this->MathElement::fromJson(val);
	web::json::value* jsonForMathElementList = ModelBase::getField(val, "MathElementList");
	if(jsonForMathElementList != nullptr && !jsonForMathElementList->is_null())
	{
		{
			m_MathElementList.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForMathElementList->as_array())
			{
				if(item.is_null())
				{
					m_MathElementList.push_back(std::shared_ptr<MathElement>(nullptr));
				}
				else
				{
					std::shared_ptr<MathElement> newItem(new MathElement());
					newItem->fromJson(item);
					m_MathElementList.push_back( newItem );
				}
			}
        	}
	}
}

}
}

