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
 * Table.h
 *
 * Represents Table shape resource.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_Table_H_
#define ASPOSESLIDESCLOUD_MODEL_Table_H_

#include "ShapeBase.h"

#include "../model/TableColumn.h"
#include "../model/TableRow.h"
#include "../model/Hyperlink.h"
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
/// Represents Table shape resource.
/// </summary>
class  Table : public ShapeBase
{
public:
	ASPOSE_DLL_EXPORT Table();
	ASPOSE_DLL_EXPORT virtual ~Table();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Builtin table style.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getStyle() const;
	ASPOSE_DLL_EXPORT void setStyle(utility::string_t value);
	/// <summary>
	/// Rows.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<TableRow>> getRows() const;
	ASPOSE_DLL_EXPORT void setRows(std::vector<std::shared_ptr<TableRow>> value);
	/// <summary>
	/// Columns.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<TableColumn>> getColumns() const;
	ASPOSE_DLL_EXPORT void setColumns(std::vector<std::shared_ptr<TableColumn>> value);
	/// <summary>
	/// Determines whether the first column of a table has to be drawn with a special formatting.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isFirstCol() const;
	ASPOSE_DLL_EXPORT void setFirstCol(bool value);
	ASPOSE_DLL_EXPORT bool firstColIsSet() const;
	ASPOSE_DLL_EXPORT void unsetFirstCol();
	/// <summary>
	/// Determines whether the first row of a table has to be drawn with a special formatting.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isFirstRow() const;
	ASPOSE_DLL_EXPORT void setFirstRow(bool value);
	ASPOSE_DLL_EXPORT bool firstRowIsSet() const;
	ASPOSE_DLL_EXPORT void unsetFirstRow();
	/// <summary>
	/// Determines whether the even rows has to be drawn with a different formatting.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isHorizontalBanding() const;
	ASPOSE_DLL_EXPORT void setHorizontalBanding(bool value);
	ASPOSE_DLL_EXPORT bool horizontalBandingIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHorizontalBanding();
	/// <summary>
	/// Determines whether the last column of a table has to be drawn with a special formatting.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isLastCol() const;
	ASPOSE_DLL_EXPORT void setLastCol(bool value);
	ASPOSE_DLL_EXPORT bool lastColIsSet() const;
	ASPOSE_DLL_EXPORT void unsetLastCol();
	/// <summary>
	/// Determines whether the last row of a table has to be drawn with a special formatting.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isLastRow() const;
	ASPOSE_DLL_EXPORT void setLastRow(bool value);
	ASPOSE_DLL_EXPORT bool lastRowIsSet() const;
	ASPOSE_DLL_EXPORT void unsetLastRow();
	/// <summary>
	/// Determines whether the table has right to left reading order.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isRightToLeft() const;
	ASPOSE_DLL_EXPORT void setRightToLeft(bool value);
	ASPOSE_DLL_EXPORT bool rightToLeftIsSet() const;
	ASPOSE_DLL_EXPORT void unsetRightToLeft();
	/// <summary>
	/// Determines whether the even columns has to be drawn with a different formatting.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isVerticalBanding() const;
	ASPOSE_DLL_EXPORT void setVerticalBanding(bool value);
	ASPOSE_DLL_EXPORT bool verticalBandingIsSet() const;
	ASPOSE_DLL_EXPORT void unsetVerticalBanding();

protected:
	utility::string_t m_Style;
	std::vector<std::shared_ptr<TableRow>> m_Rows;
	std::vector<std::shared_ptr<TableColumn>> m_Columns;
	bool m_FirstCol;
	bool m_FirstColIsSet;
	bool m_FirstRow;
	bool m_FirstRowIsSet;
	bool m_HorizontalBanding;
	bool m_HorizontalBandingIsSet;
	bool m_LastCol;
	bool m_LastColIsSet;
	bool m_LastRow;
	bool m_LastRowIsSet;
	bool m_RightToLeft;
	bool m_RightToLeftIsSet;
	bool m_VerticalBanding;
	bool m_VerticalBandingIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_Table_H_ */
