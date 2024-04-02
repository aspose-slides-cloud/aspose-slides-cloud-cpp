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
 * ImageExportOptions.h
 *
 * Provides options that control how a presentation is saved in an image format.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_ImageExportOptions_H_
#define ASPOSESLIDESCLOUD_MODEL_ImageExportOptions_H_

#include "ImageExportOptionsBase.h"

#include "../model/FontFallbackRule.h"
#include "../model/FontSubstRule.h"
#include "../model/SlidesLayoutOptions.h"
#include <cpprest/details/basic_types.h>
#include "../model/ImageExportOptionsBase.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a presentation is saved in an image format.
/// </summary>
class  ImageExportOptions : public ImageExportOptionsBase
{
public:
	ASPOSE_DLL_EXPORT ImageExportOptions();
	ASPOSE_DLL_EXPORT virtual ~ImageExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Show hidden slides. If true, hidden are exported.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isShowHiddenSlides() const;
	ASPOSE_DLL_EXPORT void setShowHiddenSlides(bool value);
	ASPOSE_DLL_EXPORT bool showHiddenSlidesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowHiddenSlides();
	/// <summary>
	/// Slides layouting options
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<SlidesLayoutOptions> getSlidesLayoutOptions() const;
	ASPOSE_DLL_EXPORT void setSlidesLayoutOptions(std::shared_ptr<SlidesLayoutOptions> value);

protected:
	bool m_ShowHiddenSlides;
	bool m_ShowHiddenSlidesIsSet;
	std::shared_ptr<SlidesLayoutOptions> m_SlidesLayoutOptions;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_ImageExportOptions_H_ */
