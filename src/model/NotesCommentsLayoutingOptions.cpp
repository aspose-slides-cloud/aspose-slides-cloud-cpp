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
#include "NotesCommentsLayoutingOptions.h"

namespace asposeslidescloud {
namespace model {

NotesCommentsLayoutingOptions::NotesCommentsLayoutingOptions()
{
	m_CommentsAreaWidthIsSet = false;
	m_ShowCommentsByNoAuthorIsSet = false;
	setLayoutType(L"NotesComments");
}

NotesCommentsLayoutingOptions::~NotesCommentsLayoutingOptions()
{
}

utility::string_t NotesCommentsLayoutingOptions::getNotesPosition() const
{
	return m_NotesPosition;
}

void NotesCommentsLayoutingOptions::setNotesPosition(utility::string_t value)
{
	m_NotesPosition = value;
	
}

utility::string_t NotesCommentsLayoutingOptions::getCommentsPosition() const
{
	return m_CommentsPosition;
}

void NotesCommentsLayoutingOptions::setCommentsPosition(utility::string_t value)
{
	m_CommentsPosition = value;
	
}

int32_t NotesCommentsLayoutingOptions::getCommentsAreaWidth() const
{
	return m_CommentsAreaWidth;
}

void NotesCommentsLayoutingOptions::setCommentsAreaWidth(int32_t value)
{
	m_CommentsAreaWidth = value;
	m_CommentsAreaWidthIsSet = true;
}

bool NotesCommentsLayoutingOptions::commentsAreaWidthIsSet() const
{
	return m_CommentsAreaWidthIsSet;
}

void NotesCommentsLayoutingOptions::unsetCommentsAreaWidth()
{
	m_CommentsAreaWidthIsSet = false;
}

utility::string_t NotesCommentsLayoutingOptions::getCommentsAreaColor() const
{
	return m_CommentsAreaColor;
}

void NotesCommentsLayoutingOptions::setCommentsAreaColor(utility::string_t value)
{
	m_CommentsAreaColor = value;
	
}

bool NotesCommentsLayoutingOptions::isShowCommentsByNoAuthor() const
{
	return m_ShowCommentsByNoAuthor;
}

void NotesCommentsLayoutingOptions::setShowCommentsByNoAuthor(bool value)
{
	m_ShowCommentsByNoAuthor = value;
	m_ShowCommentsByNoAuthorIsSet = true;
}

bool NotesCommentsLayoutingOptions::showCommentsByNoAuthorIsSet() const
{
	return m_ShowCommentsByNoAuthorIsSet;
}

void NotesCommentsLayoutingOptions::unsetShowCommentsByNoAuthor()
{
	m_ShowCommentsByNoAuthorIsSet = false;
}

web::json::value NotesCommentsLayoutingOptions::toJson() const
{
	web::json::value val = this->SlidesLayoutOptions::toJson();
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
	if(m_ShowCommentsByNoAuthorIsSet)
	{
		val[utility::conversions::to_string_t("ShowCommentsByNoAuthor")] = ModelBase::toJson(m_ShowCommentsByNoAuthor);
	}
	return val;
}

void NotesCommentsLayoutingOptions::fromJson(web::json::value& val)
{
	this->SlidesLayoutOptions::fromJson(val);
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
	web::json::value* jsonForShowCommentsByNoAuthor = ModelBase::getField(val, "ShowCommentsByNoAuthor");
	if(jsonForShowCommentsByNoAuthor != nullptr && !jsonForShowCommentsByNoAuthor->is_null())
	{
		setShowCommentsByNoAuthor(ModelBase::boolFromJson(*jsonForShowCommentsByNoAuthor));
	}
}

}
}

