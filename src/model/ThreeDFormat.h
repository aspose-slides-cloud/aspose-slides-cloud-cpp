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
 * ThreeDFormat.h
 *
 * ThreeDFormat
 */

#ifndef _ThreeDFormat_H_
#define _ThreeDFormat_H_

#include "../ModelBase.h"

#include "../model/ShapeBevel.h"
#include "../model/LightRig.h"
#include <cpprest/details/basic_types.h>
#include "../model/Camera.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// ThreeDFormat
/// </summary>
class  ThreeDFormat : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ThreeDFormat();
	ASPOSE_DLL_EXPORT virtual ~ThreeDFormat();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Type of a bottom 3D bevel.             
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ShapeBevel> getBevelBottom() const;
	ASPOSE_DLL_EXPORT void setBevelBottom(std::shared_ptr<ShapeBevel> value);
	/// <summary>
	/// Type of a top 3D bevel.             
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ShapeBevel> getBevelTop() const;
	ASPOSE_DLL_EXPORT void setBevelTop(std::shared_ptr<ShapeBevel> value);
	/// <summary>
	/// Camera
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<Camera> getCamera() const;
	ASPOSE_DLL_EXPORT void setCamera(std::shared_ptr<Camera> value);
	/// <summary>
	/// Contour color
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getContourColor() const;
	ASPOSE_DLL_EXPORT void setContourColor(utility::string_t value);
	/// <summary>
	/// Contour width
	/// </summary>
	ASPOSE_DLL_EXPORT double getContourWidth() const;
	ASPOSE_DLL_EXPORT void setContourWidth(double value);
	ASPOSE_DLL_EXPORT bool contourWidthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetContourWidth();
	/// <summary>
	/// Depth
	/// </summary>
	ASPOSE_DLL_EXPORT double getDepth() const;
	ASPOSE_DLL_EXPORT void setDepth(double value);
	ASPOSE_DLL_EXPORT bool depthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDepth();
	/// <summary>
	/// Extrusion color
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getExtrusionColor() const;
	ASPOSE_DLL_EXPORT void setExtrusionColor(utility::string_t value);
	/// <summary>
	/// Extrusion height
	/// </summary>
	ASPOSE_DLL_EXPORT double getExtrusionHeight() const;
	ASPOSE_DLL_EXPORT void setExtrusionHeight(double value);
	ASPOSE_DLL_EXPORT bool extrusionHeightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetExtrusionHeight();
	/// <summary>
	/// Light rig
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LightRig> getLightRig() const;
	ASPOSE_DLL_EXPORT void setLightRig(std::shared_ptr<LightRig> value);
	/// <summary>
	/// Material
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getMaterial() const;
	ASPOSE_DLL_EXPORT void setMaterial(utility::string_t value);

protected:
	std::shared_ptr<ShapeBevel> m_BevelBottom;
	std::shared_ptr<ShapeBevel> m_BevelTop;
	std::shared_ptr<Camera> m_Camera;
	utility::string_t m_ContourColor;
	double m_ContourWidth;
	bool m_ContourWidthIsSet;
	double m_Depth;
	bool m_DepthIsSet;
	utility::string_t m_ExtrusionColor;
	double m_ExtrusionHeight;
	bool m_ExtrusionHeightIsSet;
	std::shared_ptr<LightRig> m_LightRig;
	utility::string_t m_Material;
};

}
}

#endif /* _ThreeDFormat_H_ */
