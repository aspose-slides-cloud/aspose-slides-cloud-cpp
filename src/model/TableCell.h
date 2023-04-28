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
 * TableCell.h
 *
 * Represents one cell of table.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_TableCell_H_
#define ASPOSESLIDESCLOUD_MODEL_TableCell_H_

#include "../ModelBase.h"

#include "../model/TextFrameFormat.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ResourceUri.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents one cell of table.
/// </summary>
class  TableCell : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT TableCell();
	ASPOSE_DLL_EXPORT virtual ~TableCell();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Cell text.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getText() const;
	ASPOSE_DLL_EXPORT void setText(utility::string_t value);
	/// <summary>
	/// The number of rows spanned by a merged cell.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getRowSpan() const;
	ASPOSE_DLL_EXPORT void setRowSpan(int32_t value);
	ASPOSE_DLL_EXPORT bool rowSpanIsSet() const;
	ASPOSE_DLL_EXPORT void unsetRowSpan();
	/// <summary>
	/// The number of columns spanned by a merged cell.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getColSpan() const;
	ASPOSE_DLL_EXPORT void setColSpan(int32_t value);
	ASPOSE_DLL_EXPORT bool colSpanIsSet() const;
	ASPOSE_DLL_EXPORT void unsetColSpan();
	/// <summary>
	/// The top margin of the cell.
	/// </summary>
	ASPOSE_DLL_EXPORT double getMarginTop() const;
	ASPOSE_DLL_EXPORT void setMarginTop(double value);
	ASPOSE_DLL_EXPORT bool marginTopIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMarginTop();
	/// <summary>
	/// The right margin of the cell.
	/// </summary>
	ASPOSE_DLL_EXPORT double getMarginRight() const;
	ASPOSE_DLL_EXPORT void setMarginRight(double value);
	ASPOSE_DLL_EXPORT bool marginRightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMarginRight();
	/// <summary>
	/// The left margin of the cell.
	/// </summary>
	ASPOSE_DLL_EXPORT double getMarginLeft() const;
	ASPOSE_DLL_EXPORT void setMarginLeft(double value);
	ASPOSE_DLL_EXPORT bool marginLeftIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMarginLeft();
	/// <summary>
	/// The bottom margin of the cell.
	/// </summary>
	ASPOSE_DLL_EXPORT double getMarginBottom() const;
	ASPOSE_DLL_EXPORT void setMarginBottom(double value);
	ASPOSE_DLL_EXPORT bool marginBottomIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMarginBottom();
	/// <summary>
	/// Text anchor type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTextAnchorType() const;
	ASPOSE_DLL_EXPORT void setTextAnchorType(utility::string_t value);
	/// <summary>
	/// The type of vertical text.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTextVerticalType() const;
	ASPOSE_DLL_EXPORT void setTextVerticalType(utility::string_t value);
	/// <summary>
	/// Fill properties set of the cell.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FillFormat> getFillFormat() const;
	ASPOSE_DLL_EXPORT void setFillFormat(std::shared_ptr<FillFormat> value);
	/// <summary>
	/// Line properties set for the top border of the cell.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LineFormat> getBorderTop() const;
	ASPOSE_DLL_EXPORT void setBorderTop(std::shared_ptr<LineFormat> value);
	/// <summary>
	/// Line properties set for the right border of the cell.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LineFormat> getBorderRight() const;
	ASPOSE_DLL_EXPORT void setBorderRight(std::shared_ptr<LineFormat> value);
	/// <summary>
	/// Line properties set for the left border of the cell.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LineFormat> getBorderLeft() const;
	ASPOSE_DLL_EXPORT void setBorderLeft(std::shared_ptr<LineFormat> value);
	/// <summary>
	/// Line properties set for the bottom border of the cell.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LineFormat> getBorderBottom() const;
	ASPOSE_DLL_EXPORT void setBorderBottom(std::shared_ptr<LineFormat> value);
	/// <summary>
	/// Line properties set for the diagonal up border of the cell.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LineFormat> getBorderDiagonalUp() const;
	ASPOSE_DLL_EXPORT void setBorderDiagonalUp(std::shared_ptr<LineFormat> value);
	/// <summary>
	/// Line properties set for the diagonal down border of the cell.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LineFormat> getBorderDiagonalDown() const;
	ASPOSE_DLL_EXPORT void setBorderDiagonalDown(std::shared_ptr<LineFormat> value);
	/// <summary>
	/// Cell column index
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getColumnIndex() const;
	ASPOSE_DLL_EXPORT void setColumnIndex(int32_t value);
	ASPOSE_DLL_EXPORT bool columnIndexIsSet() const;
	ASPOSE_DLL_EXPORT void unsetColumnIndex();
	/// <summary>
	/// Cell row index
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getRowIndex() const;
	ASPOSE_DLL_EXPORT void setRowIndex(int32_t value);
	ASPOSE_DLL_EXPORT bool rowIndexIsSet() const;
	ASPOSE_DLL_EXPORT void unsetRowIndex();
	/// <summary>
	/// Returns TextFrame&#39;s formatting properties.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<TextFrameFormat> getTextFrameFormat() const;
	ASPOSE_DLL_EXPORT void setTextFrameFormat(std::shared_ptr<TextFrameFormat> value);
	/// <summary>
	/// Get or sets list to paragraphs list
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getParagraphs() const;
	ASPOSE_DLL_EXPORT void setParagraphs(std::shared_ptr<ResourceUri> value);

protected:
	utility::string_t m_Text;
	int32_t m_RowSpan;
	bool m_RowSpanIsSet;
	int32_t m_ColSpan;
	bool m_ColSpanIsSet;
	double m_MarginTop;
	bool m_MarginTopIsSet;
	double m_MarginRight;
	bool m_MarginRightIsSet;
	double m_MarginLeft;
	bool m_MarginLeftIsSet;
	double m_MarginBottom;
	bool m_MarginBottomIsSet;
	utility::string_t m_TextAnchorType;
	utility::string_t m_TextVerticalType;
	std::shared_ptr<FillFormat> m_FillFormat;
	std::shared_ptr<LineFormat> m_BorderTop;
	std::shared_ptr<LineFormat> m_BorderRight;
	std::shared_ptr<LineFormat> m_BorderLeft;
	std::shared_ptr<LineFormat> m_BorderBottom;
	std::shared_ptr<LineFormat> m_BorderDiagonalUp;
	std::shared_ptr<LineFormat> m_BorderDiagonalDown;
	int32_t m_ColumnIndex;
	bool m_ColumnIndexIsSet;
	int32_t m_RowIndex;
	bool m_RowIndexIsSet;
	std::shared_ptr<TextFrameFormat> m_TextFrameFormat;
	std::shared_ptr<ResourceUri> m_Paragraphs;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_TableCell_H_ */
