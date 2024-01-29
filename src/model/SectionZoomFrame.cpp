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
#include "SectionZoomFrame.h"

namespace asposeslidescloud {
namespace model {

SectionZoomFrame::SectionZoomFrame()
{
	m_TargetSectionIndexIsSet = false;
	setZOrderPosition(0);
	setType(L"SectionZoomFrame");
}

SectionZoomFrame::~SectionZoomFrame()
{
}

int32_t SectionZoomFrame::getTargetSectionIndex() const
{
	return m_TargetSectionIndex;
}

void SectionZoomFrame::setTargetSectionIndex(int32_t value)
{
	m_TargetSectionIndex = value;
	m_TargetSectionIndexIsSet = true;
}

bool SectionZoomFrame::targetSectionIndexIsSet() const
{
	return m_TargetSectionIndexIsSet;
}

void SectionZoomFrame::unsetTargetSectionIndex()
{
	m_TargetSectionIndexIsSet = false;
}

web::json::value SectionZoomFrame::toJson() const
{
	web::json::value val = this->ZoomObject::toJson();
	if(m_TargetSectionIndexIsSet)
	{
		val[utility::conversions::to_string_t("TargetSectionIndex")] = ModelBase::toJson(m_TargetSectionIndex);
	}
	return val;
}

void SectionZoomFrame::fromJson(web::json::value& val)
{
	this->ZoomObject::fromJson(val);
	web::json::value* jsonForTargetSectionIndex = ModelBase::getField(val, "TargetSectionIndex");
	if(jsonForTargetSectionIndex != nullptr && !jsonForTargetSectionIndex->is_null() && jsonForTargetSectionIndex->is_number())
	{
		setTargetSectionIndex(ModelBase::int32_tFromJson(*jsonForTargetSectionIndex));
	}
}

}
}

