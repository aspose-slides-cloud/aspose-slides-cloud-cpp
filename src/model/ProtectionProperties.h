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
 * ProtectionProperties.h
 *
 * Protection properties.
 */

#ifndef _ProtectionProperties_H_
#define _ProtectionProperties_H_

#include "ResourceBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Protection properties.
/// </summary>
class  ProtectionProperties : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT ProtectionProperties();
	ASPOSE_DLL_EXPORT virtual ~ProtectionProperties();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// True if document properties are encrypted. Has effect only for password protected presentations.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getEncryptDocumentProperties() const;
	ASPOSE_DLL_EXPORT void setEncryptDocumentProperties(bool value);
	ASPOSE_DLL_EXPORT bool encryptDocumentPropertiesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetEncryptDocumentProperties();
	/// <summary>
	/// True if the document should be opened as read-only.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getReadOnlyRecommended() const;
	ASPOSE_DLL_EXPORT void setReadOnlyRecommended(bool value);
	ASPOSE_DLL_EXPORT bool readOnlyRecommendedIsSet() const;
	ASPOSE_DLL_EXPORT void unsetReadOnlyRecommended();
	/// <summary>
	/// Password for read protection.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getReadPassword() const;
	ASPOSE_DLL_EXPORT void setReadPassword(utility::string_t value);
	/// <summary>
	/// Password for write protection.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getWritePassword() const;
	ASPOSE_DLL_EXPORT void setWritePassword(utility::string_t value);
	/// <summary>
	/// Returns true if the presentation protected for editing. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsWriteProtected() const;
	ASPOSE_DLL_EXPORT void setIsWriteProtected(bool value);
	/// <summary>
	/// Returns true if the presentation protected for reading. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsEncrypted() const;
	ASPOSE_DLL_EXPORT void setIsEncrypted(bool value);

protected:
	bool m_EncryptDocumentProperties;
	bool m_EncryptDocumentPropertiesIsSet;
	bool m_ReadOnlyRecommended;
	bool m_ReadOnlyRecommendedIsSet;
	utility::string_t m_ReadPassword;
	utility::string_t m_WritePassword;
	bool m_IsWriteProtected;
	bool m_IsEncrypted;
};

}
}

#endif /* _ProtectionProperties_H_ */
