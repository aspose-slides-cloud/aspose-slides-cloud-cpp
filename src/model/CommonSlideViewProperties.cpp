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



#include "../ClassRegistry.h"
#include "CommonSlideViewProperties.h"

namespace asposeslidescloud {
namespace model {

CommonSlideViewProperties::CommonSlideViewProperties()
{
	m_ScaleIsSet = false;
	m_VariableScaleIsSet = false;
}

CommonSlideViewProperties::~CommonSlideViewProperties()
{
}

int32_t CommonSlideViewProperties::getScale() const
{
	return m_Scale;
}

void CommonSlideViewProperties::setScale(int32_t value)
{
	m_Scale = value;
	m_ScaleIsSet = true;
}

bool CommonSlideViewProperties::scaleIsSet() const
{
	return m_ScaleIsSet;
}

void CommonSlideViewProperties::unsetScale()
{
	m_ScaleIsSet = false;
}

bool CommonSlideViewProperties::isVariableScale() const
{
	return m_VariableScale;
}

void CommonSlideViewProperties::setVariableScale(bool value)
{
	m_VariableScale = value;
	m_VariableScaleIsSet = true;
}

bool CommonSlideViewProperties::variableScaleIsSet() const
{
	return m_VariableScaleIsSet;
}

void CommonSlideViewProperties::unsetVariableScale()
{
	m_VariableScaleIsSet = false;
}

web::json::value CommonSlideViewProperties::toJson() const
{
	web::json::value val = web::json::value::object();
	if(m_ScaleIsSet)
	{
		val[utility::conversions::to_string_t("Scale")] = ModelBase::toJson(m_Scale);
	}
	if(m_VariableScaleIsSet)
	{
		val[utility::conversions::to_string_t("VariableScale")] = ModelBase::toJson(m_VariableScale);
	}
	return val;
}

void CommonSlideViewProperties::fromJson(web::json::value& val)
{
	web::json::value* jsonForScale = ModelBase::getField(val, "Scale");
	if(jsonForScale != nullptr && !jsonForScale->is_null() && jsonForScale->is_number())
	{
		setScale(ModelBase::int32_tFromJson(*jsonForScale));
	}
	web::json::value* jsonForVariableScale = ModelBase::getField(val, "VariableScale");
	if(jsonForVariableScale != nullptr && !jsonForVariableScale->is_null())
	{
		setVariableScale(ModelBase::boolFromJson(*jsonForVariableScale));
	}
}

}
}

