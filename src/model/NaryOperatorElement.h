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
 * NaryOperatorElement.h
 *
 * Specifies an N-ary mathematical object, such as Summation and Integral.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_NaryOperatorElement_H_
#define ASPOSESLIDESCLOUD_MODEL_NaryOperatorElement_H_

#include "MathElement.h"

#include "../model/MathElement.h"
#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Specifies an N-ary mathematical object, such as Summation and Integral.
/// </summary>
class  NaryOperatorElement : public MathElement
{
public:
	ASPOSE_DLL_EXPORT NaryOperatorElement();
	ASPOSE_DLL_EXPORT virtual ~NaryOperatorElement();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Base argument
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getBase() const;
	ASPOSE_DLL_EXPORT void setBase(std::shared_ptr<MathElement> value);
	/// <summary>
	/// Subscript argument
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getSubscript() const;
	ASPOSE_DLL_EXPORT void setSubscript(std::shared_ptr<MathElement> value);
	/// <summary>
	/// Superscript argument
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getSuperscript() const;
	ASPOSE_DLL_EXPORT void setSuperscript(std::shared_ptr<MathElement> value);
	/// <summary>
	/// Nary Operator Character
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getOperator() const;
	ASPOSE_DLL_EXPORT void setOperator(utility::string_t value);
	/// <summary>
	/// The location of limits (subscript and superscript)
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLimitLocation() const;
	ASPOSE_DLL_EXPORT void setLimitLocation(utility::string_t value);
	/// <summary>
	/// Operator Character grows vertically to match its operand height
	/// </summary>
	ASPOSE_DLL_EXPORT bool isGrowToMatchOperandHeight() const;
	ASPOSE_DLL_EXPORT void setGrowToMatchOperandHeight(bool value);
	ASPOSE_DLL_EXPORT bool growToMatchOperandHeightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetGrowToMatchOperandHeight();
	/// <summary>
	/// Hide Subscript
	/// </summary>
	ASPOSE_DLL_EXPORT bool isHideSubscript() const;
	ASPOSE_DLL_EXPORT void setHideSubscript(bool value);
	ASPOSE_DLL_EXPORT bool hideSubscriptIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHideSubscript();
	/// <summary>
	/// Hide Superscript
	/// </summary>
	ASPOSE_DLL_EXPORT bool isHideSuperscript() const;
	ASPOSE_DLL_EXPORT void setHideSuperscript(bool value);
	ASPOSE_DLL_EXPORT bool hideSuperscriptIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHideSuperscript();

protected:
	std::shared_ptr<MathElement> m_Base;
	std::shared_ptr<MathElement> m_Subscript;
	std::shared_ptr<MathElement> m_Superscript;
	utility::string_t m__Operator;
	utility::string_t m_LimitLocation;
	bool m_GrowToMatchOperandHeight;
	bool m_GrowToMatchOperandHeightIsSet;
	bool m_HideSubscript;
	bool m_HideSubscriptIsSet;
	bool m_HideSuperscript;
	bool m_HideSuperscriptIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_NaryOperatorElement_H_ */
