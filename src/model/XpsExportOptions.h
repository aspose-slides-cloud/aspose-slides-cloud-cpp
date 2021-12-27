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
 * XpsExportOptions.h
 *
 * Provides options that control how a presentation is saved in XPS format.
 */

#ifndef _XpsExportOptions_H_
#define _XpsExportOptions_H_

#include "ExportOptions.h"

#include "../model/ExportOptions.h"
#include <cpprest/details/basic_types.h>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a presentation is saved in XPS format.
/// </summary>
class  XpsExportOptions : public ExportOptions
{
public:
	ASPOSE_DLL_EXPORT XpsExportOptions();
	ASPOSE_DLL_EXPORT virtual ~XpsExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Specifies whether the generated document should include hidden slides or not. Default is false. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowHiddenSlides() const;
	ASPOSE_DLL_EXPORT void setShowHiddenSlides(bool value);
	ASPOSE_DLL_EXPORT bool showHiddenSlidesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowHiddenSlides();
	/// <summary>
	/// True to convert all metafiles used in a presentation to the PNG images.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getSaveMetafilesAsPng() const;
	ASPOSE_DLL_EXPORT void setSaveMetafilesAsPng(bool value);
	ASPOSE_DLL_EXPORT bool saveMetafilesAsPngIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSaveMetafilesAsPng();
	/// <summary>
	/// True to draw black frame around each slide.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getDrawSlidesFrame() const;
	ASPOSE_DLL_EXPORT void setDrawSlidesFrame(bool value);
	ASPOSE_DLL_EXPORT bool drawSlidesFrameIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDrawSlidesFrame();

protected:
	bool m_ShowHiddenSlides;
	bool m_ShowHiddenSlidesIsSet;
	bool m_SaveMetafilesAsPng;
	bool m_SaveMetafilesAsPngIsSet;
	bool m_DrawSlidesFrame;
	bool m_DrawSlidesFrameIsSet;
};

}
}

#endif /* _XpsExportOptions_H_ */
