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
#include "NotesSlide.h"

namespace asposeslidescloud {
namespace model {

NotesSlide::NotesSlide()
{
}

NotesSlide::~NotesSlide()
{
}

utility::string_t NotesSlide::getText() const
{
	return m_Text;
}

void NotesSlide::setText(utility::string_t value)
{
	m_Text = value;
	
}

std::shared_ptr<ResourceUri> NotesSlide::getShapes() const
{
	return m_Shapes;
}

void NotesSlide::setShapes(std::shared_ptr<ResourceUri> value)
{
	m_Shapes = value;
	
}

web::json::value NotesSlide::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (!m_Text.empty())
	{
		val[utility::conversions::to_string_t("Text")] = ModelBase::toJson(m_Text);
	}
	if (m_Shapes != nullptr)
	{
		val[utility::conversions::to_string_t("Shapes")] = ModelBase::toJson(m_Shapes);
	}
	return val;
}

void NotesSlide::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForText = ModelBase::getField(val, "Text");
	if(jsonForText != nullptr && !jsonForText->is_null())
	{
		setText(ModelBase::stringFromJson(*jsonForText));
	}
	web::json::value* jsonForShapes = ModelBase::getField(val, "Shapes");
	if(jsonForShapes != nullptr && !jsonForShapes->is_null())
	{
		std::shared_ptr<void> instanceForShapes = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForShapes);
		setShapes(std::static_pointer_cast<ResourceUri>(instanceForShapes));
	}
}

}
}

