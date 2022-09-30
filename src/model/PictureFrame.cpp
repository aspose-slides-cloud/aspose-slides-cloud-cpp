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



#include "PictureFrame.h"

namespace asposeslidescloud {
namespace model {

PictureFrame::PictureFrame()
{
	setType(L"PictureFrame");
}

PictureFrame::~PictureFrame()
{
}

std::shared_ptr<PictureFill> PictureFrame::getPictureFillFormat() const
{
	return m_PictureFillFormat;
}

void PictureFrame::setPictureFillFormat(std::shared_ptr<PictureFill> value)
{
	m_PictureFillFormat = value;
	
}

web::json::value PictureFrame::toJson() const
{
	web::json::value val = this->GeometryShape::toJson();
	if (m_PictureFillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("PictureFillFormat")] = ModelBase::toJson(m_PictureFillFormat);
	}
	return val;
}

void PictureFrame::fromJson(web::json::value& val)
{
	this->GeometryShape::fromJson(val);
	web::json::value* jsonForPictureFillFormat = ModelBase::getField(val, "PictureFillFormat");
	if(jsonForPictureFillFormat != nullptr && !jsonForPictureFillFormat->is_null())
	{
		std::shared_ptr<PictureFill> newItem(new PictureFill());
		newItem->fromJson(*jsonForPictureFillFormat);
		setPictureFillFormat(newItem);
	}
}

}
}

