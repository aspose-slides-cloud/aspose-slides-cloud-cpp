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
 * SlideCommentBase.h
 *
 * Represents slide comment
 */

#ifndef _SlideCommentBase_H_
#define _SlideCommentBase_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/SlideCommentBase.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents slide comment
/// </summary>
class  SlideCommentBase : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT SlideCommentBase();
	ASPOSE_DLL_EXPORT virtual ~SlideCommentBase();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Author.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAuthor() const;
	ASPOSE_DLL_EXPORT void setAuthor(utility::string_t value);
	/// <summary>
	/// Text.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getText() const;
	ASPOSE_DLL_EXPORT void setText(utility::string_t value);
	/// <summary>
	/// Creation time.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCreatedTime() const;
	ASPOSE_DLL_EXPORT void setCreatedTime(utility::string_t value);
	/// <summary>
	/// Child comments.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<SlideCommentBase>> getChildComments() const;
	ASPOSE_DLL_EXPORT void setChildComments(std::vector<std::shared_ptr<SlideCommentBase>> value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getType() const;
	ASPOSE_DLL_EXPORT void setType(utility::string_t value);

protected:
	utility::string_t m_Author;
	utility::string_t m_Text;
	utility::string_t m_CreatedTime;
	std::vector<std::shared_ptr<SlideCommentBase>> m_ChildComments;
	utility::string_t m_Type;
};

}
}

#endif /* _SlideCommentBase_H_ */
