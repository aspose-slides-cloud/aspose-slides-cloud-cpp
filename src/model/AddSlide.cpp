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
#include "AddSlide.h"

namespace asposeslidescloud {
namespace model {

AddSlide::AddSlide()
{
	setType(L"AddSlide");
	setCloneFromPosition(0);
	setPosition(0);
}

AddSlide::~AddSlide()
{
}

std::shared_ptr<InputFile> AddSlide::getCloneFromFile() const
{
	return m_CloneFromFile;
}

void AddSlide::setCloneFromFile(std::shared_ptr<InputFile> value)
{
	m_CloneFromFile = value;
	
}

int32_t AddSlide::getCloneFromPosition() const
{
	return m_CloneFromPosition;
}

void AddSlide::setCloneFromPosition(int32_t value)
{
	m_CloneFromPosition = value;
	
}

int32_t AddSlide::getPosition() const
{
	return m_Position;
}

void AddSlide::setPosition(int32_t value)
{
	m_Position = value;
	
}

utility::string_t AddSlide::getLayoutAlias() const
{
	return m_LayoutAlias;
}

void AddSlide::setLayoutAlias(utility::string_t value)
{
	m_LayoutAlias = value;
	
}

web::json::value AddSlide::toJson() const
{
	web::json::value val = this->Task::toJson();
	if (m_CloneFromFile != nullptr)
	{
		val[utility::conversions::to_string_t("CloneFromFile")] = ModelBase::toJson(m_CloneFromFile);
	}
	val[utility::conversions::to_string_t("CloneFromPosition")] = ModelBase::toJson(m_CloneFromPosition);
	val[utility::conversions::to_string_t("Position")] = ModelBase::toJson(m_Position);
	if (!m_LayoutAlias.empty())
	{
		val[utility::conversions::to_string_t("LayoutAlias")] = ModelBase::toJson(m_LayoutAlias);
	}
	return val;
}

void AddSlide::fromJson(web::json::value& val)
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
	web::json::value* jsonForPosition = ModelBase::getField(val, "Position");
	if(jsonForPosition != nullptr && !jsonForPosition->is_null() && jsonForPosition->is_number())
	{
		setPosition(ModelBase::int32_tFromJson(*jsonForPosition));
	}
	web::json::value* jsonForLayoutAlias = ModelBase::getField(val, "LayoutAlias");
	if(jsonForLayoutAlias != nullptr && !jsonForLayoutAlias->is_null())
	{
		setLayoutAlias(ModelBase::stringFromJson(*jsonForLayoutAlias));
	}
}

}
}

