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
 * GroupingCharacterElement.h
 *
 * Specifies a grouping symbol above or below an expression, usually to highlight the relationship between elements 
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_GroupingCharacterElement_H_
#define ASPOSESLIDESCLOUD_MODEL_GroupingCharacterElement_H_

#include "MathElement.h"

#include "../model/MathElement.h"
#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Specifies a grouping symbol above or below an expression, usually to highlight the relationship between elements 
/// </summary>
class  GroupingCharacterElement : public MathElement
{
public:
	ASPOSE_DLL_EXPORT GroupingCharacterElement();
	ASPOSE_DLL_EXPORT virtual ~GroupingCharacterElement();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Base
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getBase() const;
	ASPOSE_DLL_EXPORT void setBase(std::shared_ptr<MathElement> value);
	/// <summary>
	/// Grouping character
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCharacter() const;
	ASPOSE_DLL_EXPORT void setCharacter(utility::string_t value);
	/// <summary>
	/// Position of grouping character.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(utility::string_t value);
	/// <summary>
	/// Vertical justification of group character.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getVerticalJustification() const;
	ASPOSE_DLL_EXPORT void setVerticalJustification(utility::string_t value);

protected:
	std::shared_ptr<MathElement> m_Base;
	utility::string_t m_Character;
	utility::string_t m_Position;
	utility::string_t m_VerticalJustification;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_GroupingCharacterElement_H_ */
