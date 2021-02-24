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
 * LineFormat.h
 *
 * Line format.
 */

#ifndef _LineFormat_H_
#define _LineFormat_H_

#include "../ModelBase.h"

#include "../model/CustomDashPattern.h"
#include <cpprest/details/basic_types.h>
#include "../model/ArrowHeadProperties.h"
#include "../model/FillFormat.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Line format.
/// </summary>
class  LineFormat : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT LineFormat();
	ASPOSE_DLL_EXPORT virtual ~LineFormat();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Alignment.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAlignment() const;
	ASPOSE_DLL_EXPORT void setAlignment(utility::string_t value);
	/// <summary>
	/// Cap style.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCapStyle() const;
	ASPOSE_DLL_EXPORT void setCapStyle(utility::string_t value);
	/// <summary>
	/// Dash style.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDashStyle() const;
	ASPOSE_DLL_EXPORT void setDashStyle(utility::string_t value);
	/// <summary>
	/// Join style.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getJoinStyle() const;
	ASPOSE_DLL_EXPORT void setJoinStyle(utility::string_t value);
	/// <summary>
	/// Style.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getStyle() const;
	ASPOSE_DLL_EXPORT void setStyle(utility::string_t value);
	/// <summary>
	/// Sketch type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSketchType() const;
	ASPOSE_DLL_EXPORT void setSketchType(utility::string_t value);
	/// <summary>
	/// Begin arrowhead.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ArrowHeadProperties> getBeginArrowHead() const;
	ASPOSE_DLL_EXPORT void setBeginArrowHead(std::shared_ptr<ArrowHeadProperties> value);
	/// <summary>
	/// End arrowhead.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ArrowHeadProperties> getEndArrowHead() const;
	ASPOSE_DLL_EXPORT void setEndArrowHead(std::shared_ptr<ArrowHeadProperties> value);
	/// <summary>
	/// Custom dash pattern.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<CustomDashPattern> getCustomDashPattern() const;
	ASPOSE_DLL_EXPORT void setCustomDashPattern(std::shared_ptr<CustomDashPattern> value);
	/// <summary>
	/// Fill format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FillFormat> getFillFormat() const;
	ASPOSE_DLL_EXPORT void setFillFormat(std::shared_ptr<FillFormat> value);
	/// <summary>
	/// Miter limit.
	/// </summary>
	ASPOSE_DLL_EXPORT double getMiterLimit() const;
	ASPOSE_DLL_EXPORT void setMiterLimit(double value);
	ASPOSE_DLL_EXPORT bool miterLimitIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMiterLimit();
	/// <summary>
	/// Width.
	/// </summary>
	ASPOSE_DLL_EXPORT double getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(double value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();

protected:
	utility::string_t m_Alignment;
	utility::string_t m_CapStyle;
	utility::string_t m_DashStyle;
	utility::string_t m_JoinStyle;
	utility::string_t m_Style;
	utility::string_t m_SketchType;
	std::shared_ptr<ArrowHeadProperties> m_BeginArrowHead;
	std::shared_ptr<ArrowHeadProperties> m_EndArrowHead;
	std::shared_ptr<CustomDashPattern> m_CustomDashPattern;
	std::shared_ptr<FillFormat> m_FillFormat;
	double m_MiterLimit;
	bool m_MiterLimitIsSet;
	double m_Width;
	bool m_WidthIsSet;
};

}
}

#endif /* _LineFormat_H_ */
