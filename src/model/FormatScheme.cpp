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



#include "FormatScheme.h"

namespace asposeslidescloud {
namespace model {

FormatScheme::FormatScheme()
{
}

FormatScheme::~FormatScheme()
{
}

std::vector<std::shared_ptr<FillFormat>> FormatScheme::getBackgroundStyles() const
{
	return m_BackgroundStyles;
}

void FormatScheme::setBackgroundStyles(std::vector<std::shared_ptr<FillFormat>> value)
{
	m_BackgroundStyles = value;
	
}

std::vector<std::shared_ptr<EffectFormat>> FormatScheme::getEffectStyles() const
{
	return m_EffectStyles;
}

void FormatScheme::setEffectStyles(std::vector<std::shared_ptr<EffectFormat>> value)
{
	m_EffectStyles = value;
	
}

std::vector<std::shared_ptr<FillFormat>> FormatScheme::getFillStyles() const
{
	return m_FillStyles;
}

void FormatScheme::setFillStyles(std::vector<std::shared_ptr<FillFormat>> value)
{
	m_FillStyles = value;
	
}

std::vector<std::shared_ptr<LineFormat>> FormatScheme::getLineStyles() const
{
	return m_LineStyles;
}

void FormatScheme::setLineStyles(std::vector<std::shared_ptr<LineFormat>> value)
{
	m_LineStyles = value;
	
}

web::json::value FormatScheme::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_BackgroundStyles)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("BackgroundStyles")] = web::json::value::array(jsonArray);
	}
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_EffectStyles)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("EffectStyles")] = web::json::value::array(jsonArray);
	}
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_FillStyles)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("FillStyles")] = web::json::value::array(jsonArray);
	}
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_LineStyles)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("LineStyles")] = web::json::value::array(jsonArray);
	}
	return val;
}

void FormatScheme::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForBackgroundStyles = ModelBase::getField(val, "BackgroundStyles");
	if(jsonForBackgroundStyles != nullptr && !jsonForBackgroundStyles->is_null())
	{
		{
			m_BackgroundStyles.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForBackgroundStyles->as_array())
			{
				if(item.is_null())
				{
					m_BackgroundStyles.push_back(std::shared_ptr<FillFormat>(nullptr));
				}
				else
				{
					std::shared_ptr<FillFormat> newItem(new FillFormat());
					newItem->fromJson(item);
					m_BackgroundStyles.push_back( newItem );
				}
			}
        	}
	}
	web::json::value* jsonForEffectStyles = ModelBase::getField(val, "EffectStyles");
	if(jsonForEffectStyles != nullptr && !jsonForEffectStyles->is_null())
	{
		{
			m_EffectStyles.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForEffectStyles->as_array())
			{
				if(item.is_null())
				{
					m_EffectStyles.push_back(std::shared_ptr<EffectFormat>(nullptr));
				}
				else
				{
					std::shared_ptr<EffectFormat> newItem(new EffectFormat());
					newItem->fromJson(item);
					m_EffectStyles.push_back( newItem );
				}
			}
        	}
	}
	web::json::value* jsonForFillStyles = ModelBase::getField(val, "FillStyles");
	if(jsonForFillStyles != nullptr && !jsonForFillStyles->is_null())
	{
		{
			m_FillStyles.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForFillStyles->as_array())
			{
				if(item.is_null())
				{
					m_FillStyles.push_back(std::shared_ptr<FillFormat>(nullptr));
				}
				else
				{
					std::shared_ptr<FillFormat> newItem(new FillFormat());
					newItem->fromJson(item);
					m_FillStyles.push_back( newItem );
				}
			}
        	}
	}
	web::json::value* jsonForLineStyles = ModelBase::getField(val, "LineStyles");
	if(jsonForLineStyles != nullptr && !jsonForLineStyles->is_null())
	{
		{
			m_LineStyles.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForLineStyles->as_array())
			{
				if(item.is_null())
				{
					m_LineStyles.push_back(std::shared_ptr<LineFormat>(nullptr));
				}
				else
				{
					std::shared_ptr<LineFormat> newItem(new LineFormat());
					newItem->fromJson(item);
					m_LineStyles.push_back( newItem );
				}
			}
        	}
	}
}

}
}

