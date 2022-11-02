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
 * AddMasterSlide.h
 *
 * Add master slide task.
 */

#ifndef _AddMasterSlide_H_
#define _AddMasterSlide_H_

#include "Task.h"

#include "../model/Task.h"
#include <cpprest/details/basic_types.h>
#include "../model/InputFile.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Add master slide task.
/// </summary>
class  AddMasterSlide : public Task
{
public:
	ASPOSE_DLL_EXPORT AddMasterSlide();
	ASPOSE_DLL_EXPORT virtual ~AddMasterSlide();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Source presentation clone from.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<InputFile> getCloneFromFile() const;
	ASPOSE_DLL_EXPORT void setCloneFromFile(std::shared_ptr<InputFile> value);
	/// <summary>
	/// Index of slide to clone.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getCloneFromPosition() const;
	ASPOSE_DLL_EXPORT void setCloneFromPosition(int32_t value);
	/// <summary>
	/// True if cloned master slide is applied to all slides.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getApplyToAll() const;
	ASPOSE_DLL_EXPORT void setApplyToAll(bool value);

protected:
	std::shared_ptr<InputFile> m_CloneFromFile;
	int32_t m_CloneFromPosition;
	bool m_ApplyToAll;
};

}
}

#endif /* _AddMasterSlide_H_ */
