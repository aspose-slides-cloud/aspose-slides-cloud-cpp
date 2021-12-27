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



#include "ShapeImageExportOptions.h"

namespace asposeslidescloud {
namespace model {

ShapeImageExportOptions::ShapeImageExportOptions()
{
	m_ScaleXIsSet = false;
	m_ScaleYIsSet = false;
}

ShapeImageExportOptions::~ShapeImageExportOptions()
{
}

double ShapeImageExportOptions::getScaleX() const
{
	return m_ScaleX;
}

void ShapeImageExportOptions::setScaleX(double value)
{
	m_ScaleX = value;
	m_ScaleXIsSet = true;
}

bool ShapeImageExportOptions::scaleXIsSet() const
{
	return m_ScaleXIsSet;
}

void ShapeImageExportOptions::unsetScaleX()
{
	m_ScaleXIsSet = false;
}

double ShapeImageExportOptions::getScaleY() const
{
	return m_ScaleY;
}

void ShapeImageExportOptions::setScaleY(double value)
{
	m_ScaleY = value;
	m_ScaleYIsSet = true;
}

bool ShapeImageExportOptions::scaleYIsSet() const
{
	return m_ScaleYIsSet;
}

void ShapeImageExportOptions::unsetScaleY()
{
	m_ScaleYIsSet = false;
}

utility::string_t ShapeImageExportOptions::getThumbnailBounds() const
{
	return m_ThumbnailBounds;
}

void ShapeImageExportOptions::setThumbnailBounds(utility::string_t value)
{
	m_ThumbnailBounds = value;
	
}

utility::string_t ShapeImageExportOptions::getFormat() const
{
	return m_Format;
}

void ShapeImageExportOptions::setFormat(utility::string_t value)
{
	m_Format = value;
	
}

web::json::value ShapeImageExportOptions::toJson() const
{
	web::json::value val = web::json::value::object();
	if(m_ScaleXIsSet)
	{
		val[utility::conversions::to_string_t("ScaleX")] = ModelBase::toJson(m_ScaleX);
	}
	if(m_ScaleYIsSet)
	{
		val[utility::conversions::to_string_t("ScaleY")] = ModelBase::toJson(m_ScaleY);
	}
	if (!m_ThumbnailBounds.empty())
	{
		val[utility::conversions::to_string_t("ThumbnailBounds")] = ModelBase::toJson(m_ThumbnailBounds);
	}
	if (!m_Format.empty())
	{
		val[utility::conversions::to_string_t("Format")] = ModelBase::toJson(m_Format);
	}
	return val;
}

void ShapeImageExportOptions::fromJson(web::json::value& val)
{
	web::json::value* jsonForScaleX = ModelBase::getField(val, "ScaleX");
	if(jsonForScaleX != nullptr && !jsonForScaleX->is_null() && jsonForScaleX->is_number())
	{
		setScaleX(ModelBase::doubleFromJson(*jsonForScaleX));
	}
	web::json::value* jsonForScaleY = ModelBase::getField(val, "ScaleY");
	if(jsonForScaleY != nullptr && !jsonForScaleY->is_null() && jsonForScaleY->is_number())
	{
		setScaleY(ModelBase::doubleFromJson(*jsonForScaleY));
	}
	web::json::value* jsonForThumbnailBounds = ModelBase::getField(val, "ThumbnailBounds");
	if(jsonForThumbnailBounds != nullptr && !jsonForThumbnailBounds->is_null())
	{
		setThumbnailBounds(ModelBase::stringFromJson(*jsonForThumbnailBounds));
	}
	web::json::value* jsonForFormat = ModelBase::getField(val, "Format");
	if(jsonForFormat != nullptr && !jsonForFormat->is_null())
	{
		setFormat(ModelBase::stringFromJson(*jsonForFormat));
	}
}

}
}

