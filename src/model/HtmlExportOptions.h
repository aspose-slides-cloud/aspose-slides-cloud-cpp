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
 * HtmlExportOptions.h
 *
 * Provides options that control how a presentation is saved in Html format.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_HtmlExportOptions_H_
#define ASPOSESLIDESCLOUD_MODEL_HtmlExportOptions_H_

#include "ExportOptions.h"

#include "../model/ExportOptions.h"
#include "../model/FontFallbackRule.h"
#include "../model/FontSubstRule.h"
#include "../model/SlidesLayoutOptions.h"
#include <cpprest/details/basic_types.h>
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a presentation is saved in Html format.
/// </summary>
class  HtmlExportOptions : public ExportOptions
{
public:
	ASPOSE_DLL_EXPORT HtmlExportOptions();
	ASPOSE_DLL_EXPORT virtual ~HtmlExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Get or sets flag for save presentation as zip file
	/// </summary>
	ASPOSE_DLL_EXPORT bool isSaveAsZip() const;
	ASPOSE_DLL_EXPORT void setSaveAsZip(bool value);
	ASPOSE_DLL_EXPORT bool saveAsZipIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSaveAsZip();
	/// <summary>
	/// Get or set name of subdirectory in zip-file for store external files
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSubDirectoryName() const;
	ASPOSE_DLL_EXPORT void setSubDirectoryName(utility::string_t value);
	/// <summary>
	/// Specifies whether the generated document should include hidden slides or not. Default is false. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool isShowHiddenSlides() const;
	ASPOSE_DLL_EXPORT void setShowHiddenSlides(bool value);
	ASPOSE_DLL_EXPORT bool showHiddenSlidesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowHiddenSlides();
	/// <summary>
	/// True to make layout responsive by excluding width and height attributes from svg container.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isSvgResponsiveLayout() const;
	ASPOSE_DLL_EXPORT void setSvgResponsiveLayout(bool value);
	ASPOSE_DLL_EXPORT bool svgResponsiveLayoutIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSvgResponsiveLayout();
	/// <summary>
	/// Returns or sets a value determining the quality of the JPEG images inside PDF document.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getJpegQuality() const;
	ASPOSE_DLL_EXPORT void setJpegQuality(int32_t value);
	ASPOSE_DLL_EXPORT bool jpegQualityIsSet() const;
	ASPOSE_DLL_EXPORT void unsetJpegQuality();
	/// <summary>
	/// Represents the pictures compression level
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPicturesCompression() const;
	ASPOSE_DLL_EXPORT void setPicturesCompression(utility::string_t value);
	/// <summary>
	/// A boolean flag indicates if the cropped parts remain as part of the document. If true the cropped  parts will removed, if false they will be serialized in the document (which can possible lead to a  larger file)
	/// </summary>
	ASPOSE_DLL_EXPORT bool isDeletePicturesCroppedAreas() const;
	ASPOSE_DLL_EXPORT void setDeletePicturesCroppedAreas(bool value);
	ASPOSE_DLL_EXPORT bool deletePicturesCroppedAreasIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDeletePicturesCroppedAreas();
	/// <summary>
	/// Slides layouting options
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<SlidesLayoutOptions> getSlidesLayoutOptions() const;
	ASPOSE_DLL_EXPORT void setSlidesLayoutOptions(std::shared_ptr<SlidesLayoutOptions> value);

protected:
	bool m_SaveAsZip;
	bool m_SaveAsZipIsSet;
	utility::string_t m_SubDirectoryName;
	bool m_ShowHiddenSlides;
	bool m_ShowHiddenSlidesIsSet;
	bool m_SvgResponsiveLayout;
	bool m_SvgResponsiveLayoutIsSet;
	int32_t m_JpegQuality;
	bool m_JpegQualityIsSet;
	utility::string_t m_PicturesCompression;
	bool m_DeletePicturesCroppedAreas;
	bool m_DeletePicturesCroppedAreasIsSet;
	std::shared_ptr<SlidesLayoutOptions> m_SlidesLayoutOptions;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_HtmlExportOptions_H_ */
