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
 * CommonSlideViewProperties.h
 *
 * Slide view properties.
 */

#ifndef _CommonSlideViewProperties_H_
#define _CommonSlideViewProperties_H_

#include "../ModelBase.h"


#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Slide view properties.
/// </summary>
class  CommonSlideViewProperties : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT CommonSlideViewProperties();
	ASPOSE_DLL_EXPORT virtual ~CommonSlideViewProperties();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// The view scaling ratio (percentage).
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getScale() const;
	ASPOSE_DLL_EXPORT void setScale(int32_t value);
	ASPOSE_DLL_EXPORT bool scaleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetScale();
	/// <summary>
	/// True if the view content should automatically scale to best fit the current window size.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getVariableScale() const;
	ASPOSE_DLL_EXPORT void setVariableScale(bool value);
	ASPOSE_DLL_EXPORT bool variableScaleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetVariableScale();

protected:
	int32_t m_Scale;
	bool m_ScaleIsSet;
	bool m_VariableScale;
	bool m_VariableScaleIsSet;
};

}
}

#endif /* _CommonSlideViewProperties_H_ */
