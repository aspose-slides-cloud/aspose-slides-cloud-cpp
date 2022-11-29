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
#include "XpsExportOptions.h"

namespace asposeslidescloud {
namespace model {

XpsExportOptions::XpsExportOptions()
{
	m_ShowHiddenSlidesIsSet = false;
	m_SaveMetafilesAsPngIsSet = false;
	m_DrawSlidesFrameIsSet = false;
	setFormat(L"xps");
}

XpsExportOptions::~XpsExportOptions()
{
}

bool XpsExportOptions::isShowHiddenSlides() const
{
	return m_ShowHiddenSlides;
}

void XpsExportOptions::setShowHiddenSlides(bool value)
{
	m_ShowHiddenSlides = value;
	m_ShowHiddenSlidesIsSet = true;
}

bool XpsExportOptions::showHiddenSlidesIsSet() const
{
	return m_ShowHiddenSlidesIsSet;
}

void XpsExportOptions::unsetShowHiddenSlides()
{
	m_ShowHiddenSlidesIsSet = false;
}

bool XpsExportOptions::isSaveMetafilesAsPng() const
{
	return m_SaveMetafilesAsPng;
}

void XpsExportOptions::setSaveMetafilesAsPng(bool value)
{
	m_SaveMetafilesAsPng = value;
	m_SaveMetafilesAsPngIsSet = true;
}

bool XpsExportOptions::saveMetafilesAsPngIsSet() const
{
	return m_SaveMetafilesAsPngIsSet;
}

void XpsExportOptions::unsetSaveMetafilesAsPng()
{
	m_SaveMetafilesAsPngIsSet = false;
}

bool XpsExportOptions::isDrawSlidesFrame() const
{
	return m_DrawSlidesFrame;
}

void XpsExportOptions::setDrawSlidesFrame(bool value)
{
	m_DrawSlidesFrame = value;
	m_DrawSlidesFrameIsSet = true;
}

bool XpsExportOptions::drawSlidesFrameIsSet() const
{
	return m_DrawSlidesFrameIsSet;
}

void XpsExportOptions::unsetDrawSlidesFrame()
{
	m_DrawSlidesFrameIsSet = false;
}

web::json::value XpsExportOptions::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	if(m_ShowHiddenSlidesIsSet)
	{
		val[utility::conversions::to_string_t("ShowHiddenSlides")] = ModelBase::toJson(m_ShowHiddenSlides);
	}
	if(m_SaveMetafilesAsPngIsSet)
	{
		val[utility::conversions::to_string_t("SaveMetafilesAsPng")] = ModelBase::toJson(m_SaveMetafilesAsPng);
	}
	if(m_DrawSlidesFrameIsSet)
	{
		val[utility::conversions::to_string_t("DrawSlidesFrame")] = ModelBase::toJson(m_DrawSlidesFrame);
	}
	return val;
}

void XpsExportOptions::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
	web::json::value* jsonForShowHiddenSlides = ModelBase::getField(val, "ShowHiddenSlides");
	if(jsonForShowHiddenSlides != nullptr && !jsonForShowHiddenSlides->is_null())
	{
		setShowHiddenSlides(ModelBase::boolFromJson(*jsonForShowHiddenSlides));
	}
	web::json::value* jsonForSaveMetafilesAsPng = ModelBase::getField(val, "SaveMetafilesAsPng");
	if(jsonForSaveMetafilesAsPng != nullptr && !jsonForSaveMetafilesAsPng->is_null())
	{
		setSaveMetafilesAsPng(ModelBase::boolFromJson(*jsonForSaveMetafilesAsPng));
	}
	web::json::value* jsonForDrawSlidesFrame = ModelBase::getField(val, "DrawSlidesFrame");
	if(jsonForDrawSlidesFrame != nullptr && !jsonForDrawSlidesFrame->is_null())
	{
		setDrawSlidesFrame(ModelBase::boolFromJson(*jsonForDrawSlidesFrame));
	}
}

}
}

