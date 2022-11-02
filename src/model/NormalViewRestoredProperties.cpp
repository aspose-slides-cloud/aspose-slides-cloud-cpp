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
#include "NormalViewRestoredProperties.h"

namespace asposeslidescloud {
namespace model {

NormalViewRestoredProperties::NormalViewRestoredProperties()
{
	m_AutoAdjustIsSet = false;
	m_DimensionSizeIsSet = false;
}

NormalViewRestoredProperties::~NormalViewRestoredProperties()
{
}

bool NormalViewRestoredProperties::getAutoAdjust() const
{
	return m_AutoAdjust;
}

void NormalViewRestoredProperties::setAutoAdjust(bool value)
{
	m_AutoAdjust = value;
	m_AutoAdjustIsSet = true;
}

bool NormalViewRestoredProperties::autoAdjustIsSet() const
{
	return m_AutoAdjustIsSet;
}

void NormalViewRestoredProperties::unsetAutoAdjust()
{
	m_AutoAdjustIsSet = false;
}

double NormalViewRestoredProperties::getDimensionSize() const
{
	return m_DimensionSize;
}

void NormalViewRestoredProperties::setDimensionSize(double value)
{
	m_DimensionSize = value;
	m_DimensionSizeIsSet = true;
}

bool NormalViewRestoredProperties::dimensionSizeIsSet() const
{
	return m_DimensionSizeIsSet;
}

void NormalViewRestoredProperties::unsetDimensionSize()
{
	m_DimensionSizeIsSet = false;
}

web::json::value NormalViewRestoredProperties::toJson() const
{
	web::json::value val = web::json::value::object();
	if(m_AutoAdjustIsSet)
	{
		val[utility::conversions::to_string_t("AutoAdjust")] = ModelBase::toJson(m_AutoAdjust);
	}
	if(m_DimensionSizeIsSet)
	{
		val[utility::conversions::to_string_t("DimensionSize")] = ModelBase::toJson(m_DimensionSize);
	}
	return val;
}

void NormalViewRestoredProperties::fromJson(web::json::value& val)
{
	web::json::value* jsonForAutoAdjust = ModelBase::getField(val, "AutoAdjust");
	if(jsonForAutoAdjust != nullptr && !jsonForAutoAdjust->is_null())
	{
		setAutoAdjust(ModelBase::boolFromJson(*jsonForAutoAdjust));
	}
	web::json::value* jsonForDimensionSize = ModelBase::getField(val, "DimensionSize");
	if(jsonForDimensionSize != nullptr && !jsonForDimensionSize->is_null() && jsonForDimensionSize->is_number())
	{
		setDimensionSize(ModelBase::doubleFromJson(*jsonForDimensionSize));
	}
}

}
}

