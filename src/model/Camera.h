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
 * Camera.h
 *
 * Camera
 */

#ifndef _Camera_H_
#define _Camera_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Camera
/// </summary>
class  Camera : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT Camera();
	ASPOSE_DLL_EXPORT virtual ~Camera();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Camera type
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCameraType() const;
	ASPOSE_DLL_EXPORT void setCameraType(utility::string_t value);
	/// <summary>
	/// Camera FOV
	/// </summary>
	ASPOSE_DLL_EXPORT double getFieldOfViewAngle() const;
	ASPOSE_DLL_EXPORT void setFieldOfViewAngle(double value);
	ASPOSE_DLL_EXPORT bool fieldOfViewAngleIsSet() const;
	ASPOSE_DLL_EXPORT void unsetFieldOfViewAngle();
	/// <summary>
	/// Camera zoom
	/// </summary>
	ASPOSE_DLL_EXPORT double getZoom() const;
	ASPOSE_DLL_EXPORT void setZoom(double value);
	ASPOSE_DLL_EXPORT bool zoomIsSet() const;
	ASPOSE_DLL_EXPORT void unsetZoom();
	/// <summary>
	/// XRotation
	/// </summary>
	ASPOSE_DLL_EXPORT double getXRotation() const;
	ASPOSE_DLL_EXPORT void setXRotation(double value);
	ASPOSE_DLL_EXPORT bool xRotationIsSet() const;
	ASPOSE_DLL_EXPORT void unsetXRotation();
	/// <summary>
	/// YRotation
	/// </summary>
	ASPOSE_DLL_EXPORT double getYRotation() const;
	ASPOSE_DLL_EXPORT void setYRotation(double value);
	ASPOSE_DLL_EXPORT bool yRotationIsSet() const;
	ASPOSE_DLL_EXPORT void unsetYRotation();
	/// <summary>
	/// ZRotation
	/// </summary>
	ASPOSE_DLL_EXPORT double getZRotation() const;
	ASPOSE_DLL_EXPORT void setZRotation(double value);
	ASPOSE_DLL_EXPORT bool zRotationIsSet() const;
	ASPOSE_DLL_EXPORT void unsetZRotation();

protected:
	utility::string_t m_CameraType;
	double m_FieldOfViewAngle;
	bool m_FieldOfViewAngleIsSet;
	double m_Zoom;
	bool m_ZoomIsSet;
	double m_XRotation;
	bool m_XRotationIsSet;
	double m_YRotation;
	bool m_YRotationIsSet;
	double m_ZRotation;
	bool m_ZRotationIsSet;
};

}
}

#endif /* _Camera_H_ */
