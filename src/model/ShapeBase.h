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
 * ShapeBase.h
 *
 * Slide shape.
 */

#ifndef _ShapeBase_H_
#define _ShapeBase_H_

#include "ResourceBase.h"

#include "../model/Hyperlink.h"
#include "../model/EffectFormat.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include "../model/ThreeDFormat.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Slide shape.
/// </summary>
class  ShapeBase : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT ShapeBase();
	ASPOSE_DLL_EXPORT virtual ~ShapeBase();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets the name.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);
	/// <summary>
	/// Gets or sets the width.
	/// </summary>
	ASPOSE_DLL_EXPORT double getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(double value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();
	/// <summary>
	/// Gets or sets the height.
	/// </summary>
	ASPOSE_DLL_EXPORT double getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(double value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();
	/// <summary>
	/// Gets or sets the alternative text.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAlternativeText() const;
	ASPOSE_DLL_EXPORT void setAlternativeText(utility::string_t value);
	/// <summary>
	/// The title of alternative text associated with the shape.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAlternativeTextTitle() const;
	ASPOSE_DLL_EXPORT void setAlternativeTextTitle(utility::string_t value);
	/// <summary>
	/// Gets or sets a value indicating whether this ShapeBase is hidden.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getHidden() const;
	ASPOSE_DLL_EXPORT void setHidden(bool value);
	ASPOSE_DLL_EXPORT bool hiddenIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHidden();
	/// <summary>
	/// Gets or sets the X
	/// </summary>
	ASPOSE_DLL_EXPORT double getX() const;
	ASPOSE_DLL_EXPORT void setX(double value);
	ASPOSE_DLL_EXPORT bool XIsSet() const;
	ASPOSE_DLL_EXPORT void unsetX();
	/// <summary>
	/// Gets or sets the Y.
	/// </summary>
	ASPOSE_DLL_EXPORT double getY() const;
	ASPOSE_DLL_EXPORT void setY(double value);
	ASPOSE_DLL_EXPORT bool YIsSet() const;
	ASPOSE_DLL_EXPORT void unsetY();
	/// <summary>
	/// Gets z-order position of shape
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getZOrderPosition() const;
	ASPOSE_DLL_EXPORT void setZOrderPosition(int32_t value);
	/// <summary>
	/// Gets or sets the link to shapes.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getShapes() const;
	ASPOSE_DLL_EXPORT void setShapes(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Gets or sets the fill format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FillFormat> getFillFormat() const;
	ASPOSE_DLL_EXPORT void setFillFormat(std::shared_ptr<FillFormat> value);
	/// <summary>
	/// Gets or sets the effect format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<EffectFormat> getEffectFormat() const;
	ASPOSE_DLL_EXPORT void setEffectFormat(std::shared_ptr<EffectFormat> value);
	/// <summary>
	/// Gets or sets the 3D format
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ThreeDFormat> getThreeDFormat() const;
	ASPOSE_DLL_EXPORT void setThreeDFormat(std::shared_ptr<ThreeDFormat> value);
	/// <summary>
	/// Gets or sets the line format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LineFormat> getLineFormat() const;
	ASPOSE_DLL_EXPORT void setLineFormat(std::shared_ptr<LineFormat> value);
	/// <summary>
	/// Hyperlink defined for mouse click.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<Hyperlink> getHyperlinkClick() const;
	ASPOSE_DLL_EXPORT void setHyperlinkClick(std::shared_ptr<Hyperlink> value);
	/// <summary>
	/// Hyperlink defined for mouse over.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<Hyperlink> getHyperlinkMouseOver() const;
	ASPOSE_DLL_EXPORT void setHyperlinkMouseOver(std::shared_ptr<Hyperlink> value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getType() const;
	ASPOSE_DLL_EXPORT void setType(utility::string_t value);

protected:
	utility::string_t m_Name;
	double m_Width;
	bool m_WidthIsSet;
	double m_Height;
	bool m_HeightIsSet;
	utility::string_t m_AlternativeText;
	utility::string_t m_AlternativeTextTitle;
	bool m_Hidden;
	bool m_HiddenIsSet;
	double m_X;
	bool m_XIsSet;
	double m_Y;
	bool m_YIsSet;
	int32_t m_ZOrderPosition;
	std::shared_ptr<ResourceUri> m_Shapes;
	std::shared_ptr<FillFormat> m_FillFormat;
	std::shared_ptr<EffectFormat> m_EffectFormat;
	std::shared_ptr<ThreeDFormat> m_ThreeDFormat;
	std::shared_ptr<LineFormat> m_LineFormat;
	std::shared_ptr<Hyperlink> m_HyperlinkClick;
	std::shared_ptr<Hyperlink> m_HyperlinkMouseOver;
	utility::string_t m_Type;
};

}
}

#endif /* _ShapeBase_H_ */
