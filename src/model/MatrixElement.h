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
 * MatrixElement.h
 *
 * Specifies the Matrix object,
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_MatrixElement_H_
#define ASPOSESLIDESCLOUD_MODEL_MatrixElement_H_

#include "MathElement.h"

#include "../model/MathElement.h"
#include <cpprest/details/basic_types.h>
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Specifies the Matrix object,
/// </summary>
class  MatrixElement : public MathElement
{
public:
	ASPOSE_DLL_EXPORT MatrixElement();
	ASPOSE_DLL_EXPORT virtual ~MatrixElement();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Hide the placeholders for empty matrix elements
	/// </summary>
	ASPOSE_DLL_EXPORT bool isHidePlaceholders() const;
	ASPOSE_DLL_EXPORT void setHidePlaceholders(bool value);
	ASPOSE_DLL_EXPORT bool hidePlaceholdersIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHidePlaceholders();
	/// <summary>
	/// Specifies the vertical justification respect to surrounding text. 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getBaseJustification() const;
	ASPOSE_DLL_EXPORT void setBaseJustification(utility::string_t value);
	/// <summary>
	/// Minimum column width in twips (1/20th of a point)
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getMinColumnWidth() const;
	ASPOSE_DLL_EXPORT void setMinColumnWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool minColumnWidthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMinColumnWidth();
	/// <summary>
	/// The type of horizontal spacing between columns of a matrix.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getColumnGapRule() const;
	ASPOSE_DLL_EXPORT void setColumnGapRule(utility::string_t value);
	/// <summary>
	/// The value of horizontal spacing between columns of a matrix
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getColumnGap() const;
	ASPOSE_DLL_EXPORT void setColumnGap(int32_t value);
	ASPOSE_DLL_EXPORT bool columnGapIsSet() const;
	ASPOSE_DLL_EXPORT void unsetColumnGap();
	/// <summary>
	/// The type of vertical spacing between rows of a matrix
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getRowGapRule() const;
	ASPOSE_DLL_EXPORT void setRowGapRule(utility::string_t value);
	/// <summary>
	/// The value of vertical spacing between rows of a matrix;             
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getRowGap() const;
	ASPOSE_DLL_EXPORT void setRowGap(int32_t value);
	ASPOSE_DLL_EXPORT bool rowGapIsSet() const;
	ASPOSE_DLL_EXPORT void unsetRowGap();
	/// <summary>
	/// Matrix items
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::vector<std::shared_ptr<MathElement>>> getItems() const;
	ASPOSE_DLL_EXPORT void setItems(std::vector<std::vector<std::shared_ptr<MathElement>>> value);

protected:
	bool m_HidePlaceholders;
	bool m_HidePlaceholdersIsSet;
	utility::string_t m_BaseJustification;
	int32_t m_MinColumnWidth;
	bool m_MinColumnWidthIsSet;
	utility::string_t m_ColumnGapRule;
	int32_t m_ColumnGap;
	bool m_ColumnGapIsSet;
	utility::string_t m_RowGapRule;
	int32_t m_RowGap;
	bool m_RowGapIsSet;
	std::vector<std::vector<std::shared_ptr<MathElement>>> m_Items;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_MatrixElement_H_ */
