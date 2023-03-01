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
 * TextFrameFormat.h
 *
 * Contains the TextFrame&#39;s formatting properties.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_TextFrameFormat_H_
#define ASPOSESLIDESCLOUD_MODEL_TextFrameFormat_H_

#include "../ModelBase.h"

#include "../model/ParagraphFormat.h"
#include <cpprest/details/basic_types.h>
#include "../model/ThreeDFormat.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Contains the TextFrame&#39;s formatting properties.
/// </summary>
class  TextFrameFormat : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT TextFrameFormat();
	ASPOSE_DLL_EXPORT virtual ~TextFrameFormat();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Represents 3d effect properties for a text.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ThreeDFormat> getThreeDFormat() const;
	ASPOSE_DLL_EXPORT void setThreeDFormat(std::shared_ptr<ThreeDFormat> value);
	/// <summary>
	/// Gets or sets text wrapping shape.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTransform() const;
	ASPOSE_DLL_EXPORT void setTransform(utility::string_t value);
	/// <summary>
	/// Left margin. Left margin.
	/// </summary>
	ASPOSE_DLL_EXPORT double getMarginLeft() const;
	ASPOSE_DLL_EXPORT void setMarginLeft(double value);
	ASPOSE_DLL_EXPORT bool marginLeftIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMarginLeft();
	/// <summary>
	/// Right margin.
	/// </summary>
	ASPOSE_DLL_EXPORT double getMarginRight() const;
	ASPOSE_DLL_EXPORT void setMarginRight(double value);
	ASPOSE_DLL_EXPORT bool marginRightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMarginRight();
	/// <summary>
	/// Top margin.
	/// </summary>
	ASPOSE_DLL_EXPORT double getMarginTop() const;
	ASPOSE_DLL_EXPORT void setMarginTop(double value);
	ASPOSE_DLL_EXPORT bool marginTopIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMarginTop();
	/// <summary>
	/// Bottom margin.
	/// </summary>
	ASPOSE_DLL_EXPORT double getMarginBottom() const;
	ASPOSE_DLL_EXPORT void setMarginBottom(double value);
	ASPOSE_DLL_EXPORT bool marginBottomIsSet() const;
	ASPOSE_DLL_EXPORT void unsetMarginBottom();
	/// <summary>
	/// True if text is wrapped at TextFrame&#39;s margins.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getWrapText() const;
	ASPOSE_DLL_EXPORT void setWrapText(utility::string_t value);
	/// <summary>
	/// Returns or sets vertical anchor text in a TextFrame.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAnchoringType() const;
	ASPOSE_DLL_EXPORT void setAnchoringType(utility::string_t value);
	/// <summary>
	/// If True then text should be centered in box horizontally.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCenterText() const;
	ASPOSE_DLL_EXPORT void setCenterText(utility::string_t value);
	/// <summary>
	/// Determines text orientation. The resulted value of visual text rotation summarized from this property and custom angle in property RotationAngle.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTextVerticalType() const;
	ASPOSE_DLL_EXPORT void setTextVerticalType(utility::string_t value);
	/// <summary>
	/// Returns or sets text&#39;s auto-fit mode.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getAutofitType() const;
	ASPOSE_DLL_EXPORT void setAutofitType(utility::string_t value);
	/// <summary>
	/// Returns or sets number of columns in the text area. This value must be a positive number. Otherwise, the value will be set to zero.  Value 0 means undefined value.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getColumnCount() const;
	ASPOSE_DLL_EXPORT void setColumnCount(int32_t value);
	ASPOSE_DLL_EXPORT bool columnCountIsSet() const;
	ASPOSE_DLL_EXPORT void unsetColumnCount();
	/// <summary>
	/// Returns or sets the space between text columns in the text area (in points). This should only apply  when there is more than 1 column present. This value must be a positive number. Otherwise, the value will be set to zero. 
	/// </summary>
	ASPOSE_DLL_EXPORT double getColumnSpacing() const;
	ASPOSE_DLL_EXPORT void setColumnSpacing(double value);
	ASPOSE_DLL_EXPORT bool columnSpacingIsSet() const;
	ASPOSE_DLL_EXPORT void unsetColumnSpacing();
	/// <summary>
	/// Returns or set keeping text out of 3D scene entirely.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isKeepTextFlat() const;
	ASPOSE_DLL_EXPORT void setKeepTextFlat(bool value);
	ASPOSE_DLL_EXPORT bool keepTextFlatIsSet() const;
	ASPOSE_DLL_EXPORT void unsetKeepTextFlat();
	/// <summary>
	/// Specifies the custom rotation that is being applied to the text within the bounding box.
	/// </summary>
	ASPOSE_DLL_EXPORT double getRotationAngle() const;
	ASPOSE_DLL_EXPORT void setRotationAngle(double value);
	ASPOSE_DLL_EXPORT bool rotationAngleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetRotationAngle();
	/// <summary>
	/// Default portion format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ParagraphFormat> getDefaultParagraphFormat() const;
	ASPOSE_DLL_EXPORT void setDefaultParagraphFormat(std::shared_ptr<ParagraphFormat> value);

protected:
	std::shared_ptr<ThreeDFormat> m_ThreeDFormat;
	utility::string_t m_Transform;
	double m_MarginLeft;
	bool m_MarginLeftIsSet;
	double m_MarginRight;
	bool m_MarginRightIsSet;
	double m_MarginTop;
	bool m_MarginTopIsSet;
	double m_MarginBottom;
	bool m_MarginBottomIsSet;
	utility::string_t m_WrapText;
	utility::string_t m_AnchoringType;
	utility::string_t m_CenterText;
	utility::string_t m_TextVerticalType;
	utility::string_t m_AutofitType;
	int32_t m_ColumnCount;
	bool m_ColumnCountIsSet;
	double m_ColumnSpacing;
	bool m_ColumnSpacingIsSet;
	bool m_KeepTextFlat;
	bool m_KeepTextFlatIsSet;
	double m_RotationAngle;
	bool m_RotationAngleIsSet;
	std::shared_ptr<ParagraphFormat> m_DefaultParagraphFormat;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_TextFrameFormat_H_ */
