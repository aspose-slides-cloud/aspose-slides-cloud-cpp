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
#include "Document.h"

namespace asposeslidescloud {
namespace model {

Document::Document()
{
}

Document::~Document()
{
}

std::shared_ptr<ResourceUri> Document::getDocumentProperties() const
{
	return m_DocumentProperties;
}

void Document::setDocumentProperties(std::shared_ptr<ResourceUri> value)
{
	m_DocumentProperties = value;
	
}

std::shared_ptr<ResourceUri> Document::getViewProperties() const
{
	return m_ViewProperties;
}

void Document::setViewProperties(std::shared_ptr<ResourceUri> value)
{
	m_ViewProperties = value;
	
}

std::shared_ptr<ResourceUri> Document::getSlides() const
{
	return m_Slides;
}

void Document::setSlides(std::shared_ptr<ResourceUri> value)
{
	m_Slides = value;
	
}

std::shared_ptr<ResourceUri> Document::getImages() const
{
	return m_Images;
}

void Document::setImages(std::shared_ptr<ResourceUri> value)
{
	m_Images = value;
	
}

std::shared_ptr<ResourceUri> Document::getLayoutSlides() const
{
	return m_LayoutSlides;
}

void Document::setLayoutSlides(std::shared_ptr<ResourceUri> value)
{
	m_LayoutSlides = value;
	
}

std::shared_ptr<ResourceUri> Document::getMasterSlides() const
{
	return m_MasterSlides;
}

void Document::setMasterSlides(std::shared_ptr<ResourceUri> value)
{
	m_MasterSlides = value;
	
}

web::json::value Document::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (m_DocumentProperties != nullptr)
	{
		val[utility::conversions::to_string_t("DocumentProperties")] = ModelBase::toJson(m_DocumentProperties);
	}
	if (m_ViewProperties != nullptr)
	{
		val[utility::conversions::to_string_t("ViewProperties")] = ModelBase::toJson(m_ViewProperties);
	}
	if (m_Slides != nullptr)
	{
		val[utility::conversions::to_string_t("Slides")] = ModelBase::toJson(m_Slides);
	}
	if (m_Images != nullptr)
	{
		val[utility::conversions::to_string_t("Images")] = ModelBase::toJson(m_Images);
	}
	if (m_LayoutSlides != nullptr)
	{
		val[utility::conversions::to_string_t("LayoutSlides")] = ModelBase::toJson(m_LayoutSlides);
	}
	if (m_MasterSlides != nullptr)
	{
		val[utility::conversions::to_string_t("MasterSlides")] = ModelBase::toJson(m_MasterSlides);
	}
	return val;
}

void Document::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForDocumentProperties = ModelBase::getField(val, "DocumentProperties");
	if(jsonForDocumentProperties != nullptr && !jsonForDocumentProperties->is_null())
	{
		std::shared_ptr<void> instanceForDocumentProperties = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForDocumentProperties);
		setDocumentProperties(std::static_pointer_cast<ResourceUri>(instanceForDocumentProperties));
	}
	web::json::value* jsonForViewProperties = ModelBase::getField(val, "ViewProperties");
	if(jsonForViewProperties != nullptr && !jsonForViewProperties->is_null())
	{
		std::shared_ptr<void> instanceForViewProperties = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForViewProperties);
		setViewProperties(std::static_pointer_cast<ResourceUri>(instanceForViewProperties));
	}
	web::json::value* jsonForSlides = ModelBase::getField(val, "Slides");
	if(jsonForSlides != nullptr && !jsonForSlides->is_null())
	{
		std::shared_ptr<void> instanceForSlides = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForSlides);
		setSlides(std::static_pointer_cast<ResourceUri>(instanceForSlides));
	}
	web::json::value* jsonForImages = ModelBase::getField(val, "Images");
	if(jsonForImages != nullptr && !jsonForImages->is_null())
	{
		std::shared_ptr<void> instanceForImages = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForImages);
		setImages(std::static_pointer_cast<ResourceUri>(instanceForImages));
	}
	web::json::value* jsonForLayoutSlides = ModelBase::getField(val, "LayoutSlides");
	if(jsonForLayoutSlides != nullptr && !jsonForLayoutSlides->is_null())
	{
		std::shared_ptr<void> instanceForLayoutSlides = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForLayoutSlides);
		setLayoutSlides(std::static_pointer_cast<ResourceUri>(instanceForLayoutSlides));
	}
	web::json::value* jsonForMasterSlides = ModelBase::getField(val, "MasterSlides");
	if(jsonForMasterSlides != nullptr && !jsonForMasterSlides->is_null())
	{
		std::shared_ptr<void> instanceForMasterSlides = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForMasterSlides);
		setMasterSlides(std::static_pointer_cast<ResourceUri>(instanceForMasterSlides));
	}
}

}
}

