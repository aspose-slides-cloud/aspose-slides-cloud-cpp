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
 * ArrayElement.h
 *
 * An array of elements.
 */

#ifndef _ArrayElement_H_
#define _ArrayElement_H_

#include "MathElement.h"

#include "../model/MathElement.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// An array of elements.
/// </summary>
class  ArrayElement : public MathElement
{
public:
	ASPOSE_DLL_EXPORT ArrayElement();
	ASPOSE_DLL_EXPORT virtual ~ArrayElement();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Arguments
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<MathElement>> getArguments() const;
	ASPOSE_DLL_EXPORT void setArguments(std::vector<std::shared_ptr<MathElement>> value);
	/// <summary>
	/// Specifies alignment of the array relative to surrounding text
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getBaseJustification() const;
	ASPOSE_DLL_EXPORT void setBaseJustification(utility::string_t value);
	/// <summary>
	/// Maximum Distribution
	/// </summary>
	ASPOSE_DLL_EXPORT bool getMaximumDistribution() const;
	ASPOSE_DLL_EXPORT void setMaximumDistribution(bool value);
	ASPOSE_DLL_EXPORT bool maximumDistributionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMaximumDistribution();
	/// <summary>
	/// Object Distribution
	/// </summary>
	ASPOSE_DLL_EXPORT bool getObjectDistribution() const;
	ASPOSE_DLL_EXPORT void setObjectDistribution(bool value);
	ASPOSE_DLL_EXPORT bool objectDistributionIsSet() const;
	ASPOSE_DLL_EXPORT void unsetObjectDistribution();
	/// <summary>
	/// The type of vertical spacing between array elements
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getRowSpacingRule() const;
	ASPOSE_DLL_EXPORT void setRowSpacingRule(utility::string_t value);
	/// <summary>
	/// Spacing between rows of an array
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getRowSpacing() const;
	ASPOSE_DLL_EXPORT void setRowSpacing(int32_t value);
	ASPOSE_DLL_EXPORT bool rowSpacingIsSet() const;
	ASPOSE_DLL_EXPORT void unsetRowSpacing();

protected:
	std::vector<std::shared_ptr<MathElement>> m_Arguments;
	utility::string_t m_BaseJustification;
	bool m_MaximumDistribution;
	bool m_MaximumDistributionIsSet;
	bool m_ObjectDistribution;
	bool m_ObjectDistributionIsSet;
	utility::string_t m_RowSpacingRule;
	int32_t m_RowSpacing;
	bool m_RowSpacingIsSet;
};

}
}

#endif /* _ArrayElement_H_ */
