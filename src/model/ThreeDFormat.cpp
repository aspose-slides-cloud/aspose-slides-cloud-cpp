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



#include "ThreeDFormat.h"

namespace asposeslidescloud {
namespace model {

ThreeDFormat::ThreeDFormat()
{
	m_ContourWidthIsSet = false;
	m_DepthIsSet = false;
	m_ExtrusionHeightIsSet = false;
}

ThreeDFormat::~ThreeDFormat()
{
}

std::shared_ptr<ShapeBevel> ThreeDFormat::getBevelBottom() const
{
	return m_BevelBottom;
}

void ThreeDFormat::setBevelBottom(std::shared_ptr<ShapeBevel> value)
{
	m_BevelBottom = value;
	
}

std::shared_ptr<ShapeBevel> ThreeDFormat::getBevelTop() const
{
	return m_BevelTop;
}

void ThreeDFormat::setBevelTop(std::shared_ptr<ShapeBevel> value)
{
	m_BevelTop = value;
	
}

std::shared_ptr<Camera> ThreeDFormat::getCamera() const
{
	return m_Camera;
}

void ThreeDFormat::setCamera(std::shared_ptr<Camera> value)
{
	m_Camera = value;
	
}

utility::string_t ThreeDFormat::getContourColor() const
{
	return m_ContourColor;
}

void ThreeDFormat::setContourColor(utility::string_t value)
{
	m_ContourColor = value;
	
}

double ThreeDFormat::getContourWidth() const
{
	return m_ContourWidth;
}

void ThreeDFormat::setContourWidth(double value)
{
	m_ContourWidth = value;
	m_ContourWidthIsSet = true;
}

bool ThreeDFormat::contourWidthIsSet() const
{
	return m_ContourWidthIsSet;
}

void ThreeDFormat::unsetContourWidth()
{
	m_ContourWidthIsSet = false;
}

double ThreeDFormat::getDepth() const
{
	return m_Depth;
}

void ThreeDFormat::setDepth(double value)
{
	m_Depth = value;
	m_DepthIsSet = true;
}

bool ThreeDFormat::depthIsSet() const
{
	return m_DepthIsSet;
}

void ThreeDFormat::unsetDepth()
{
	m_DepthIsSet = false;
}

utility::string_t ThreeDFormat::getExtrusionColor() const
{
	return m_ExtrusionColor;
}

void ThreeDFormat::setExtrusionColor(utility::string_t value)
{
	m_ExtrusionColor = value;
	
}

double ThreeDFormat::getExtrusionHeight() const
{
	return m_ExtrusionHeight;
}

void ThreeDFormat::setExtrusionHeight(double value)
{
	m_ExtrusionHeight = value;
	m_ExtrusionHeightIsSet = true;
}

bool ThreeDFormat::extrusionHeightIsSet() const
{
	return m_ExtrusionHeightIsSet;
}

void ThreeDFormat::unsetExtrusionHeight()
{
	m_ExtrusionHeightIsSet = false;
}

std::shared_ptr<LightRig> ThreeDFormat::getLightRig() const
{
	return m_LightRig;
}

void ThreeDFormat::setLightRig(std::shared_ptr<LightRig> value)
{
	m_LightRig = value;
	
}

utility::string_t ThreeDFormat::getMaterial() const
{
	return m_Material;
}

void ThreeDFormat::setMaterial(utility::string_t value)
{
	m_Material = value;
	
}

web::json::value ThreeDFormat::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_BevelBottom != nullptr)
	{
		val[utility::conversions::to_string_t("BevelBottom")] = ModelBase::toJson(m_BevelBottom);
	}
	if (m_BevelTop != nullptr)
	{
		val[utility::conversions::to_string_t("BevelTop")] = ModelBase::toJson(m_BevelTop);
	}
	if (m_Camera != nullptr)
	{
		val[utility::conversions::to_string_t("Camera")] = ModelBase::toJson(m_Camera);
	}
	if (!m_ContourColor.empty())
	{
		val[utility::conversions::to_string_t("ContourColor")] = ModelBase::toJson(m_ContourColor);
	}
	if(m_ContourWidthIsSet)
	{
		val[utility::conversions::to_string_t("ContourWidth")] = ModelBase::toJson(m_ContourWidth);
	}
	if(m_DepthIsSet)
	{
		val[utility::conversions::to_string_t("Depth")] = ModelBase::toJson(m_Depth);
	}
	if (!m_ExtrusionColor.empty())
	{
		val[utility::conversions::to_string_t("ExtrusionColor")] = ModelBase::toJson(m_ExtrusionColor);
	}
	if(m_ExtrusionHeightIsSet)
	{
		val[utility::conversions::to_string_t("ExtrusionHeight")] = ModelBase::toJson(m_ExtrusionHeight);
	}
	if (m_LightRig != nullptr)
	{
		val[utility::conversions::to_string_t("LightRig")] = ModelBase::toJson(m_LightRig);
	}
	if (!m_Material.empty())
	{
		val[utility::conversions::to_string_t("Material")] = ModelBase::toJson(m_Material);
	}
	return val;
}

void ThreeDFormat::fromJson(web::json::value& val)
{
	web::json::value* jsonForBevelBottom = ModelBase::getField(val, "BevelBottom");
	if(jsonForBevelBottom != nullptr && !jsonForBevelBottom->is_null())
	{
		std::shared_ptr<ShapeBevel> newItem(new ShapeBevel());
		newItem->fromJson(*jsonForBevelBottom);
		setBevelBottom(newItem);
	}
	web::json::value* jsonForBevelTop = ModelBase::getField(val, "BevelTop");
	if(jsonForBevelTop != nullptr && !jsonForBevelTop->is_null())
	{
		std::shared_ptr<ShapeBevel> newItem(new ShapeBevel());
		newItem->fromJson(*jsonForBevelTop);
		setBevelTop(newItem);
	}
	web::json::value* jsonForCamera = ModelBase::getField(val, "Camera");
	if(jsonForCamera != nullptr && !jsonForCamera->is_null())
	{
		std::shared_ptr<Camera> newItem(new Camera());
		newItem->fromJson(*jsonForCamera);
		setCamera(newItem);
	}
	web::json::value* jsonForContourColor = ModelBase::getField(val, "ContourColor");
	if(jsonForContourColor != nullptr && !jsonForContourColor->is_null())
	{
		setContourColor(ModelBase::stringFromJson(*jsonForContourColor));
	}
	web::json::value* jsonForContourWidth = ModelBase::getField(val, "ContourWidth");
	if(jsonForContourWidth != nullptr && !jsonForContourWidth->is_null() && jsonForContourWidth->is_number())
	{
		setContourWidth(ModelBase::doubleFromJson(*jsonForContourWidth));
	}
	web::json::value* jsonForDepth = ModelBase::getField(val, "Depth");
	if(jsonForDepth != nullptr && !jsonForDepth->is_null() && jsonForDepth->is_number())
	{
		setDepth(ModelBase::doubleFromJson(*jsonForDepth));
	}
	web::json::value* jsonForExtrusionColor = ModelBase::getField(val, "ExtrusionColor");
	if(jsonForExtrusionColor != nullptr && !jsonForExtrusionColor->is_null())
	{
		setExtrusionColor(ModelBase::stringFromJson(*jsonForExtrusionColor));
	}
	web::json::value* jsonForExtrusionHeight = ModelBase::getField(val, "ExtrusionHeight");
	if(jsonForExtrusionHeight != nullptr && !jsonForExtrusionHeight->is_null() && jsonForExtrusionHeight->is_number())
	{
		setExtrusionHeight(ModelBase::doubleFromJson(*jsonForExtrusionHeight));
	}
	web::json::value* jsonForLightRig = ModelBase::getField(val, "LightRig");
	if(jsonForLightRig != nullptr && !jsonForLightRig->is_null())
	{
		std::shared_ptr<LightRig> newItem(new LightRig());
		newItem->fromJson(*jsonForLightRig);
		setLightRig(newItem);
	}
	web::json::value* jsonForMaterial = ModelBase::getField(val, "Material");
	if(jsonForMaterial != nullptr && !jsonForMaterial->is_null())
	{
		setMaterial(ModelBase::stringFromJson(*jsonForMaterial));
	}
}

}
}

