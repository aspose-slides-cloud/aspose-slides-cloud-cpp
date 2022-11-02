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
 * NormalViewRestoredProperties.h
 *
 * The sizing of the slide region.
 */

#ifndef _NormalViewRestoredProperties_H_
#define _NormalViewRestoredProperties_H_

#include "../ModelBase.h"


#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// The sizing of the slide region.
/// </summary>
class  NormalViewRestoredProperties : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT NormalViewRestoredProperties();
	ASPOSE_DLL_EXPORT virtual ~NormalViewRestoredProperties();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// True if the size of the side content region should compensate for the new size when resizing the window containing the view within the application.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getAutoAdjust() const;
	ASPOSE_DLL_EXPORT void setAutoAdjust(bool value);
	ASPOSE_DLL_EXPORT bool autoAdjustIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAutoAdjust();
	/// <summary>
	/// The size of the slide region.
	/// </summary>
	ASPOSE_DLL_EXPORT double getDimensionSize() const;
	ASPOSE_DLL_EXPORT void setDimensionSize(double value);
	ASPOSE_DLL_EXPORT bool dimensionSizeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDimensionSize();

protected:
	bool m_AutoAdjust;
	bool m_AutoAdjustIsSet;
	double m_DimensionSize;
	bool m_DimensionSizeIsSet;
};

}
}

#endif /* _NormalViewRestoredProperties_H_ */
