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
#include "AddLayoutSlide.h"

namespace asposeslidescloud {
namespace model {

AddLayoutSlide::AddLayoutSlide()
{
	setType(L"AddLayoutSlide");
	setCloneFromPosition(0);
}

AddLayoutSlide::~AddLayoutSlide()
{
}

std::shared_ptr<InputFile> AddLayoutSlide::getCloneFromFile() const
{
	return m_CloneFromFile;
}

void AddLayoutSlide::setCloneFromFile(std::shared_ptr<InputFile> value)
{
	m_CloneFromFile = value;
	
}

int32_t AddLayoutSlide::getCloneFromPosition() const
{
	return m_CloneFromPosition;
}

void AddLayoutSlide::setCloneFromPosition(int32_t value)
{
	m_CloneFromPosition = value;
	
}

web::json::value AddLayoutSlide::toJson() const
{
	web::json::value val = this->Task::toJson();
	if (m_CloneFromFile != nullptr)
	{
		val[utility::conversions::to_string_t("CloneFromFile")] = ModelBase::toJson(m_CloneFromFile);
	}
	val[utility::conversions::to_string_t("CloneFromPosition")] = ModelBase::toJson(m_CloneFromPosition);
	return val;
}

void AddLayoutSlide::fromJson(web::json::value& val)
{
	this->Task::fromJson(val);
	web::json::value* jsonForCloneFromFile = ModelBase::getField(val, "CloneFromFile");
	if(jsonForCloneFromFile != nullptr && !jsonForCloneFromFile->is_null())
	{
		std::shared_ptr<void> instanceForCloneFromFile = asposeslidescloud::api::ClassRegistry::deserialize(L"InputFile", *jsonForCloneFromFile);
		setCloneFromFile(std::static_pointer_cast<InputFile>(instanceForCloneFromFile));
	}
	web::json::value* jsonForCloneFromPosition = ModelBase::getField(val, "CloneFromPosition");
	if(jsonForCloneFromPosition != nullptr && !jsonForCloneFromPosition->is_null() && jsonForCloneFromPosition->is_number())
	{
		setCloneFromPosition(ModelBase::int32_tFromJson(*jsonForCloneFromPosition));
	}
}

}
}

