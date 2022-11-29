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
 * Input.h
 *
 * Represents input document for pipeline.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_Input_H_
#define ASPOSESLIDESCLOUD_MODEL_Input_H_

#include "../ModelBase.h"

#include "../model/InputFile.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents input document for pipeline.
/// </summary>
class  Input : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT Input();
	ASPOSE_DLL_EXPORT virtual ~Input();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Get or sets template document. If property is null new empty presentation will be created.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<InputFile> getTemplate() const;
	ASPOSE_DLL_EXPORT void setTemplate(std::shared_ptr<InputFile> value);
	/// <summary>
	/// Get or sets html data for generate new presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<InputFile> getHtmlData() const;
	ASPOSE_DLL_EXPORT void setHtmlData(std::shared_ptr<InputFile> value);
	/// <summary>
	/// Get or sets data for template engine.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<InputFile> getTemplateData() const;
	ASPOSE_DLL_EXPORT void setTemplateData(std::shared_ptr<InputFile> value);

protected:
	std::shared_ptr<InputFile> m__Template;
	std::shared_ptr<InputFile> m_HtmlData;
	std::shared_ptr<InputFile> m_TemplateData;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_Input_H_ */
