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
 * LightRig.h
 *
 * Light rig
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_LightRig_H_
#define ASPOSESLIDESCLOUD_MODEL_LightRig_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Light rig
/// </summary>
class  LightRig : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT LightRig();
	ASPOSE_DLL_EXPORT virtual ~LightRig();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Light direction
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDirection() const;
	ASPOSE_DLL_EXPORT void setDirection(utility::string_t value);
	/// <summary>
	/// Light type
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLightType() const;
	ASPOSE_DLL_EXPORT void setLightType(utility::string_t value);
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
	utility::string_t m_Direction;
	utility::string_t m_LightType;
	double m_XRotation;
	bool m_XRotationIsSet;
	double m_YRotation;
	bool m_YRotationIsSet;
	double m_ZRotation;
	bool m_ZRotationIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_LightRig_H_ */
