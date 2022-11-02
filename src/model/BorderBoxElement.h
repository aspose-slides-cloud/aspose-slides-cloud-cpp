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
 * BorderBoxElement.h
 *
 * Rectangular or some other border around the MathElement. 
 */

#ifndef _BorderBoxElement_H_
#define _BorderBoxElement_H_

#include "MathElement.h"

#include "../model/MathElement.h"
#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Rectangular or some other border around the MathElement. 
/// </summary>
class  BorderBoxElement : public MathElement
{
public:
	ASPOSE_DLL_EXPORT BorderBoxElement();
	ASPOSE_DLL_EXPORT virtual ~BorderBoxElement();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Base
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getBase() const;
	ASPOSE_DLL_EXPORT void setBase(std::shared_ptr<MathElement> value);
	/// <summary>
	/// Hide Top Edge
	/// </summary>
	ASPOSE_DLL_EXPORT bool getHideTop() const;
	ASPOSE_DLL_EXPORT void setHideTop(bool value);
	ASPOSE_DLL_EXPORT bool hideTopIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHideTop();
	/// <summary>
	/// Hide Bottom Edge
	/// </summary>
	ASPOSE_DLL_EXPORT bool getHideBottom() const;
	ASPOSE_DLL_EXPORT void setHideBottom(bool value);
	ASPOSE_DLL_EXPORT bool hideBottomIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHideBottom();
	/// <summary>
	/// Hide Left Edge
	/// </summary>
	ASPOSE_DLL_EXPORT bool getHideLeft() const;
	ASPOSE_DLL_EXPORT void setHideLeft(bool value);
	ASPOSE_DLL_EXPORT bool hideLeftIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHideLeft();
	/// <summary>
	/// Hide Right Edge
	/// </summary>
	ASPOSE_DLL_EXPORT bool getHideRight() const;
	ASPOSE_DLL_EXPORT void setHideRight(bool value);
	ASPOSE_DLL_EXPORT bool hideRightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHideRight();
	/// <summary>
	/// Strikethrough Horizontal
	/// </summary>
	ASPOSE_DLL_EXPORT bool getStrikethroughHorizontal() const;
	ASPOSE_DLL_EXPORT void setStrikethroughHorizontal(bool value);
	ASPOSE_DLL_EXPORT bool strikethroughHorizontalIsSet() const;
	ASPOSE_DLL_EXPORT void unsetStrikethroughHorizontal();
	/// <summary>
	/// Strikethrough Vertical
	/// </summary>
	ASPOSE_DLL_EXPORT bool getStrikethroughVertical() const;
	ASPOSE_DLL_EXPORT void setStrikethroughVertical(bool value);
	ASPOSE_DLL_EXPORT bool strikethroughVerticalIsSet() const;
	ASPOSE_DLL_EXPORT void unsetStrikethroughVertical();
	/// <summary>
	/// Strikethrough Bottom-Left to Top-Right
	/// </summary>
	ASPOSE_DLL_EXPORT bool getStrikethroughBottomLeftToTopRight() const;
	ASPOSE_DLL_EXPORT void setStrikethroughBottomLeftToTopRight(bool value);
	ASPOSE_DLL_EXPORT bool strikethroughBottomLeftToTopRightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetStrikethroughBottomLeftToTopRight();
	/// <summary>
	/// Strikethrough Top-Left to Bottom-Right.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getStrikethroughTopLeftToBottomRight() const;
	ASPOSE_DLL_EXPORT void setStrikethroughTopLeftToBottomRight(bool value);
	ASPOSE_DLL_EXPORT bool strikethroughTopLeftToBottomRightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetStrikethroughTopLeftToBottomRight();

protected:
	std::shared_ptr<MathElement> m_Base;
	bool m_HideTop;
	bool m_HideTopIsSet;
	bool m_HideBottom;
	bool m_HideBottomIsSet;
	bool m_HideLeft;
	bool m_HideLeftIsSet;
	bool m_HideRight;
	bool m_HideRightIsSet;
	bool m_StrikethroughHorizontal;
	bool m_StrikethroughHorizontalIsSet;
	bool m_StrikethroughVertical;
	bool m_StrikethroughVerticalIsSet;
	bool m_StrikethroughBottomLeftToTopRight;
	bool m_StrikethroughBottomLeftToTopRightIsSet;
	bool m_StrikethroughTopLeftToBottomRight;
	bool m_StrikethroughTopLeftToBottomRightIsSet;
};

}
}

#endif /* _BorderBoxElement_H_ */
