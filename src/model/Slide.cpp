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
#include "Slide.h"

namespace asposeslidescloud {
namespace model {

Slide::Slide()
{
}

Slide::~Slide()
{
}

double Slide::getWidth() const
{
	return m_Width;
}

void Slide::setWidth(double value)
{
	m_Width = value;
	
}

double Slide::getHeight() const
{
	return m_Height;
}

void Slide::setHeight(double value)
{
	m_Height = value;
	
}

bool Slide::getShowMasterShapes() const
{
	return m_ShowMasterShapes;
}

void Slide::setShowMasterShapes(bool value)
{
	m_ShowMasterShapes = value;
	
}

std::shared_ptr<ResourceUri> Slide::getLayoutSlide() const
{
	return m_LayoutSlide;
}

void Slide::setLayoutSlide(std::shared_ptr<ResourceUri> value)
{
	m_LayoutSlide = value;
	
}

std::shared_ptr<ResourceUri> Slide::getShapes() const
{
	return m_Shapes;
}

void Slide::setShapes(std::shared_ptr<ResourceUri> value)
{
	m_Shapes = value;
	
}

std::shared_ptr<ResourceUri> Slide::getTheme() const
{
	return m_Theme;
}

void Slide::setTheme(std::shared_ptr<ResourceUri> value)
{
	m_Theme = value;
	
}

std::shared_ptr<ResourceUri> Slide::getPlaceholders() const
{
	return m_Placeholders;
}

void Slide::setPlaceholders(std::shared_ptr<ResourceUri> value)
{
	m_Placeholders = value;
	
}

std::shared_ptr<ResourceUri> Slide::getImages() const
{
	return m_Images;
}

void Slide::setImages(std::shared_ptr<ResourceUri> value)
{
	m_Images = value;
	
}

std::shared_ptr<ResourceUri> Slide::getComments() const
{
	return m_Comments;
}

void Slide::setComments(std::shared_ptr<ResourceUri> value)
{
	m_Comments = value;
	
}

std::shared_ptr<ResourceUri> Slide::getBackground() const
{
	return m_Background;
}

void Slide::setBackground(std::shared_ptr<ResourceUri> value)
{
	m_Background = value;
	
}

std::shared_ptr<ResourceUri> Slide::getNotesSlide() const
{
	return m_NotesSlide;
}

void Slide::setNotesSlide(std::shared_ptr<ResourceUri> value)
{
	m_NotesSlide = value;
	
}

web::json::value Slide::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
	val[utility::conversions::to_string_t("Height")] = ModelBase::toJson(m_Height);
	val[utility::conversions::to_string_t("ShowMasterShapes")] = ModelBase::toJson(m_ShowMasterShapes);
	if (m_LayoutSlide != nullptr)
	{
		val[utility::conversions::to_string_t("LayoutSlide")] = ModelBase::toJson(m_LayoutSlide);
	}
	if (m_Shapes != nullptr)
	{
		val[utility::conversions::to_string_t("Shapes")] = ModelBase::toJson(m_Shapes);
	}
	if (m_Theme != nullptr)
	{
		val[utility::conversions::to_string_t("Theme")] = ModelBase::toJson(m_Theme);
	}
	if (m_Placeholders != nullptr)
	{
		val[utility::conversions::to_string_t("Placeholders")] = ModelBase::toJson(m_Placeholders);
	}
	if (m_Images != nullptr)
	{
		val[utility::conversions::to_string_t("Images")] = ModelBase::toJson(m_Images);
	}
	if (m_Comments != nullptr)
	{
		val[utility::conversions::to_string_t("Comments")] = ModelBase::toJson(m_Comments);
	}
	if (m_Background != nullptr)
	{
		val[utility::conversions::to_string_t("Background")] = ModelBase::toJson(m_Background);
	}
	if (m_NotesSlide != nullptr)
	{
		val[utility::conversions::to_string_t("NotesSlide")] = ModelBase::toJson(m_NotesSlide);
	}
	return val;
}

void Slide::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForWidth = ModelBase::getField(val, "Width");
	if(jsonForWidth != nullptr && !jsonForWidth->is_null() && jsonForWidth->is_number())
	{
		setWidth(ModelBase::doubleFromJson(*jsonForWidth));
	}
	web::json::value* jsonForHeight = ModelBase::getField(val, "Height");
	if(jsonForHeight != nullptr && !jsonForHeight->is_null() && jsonForHeight->is_number())
	{
		setHeight(ModelBase::doubleFromJson(*jsonForHeight));
	}
	web::json::value* jsonForShowMasterShapes = ModelBase::getField(val, "ShowMasterShapes");
	if(jsonForShowMasterShapes != nullptr && !jsonForShowMasterShapes->is_null())
	{
		setShowMasterShapes(ModelBase::boolFromJson(*jsonForShowMasterShapes));
	}
	web::json::value* jsonForLayoutSlide = ModelBase::getField(val, "LayoutSlide");
	if(jsonForLayoutSlide != nullptr && !jsonForLayoutSlide->is_null())
	{
		std::shared_ptr<void> instanceForLayoutSlide = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForLayoutSlide);
		setLayoutSlide(std::static_pointer_cast<ResourceUri>(instanceForLayoutSlide));
	}
	web::json::value* jsonForShapes = ModelBase::getField(val, "Shapes");
	if(jsonForShapes != nullptr && !jsonForShapes->is_null())
	{
		std::shared_ptr<void> instanceForShapes = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForShapes);
		setShapes(std::static_pointer_cast<ResourceUri>(instanceForShapes));
	}
	web::json::value* jsonForTheme = ModelBase::getField(val, "Theme");
	if(jsonForTheme != nullptr && !jsonForTheme->is_null())
	{
		std::shared_ptr<void> instanceForTheme = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForTheme);
		setTheme(std::static_pointer_cast<ResourceUri>(instanceForTheme));
	}
	web::json::value* jsonForPlaceholders = ModelBase::getField(val, "Placeholders");
	if(jsonForPlaceholders != nullptr && !jsonForPlaceholders->is_null())
	{
		std::shared_ptr<void> instanceForPlaceholders = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForPlaceholders);
		setPlaceholders(std::static_pointer_cast<ResourceUri>(instanceForPlaceholders));
	}
	web::json::value* jsonForImages = ModelBase::getField(val, "Images");
	if(jsonForImages != nullptr && !jsonForImages->is_null())
	{
		std::shared_ptr<void> instanceForImages = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForImages);
		setImages(std::static_pointer_cast<ResourceUri>(instanceForImages));
	}
	web::json::value* jsonForComments = ModelBase::getField(val, "Comments");
	if(jsonForComments != nullptr && !jsonForComments->is_null())
	{
		std::shared_ptr<void> instanceForComments = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForComments);
		setComments(std::static_pointer_cast<ResourceUri>(instanceForComments));
	}
	web::json::value* jsonForBackground = ModelBase::getField(val, "Background");
	if(jsonForBackground != nullptr && !jsonForBackground->is_null())
	{
		std::shared_ptr<void> instanceForBackground = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForBackground);
		setBackground(std::static_pointer_cast<ResourceUri>(instanceForBackground));
	}
	web::json::value* jsonForNotesSlide = ModelBase::getField(val, "NotesSlide");
	if(jsonForNotesSlide != nullptr && !jsonForNotesSlide->is_null())
	{
		std::shared_ptr<void> instanceForNotesSlide = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForNotesSlide);
		setNotesSlide(std::static_pointer_cast<ResourceUri>(instanceForNotesSlide));
	}
}

}
}

