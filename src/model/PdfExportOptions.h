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
 * PdfExportOptions.h
 *
 * Provides options that control how a presentation is saved in Pdf format.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_PdfExportOptions_H_
#define ASPOSESLIDESCLOUD_MODEL_PdfExportOptions_H_

#include "ExportOptions.h"

#include "../model/ExportOptions.h"
#include "../model/FontFallbackRule.h"
#include "../model/FontSubstRule.h"
#include "../model/SlidesLayoutOptions.h"
#include "../model/AccessPermissions.h"
#include <cpprest/details/basic_types.h>
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a presentation is saved in Pdf format.
/// </summary>
class  PdfExportOptions : public ExportOptions
{
public:
	ASPOSE_DLL_EXPORT PdfExportOptions();
	ASPOSE_DLL_EXPORT virtual ~PdfExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Specifies compression type to be used for all textual content in the document.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTextCompression() const;
	ASPOSE_DLL_EXPORT void setTextCompression(utility::string_t value);
	/// <summary>
	/// Determines if all characters of font should be embedded or only used subset.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isEmbedFullFonts() const;
	ASPOSE_DLL_EXPORT void setEmbedFullFonts(bool value);
	ASPOSE_DLL_EXPORT bool embedFullFontsIsSet() const;
	ASPOSE_DLL_EXPORT void unsetEmbedFullFonts();
	/// <summary>
	/// Desired conformance level for generated PDF document.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCompliance() const;
	ASPOSE_DLL_EXPORT void setCompliance(utility::string_t value);
	/// <summary>
	/// Returns or sets a value determining resolution of images inside PDF document.  Property affects on file size, time of export and image quality. The default value is 96.
	/// </summary>
	ASPOSE_DLL_EXPORT double getSufficientResolution() const;
	ASPOSE_DLL_EXPORT void setSufficientResolution(double value);
	ASPOSE_DLL_EXPORT bool sufficientResolutionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSufficientResolution();
	/// <summary>
	/// Returns or sets a value determining the quality of the JPEG images inside PDF document.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getJpegQuality() const;
	ASPOSE_DLL_EXPORT void setJpegQuality(int32_t value);
	ASPOSE_DLL_EXPORT bool jpegQualityIsSet() const;
	ASPOSE_DLL_EXPORT void unsetJpegQuality();
	/// <summary>
	/// True to draw black frame around each slide.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isDrawSlidesFrame() const;
	ASPOSE_DLL_EXPORT void setDrawSlidesFrame(bool value);
	ASPOSE_DLL_EXPORT bool drawSlidesFrameIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDrawSlidesFrame();
	/// <summary>
	/// Specifies whether the generated document should include hidden slides or not. Default is false. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool isShowHiddenSlides() const;
	ASPOSE_DLL_EXPORT void setShowHiddenSlides(bool value);
	ASPOSE_DLL_EXPORT bool showHiddenSlidesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShowHiddenSlides();
	/// <summary>
	/// True to convert all metafiles used in a presentation to the PNG images.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isSaveMetafilesAsPng() const;
	ASPOSE_DLL_EXPORT void setSaveMetafilesAsPng(bool value);
	ASPOSE_DLL_EXPORT bool saveMetafilesAsPngIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSaveMetafilesAsPng();
	/// <summary>
	/// Setting user password to protect the PDF document. 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);
	/// <summary>
	/// Determines if Aspose.Slides will embed common fonts for ASCII (33..127 code range) text. Fonts for character codes greater than 127 are always embedded. Common fonts list includes PDF&#39;s base 14 fonts and additional user specified fonts.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isEmbedTrueTypeFontsForASCII() const;
	ASPOSE_DLL_EXPORT void setEmbedTrueTypeFontsForASCII(bool value);
	ASPOSE_DLL_EXPORT bool embedTrueTypeFontsForASCIIIsSet() const;
	ASPOSE_DLL_EXPORT void unsetEmbedTrueTypeFontsForASCII();
	/// <summary>
	/// Returns or sets an array of user-defined names of font families which Aspose.Slides should consider common.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<utility::string_t> getAdditionalCommonFontFamilies() const;
	ASPOSE_DLL_EXPORT void setAdditionalCommonFontFamilies(std::vector<utility::string_t> value);
	/// <summary>
	/// Slides layouting options
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<SlidesLayoutOptions> getSlidesLayoutOptions() const;
	ASPOSE_DLL_EXPORT void setSlidesLayoutOptions(std::shared_ptr<SlidesLayoutOptions> value);
	/// <summary>
	/// Image transparent color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getImageTransparentColor() const;
	ASPOSE_DLL_EXPORT void setImageTransparentColor(utility::string_t value);
	/// <summary>
	/// True to apply specified ImageTransparentColor  to an image.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isApplyImageTransparent() const;
	ASPOSE_DLL_EXPORT void setApplyImageTransparent(bool value);
	ASPOSE_DLL_EXPORT bool applyImageTransparentIsSet() const;
	ASPOSE_DLL_EXPORT void unsetApplyImageTransparent();
	/// <summary>
	/// Access permissions that should be granted when the document is opened with user access.  Default is AccessPermissions.None.             
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<AccessPermissions> getAccessPermissions() const;
	ASPOSE_DLL_EXPORT void setAccessPermissions(std::shared_ptr<AccessPermissions> value);
	/// <summary>
	/// True to hide Ink elements in exported document.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isHideInk() const;
	ASPOSE_DLL_EXPORT void setHideInk(bool value);
	ASPOSE_DLL_EXPORT bool hideInkIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHideInk();
	/// <summary>
	/// True to use ROP operation or Opacity for rendering brush.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isInterpretMaskOpAsOpacity() const;
	ASPOSE_DLL_EXPORT void setInterpretMaskOpAsOpacity(bool value);
	ASPOSE_DLL_EXPORT bool interpretMaskOpAsOpacityIsSet() const;
	ASPOSE_DLL_EXPORT void unsetInterpretMaskOpAsOpacity();

protected:
	utility::string_t m_TextCompression;
	bool m_EmbedFullFonts;
	bool m_EmbedFullFontsIsSet;
	utility::string_t m_Compliance;
	double m_SufficientResolution;
	bool m_SufficientResolutionIsSet;
	int32_t m_JpegQuality;
	bool m_JpegQualityIsSet;
	bool m_DrawSlidesFrame;
	bool m_DrawSlidesFrameIsSet;
	bool m_ShowHiddenSlides;
	bool m_ShowHiddenSlidesIsSet;
	bool m_SaveMetafilesAsPng;
	bool m_SaveMetafilesAsPngIsSet;
	utility::string_t m_Password;
	bool m_EmbedTrueTypeFontsForASCII;
	bool m_EmbedTrueTypeFontsForASCIIIsSet;
	std::vector<utility::string_t> m_AdditionalCommonFontFamilies;
	std::shared_ptr<SlidesLayoutOptions> m_SlidesLayoutOptions;
	utility::string_t m_ImageTransparentColor;
	bool m_ApplyImageTransparent;
	bool m_ApplyImageTransparentIsSet;
	std::shared_ptr<AccessPermissions> m_AccessPermissions;
	bool m_HideInk;
	bool m_HideInkIsSet;
	bool m_InterpretMaskOpAsOpacity;
	bool m_InterpretMaskOpAsOpacityIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_PdfExportOptions_H_ */
