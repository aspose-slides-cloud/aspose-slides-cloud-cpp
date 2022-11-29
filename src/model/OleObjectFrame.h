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
 * OleObjectFrame.h
 *
 * Represents OleObjectFrame resource.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_OleObjectFrame_H_
#define ASPOSESLIDESCLOUD_MODEL_OleObjectFrame_H_

#include "ShapeBase.h"

#include "../model/Hyperlink.h"
#include "../model/EffectFormat.h"
#include "../model/PictureFill.h"
#include "../model/ShapeBase.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ResourceUri.h"
#include "../model/ThreeDFormat.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents OleObjectFrame resource.
/// </summary>
class  OleObjectFrame : public ShapeBase
{
public:
	ASPOSE_DLL_EXPORT OleObjectFrame();
	ASPOSE_DLL_EXPORT virtual ~OleObjectFrame();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// True if an object is visible as icon.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isIsObjectIcon() const;
	ASPOSE_DLL_EXPORT void setIsObjectIcon(bool value);
	/// <summary>
	/// The title for OleObject icon.             
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSubstitutePictureTitle() const;
	ASPOSE_DLL_EXPORT void setSubstitutePictureTitle(utility::string_t value);
	/// <summary>
	/// OleObject image fill properties.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<PictureFill> getSubstitutePictureFormat() const;
	ASPOSE_DLL_EXPORT void setSubstitutePictureFormat(std::shared_ptr<PictureFill> value);
	/// <summary>
	/// Returns or sets the name of an object.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getObjectName() const;
	ASPOSE_DLL_EXPORT void setObjectName(utility::string_t value);
	/// <summary>
	/// File data of embedded OLE object. 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getEmbeddedFileBase64Data() const;
	ASPOSE_DLL_EXPORT void setEmbeddedFileBase64Data(utility::string_t value);
	/// <summary>
	/// File extension for the current embedded OLE object
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getEmbeddedFileExtension() const;
	ASPOSE_DLL_EXPORT void setEmbeddedFileExtension(utility::string_t value);
	/// <summary>
	/// ProgID of an object.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getObjectProgId() const;
	ASPOSE_DLL_EXPORT void setObjectProgId(utility::string_t value);
	/// <summary>
	/// Full path to a linked file.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLinkPath() const;
	ASPOSE_DLL_EXPORT void setLinkPath(utility::string_t value);
	/// <summary>
	/// Determines if the linked embedded object is automatically updated when the presentation is opened or printed. Read/write Boolean.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isUpdateAutomatic() const;
	ASPOSE_DLL_EXPORT void setUpdateAutomatic(bool value);
	ASPOSE_DLL_EXPORT bool updateAutomaticIsSet() const;
	ASPOSE_DLL_EXPORT void unsetUpdateAutomatic();

protected:
	bool m_IsObjectIcon;
	utility::string_t m_SubstitutePictureTitle;
	std::shared_ptr<PictureFill> m_SubstitutePictureFormat;
	utility::string_t m_ObjectName;
	utility::string_t m_EmbeddedFileBase64Data;
	utility::string_t m_EmbeddedFileExtension;
	utility::string_t m_ObjectProgId;
	utility::string_t m_LinkPath;
	bool m_UpdateAutomatic;
	bool m_UpdateAutomaticIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_OleObjectFrame_H_ */
