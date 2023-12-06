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
 * SlideShowTransition.h
 *
 * Slide Show Transition.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_SlideShowTransition_H_
#define ASPOSESLIDESCLOUD_MODEL_SlideShowTransition_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Slide Show Transition.
/// </summary>
class  SlideShowTransition : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT SlideShowTransition();
	ASPOSE_DLL_EXPORT virtual ~SlideShowTransition();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Transition Type
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getType() const;
	ASPOSE_DLL_EXPORT void setType(utility::string_t value);
	/// <summary>
	/// Advance After
	/// </summary>
	ASPOSE_DLL_EXPORT bool isAdvanceAfter() const;
	ASPOSE_DLL_EXPORT void setAdvanceAfter(bool value);
	ASPOSE_DLL_EXPORT bool advanceAfterIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAdvanceAfter();
	/// <summary>
	/// Advance After Time
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getAdvanceAfterTime() const;
	ASPOSE_DLL_EXPORT void setAdvanceAfterTime(int32_t value);
	ASPOSE_DLL_EXPORT bool advanceAfterTimeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAdvanceAfterTime();
	/// <summary>
	/// Advance On Click
	/// </summary>
	ASPOSE_DLL_EXPORT bool isAdvanceOnClick() const;
	ASPOSE_DLL_EXPORT void setAdvanceOnClick(bool value);
	ASPOSE_DLL_EXPORT bool advanceOnClickIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAdvanceOnClick();
	/// <summary>
	/// Sound Is Built In
	/// </summary>
	ASPOSE_DLL_EXPORT bool isSoundIsBuiltIn() const;
	ASPOSE_DLL_EXPORT void setSoundIsBuiltIn(bool value);
	ASPOSE_DLL_EXPORT bool soundIsBuiltInIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSoundIsBuiltIn();
	/// <summary>
	/// Sound Loop
	/// </summary>
	ASPOSE_DLL_EXPORT bool isSoundLoop() const;
	ASPOSE_DLL_EXPORT void setSoundLoop(bool value);
	ASPOSE_DLL_EXPORT bool soundLoopIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSoundLoop();
	/// <summary>
	/// Sound Mode
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSoundMode() const;
	ASPOSE_DLL_EXPORT void setSoundMode(utility::string_t value);
	/// <summary>
	/// Sound Name
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSoundName() const;
	ASPOSE_DLL_EXPORT void setSoundName(utility::string_t value);
	/// <summary>
	/// Speed
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSpeed() const;
	ASPOSE_DLL_EXPORT void setSpeed(utility::string_t value);
	/// <summary>
	/// Corner Direction.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCornerDirection() const;
	ASPOSE_DLL_EXPORT void setCornerDirection(utility::string_t value);
	/// <summary>
	/// Eight Direction.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getEightDirection() const;
	ASPOSE_DLL_EXPORT void setEightDirection(utility::string_t value);
	/// <summary>
	/// In/Out Direction.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getInOutDirection() const;
	ASPOSE_DLL_EXPORT void setInOutDirection(utility::string_t value);
	/// <summary>
	/// Has Bounce.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isHasBounce() const;
	ASPOSE_DLL_EXPORT void setHasBounce(bool value);
	ASPOSE_DLL_EXPORT bool hasBounceIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHasBounce();
	/// <summary>
	/// Side Direction.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSideDirection() const;
	ASPOSE_DLL_EXPORT void setSideDirection(utility::string_t value);
	/// <summary>
	/// Pattern.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPattern() const;
	ASPOSE_DLL_EXPORT void setPattern(utility::string_t value);
	/// <summary>
	/// Left/Right Direction.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLeftRightDirection() const;
	ASPOSE_DLL_EXPORT void setLeftRightDirection(utility::string_t value);
	/// <summary>
	/// Morph Type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getMorphType() const;
	ASPOSE_DLL_EXPORT void setMorphType(utility::string_t value);
	/// <summary>
	/// From Black.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isFromBlack() const;
	ASPOSE_DLL_EXPORT void setFromBlack(bool value);
	ASPOSE_DLL_EXPORT bool fromBlackIsSet() const;
	ASPOSE_DLL_EXPORT void unsetFromBlack();
	/// <summary>
	/// Orientation Direction.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getOrientationDirection() const;
	ASPOSE_DLL_EXPORT void setOrientationDirection(utility::string_t value);
	/// <summary>
	/// Through Black.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isThroughBlack() const;
	ASPOSE_DLL_EXPORT void setThroughBlack(bool value);
	ASPOSE_DLL_EXPORT bool throughBlackIsSet() const;
	ASPOSE_DLL_EXPORT void unsetThroughBlack();
	/// <summary>
	/// Orientation.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCornerAndCenterDirection() const;
	ASPOSE_DLL_EXPORT void setCornerAndCenterDirection(utility::string_t value);
	/// <summary>
	/// Shred Pattern.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getShredPattern() const;
	ASPOSE_DLL_EXPORT void setShredPattern(utility::string_t value);
	/// <summary>
	/// Orientation.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getOrientation() const;
	ASPOSE_DLL_EXPORT void setOrientation(utility::string_t value);
	/// <summary>
	/// Spokes.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getSpokes() const;
	ASPOSE_DLL_EXPORT void setSpokes(int32_t value);
	ASPOSE_DLL_EXPORT bool spokesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSpokes();

protected:
	utility::string_t m_Type;
	bool m_AdvanceAfter;
	bool m_AdvanceAfterIsSet;
	int32_t m_AdvanceAfterTime;
	bool m_AdvanceAfterTimeIsSet;
	bool m_AdvanceOnClick;
	bool m_AdvanceOnClickIsSet;
	bool m_SoundIsBuiltIn;
	bool m_SoundIsBuiltInIsSet;
	bool m_SoundLoop;
	bool m_SoundLoopIsSet;
	utility::string_t m_SoundMode;
	utility::string_t m_SoundName;
	utility::string_t m_Speed;
	utility::string_t m_CornerDirection;
	utility::string_t m_EightDirection;
	utility::string_t m_InOutDirection;
	bool m_HasBounce;
	bool m_HasBounceIsSet;
	utility::string_t m_SideDirection;
	utility::string_t m_Pattern;
	utility::string_t m_LeftRightDirection;
	utility::string_t m_MorphType;
	bool m_FromBlack;
	bool m_FromBlackIsSet;
	utility::string_t m_OrientationDirection;
	bool m_ThroughBlack;
	bool m_ThroughBlackIsSet;
	utility::string_t m_CornerAndCenterDirection;
	utility::string_t m_ShredPattern;
	utility::string_t m_Orientation;
	int32_t m_Spokes;
	bool m_SpokesIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_SlideShowTransition_H_ */
