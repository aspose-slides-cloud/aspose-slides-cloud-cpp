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
 * Html5ExportOptions.h
 *
 * Provides options that control how a presentation is saved in Html5 format.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_Html5ExportOptions_H_
#define ASPOSESLIDESCLOUD_MODEL_Html5ExportOptions_H_

#include "ExportOptions.h"

#include "../model/ExportOptions.h"
#include "../model/FontFallbackRule.h"
#include "../model/FontSubstRule.h"
#include <cpprest/details/basic_types.h>
#include "../model/NotesCommentsLayoutingOptions.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a presentation is saved in Html5 format.
/// </summary>
class  Html5ExportOptions : public ExportOptions
{
public:
	ASPOSE_DLL_EXPORT Html5ExportOptions();
	ASPOSE_DLL_EXPORT virtual ~Html5ExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets transitions animation option.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isAnimateTransitions() const;
	ASPOSE_DLL_EXPORT void setAnimateTransitions(bool value);
	ASPOSE_DLL_EXPORT bool animateTransitionsIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAnimateTransitions();
	/// <summary>
	/// Gets or sets shapes animation option.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isAnimateShapes() const;
	ASPOSE_DLL_EXPORT void setAnimateShapes(bool value);
	ASPOSE_DLL_EXPORT bool animateShapesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAnimateShapes();
	/// <summary>
	/// Gets or sets embed images option.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isEmbedImages() const;
	ASPOSE_DLL_EXPORT void setEmbedImages(bool value);
	ASPOSE_DLL_EXPORT bool embedImagesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetEmbedImages();
	/// <summary>
	/// Slides layouting options
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<NotesCommentsLayoutingOptions> getNotesCommentsLayouting() const;
	ASPOSE_DLL_EXPORT void setNotesCommentsLayouting(std::shared_ptr<NotesCommentsLayoutingOptions> value);
	/// <summary>
	/// Path to custom templates
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTemplatesPath() const;
	ASPOSE_DLL_EXPORT void setTemplatesPath(utility::string_t value);

protected:
	bool m_AnimateTransitions;
	bool m_AnimateTransitionsIsSet;
	bool m_AnimateShapes;
	bool m_AnimateShapesIsSet;
	bool m_EmbedImages;
	bool m_EmbedImagesIsSet;
	std::shared_ptr<NotesCommentsLayoutingOptions> m_NotesCommentsLayouting;
	utility::string_t m_TemplatesPath;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_Html5ExportOptions_H_ */
