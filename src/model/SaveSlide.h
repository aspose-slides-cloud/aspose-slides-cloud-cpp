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
 * SaveSlide.h
 *
 * Save slide task.
 */

#ifndef _SaveSlide_H_
#define _SaveSlide_H_

#include "Task.h"

#include "../model/ExportOptions.h"
#include "../model/Task.h"
#include "../model/OutputFile.h"
#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Save slide task.
/// </summary>
class  SaveSlide : public Task
{
public:
	ASPOSE_DLL_EXPORT SaveSlide();
	ASPOSE_DLL_EXPORT virtual ~SaveSlide();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Output to save the slide to.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<OutputFile> getOutput() const;
	ASPOSE_DLL_EXPORT void setOutput(std::shared_ptr<OutputFile> value);
	/// <summary>
	/// Save format.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);
	/// <summary>
	/// Save options.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ExportOptions> getOptions() const;
	ASPOSE_DLL_EXPORT void setOptions(std::shared_ptr<ExportOptions> value);
	/// <summary>
	/// Result width for saving to an image format.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();
	/// <summary>
	/// Result height for saving to an image format.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();
	/// <summary>
	/// Slide index.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(int32_t value);

protected:
	std::shared_ptr<OutputFile> m_Output;
	utility::string_t m_Format;
	std::shared_ptr<ExportOptions> m_Options;
	int32_t m_Width;
	bool m_WidthIsSet;
	int32_t m_Height;
	bool m_HeightIsSet;
	int32_t m_Position;
};

}
}

#endif /* _SaveSlide_H_ */
