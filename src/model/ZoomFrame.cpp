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
#include "ZoomFrame.h"

namespace asposeslidescloud {
namespace model {

ZoomFrame::ZoomFrame()
{
	m_TargetSlideIndexIsSet = false;
	setZOrderPosition(0);
	setType(L"ZoomFrame");
}

ZoomFrame::~ZoomFrame()
{
}

int32_t ZoomFrame::getTargetSlideIndex() const
{
	return m_TargetSlideIndex;
}

void ZoomFrame::setTargetSlideIndex(int32_t value)
{
	m_TargetSlideIndex = value;
	m_TargetSlideIndexIsSet = true;
}

bool ZoomFrame::targetSlideIndexIsSet() const
{
	return m_TargetSlideIndexIsSet;
}

void ZoomFrame::unsetTargetSlideIndex()
{
	m_TargetSlideIndexIsSet = false;
}

web::json::value ZoomFrame::toJson() const
{
	web::json::value val = this->ZoomObject::toJson();
	if(m_TargetSlideIndexIsSet)
	{
		val[utility::conversions::to_string_t("TargetSlideIndex")] = ModelBase::toJson(m_TargetSlideIndex);
	}
	return val;
}

void ZoomFrame::fromJson(web::json::value& val)
{
	this->ZoomObject::fromJson(val);
	web::json::value* jsonForTargetSlideIndex = ModelBase::getField(val, "TargetSlideIndex");
	if(jsonForTargetSlideIndex != nullptr && !jsonForTargetSlideIndex->is_null() && jsonForTargetSlideIndex->is_number())
	{
		setTargetSlideIndex(ModelBase::int32_tFromJson(*jsonForTargetSlideIndex));
	}
}

}
}

