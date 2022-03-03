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



#include "TextFrameFormat.h"

namespace asposeslidescloud {
namespace model {

TextFrameFormat::TextFrameFormat()
{
}

TextFrameFormat::~TextFrameFormat()
{
}

std::shared_ptr<ThreeDFormat> TextFrameFormat::getThreeDFormat() const
{
	return m_ThreeDFormat;
}

void TextFrameFormat::setThreeDFormat(std::shared_ptr<ThreeDFormat> value)
{
	m_ThreeDFormat = value;
	
}

utility::string_t TextFrameFormat::getTransform() const
{
	return m_Transform;
}

void TextFrameFormat::setTransform(utility::string_t value)
{
	m_Transform = value;
	
}

web::json::value TextFrameFormat::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_ThreeDFormat != nullptr)
	{
		val[utility::conversions::to_string_t("ThreeDFormat")] = ModelBase::toJson(m_ThreeDFormat);
	}
	if (!m_Transform.empty())
	{
		val[utility::conversions::to_string_t("Transform")] = ModelBase::toJson(m_Transform);
	}
	return val;
}

void TextFrameFormat::fromJson(web::json::value& val)
{
	web::json::value* jsonForThreeDFormat = ModelBase::getField(val, "ThreeDFormat");
	if(jsonForThreeDFormat != nullptr && !jsonForThreeDFormat->is_null())
	{
		std::shared_ptr<ThreeDFormat> newItem(new ThreeDFormat());
		newItem->fromJson(*jsonForThreeDFormat);
		setThreeDFormat(newItem);
	}
	web::json::value* jsonForTransform = ModelBase::getField(val, "Transform");
	if(jsonForTransform != nullptr && !jsonForTransform->is_null())
	{
		setTransform(ModelBase::stringFromJson(*jsonForTransform));
	}
}

}
}

