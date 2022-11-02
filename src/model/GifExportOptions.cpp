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
#include "GifExportOptions.h"

namespace asposeslidescloud {
namespace model {

GifExportOptions::GifExportOptions()
{
	m_ExportHiddenSlidesIsSet = false;
	m_TransitionFpsIsSet = false;
	m_DefaultDelayIsSet = false;
	setFormat(L"gif");
}

GifExportOptions::~GifExportOptions()
{
}

bool GifExportOptions::getExportHiddenSlides() const
{
	return m_ExportHiddenSlides;
}

void GifExportOptions::setExportHiddenSlides(bool value)
{
	m_ExportHiddenSlides = value;
	m_ExportHiddenSlidesIsSet = true;
}

bool GifExportOptions::exportHiddenSlidesIsSet() const
{
	return m_ExportHiddenSlidesIsSet;
}

void GifExportOptions::unsetExportHiddenSlides()
{
	m_ExportHiddenSlidesIsSet = false;
}

int32_t GifExportOptions::getTransitionFps() const
{
	return m_TransitionFps;
}

void GifExportOptions::setTransitionFps(int32_t value)
{
	m_TransitionFps = value;
	m_TransitionFpsIsSet = true;
}

bool GifExportOptions::transitionFpsIsSet() const
{
	return m_TransitionFpsIsSet;
}

void GifExportOptions::unsetTransitionFps()
{
	m_TransitionFpsIsSet = false;
}

int32_t GifExportOptions::getDefaultDelay() const
{
	return m_DefaultDelay;
}

void GifExportOptions::setDefaultDelay(int32_t value)
{
	m_DefaultDelay = value;
	m_DefaultDelayIsSet = true;
}

bool GifExportOptions::defaultDelayIsSet() const
{
	return m_DefaultDelayIsSet;
}

void GifExportOptions::unsetDefaultDelay()
{
	m_DefaultDelayIsSet = false;
}

web::json::value GifExportOptions::toJson() const
{
	web::json::value val = this->ImageExportOptionsBase::toJson();
	if(m_ExportHiddenSlidesIsSet)
	{
		val[utility::conversions::to_string_t("ExportHiddenSlides")] = ModelBase::toJson(m_ExportHiddenSlides);
	}
	if(m_TransitionFpsIsSet)
	{
		val[utility::conversions::to_string_t("TransitionFps")] = ModelBase::toJson(m_TransitionFps);
	}
	if(m_DefaultDelayIsSet)
	{
		val[utility::conversions::to_string_t("DefaultDelay")] = ModelBase::toJson(m_DefaultDelay);
	}
	return val;
}

void GifExportOptions::fromJson(web::json::value& val)
{
	this->ImageExportOptionsBase::fromJson(val);
	web::json::value* jsonForExportHiddenSlides = ModelBase::getField(val, "ExportHiddenSlides");
	if(jsonForExportHiddenSlides != nullptr && !jsonForExportHiddenSlides->is_null())
	{
		setExportHiddenSlides(ModelBase::boolFromJson(*jsonForExportHiddenSlides));
	}
	web::json::value* jsonForTransitionFps = ModelBase::getField(val, "TransitionFps");
	if(jsonForTransitionFps != nullptr && !jsonForTransitionFps->is_null() && jsonForTransitionFps->is_number())
	{
		setTransitionFps(ModelBase::int32_tFromJson(*jsonForTransitionFps));
	}
	web::json::value* jsonForDefaultDelay = ModelBase::getField(val, "DefaultDelay");
	if(jsonForDefaultDelay != nullptr && !jsonForDefaultDelay->is_null() && jsonForDefaultDelay->is_number())
	{
		setDefaultDelay(ModelBase::int32_tFromJson(*jsonForDefaultDelay));
	}
}

}
}

