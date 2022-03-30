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
 * ChartLinesFormat.h
 *
 * Represents the lines format of chart elements. 
 */

#ifndef _ChartLinesFormat_H_
#define _ChartLinesFormat_H_

#include "../ModelBase.h"

#include "../model/EffectFormat.h"
#include "../model/LineFormat.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents the lines format of chart elements. 
/// </summary>
class  ChartLinesFormat : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ChartLinesFormat();
	ASPOSE_DLL_EXPORT virtual ~ChartLinesFormat();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

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
	std::shared_ptr<EffectFormat> m_EffectFormat;
	std::shared_ptr<LineFormat> m_LineFormat;
};

}
}

#endif /* _ChartLinesFormat_H_ */
