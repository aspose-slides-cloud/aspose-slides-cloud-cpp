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
 * FilesUploadResult.h
 *
 * File upload result
 */

#ifndef _FilesUploadResult_H_
#define _FilesUploadResult_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/Error.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// File upload result
/// </summary>
class  FilesUploadResult : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT FilesUploadResult();
	ASPOSE_DLL_EXPORT virtual ~FilesUploadResult();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// List of uploaded file names
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<utility::string_t> getUploaded() const;
	ASPOSE_DLL_EXPORT void setUploaded(std::vector<utility::string_t> value);
	/// <summary>
	/// List of errors.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<Error>> getErrors() const;
	ASPOSE_DLL_EXPORT void setErrors(std::vector<std::shared_ptr<Error>> value);

protected:
	std::vector<utility::string_t> m_Uploaded;
	std::vector<std::shared_ptr<Error>> m_Errors;
};

}
}

#endif /* _FilesUploadResult_H_ */
