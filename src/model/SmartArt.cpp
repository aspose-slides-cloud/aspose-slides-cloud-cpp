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
#include "SmartArt.h"

namespace asposeslidescloud {
namespace model {

SmartArt::SmartArt()
{
	setType(L"SmartArt");
}

SmartArt::~SmartArt()
{
}

utility::string_t SmartArt::getLayout() const
{
	return m_Layout;
}

void SmartArt::setLayout(utility::string_t value)
{
	m_Layout = value;
	
}

utility::string_t SmartArt::getQuickStyle() const
{
	return m_QuickStyle;
}

void SmartArt::setQuickStyle(utility::string_t value)
{
	m_QuickStyle = value;
	
}

utility::string_t SmartArt::getColorStyle() const
{
	return m_ColorStyle;
}

void SmartArt::setColorStyle(utility::string_t value)
{
	m_ColorStyle = value;
	
}

std::vector<std::shared_ptr<SmartArtNode>> SmartArt::getNodes() const
{
	return m_Nodes;
}

void SmartArt::setNodes(std::vector<std::shared_ptr<SmartArtNode>> value)
{
	m_Nodes = value;
	
}

bool SmartArt::isIsReversed() const
{
	return m_IsReversed;
}

void SmartArt::setIsReversed(bool value)
{
	m_IsReversed = value;
	
}

web::json::value SmartArt::toJson() const
{
	web::json::value val = this->ShapeBase::toJson();
	if (!m_Layout.empty())
	{
		val[utility::conversions::to_string_t("Layout")] = ModelBase::toJson(m_Layout);
	}
	if (!m_QuickStyle.empty())
	{
		val[utility::conversions::to_string_t("QuickStyle")] = ModelBase::toJson(m_QuickStyle);
	}
	if (!m_ColorStyle.empty())
	{
		val[utility::conversions::to_string_t("ColorStyle")] = ModelBase::toJson(m_ColorStyle);
	}
	if (m_Nodes.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Nodes)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Nodes")] = web::json::value::array(jsonArray);
	}
	val[utility::conversions::to_string_t("IsReversed")] = ModelBase::toJson(m_IsReversed);
	return val;
}

void SmartArt::fromJson(web::json::value& val)
{
	this->ShapeBase::fromJson(val);
	web::json::value* jsonForLayout = ModelBase::getField(val, "Layout");
	if(jsonForLayout != nullptr && !jsonForLayout->is_null())
	{
		setLayout(ModelBase::stringFromJson(*jsonForLayout));
	}
	web::json::value* jsonForQuickStyle = ModelBase::getField(val, "QuickStyle");
	if(jsonForQuickStyle != nullptr && !jsonForQuickStyle->is_null())
	{
		setQuickStyle(ModelBase::stringFromJson(*jsonForQuickStyle));
	}
	web::json::value* jsonForColorStyle = ModelBase::getField(val, "ColorStyle");
	if(jsonForColorStyle != nullptr && !jsonForColorStyle->is_null())
	{
		setColorStyle(ModelBase::stringFromJson(*jsonForColorStyle));
	}
	web::json::value* jsonForNodes = ModelBase::getField(val, "Nodes");
	if(jsonForNodes != nullptr && !jsonForNodes->is_null())
	{
		{
			m_Nodes.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForNodes->as_array())
			{
				if(item.is_null())
				{
					m_Nodes.push_back(std::shared_ptr<SmartArtNode>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"SmartArtNode", item);
					m_Nodes.push_back(std::static_pointer_cast<SmartArtNode>(newItem));
				}
			}
        	}
	}
	web::json::value* jsonForIsReversed = ModelBase::getField(val, "IsReversed");
	if(jsonForIsReversed != nullptr && !jsonForIsReversed->is_null())
	{
		setIsReversed(ModelBase::boolFromJson(*jsonForIsReversed));
	}
}

}
}

