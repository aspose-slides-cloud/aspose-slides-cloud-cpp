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
#include "ReorderSlide.h"

namespace asposeslidescloud {
namespace model {

ReorderSlide::ReorderSlide()
{
	setType(L"ReoderSlide");
	setOldPosition(0);
	setNewPosition(0);
}

ReorderSlide::~ReorderSlide()
{
}

int32_t ReorderSlide::getOldPosition() const
{
	return m_OldPosition;
}

void ReorderSlide::setOldPosition(int32_t value)
{
	m_OldPosition = value;
	
}

int32_t ReorderSlide::getNewPosition() const
{
	return m_NewPosition;
}

void ReorderSlide::setNewPosition(int32_t value)
{
	m_NewPosition = value;
	
}

web::json::value ReorderSlide::toJson() const
{
	web::json::value val = this->Task::toJson();
	val[utility::conversions::to_string_t("OldPosition")] = ModelBase::toJson(m_OldPosition);
	val[utility::conversions::to_string_t("NewPosition")] = ModelBase::toJson(m_NewPosition);
	return val;
}

void ReorderSlide::fromJson(web::json::value& val)
{
	this->Task::fromJson(val);
	web::json::value* jsonForOldPosition = ModelBase::getField(val, "OldPosition");
	if(jsonForOldPosition != nullptr && !jsonForOldPosition->is_null() && jsonForOldPosition->is_number())
	{
		setOldPosition(ModelBase::int32_tFromJson(*jsonForOldPosition));
	}
	web::json::value* jsonForNewPosition = ModelBase::getField(val, "NewPosition");
	if(jsonForNewPosition != nullptr && !jsonForNewPosition->is_null() && jsonForNewPosition->is_number())
	{
		setNewPosition(ModelBase::int32_tFromJson(*jsonForNewPosition));
	}
}

}
}

