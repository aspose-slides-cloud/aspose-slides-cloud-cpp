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



#include "VideoFrame.h"

namespace asposeslidescloud {
namespace model {

VideoFrame::VideoFrame()
{
	m_FullScreenModeIsSet = false;
	m_HideAtShowingIsSet = false;
	m_PlayLoopModeIsSet = false;
	m_RewindVideoIsSet = false;
}

VideoFrame::~VideoFrame()
{
}

bool VideoFrame::getFullScreenMode() const
{
	return m_FullScreenMode;
}

void VideoFrame::setFullScreenMode(bool value)
{
	m_FullScreenMode = value;
	m_FullScreenModeIsSet = true;
}

bool VideoFrame::fullScreenModeIsSet() const
{
	return m_FullScreenModeIsSet;
}

void VideoFrame::unsetFullScreenMode()
{
	m_FullScreenModeIsSet = false;
}

bool VideoFrame::getHideAtShowing() const
{
	return m_HideAtShowing;
}

void VideoFrame::setHideAtShowing(bool value)
{
	m_HideAtShowing = value;
	m_HideAtShowingIsSet = true;
}

bool VideoFrame::hideAtShowingIsSet() const
{
	return m_HideAtShowingIsSet;
}

void VideoFrame::unsetHideAtShowing()
{
	m_HideAtShowingIsSet = false;
}

bool VideoFrame::getPlayLoopMode() const
{
	return m_PlayLoopMode;
}

void VideoFrame::setPlayLoopMode(bool value)
{
	m_PlayLoopMode = value;
	m_PlayLoopModeIsSet = true;
}

bool VideoFrame::playLoopModeIsSet() const
{
	return m_PlayLoopModeIsSet;
}

void VideoFrame::unsetPlayLoopMode()
{
	m_PlayLoopModeIsSet = false;
}

utility::string_t VideoFrame::getPlayMode() const
{
	return m_PlayMode;
}

void VideoFrame::setPlayMode(utility::string_t value)
{
	m_PlayMode = value;
	
}

bool VideoFrame::getRewindVideo() const
{
	return m_RewindVideo;
}

void VideoFrame::setRewindVideo(bool value)
{
	m_RewindVideo = value;
	m_RewindVideoIsSet = true;
}

bool VideoFrame::rewindVideoIsSet() const
{
	return m_RewindVideoIsSet;
}

void VideoFrame::unsetRewindVideo()
{
	m_RewindVideoIsSet = false;
}

utility::string_t VideoFrame::getVolume() const
{
	return m_Volume;
}

void VideoFrame::setVolume(utility::string_t value)
{
	m_Volume = value;
	
}

utility::string_t VideoFrame::getBase64Data() const
{
	return m_Base64Data;
}

void VideoFrame::setBase64Data(utility::string_t value)
{
	m_Base64Data = value;
	
}

std::shared_ptr<PictureFill> VideoFrame::getPictureFillFormat() const
{
	return m_PictureFillFormat;
}

void VideoFrame::setPictureFillFormat(std::shared_ptr<PictureFill> value)
{
	m_PictureFillFormat = value;
	
}

web::json::value VideoFrame::toJson() const
{
	web::json::value val = this->GeometryShape::toJson();
	if(m_FullScreenModeIsSet)
	{
		val[utility::conversions::to_string_t("FullScreenMode")] = ModelBase::toJson(m_FullScreenMode);
	}
	if(m_HideAtShowingIsSet)
	{
		val[utility::conversions::to_string_t("HideAtShowing")] = ModelBase::toJson(m_HideAtShowing);
	}
	if(m_PlayLoopModeIsSet)
	{
		val[utility::conversions::to_string_t("PlayLoopMode")] = ModelBase::toJson(m_PlayLoopMode);
	}
	if (!m_PlayMode.empty())
	{
		val[utility::conversions::to_string_t("PlayMode")] = ModelBase::toJson(m_PlayMode);
	}
	if(m_RewindVideoIsSet)
	{
		val[utility::conversions::to_string_t("RewindVideo")] = ModelBase::toJson(m_RewindVideo);
	}
	if (!m_Volume.empty())
	{
		val[utility::conversions::to_string_t("Volume")] = ModelBase::toJson(m_Volume);
	}
	if (!m_Base64Data.empty())
	{
		val[utility::conversions::to_string_t("Base64Data")] = ModelBase::toJson(m_Base64Data);
	}
	if (m_PictureFillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("PictureFillFormat")] = ModelBase::toJson(m_PictureFillFormat);
	}
	return val;
}

void VideoFrame::fromJson(web::json::value& val)
{
	this->GeometryShape::fromJson(val);
	web::json::value* jsonForFullScreenMode = ModelBase::getField(val, "FullScreenMode");
	if(jsonForFullScreenMode != nullptr && !jsonForFullScreenMode->is_null())
	{
		setFullScreenMode(ModelBase::boolFromJson(*jsonForFullScreenMode));
	}
	web::json::value* jsonForHideAtShowing = ModelBase::getField(val, "HideAtShowing");
	if(jsonForHideAtShowing != nullptr && !jsonForHideAtShowing->is_null())
	{
		setHideAtShowing(ModelBase::boolFromJson(*jsonForHideAtShowing));
	}
	web::json::value* jsonForPlayLoopMode = ModelBase::getField(val, "PlayLoopMode");
	if(jsonForPlayLoopMode != nullptr && !jsonForPlayLoopMode->is_null())
	{
		setPlayLoopMode(ModelBase::boolFromJson(*jsonForPlayLoopMode));
	}
	web::json::value* jsonForPlayMode = ModelBase::getField(val, "PlayMode");
	if(jsonForPlayMode != nullptr && !jsonForPlayMode->is_null())
	{
		setPlayMode(ModelBase::stringFromJson(*jsonForPlayMode));
	}
	web::json::value* jsonForRewindVideo = ModelBase::getField(val, "RewindVideo");
	if(jsonForRewindVideo != nullptr && !jsonForRewindVideo->is_null())
	{
		setRewindVideo(ModelBase::boolFromJson(*jsonForRewindVideo));
	}
	web::json::value* jsonForVolume = ModelBase::getField(val, "Volume");
	if(jsonForVolume != nullptr && !jsonForVolume->is_null())
	{
		setVolume(ModelBase::stringFromJson(*jsonForVolume));
	}
	web::json::value* jsonForBase64Data = ModelBase::getField(val, "Base64Data");
	if(jsonForBase64Data != nullptr && !jsonForBase64Data->is_null())
	{
		setBase64Data(ModelBase::stringFromJson(*jsonForBase64Data));
	}
	web::json::value* jsonForPictureFillFormat = ModelBase::getField(val, "PictureFillFormat");
	if(jsonForPictureFillFormat != nullptr && !jsonForPictureFillFormat->is_null())
	{
		std::shared_ptr<PictureFill> newItem(new PictureFill());
		newItem->fromJson(*jsonForPictureFillFormat);
		setPictureFillFormat(newItem);
	}
}

}
}

