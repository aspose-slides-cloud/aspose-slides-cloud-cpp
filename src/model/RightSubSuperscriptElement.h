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
 * RightSubSuperscriptElement.h
 *
 * Specifies the Sub-Superscript object
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_RightSubSuperscriptElement_H_
#define ASPOSESLIDESCLOUD_MODEL_RightSubSuperscriptElement_H_

#include "MathElement.h"

#include "../model/MathElement.h"
#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Specifies the Sub-Superscript object
/// </summary>
class  RightSubSuperscriptElement : public MathElement
{
public:
	ASPOSE_DLL_EXPORT RightSubSuperscriptElement();
	ASPOSE_DLL_EXPORT virtual ~RightSubSuperscriptElement();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Base argument
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getBase() const;
	ASPOSE_DLL_EXPORT void setBase(std::shared_ptr<MathElement> value);
	/// <summary>
	/// Subscript
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getSubscript() const;
	ASPOSE_DLL_EXPORT void setSubscript(std::shared_ptr<MathElement> value);
	/// <summary>
	/// Superscript
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getSuperscript() const;
	ASPOSE_DLL_EXPORT void setSuperscript(std::shared_ptr<MathElement> value);
	/// <summary>
	/// Alignment of subscript/superscript.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isAlignScripts() const;
	ASPOSE_DLL_EXPORT void setAlignScripts(bool value);
	ASPOSE_DLL_EXPORT bool alignScriptsIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAlignScripts();

protected:
	std::shared_ptr<MathElement> m_Base;
	std::shared_ptr<MathElement> m_Subscript;
	std::shared_ptr<MathElement> m_Superscript;
	bool m_AlignScripts;
	bool m_AlignScriptsIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_RightSubSuperscriptElement_H_ */
