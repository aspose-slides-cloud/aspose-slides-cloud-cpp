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
 * AudioFrame.h
 *
 * Represents AudioFrame resource.
 */

#ifndef _AudioFrame_H_
#define _AudioFrame_H_

#include "GeometryShape.h"

#include "../model/GeometryShape.h"
#include "../model/Hyperlink.h"
#include "../model/EffectFormat.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ResourceUri.h"
#include "../model/ThreeDFormat.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents AudioFrame resource.
/// </summary>
class  AudioFrame : public GeometryShape
{
public:
	ASPOSE_DLL_EXPORT AudioFrame();
	ASPOSE_DLL_EXPORT virtual ~AudioFrame();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Returns or sets a last track index.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getAudioCdEndTrack() const;
	ASPOSE_DLL_EXPORT void setAudioCdEndTrack(int32_t value);
	ASPOSE_DLL_EXPORT bool audioCdEndTrackIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAudioCdEndTrack();
	/// <summary>
	/// Returns or sets a last track time.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getAudioCdEndTrackTime() const;
	ASPOSE_DLL_EXPORT void setAudioCdEndTrackTime(int32_t value);
	ASPOSE_DLL_EXPORT bool audioCdEndTrackTimeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAudioCdEndTrackTime();
	/// <summary>
	/// Returns or sets a start track index.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getAudioCdStartTrack() const;
	ASPOSE_DLL_EXPORT void setAudioCdStartTrack(int32_t value);
	ASPOSE_DLL_EXPORT bool audioCdStartTrackIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAudioCdStartTrack();
	/// <summary>
	/// Returns or sets a start track time. 
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getAudioCdStartTrackTime() const;
	ASPOSE_DLL_EXPORT void setAudioCdStartTrackTime(int32_t value);
	ASPOSE_DLL_EXPORT bool audioCdStartTrackTimeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAudioCdStartTrackTime();
	/// <summary>
	/// Determines whether a sound is embedded to a presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getEmbedded() const;
	ASPOSE_DLL_EXPORT void setEmbedded(bool value);
	ASPOSE_DLL_EXPORT bool embeddedIsSet() const;
	ASPOSE_DLL_EXPORT void unsetEmbedded();
	/// <summary>
	/// Determines whether an AudioFrame is hidden.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getHideAtShowing() const;
	ASPOSE_DLL_EXPORT void setHideAtShowing(bool value);
	ASPOSE_DLL_EXPORT bool hideAtShowingIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHideAtShowing();
	/// <summary>
	/// Determines whether an audio is looped. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getPlayLoopMode() const;
	ASPOSE_DLL_EXPORT void setPlayLoopMode(bool value);
	ASPOSE_DLL_EXPORT bool playLoopModeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPlayLoopMode();
	/// <summary>
	/// Returns or sets the audio play mode.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPlayMode() const;
	ASPOSE_DLL_EXPORT void setPlayMode(utility::string_t value);
	/// <summary>
	/// Returns or sets the audio volume.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getVolume() const;
	ASPOSE_DLL_EXPORT void setVolume(utility::string_t value);
	/// <summary>
	/// Audio data encoded in base64.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getBase64Data() const;
	ASPOSE_DLL_EXPORT void setBase64Data(utility::string_t value);
	/// <summary>
	/// Determines whether an audio is playing across the slides.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getPlayAcrossSlides() const;
	ASPOSE_DLL_EXPORT void setPlayAcrossSlides(bool value);
	ASPOSE_DLL_EXPORT bool playAcrossSlidesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetPlayAcrossSlides();
	/// <summary>
	/// Determines whether audio is automatically rewound to start after playing.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getRewindAudio() const;
	ASPOSE_DLL_EXPORT void setRewindAudio(bool value);
	ASPOSE_DLL_EXPORT bool rewindAudioIsSet() const;
	ASPOSE_DLL_EXPORT void unsetRewindAudio();

protected:
	int32_t m_AudioCdEndTrack;
	bool m_AudioCdEndTrackIsSet;
	int32_t m_AudioCdEndTrackTime;
	bool m_AudioCdEndTrackTimeIsSet;
	int32_t m_AudioCdStartTrack;
	bool m_AudioCdStartTrackIsSet;
	int32_t m_AudioCdStartTrackTime;
	bool m_AudioCdStartTrackTimeIsSet;
	bool m_Embedded;
	bool m_EmbeddedIsSet;
	bool m_HideAtShowing;
	bool m_HideAtShowingIsSet;
	bool m_PlayLoopMode;
	bool m_PlayLoopModeIsSet;
	utility::string_t m_PlayMode;
	utility::string_t m_Volume;
	utility::string_t m_Base64Data;
	bool m_PlayAcrossSlides;
	bool m_PlayAcrossSlidesIsSet;
	bool m_RewindAudio;
	bool m_RewindAudioIsSet;
};

}
}

#endif /* _AudioFrame_H_ */
