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
 * GifExportOptions.h
 *
 * Provides options that control how a presentation is saved in Gif format.
 */

#ifndef _GifExportOptions_H_
#define _GifExportOptions_H_

#include "ExportOptions.h"

#include "../model/ExportOptions.h"
#include "../model/FontFallbackRule.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a presentation is saved in Gif format.
/// </summary>
class  GifExportOptions : public ExportOptions
{
public:
	ASPOSE_DLL_EXPORT GifExportOptions();
	ASPOSE_DLL_EXPORT virtual ~GifExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Determines whether hidden slides will be exported.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getExportHiddenSlides() const;
	ASPOSE_DLL_EXPORT void setExportHiddenSlides(bool value);
	ASPOSE_DLL_EXPORT bool exportHiddenSlidesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetExportHiddenSlides();
	/// <summary>
	/// Gets or sets transition FPS [frames/sec]
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getTransitionFps() const;
	ASPOSE_DLL_EXPORT void setTransitionFps(int32_t value);
	ASPOSE_DLL_EXPORT bool transitionFpsIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTransitionFps();
	/// <summary>
	/// Gets or sets default delay time [ms].
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getDefaultDelay() const;
	ASPOSE_DLL_EXPORT void setDefaultDelay(int32_t value);
	ASPOSE_DLL_EXPORT bool defaultDelayIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDefaultDelay();

protected:
	bool m_ExportHiddenSlides;
	bool m_ExportHiddenSlidesIsSet;
	int32_t m_TransitionFps;
	bool m_TransitionFpsIsSet;
	int32_t m_DefaultDelay;
	bool m_DefaultDelayIsSet;
};

}
}

#endif /* _GifExportOptions_H_ */
