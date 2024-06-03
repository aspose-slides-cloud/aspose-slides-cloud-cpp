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
 * ChartTitle.h
 *
 * Represents chart title
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_ChartTitle_H_
#define ASPOSESLIDESCLOUD_MODEL_ChartTitle_H_

#include "../ModelBase.h"

#include "../model/EffectFormat.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents chart title
/// </summary>
class  ChartTitle : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ChartTitle();
	ASPOSE_DLL_EXPORT virtual ~ChartTitle();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Get or sets the text.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getText() const;
	ASPOSE_DLL_EXPORT void setText(utility::string_t value);
	/// <summary>
	/// the X location
	/// </summary>
	ASPOSE_DLL_EXPORT double getX() const;
	ASPOSE_DLL_EXPORT void setX(double value);
	ASPOSE_DLL_EXPORT bool XIsSet() const;
	ASPOSE_DLL_EXPORT void unsetX();
	/// <summary>
	/// the Y location
	/// </summary>
	ASPOSE_DLL_EXPORT double getY() const;
	ASPOSE_DLL_EXPORT void setY(double value);
	ASPOSE_DLL_EXPORT bool YIsSet() const;
	ASPOSE_DLL_EXPORT void unsetY();
	/// <summary>
	/// Width
	/// </summary>
	ASPOSE_DLL_EXPORT double getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(double value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();
	/// <summary>
	/// Height
	/// </summary>
	ASPOSE_DLL_EXPORT double getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(double value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();
	/// <summary>
	/// true if other elements are allowed to overlay the legend
	/// </summary>
	ASPOSE_DLL_EXPORT bool isOverlay() const;
	ASPOSE_DLL_EXPORT void setOverlay(bool value);
	ASPOSE_DLL_EXPORT bool overlayIsSet() const;
	ASPOSE_DLL_EXPORT void unsetOverlay();
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
	utility::string_t m_Text;
	double m_X;
	bool m_XIsSet;
	double m_Y;
	bool m_YIsSet;
	double m_Width;
	bool m_WidthIsSet;
	double m_Height;
	bool m_HeightIsSet;
	bool m_Overlay;
	bool m_OverlayIsSet;
	std::shared_ptr<FillFormat> m_FillFormat;
	std::shared_ptr<EffectFormat> m_EffectFormat;
	std::shared_ptr<LineFormat> m_LineFormat;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_ChartTitle_H_ */
