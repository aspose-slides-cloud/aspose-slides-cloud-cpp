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
 * VideoExportOptions.h
 *
 * Provides options that control how a presentation is saved in an video format.
 */

#ifndef _VideoExportOptions_H_
#define _VideoExportOptions_H_

#include "ExportOptions.h"

#include "../model/ExportOptions.h"
#include "../model/FontFallbackRule.h"
#include "../model/FontSubstRule.h"
#include <cpprest/details/basic_types.h>
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a presentation is saved in an video format.
/// </summary>
class  VideoExportOptions : public ExportOptions
{
public:
	ASPOSE_DLL_EXPORT VideoExportOptions();
	ASPOSE_DLL_EXPORT virtual ~VideoExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Slides transition duration.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getSlidesTransitionDuration() const;
	ASPOSE_DLL_EXPORT void setSlidesTransitionDuration(int32_t value);
	ASPOSE_DLL_EXPORT bool slidesTransitionDurationIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSlidesTransitionDuration();
	/// <summary>
	/// Video transition type
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTransitionType() const;
	ASPOSE_DLL_EXPORT void setTransitionType(utility::string_t value);
	/// <summary>
	/// Duration of transition defined in TransitionType property.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getTransitionDuration() const;
	ASPOSE_DLL_EXPORT void setTransitionDuration(int32_t value);
	ASPOSE_DLL_EXPORT bool transitionDurationIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTransitionDuration();
	/// <summary>
	/// Video resolution type
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getVideoResolutionType() const;
	ASPOSE_DLL_EXPORT void setVideoResolutionType(utility::string_t value);

protected:
	int32_t m_SlidesTransitionDuration;
	bool m_SlidesTransitionDurationIsSet;
	utility::string_t m_TransitionType;
	int32_t m_TransitionDuration;
	bool m_TransitionDurationIsSet;
	utility::string_t m_VideoResolutionType;
};

}
}

#endif /* _VideoExportOptions_H_ */
