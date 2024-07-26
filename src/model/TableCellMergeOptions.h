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
 * TableCellMergeOptions.h
 *
 * Table cells merge options
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_TableCellMergeOptions_H_
#define ASPOSESLIDESCLOUD_MODEL_TableCellMergeOptions_H_

#include "../ModelBase.h"


#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Table cells merge options
/// </summary>
class  TableCellMergeOptions : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT TableCellMergeOptions();
	ASPOSE_DLL_EXPORT virtual ~TableCellMergeOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Row index of the first cell
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getFirstRowIndex() const;
	ASPOSE_DLL_EXPORT void setFirstRowIndex(int32_t value);
	/// <summary>
	/// First cell index in the row
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getFirstCellIndex() const;
	ASPOSE_DLL_EXPORT void setFirstCellIndex(int32_t value);
	/// <summary>
	/// Row index of the last cell
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getLastRowIndex() const;
	ASPOSE_DLL_EXPORT void setLastRowIndex(int32_t value);
	/// <summary>
	/// Last cell index in the row
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getLastCellIndex() const;
	ASPOSE_DLL_EXPORT void setLastCellIndex(int32_t value);
	/// <summary>
	/// Allow splitting
	/// </summary>
	ASPOSE_DLL_EXPORT bool isAllowSplitting() const;
	ASPOSE_DLL_EXPORT void setAllowSplitting(bool value);
	ASPOSE_DLL_EXPORT bool allowSplittingIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAllowSplitting();

protected:
	int32_t m_FirstRowIndex;
	int32_t m_FirstCellIndex;
	int32_t m_LastRowIndex;
	int32_t m_LastCellIndex;
	bool m_AllowSplitting;
	bool m_AllowSplittingIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_TableCellMergeOptions_H_ */
