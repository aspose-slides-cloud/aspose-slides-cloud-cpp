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
 * Error.h
 *
 * Error
 */

#ifndef _Error_H_
#define _Error_H_

#include "../ModelBase.h"

#include "../model/ErrorDetails.h"
#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Error
/// </summary>
class  Error : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT Error();
	ASPOSE_DLL_EXPORT virtual ~Error();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Code             
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCode() const;
	ASPOSE_DLL_EXPORT void setCode(utility::string_t value);
	/// <summary>
	/// Message             
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getMessage() const;
	ASPOSE_DLL_EXPORT void setMessage(utility::string_t value);
	/// <summary>
	/// Description             
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDescription() const;
	ASPOSE_DLL_EXPORT void setDescription(utility::string_t value);
	/// <summary>
	/// Inner Error             
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ErrorDetails> getInnerError() const;
	ASPOSE_DLL_EXPORT void setInnerError(std::shared_ptr<ErrorDetails> value);

protected:
	utility::string_t m_Code;
	utility::string_t m_Message;
	utility::string_t m_Description;
	std::shared_ptr<ErrorDetails> m_InnerError;
};

}
}

#endif /* _Error_H_ */
