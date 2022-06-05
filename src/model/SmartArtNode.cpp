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



#include "SmartArtNode.h"

namespace asposeslidescloud {
namespace model {

SmartArtNode::SmartArtNode()
{
}

SmartArtNode::~SmartArtNode()
{
}

std::vector<std::shared_ptr<SmartArtNode>> SmartArtNode::getNodes() const
{
	return m_Nodes;
}

void SmartArtNode::setNodes(std::vector<std::shared_ptr<SmartArtNode>> value)
{
	m_Nodes = value;
	
}

std::shared_ptr<ResourceUri> SmartArtNode::getShapes() const
{
	return m_Shapes;
}

void SmartArtNode::setShapes(std::shared_ptr<ResourceUri> value)
{
	m_Shapes = value;
	
}

bool SmartArtNode::getIsAssistant() const
{
	return m_IsAssistant;
}

void SmartArtNode::setIsAssistant(bool value)
{
	m_IsAssistant = value;
	
}

utility::string_t SmartArtNode::getText() const
{
	return m_Text;
}

void SmartArtNode::setText(utility::string_t value)
{
	m_Text = value;
	
}

utility::string_t SmartArtNode::getOrgChartLayout() const
{
	return m_OrgChartLayout;
}

void SmartArtNode::setOrgChartLayout(utility::string_t value)
{
	m_OrgChartLayout = value;
	
}

std::shared_ptr<ResourceUri> SmartArtNode::getParagraphs() const
{
	return m_Paragraphs;
}

void SmartArtNode::setParagraphs(std::shared_ptr<ResourceUri> value)
{
	m_Paragraphs = value;
	
}

web::json::value SmartArtNode::toJson() const
{
	web::json::value val = web::json::value::object();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Nodes)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		if (jsonArray.size() > 0)
		{
			val[utility::conversions::to_string_t("Nodes")] = web::json::value::array(jsonArray);
		}
	}
	if (m_Shapes != nullptr)
	{
		val[utility::conversions::to_string_t("Shapes")] = ModelBase::toJson(m_Shapes);
	}
	val[utility::conversions::to_string_t("IsAssistant")] = ModelBase::toJson(m_IsAssistant);
	if (!m_Text.empty())
	{
		val[utility::conversions::to_string_t("Text")] = ModelBase::toJson(m_Text);
	}
	if (!m_OrgChartLayout.empty())
	{
		val[utility::conversions::to_string_t("OrgChartLayout")] = ModelBase::toJson(m_OrgChartLayout);
	}
	if (m_Paragraphs != nullptr)
	{
		val[utility::conversions::to_string_t("Paragraphs")] = ModelBase::toJson(m_Paragraphs);
	}
	return val;
}

void SmartArtNode::fromJson(web::json::value& val)
{
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
					std::shared_ptr<SmartArtNode> newItem(new SmartArtNode());
					newItem->fromJson(item);
					m_Nodes.push_back( newItem );
				}
			}
        	}
	}
	web::json::value* jsonForShapes = ModelBase::getField(val, "Shapes");
	if(jsonForShapes != nullptr && !jsonForShapes->is_null())
	{
		std::shared_ptr<ResourceUri> newItem(new ResourceUri());
		newItem->fromJson(*jsonForShapes);
		setShapes(newItem);
	}
	web::json::value* jsonForIsAssistant = ModelBase::getField(val, "IsAssistant");
	if(jsonForIsAssistant != nullptr && !jsonForIsAssistant->is_null())
	{
		setIsAssistant(ModelBase::boolFromJson(*jsonForIsAssistant));
	}
	web::json::value* jsonForText = ModelBase::getField(val, "Text");
	if(jsonForText != nullptr && !jsonForText->is_null())
	{
		setText(ModelBase::stringFromJson(*jsonForText));
	}
	web::json::value* jsonForOrgChartLayout = ModelBase::getField(val, "OrgChartLayout");
	if(jsonForOrgChartLayout != nullptr && !jsonForOrgChartLayout->is_null())
	{
		setOrgChartLayout(ModelBase::stringFromJson(*jsonForOrgChartLayout));
	}
	web::json::value* jsonForParagraphs = ModelBase::getField(val, "Paragraphs");
	if(jsonForParagraphs != nullptr && !jsonForParagraphs->is_null())
	{
		std::shared_ptr<ResourceUri> newItem(new ResourceUri());
		newItem->fromJson(*jsonForParagraphs);
		setParagraphs(newItem);
	}
}

}
}

