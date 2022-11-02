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
 * DelimiterElement.h
 *
 * Delimiter element
 */

#ifndef _DelimiterElement_H_
#define _DelimiterElement_H_

#include "MathElement.h"

#include "../model/MathElement.h"
#include <cpprest/details/basic_types.h>
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Delimiter element
/// </summary>
class  DelimiterElement : public MathElement
{
public:
	ASPOSE_DLL_EXPORT DelimiterElement();
	ASPOSE_DLL_EXPORT virtual ~DelimiterElement();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Arguments
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<MathElement>> getArguments() const;
	ASPOSE_DLL_EXPORT void setArguments(std::vector<std::shared_ptr<MathElement>> value);
	/// <summary>
	/// Beginning character
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getBeginningCharacter() const;
	ASPOSE_DLL_EXPORT void setBeginningCharacter(utility::string_t value);
	/// <summary>
	/// Separator character
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSeparatorCharacter() const;
	ASPOSE_DLL_EXPORT void setSeparatorCharacter(utility::string_t value);
	/// <summary>
	/// Ending character
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getEndingCharacter() const;
	ASPOSE_DLL_EXPORT void setEndingCharacter(utility::string_t value);
	/// <summary>
	/// Grow to match operand height
	/// </summary>
	ASPOSE_DLL_EXPORT bool getGrowToMatchOperandHeight() const;
	ASPOSE_DLL_EXPORT void setGrowToMatchOperandHeight(bool value);
	ASPOSE_DLL_EXPORT bool growToMatchOperandHeightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetGrowToMatchOperandHeight();
	/// <summary>
	/// Delimiter shape
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDelimiterShape() const;
	ASPOSE_DLL_EXPORT void setDelimiterShape(utility::string_t value);

protected:
	std::vector<std::shared_ptr<MathElement>> m_Arguments;
	utility::string_t m_BeginningCharacter;
	utility::string_t m_SeparatorCharacter;
	utility::string_t m_EndingCharacter;
	bool m_GrowToMatchOperandHeight;
	bool m_GrowToMatchOperandHeightIsSet;
	utility::string_t m_DelimiterShape;
};

}
}

#endif /* _DelimiterElement_H_ */
