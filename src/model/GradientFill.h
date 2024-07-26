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
 * GradientFill.h
 *
 * Represents gradient fill format
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_GradientFill_H_
#define ASPOSESLIDESCLOUD_MODEL_GradientFill_H_

#include "FillFormat.h"

#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include <vector>
#include "../model/GradientFillStop.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents gradient fill format
/// </summary>
class  GradientFill : public FillFormat
{
public:
	ASPOSE_DLL_EXPORT GradientFill();
	ASPOSE_DLL_EXPORT virtual ~GradientFill();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gradient style.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDirection() const;
	ASPOSE_DLL_EXPORT void setDirection(utility::string_t value);
	/// <summary>
	/// Gradient shape.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getShape() const;
	ASPOSE_DLL_EXPORT void setShape(utility::string_t value);
	/// <summary>
	/// Gradient stops.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<GradientFillStop>> getStops() const;
	ASPOSE_DLL_EXPORT void setStops(std::vector<std::shared_ptr<GradientFillStop>> value);
	/// <summary>
	/// Gradient angle.
	/// </summary>
	ASPOSE_DLL_EXPORT double getLinearAngle() const;
	ASPOSE_DLL_EXPORT void setLinearAngle(double value);
	ASPOSE_DLL_EXPORT bool linearAngleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetLinearAngle();
	/// <summary>
	/// True if the gradient is scaled.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getIsScaled() const;
	ASPOSE_DLL_EXPORT void setIsScaled(bool value);
	ASPOSE_DLL_EXPORT bool isScaledIsSet() const;
	ASPOSE_DLL_EXPORT void unsetIsScaled();
	/// <summary>
	/// Gradient flipping mode.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTileFlip() const;
	ASPOSE_DLL_EXPORT void setTileFlip(utility::string_t value);

protected:
	utility::string_t m_Direction;
	utility::string_t m_Shape;
	std::vector<std::shared_ptr<GradientFillStop>> m_Stops;
	double m_LinearAngle;
	bool m_LinearAngleIsSet;
	bool m_IsScaled;
	bool m_IsScaledIsSet;
	utility::string_t m_TileFlip;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_GradientFill_H_ */
