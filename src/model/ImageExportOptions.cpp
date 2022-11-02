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
#include "ImageExportOptions.h"

namespace asposeslidescloud {
namespace model {

ImageExportOptions::ImageExportOptions()
{
	m_CommentsAreaWidthIsSet = false;
	setFormat(L"image");
}

ImageExportOptions::~ImageExportOptions()
{
}

utility::string_t ImageExportOptions::getNotesPosition() const
{
	return m_NotesPosition;
}

void ImageExportOptions::setNotesPosition(utility::string_t value)
{
	m_NotesPosition = value;
	
}

utility::string_t ImageExportOptions::getCommentsPosition() const
{
	return m_CommentsPosition;
}

void ImageExportOptions::setCommentsPosition(utility::string_t value)
{
	m_CommentsPosition = value;
	
}

int32_t ImageExportOptions::getCommentsAreaWidth() const
{
	return m_CommentsAreaWidth;
}

void ImageExportOptions::setCommentsAreaWidth(int32_t value)
{
	m_CommentsAreaWidth = value;
	m_CommentsAreaWidthIsSet = true;
}

bool ImageExportOptions::commentsAreaWidthIsSet() const
{
	return m_CommentsAreaWidthIsSet;
}

void ImageExportOptions::unsetCommentsAreaWidth()
{
	m_CommentsAreaWidthIsSet = false;
}

utility::string_t ImageExportOptions::getCommentsAreaColor() const
{
	return m_CommentsAreaColor;
}

void ImageExportOptions::setCommentsAreaColor(utility::string_t value)
{
	m_CommentsAreaColor = value;
	
}

web::json::value ImageExportOptions::toJson() const
{
	web::json::value val = this->ImageExportOptionsBase::toJson();
	if (!m_NotesPosition.empty())
	{
		val[utility::conversions::to_string_t("NotesPosition")] = ModelBase::toJson(m_NotesPosition);
	}
	if (!m_CommentsPosition.empty())
	{
		val[utility::conversions::to_string_t("CommentsPosition")] = ModelBase::toJson(m_CommentsPosition);
	}
	if(m_CommentsAreaWidthIsSet)
	{
		val[utility::conversions::to_string_t("CommentsAreaWidth")] = ModelBase::toJson(m_CommentsAreaWidth);
	}
	if (!m_CommentsAreaColor.empty())
	{
		val[utility::conversions::to_string_t("CommentsAreaColor")] = ModelBase::toJson(m_CommentsAreaColor);
	}
	return val;
}

void ImageExportOptions::fromJson(web::json::value& val)
{
	this->ImageExportOptionsBase::fromJson(val);
	web::json::value* jsonForNotesPosition = ModelBase::getField(val, "NotesPosition");
	if(jsonForNotesPosition != nullptr && !jsonForNotesPosition->is_null())
	{
		setNotesPosition(ModelBase::stringFromJson(*jsonForNotesPosition));
	}
	web::json::value* jsonForCommentsPosition = ModelBase::getField(val, "CommentsPosition");
	if(jsonForCommentsPosition != nullptr && !jsonForCommentsPosition->is_null())
	{
		setCommentsPosition(ModelBase::stringFromJson(*jsonForCommentsPosition));
	}
	web::json::value* jsonForCommentsAreaWidth = ModelBase::getField(val, "CommentsAreaWidth");
	if(jsonForCommentsAreaWidth != nullptr && !jsonForCommentsAreaWidth->is_null() && jsonForCommentsAreaWidth->is_number())
	{
		setCommentsAreaWidth(ModelBase::int32_tFromJson(*jsonForCommentsAreaWidth));
	}
	web::json::value* jsonForCommentsAreaColor = ModelBase::getField(val, "CommentsAreaColor");
	if(jsonForCommentsAreaColor != nullptr && !jsonForCommentsAreaColor->is_null())
	{
		setCommentsAreaColor(ModelBase::stringFromJson(*jsonForCommentsAreaColor));
	}
}

}
}

