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



#include "RemoveSlide.h"

namespace asposeslidescloud {
namespace model {

RemoveSlide::RemoveSlide()
{
	setType(L"RemoveSlide");
}

RemoveSlide::~RemoveSlide()
{
}

int32_t RemoveSlide::getPosition() const
{
	return m_Position;
}

void RemoveSlide::setPosition(int32_t value)
{
	m_Position = value;
	
}

web::json::value RemoveSlide::toJson() const
{
	web::json::value val = this->Task::toJson();
	val[utility::conversions::to_string_t("Position")] = ModelBase::toJson(m_Position);
	return val;
}

void RemoveSlide::fromJson(web::json::value& val)
{
	this->Task::fromJson(val);
	web::json::value* jsonForPosition = ModelBase::getField(val, "Position");
	if(jsonForPosition != nullptr && !jsonForPosition->is_null() && jsonForPosition->is_number())
	{
		setPosition(ModelBase::int32_tFromJson(*jsonForPosition));
	}
}

}
}

