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
 * Workbook.h
 *
 * Represents Excel spreadsheet data source.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_Workbook_H_
#define ASPOSESLIDESCLOUD_MODEL_Workbook_H_

#include "DataSource.h"

#include <cpprest/details/basic_types.h>
#include "../model/DataSource.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents Excel spreadsheet data source.
/// </summary>
class  Workbook : public DataSource
{
public:
	ASPOSE_DLL_EXPORT Workbook();
	ASPOSE_DLL_EXPORT virtual ~Workbook();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Worksheet index.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getWorksheetIndex() const;
	ASPOSE_DLL_EXPORT void setWorksheetIndex(int32_t value);
	/// <summary>
	/// Column index of the first value.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getColumnIndex() const;
	ASPOSE_DLL_EXPORT void setColumnIndex(int32_t value);
	/// <summary>
	/// Row index of the first value.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getRowIndex() const;
	ASPOSE_DLL_EXPORT void setRowIndex(int32_t value);

protected:
	int32_t m_WorksheetIndex;
	int32_t m_ColumnIndex;
	int32_t m_RowIndex;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_Workbook_H_ */
