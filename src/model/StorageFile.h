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
 * StorageFile.h
 *
 * File or folder information
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_StorageFile_H_
#define ASPOSESLIDESCLOUD_MODEL_StorageFile_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <cpprest/asyncrt_utils.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// File or folder information
/// </summary>
class  StorageFile : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT StorageFile();
	ASPOSE_DLL_EXPORT virtual ~StorageFile();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// File or folder name.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);
	/// <summary>
	/// True if it is a folder.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsFolder() const;
	ASPOSE_DLL_EXPORT void setIsFolder(bool value);
	/// <summary>
	/// File or folder last modified DateTime.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::datetime getModifiedDate() const;
	ASPOSE_DLL_EXPORT void setModifiedDate(utility::datetime value);
	/// <summary>
	/// File or folder size.
	/// </summary>
	ASPOSE_DLL_EXPORT int64_t getSize() const;
	ASPOSE_DLL_EXPORT void setSize(int64_t value);
	/// <summary>
	/// File or folder path.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);

protected:
	utility::string_t m_Name;
	bool m_IsFolder;
	utility::datetime m_ModifiedDate;
	int64_t m_Size;
	utility::string_t m_Path;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_StorageFile_H_ */
