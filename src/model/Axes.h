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
 * Axes.h
 *
 * Represents chart axes
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_Axes_H_
#define ASPOSESLIDESCLOUD_MODEL_Axes_H_

#include "../ModelBase.h"

#include "../model/Axis.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents chart axes
/// </summary>
class  Axes : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT Axes();
	ASPOSE_DLL_EXPORT virtual ~Axes();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets the horizontal axis.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<Axis> getHorizontalAxis() const;
	ASPOSE_DLL_EXPORT void setHorizontalAxis(std::shared_ptr<Axis> value);
	/// <summary>
	/// Gets or sets the vertical axis.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<Axis> getVerticalAxis() const;
	ASPOSE_DLL_EXPORT void setVerticalAxis(std::shared_ptr<Axis> value);
	/// <summary>
	/// Gets or sets the secondary horizontal axis.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<Axis> getSecondaryHorizontalAxis() const;
	ASPOSE_DLL_EXPORT void setSecondaryHorizontalAxis(std::shared_ptr<Axis> value);
	/// <summary>
	/// Gets or sets the secondary vertical axis.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<Axis> getSecondaryVerticalAxis() const;
	ASPOSE_DLL_EXPORT void setSecondaryVerticalAxis(std::shared_ptr<Axis> value);

protected:
	std::shared_ptr<Axis> m_HorizontalAxis;
	std::shared_ptr<Axis> m_VerticalAxis;
	std::shared_ptr<Axis> m_SecondaryHorizontalAxis;
	std::shared_ptr<Axis> m_SecondaryVerticalAxis;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_Axes_H_ */
