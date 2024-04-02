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
#include "ImageExportOptions.h"

namespace asposeslidescloud {
namespace model {

ImageExportOptions::ImageExportOptions()
{
	m_ShowHiddenSlidesIsSet = false;
	setFormat(L"image");
}

ImageExportOptions::~ImageExportOptions()
{
}

bool ImageExportOptions::isShowHiddenSlides() const
{
	return m_ShowHiddenSlides;
}

void ImageExportOptions::setShowHiddenSlides(bool value)
{
	m_ShowHiddenSlides = value;
	m_ShowHiddenSlidesIsSet = true;
}

bool ImageExportOptions::showHiddenSlidesIsSet() const
{
	return m_ShowHiddenSlidesIsSet;
}

void ImageExportOptions::unsetShowHiddenSlides()
{
	m_ShowHiddenSlidesIsSet = false;
}

std::shared_ptr<SlidesLayoutOptions> ImageExportOptions::getSlidesLayoutOptions() const
{
	return m_SlidesLayoutOptions;
}

void ImageExportOptions::setSlidesLayoutOptions(std::shared_ptr<SlidesLayoutOptions> value)
{
	m_SlidesLayoutOptions = value;
	
}

web::json::value ImageExportOptions::toJson() const
{
	web::json::value val = this->ImageExportOptionsBase::toJson();
	if(m_ShowHiddenSlidesIsSet)
	{
		val[utility::conversions::to_string_t("ShowHiddenSlides")] = ModelBase::toJson(m_ShowHiddenSlides);
	}
	if (m_SlidesLayoutOptions != nullptr)
	{
		val[utility::conversions::to_string_t("SlidesLayoutOptions")] = ModelBase::toJson(m_SlidesLayoutOptions);
	}
	return val;
}

void ImageExportOptions::fromJson(web::json::value& val)
{
	this->ImageExportOptionsBase::fromJson(val);
	web::json::value* jsonForShowHiddenSlides = ModelBase::getField(val, "ShowHiddenSlides");
	if(jsonForShowHiddenSlides != nullptr && !jsonForShowHiddenSlides->is_null())
	{
		setShowHiddenSlides(ModelBase::boolFromJson(*jsonForShowHiddenSlides));
	}
	web::json::value* jsonForSlidesLayoutOptions = ModelBase::getField(val, "SlidesLayoutOptions");
	if(jsonForSlidesLayoutOptions != nullptr && !jsonForSlidesLayoutOptions->is_null())
	{
		std::shared_ptr<void> instanceForSlidesLayoutOptions = asposeslidescloud::api::ClassRegistry::deserialize(L"SlidesLayoutOptions", *jsonForSlidesLayoutOptions);
		setSlidesLayoutOptions(std::static_pointer_cast<SlidesLayoutOptions>(instanceForSlidesLayoutOptions));
	}
}

}
}

