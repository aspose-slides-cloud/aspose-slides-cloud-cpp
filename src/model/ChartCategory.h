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
 * ChartCategory.h
 *
 * Represents chart category resource
 */

#ifndef _ChartCategory_H_
#define _ChartCategory_H_

#include "../ModelBase.h"

#include "../model/EffectFormat.h"
#include "../model/ChartCategory.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents chart category resource
/// </summary>
class  ChartCategory : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ChartCategory();
	ASPOSE_DLL_EXPORT virtual ~ChartCategory();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets the categories for chart data
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<ChartCategory>> getCategories() const;
	ASPOSE_DLL_EXPORT void setCategories(std::vector<std::shared_ptr<ChartCategory>> value);
	/// <summary>
	/// Category value
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getValue() const;
	ASPOSE_DLL_EXPORT void setValue(utility::string_t value);
	/// <summary>
	/// Get or sets the fill format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FillFormat> getFillFormat() const;
	ASPOSE_DLL_EXPORT void setFillFormat(std::shared_ptr<FillFormat> value);
	/// <summary>
	/// Get or sets the effect format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<EffectFormat> getEffectFormat() const;
	ASPOSE_DLL_EXPORT void setEffectFormat(std::shared_ptr<EffectFormat> value);
	/// <summary>
	/// Get or sets the line format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LineFormat> getLineFormat() const;
	ASPOSE_DLL_EXPORT void setLineFormat(std::shared_ptr<LineFormat> value);

protected:
	std::vector<std::shared_ptr<ChartCategory>> m_Categories;
	utility::string_t m_Value;
	std::shared_ptr<FillFormat> m_FillFormat;
	std::shared_ptr<EffectFormat> m_EffectFormat;
	std::shared_ptr<LineFormat> m_LineFormat;
};

}
}

#endif /* _ChartCategory_H_ */
