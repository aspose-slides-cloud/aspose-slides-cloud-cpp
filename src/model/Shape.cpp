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
#include "Shape.h"

namespace asposeslidescloud {
namespace model {

Shape::Shape()
{
	setZOrderPosition(0);
	setType(L"Shape");
}

Shape::~Shape()
{
}

utility::string_t Shape::getText() const
{
	return m_Text;
}

void Shape::setText(utility::string_t value)
{
	m_Text = value;
	
}

std::shared_ptr<ResourceUri> Shape::getParagraphs() const
{
	return m_Paragraphs;
}

void Shape::setParagraphs(std::shared_ptr<ResourceUri> value)
{
	m_Paragraphs = value;
	
}

std::shared_ptr<TextFrameFormat> Shape::getTextFrameFormat() const
{
	return m_TextFrameFormat;
}

void Shape::setTextFrameFormat(std::shared_ptr<TextFrameFormat> value)
{
	m_TextFrameFormat = value;
	
}

web::json::value Shape::toJson() const
{
	web::json::value val = this->GeometryShape::toJson();
	if (!m_Text.empty())
	{
		val[utility::conversions::to_string_t("Text")] = ModelBase::toJson(m_Text);
	}
	if (m_Paragraphs != nullptr)
	{
		val[utility::conversions::to_string_t("Paragraphs")] = ModelBase::toJson(m_Paragraphs);
	}
	if (m_TextFrameFormat != nullptr)
	{
		val[utility::conversions::to_string_t("TextFrameFormat")] = ModelBase::toJson(m_TextFrameFormat);
	}
	return val;
}

void Shape::fromJson(web::json::value& val)
{
	this->GeometryShape::fromJson(val);
	web::json::value* jsonForText = ModelBase::getField(val, "Text");
	if(jsonForText != nullptr && !jsonForText->is_null())
	{
		setText(ModelBase::stringFromJson(*jsonForText));
	}
	web::json::value* jsonForParagraphs = ModelBase::getField(val, "Paragraphs");
	if(jsonForParagraphs != nullptr && !jsonForParagraphs->is_null())
	{
		std::shared_ptr<void> instanceForParagraphs = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForParagraphs);
		setParagraphs(std::static_pointer_cast<ResourceUri>(instanceForParagraphs));
	}
	web::json::value* jsonForTextFrameFormat = ModelBase::getField(val, "TextFrameFormat");
	if(jsonForTextFrameFormat != nullptr && !jsonForTextFrameFormat->is_null())
	{
		std::shared_ptr<void> instanceForTextFrameFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"TextFrameFormat", *jsonForTextFrameFormat);
		setTextFrameFormat(std::static_pointer_cast<TextFrameFormat>(instanceForTextFrameFormat));
	}
}

}
}

