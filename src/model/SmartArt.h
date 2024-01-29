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
 * SmartArt.h
 *
 * Represents SmartArt shape resource.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_SmartArt_H_
#define ASPOSESLIDESCLOUD_MODEL_SmartArt_H_

#include "ShapeBase.h"

#include "../model/Hyperlink.h"
#include "../model/SmartArtNode.h"
#include "../model/EffectFormat.h"
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
/// Represents SmartArt shape resource.
/// </summary>
class  SmartArt : public ShapeBase
{
public:
	ASPOSE_DLL_EXPORT SmartArt();
	ASPOSE_DLL_EXPORT virtual ~SmartArt();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Layout type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLayout() const;
	ASPOSE_DLL_EXPORT void setLayout(utility::string_t value);
	/// <summary>
	/// Quick style.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getQuickStyle() const;
	ASPOSE_DLL_EXPORT void setQuickStyle(utility::string_t value);
	/// <summary>
	/// Color style.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getColorStyle() const;
	ASPOSE_DLL_EXPORT void setColorStyle(utility::string_t value);
	/// <summary>
	/// Collection of nodes in SmartArt object.             
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<SmartArtNode>> getNodes() const;
	ASPOSE_DLL_EXPORT void setNodes(std::vector<std::shared_ptr<SmartArtNode>> value);
	/// <summary>
	/// The state of the SmartArt diagram with regard to (left-to-right) LTR or (right-to-left) RTL, if the diagram supports reversal.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsReversed() const;
	ASPOSE_DLL_EXPORT void setIsReversed(bool value);

protected:
	utility::string_t m_Layout;
	utility::string_t m_QuickStyle;
	utility::string_t m_ColorStyle;
	std::vector<std::shared_ptr<SmartArtNode>> m_Nodes;
	bool m_IsReversed;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_SmartArt_H_ */
