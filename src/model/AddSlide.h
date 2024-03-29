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
 * AddSlide.h
 *
 * Add slide task.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_AddSlide_H_
#define ASPOSESLIDESCLOUD_MODEL_AddSlide_H_

#include "Task.h"

#include "../model/Task.h"
#include <cpprest/details/basic_types.h>
#include "../model/InputFile.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Add slide task.
/// </summary>
class  AddSlide : public Task
{
public:
	ASPOSE_DLL_EXPORT AddSlide();
	ASPOSE_DLL_EXPORT virtual ~AddSlide();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// File to clone a slide from.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<InputFile> getCloneFromFile() const;
	ASPOSE_DLL_EXPORT void setCloneFromFile(std::shared_ptr<InputFile> value);
	/// <summary>
	/// Position of the slide to clone.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getCloneFromPosition() const;
	ASPOSE_DLL_EXPORT void setCloneFromPosition(int32_t value);
	/// <summary>
	/// Position at which to insert the slide.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(int32_t value);
	/// <summary>
	/// Alias of layout (href, index or type). If value is null a blank slide is added.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLayoutAlias() const;
	ASPOSE_DLL_EXPORT void setLayoutAlias(utility::string_t value);

protected:
	std::shared_ptr<InputFile> m_CloneFromFile;
	int32_t m_CloneFromPosition;
	int32_t m_Position;
	utility::string_t m_LayoutAlias;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_AddSlide_H_ */
