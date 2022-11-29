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
 * AccessPermissions.h
 *
 * A set of properties specifying which access permissions should be granted when the document is opened with user access.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_AccessPermissions_H_
#define ASPOSESLIDESCLOUD_MODEL_AccessPermissions_H_

#include "../ModelBase.h"


#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// A set of properties specifying which access permissions should be granted when the document is opened with user access.
/// </summary>
class  AccessPermissions : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT AccessPermissions();
	ASPOSE_DLL_EXPORT virtual ~AccessPermissions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// The user may print the document (possibly not at the highest quality level, depending on whether bit HighQualityPrint is also set).
	/// </summary>
	ASPOSE_DLL_EXPORT bool isPrintDocument() const;
	ASPOSE_DLL_EXPORT void setPrintDocument(bool value);
	/// <summary>
	/// The user may modify the contents of the document by operations other than those controlled by bits AddOrModifyFields, FillExistingFields, AssembleDocument.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isModifyContent() const;
	ASPOSE_DLL_EXPORT void setModifyContent(bool value);
	/// <summary>
	/// The user may copy or otherwise extract text and graphics from the document by operations other than that controlled by bit ExtractTextAndGraphics.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isCopyTextAndGraphics() const;
	ASPOSE_DLL_EXPORT void setCopyTextAndGraphics(bool value);
	/// <summary>
	/// The user may add or modify text annotations, fill in interactive form fields, and, if bit ModifyContent is also set, create or modify interactive form fields (including signature fields).
	/// </summary>
	ASPOSE_DLL_EXPORT bool isAddOrModifyFields() const;
	ASPOSE_DLL_EXPORT void setAddOrModifyFields(bool value);
	/// <summary>
	/// The user may fill in existing interactive form fields (including signature fields), even if bit AddOrModifyFields is clear.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isFillExistingFields() const;
	ASPOSE_DLL_EXPORT void setFillExistingFields(bool value);
	/// <summary>
	/// The user may extract text and graphics in support of accessibility to users with disabilities or for other purposes.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isExtractTextAndGraphics() const;
	ASPOSE_DLL_EXPORT void setExtractTextAndGraphics(bool value);
	/// <summary>
	/// The user may assemble the document (insert, rotate, or delete pages and create bookmarks or thumbnail images), even if bit ModifyContent is clear.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isAssembleDocument() const;
	ASPOSE_DLL_EXPORT void setAssembleDocument(bool value);
	/// <summary>
	/// The user may print the document to a representation from which a faithful digital copy of the PDF content could be generated. When this bit is clear (and bit PrintDocument is set), printing is limited to a low-level representation of the appearance, possibly of degraded quality.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isHighQualityPrint() const;
	ASPOSE_DLL_EXPORT void setHighQualityPrint(bool value);

protected:
	bool m_PrintDocument;
	bool m_ModifyContent;
	bool m_CopyTextAndGraphics;
	bool m_AddOrModifyFields;
	bool m_FillExistingFields;
	bool m_ExtractTextAndGraphics;
	bool m_AssembleDocument;
	bool m_HighQualityPrint;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_AccessPermissions_H_ */
