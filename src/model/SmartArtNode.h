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
 * SmartArtNode.h
 *
 * Smart art node.
 */

#ifndef _SmartArtNode_H_
#define _SmartArtNode_H_

#include "../ModelBase.h"

#include "../model/SmartArtNode.h"
#include <cpprest/details/basic_types.h>
#include "../model/ResourceUri.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Smart art node.
/// </summary>
class  SmartArtNode : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT SmartArtNode();
	ASPOSE_DLL_EXPORT virtual ~SmartArtNode();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Node list.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<SmartArtNode>> getNodes() const;
	ASPOSE_DLL_EXPORT void setNodes(std::vector<std::shared_ptr<SmartArtNode>> value);
	/// <summary>
	/// Gets or sets the link to shapes.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getShapes() const;
	ASPOSE_DLL_EXPORT void setShapes(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// True for and assistant node.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsAssistant() const;
	ASPOSE_DLL_EXPORT void setIsAssistant(bool value);
	/// <summary>
	/// Node text.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getText() const;
	ASPOSE_DLL_EXPORT void setText(utility::string_t value);
	/// <summary>
	/// Organization chart layout type associated with current node.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getOrgChartLayout() const;
	ASPOSE_DLL_EXPORT void setOrgChartLayout(utility::string_t value);
	/// <summary>
	/// Get or sets list to paragraphs list
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getParagraphs() const;
	ASPOSE_DLL_EXPORT void setParagraphs(std::shared_ptr<ResourceUri> value);

protected:
	std::vector<std::shared_ptr<SmartArtNode>> m_Nodes;
	std::shared_ptr<ResourceUri> m_Shapes;
	bool m_IsAssistant;
	utility::string_t m_Text;
	utility::string_t m_OrgChartLayout;
	std::shared_ptr<ResourceUri> m_Paragraphs;
};

}
}

#endif /* _SmartArtNode_H_ */
