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
 * ReplaceText.h
 *
 * Replace text task.
 */

#ifndef _ReplaceText_H_
#define _ReplaceText_H_

#include "Task.h"

#include "../model/Task.h"
#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Replace text task.
/// </summary>
class  ReplaceText : public Task
{
public:
	ASPOSE_DLL_EXPORT ReplaceText();
	ASPOSE_DLL_EXPORT virtual ~ReplaceText();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Text to be replaced.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getOldText() const;
	ASPOSE_DLL_EXPORT void setOldText(utility::string_t value);
	/// <summary>
	/// Text to replace with.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getNewText() const;
	ASPOSE_DLL_EXPORT void setNewText(utility::string_t value);
	/// <summary>
	/// True to ignore case in replace pattern search.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIgnoreCase() const;
	ASPOSE_DLL_EXPORT void setIgnoreCase(bool value);
	/// <summary>
	/// One-based position of the slide to perform the replace in. 0 to make the replace throughout the presentation.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getSlidePosition() const;
	ASPOSE_DLL_EXPORT void setSlidePosition(int32_t value);

protected:
	utility::string_t m_OldText;
	utility::string_t m_NewText;
	bool m_IgnoreCase;
	int32_t m_SlidePosition;
};

}
}

#endif /* _ReplaceText_H_ */
