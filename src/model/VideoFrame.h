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

/*
 * VideoFrame.h
 *
 * Represents VideoFrame resource.
 */

#ifndef _VideoFrame_H_
#define _VideoFrame_H_

#include "GeometryShape.h"

#include "../model/GeometryShape.h"
#include "../model/Hyperlink.h"
#include "../model/EffectFormat.h"
#include "../model/PictureFill.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ResourceUri.h"
#include "../model/ThreeDFormat.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents VideoFrame resource.
/// </summary>
class  VideoFrame : public GeometryShape
{
public:
	ASPOSE_DLL_EXPORT VideoFrame();
	ASPOSE_DLL_EXPORT virtual ~VideoFrame();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Determines whether a video is shown in full screen mode.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getFullScreenMode() const;
	ASPOSE_DLL_EXPORT void setFullScreenMode(bool value);
	ASPOSE_DLL_EXPORT bool fullScreenModeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetFullScreenMode();
	/// <summary>
	/// Determines whether a VideoFrame is hidden. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getHideAtShowing() const;
	ASPOSE_DLL_EXPORT void setHideAtShowing(bool value);
	ASPOSE_DLL_EXPORT bool hideAtShowingIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHideAtShowing();
	/// <summary>
	/// Determines whether a video is looped.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getPlayLoopMode() const;
	ASPOSE_DLL_EXPORT void setPlayLoopMode(bool value);
	ASPOSE_DLL_EXPORT bool playLoopModeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPlayLoopMode();
	/// <summary>
	/// Returns or sets the video play mode.  
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPlayMode() const;
	ASPOSE_DLL_EXPORT void setPlayMode(utility::string_t value);
	/// <summary>
	/// Determines whether a video is automatically rewinded to start as soon as the movie has finished playing
	/// </summary>
	ASPOSE_DLL_EXPORT bool getRewindVideo() const;
	ASPOSE_DLL_EXPORT void setRewindVideo(bool value);
	ASPOSE_DLL_EXPORT bool rewindVideoIsSet() const;
	ASPOSE_DLL_EXPORT void unsetRewindVideo();
	/// <summary>
	/// Returns or sets the audio volume.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getVolume() const;
	ASPOSE_DLL_EXPORT void setVolume(utility::string_t value);
	/// <summary>
	/// Video data encoded in base64.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getBase64Data() const;
	ASPOSE_DLL_EXPORT void setBase64Data(utility::string_t value);
	/// <summary>
	/// Picture fill format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<PictureFill> getPictureFillFormat() const;
	ASPOSE_DLL_EXPORT void setPictureFillFormat(std::shared_ptr<PictureFill> value);

protected:
	bool m_FullScreenMode;
	bool m_FullScreenModeIsSet;
	bool m_HideAtShowing;
	bool m_HideAtShowingIsSet;
	bool m_PlayLoopMode;
	bool m_PlayLoopModeIsSet;
	utility::string_t m_PlayMode;
	bool m_RewindVideo;
	bool m_RewindVideoIsSet;
	utility::string_t m_Volume;
	utility::string_t m_Base64Data;
	std::shared_ptr<PictureFill> m_PictureFillFormat;
};

}
}

#endif /* _VideoFrame_H_ */
