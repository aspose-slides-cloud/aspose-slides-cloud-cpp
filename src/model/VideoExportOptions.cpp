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
#include "VideoExportOptions.h"

namespace asposeslidescloud {
namespace model {

VideoExportOptions::VideoExportOptions()
{
	m_SlidesTransitionDurationIsSet = false;
	m_TransitionDurationIsSet = false;
	setFormat(L"mpeg4");
}

VideoExportOptions::~VideoExportOptions()
{
}

int32_t VideoExportOptions::getSlidesTransitionDuration() const
{
	return m_SlidesTransitionDuration;
}

void VideoExportOptions::setSlidesTransitionDuration(int32_t value)
{
	m_SlidesTransitionDuration = value;
	m_SlidesTransitionDurationIsSet = true;
}

bool VideoExportOptions::slidesTransitionDurationIsSet() const
{
	return m_SlidesTransitionDurationIsSet;
}

void VideoExportOptions::unsetSlidesTransitionDuration()
{
	m_SlidesTransitionDurationIsSet = false;
}

utility::string_t VideoExportOptions::getTransitionType() const
{
	return m_TransitionType;
}

void VideoExportOptions::setTransitionType(utility::string_t value)
{
	m_TransitionType = value;
	
}

int32_t VideoExportOptions::getTransitionDuration() const
{
	return m_TransitionDuration;
}

void VideoExportOptions::setTransitionDuration(int32_t value)
{
	m_TransitionDuration = value;
	m_TransitionDurationIsSet = true;
}

bool VideoExportOptions::transitionDurationIsSet() const
{
	return m_TransitionDurationIsSet;
}

void VideoExportOptions::unsetTransitionDuration()
{
	m_TransitionDurationIsSet = false;
}

utility::string_t VideoExportOptions::getVideoResolutionType() const
{
	return m_VideoResolutionType;
}

void VideoExportOptions::setVideoResolutionType(utility::string_t value)
{
	m_VideoResolutionType = value;
	
}

web::json::value VideoExportOptions::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	if(m_SlidesTransitionDurationIsSet)
	{
		val[utility::conversions::to_string_t("SlidesTransitionDuration")] = ModelBase::toJson(m_SlidesTransitionDuration);
	}
	if (!m_TransitionType.empty())
	{
		val[utility::conversions::to_string_t("TransitionType")] = ModelBase::toJson(m_TransitionType);
	}
	if(m_TransitionDurationIsSet)
	{
		val[utility::conversions::to_string_t("TransitionDuration")] = ModelBase::toJson(m_TransitionDuration);
	}
	if (!m_VideoResolutionType.empty())
	{
		val[utility::conversions::to_string_t("VideoResolutionType")] = ModelBase::toJson(m_VideoResolutionType);
	}
	return val;
}

void VideoExportOptions::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
	web::json::value* jsonForSlidesTransitionDuration = ModelBase::getField(val, "SlidesTransitionDuration");
	if(jsonForSlidesTransitionDuration != nullptr && !jsonForSlidesTransitionDuration->is_null() && jsonForSlidesTransitionDuration->is_number())
	{
		setSlidesTransitionDuration(ModelBase::int32_tFromJson(*jsonForSlidesTransitionDuration));
	}
	web::json::value* jsonForTransitionType = ModelBase::getField(val, "TransitionType");
	if(jsonForTransitionType != nullptr && !jsonForTransitionType->is_null())
	{
		setTransitionType(ModelBase::stringFromJson(*jsonForTransitionType));
	}
	web::json::value* jsonForTransitionDuration = ModelBase::getField(val, "TransitionDuration");
	if(jsonForTransitionDuration != nullptr && !jsonForTransitionDuration->is_null() && jsonForTransitionDuration->is_number())
	{
		setTransitionDuration(ModelBase::int32_tFromJson(*jsonForTransitionDuration));
	}
	web::json::value* jsonForVideoResolutionType = ModelBase::getField(val, "VideoResolutionType");
	if(jsonForVideoResolutionType != nullptr && !jsonForVideoResolutionType->is_null())
	{
		setVideoResolutionType(ModelBase::stringFromJson(*jsonForVideoResolutionType));
	}
}

}
}

