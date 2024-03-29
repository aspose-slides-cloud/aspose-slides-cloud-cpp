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
#include "AlphaReplaceEffect.h"

namespace asposeslidescloud {
namespace model {

AlphaReplaceEffect::AlphaReplaceEffect()
{
	setType(L"AlphaReplace");
	setAlpha(0.0);
}

AlphaReplaceEffect::~AlphaReplaceEffect()
{
}

double AlphaReplaceEffect::getAlpha() const
{
	return m_Alpha;
}

void AlphaReplaceEffect::setAlpha(double value)
{
	m_Alpha = value;
	
}

web::json::value AlphaReplaceEffect::toJson() const
{
	web::json::value val = this->ImageTransformEffect::toJson();
	val[utility::conversions::to_string_t("Alpha")] = ModelBase::toJson(m_Alpha);
	return val;
}

void AlphaReplaceEffect::fromJson(web::json::value& val)
{
	this->ImageTransformEffect::fromJson(val);
	web::json::value* jsonForAlpha = ModelBase::getField(val, "Alpha");
	if(jsonForAlpha != nullptr && !jsonForAlpha->is_null() && jsonForAlpha->is_number())
	{
		setAlpha(ModelBase::doubleFromJson(*jsonForAlpha));
	}
}

}
}

