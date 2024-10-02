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
 * TableRow.h
 *
 * Table Row.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_TableRow_H_
#define ASPOSESLIDESCLOUD_MODEL_TableRow_H_

#include "../ModelBase.h"

#include "../model/TableCell.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Table Row.
/// </summary>
class  TableRow : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT TableRow();
	ASPOSE_DLL_EXPORT virtual ~TableRow();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Cells for the row.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<TableCell>> getCells() const;
	ASPOSE_DLL_EXPORT void setCells(std::vector<std::shared_ptr<TableCell>> value);
	/// <summary>
	/// Minimal height of the row.
	/// </summary>
	ASPOSE_DLL_EXPORT double getMinimalHeight() const;
	ASPOSE_DLL_EXPORT void setMinimalHeight(double value);
	ASPOSE_DLL_EXPORT bool minimalHeightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMinimalHeight();
	/// <summary>
	/// Height of the row.
	/// </summary>
	ASPOSE_DLL_EXPORT double getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(double value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();

protected:
	std::vector<std::shared_ptr<TableCell>> m_Cells;
	double m_MinimalHeight;
	bool m_MinimalHeightIsSet;
	double m_Height;
	bool m_HeightIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_TableRow_H_ */
