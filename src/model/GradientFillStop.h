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
 * GradientFillStop.h
 *
 * Gradient stop.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_GradientFillStop_H_
#define ASPOSESLIDESCLOUD_MODEL_GradientFillStop_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Gradient stop.
/// </summary>
class  GradientFillStop : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT GradientFillStop();
	ASPOSE_DLL_EXPORT virtual ~GradientFillStop();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Color.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getColor() const;
	ASPOSE_DLL_EXPORT void setColor(utility::string_t value);
	/// <summary>
	/// Stop position (0..1).
	/// </summary>
	ASPOSE_DLL_EXPORT double getPosition() const;
	ASPOSE_DLL_EXPORT void setPosition(double value);

protected:
	utility::string_t m_Color;
	double m_Position;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_GradientFillStop_H_ */
