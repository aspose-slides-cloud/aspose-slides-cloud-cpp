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
#include "SaveSlide.h"

namespace asposeslidescloud {
namespace model {

SaveSlide::SaveSlide()
{
	m_WidthIsSet = false;
	m_HeightIsSet = false;
	setType(L"SaveSlide");
}

SaveSlide::~SaveSlide()
{
}

std::shared_ptr<OutputFile> SaveSlide::getOutput() const
{
	return m_Output;
}

void SaveSlide::setOutput(std::shared_ptr<OutputFile> value)
{
	m_Output = value;
	
}

utility::string_t SaveSlide::getFormat() const
{
	return m_Format;
}

void SaveSlide::setFormat(utility::string_t value)
{
	m_Format = value;
	
}

std::shared_ptr<ExportOptions> SaveSlide::getOptions() const
{
	return m_Options;
}

void SaveSlide::setOptions(std::shared_ptr<ExportOptions> value)
{
	m_Options = value;
	
}

int32_t SaveSlide::getWidth() const
{
	return m_Width;
}

void SaveSlide::setWidth(int32_t value)
{
	m_Width = value;
	m_WidthIsSet = true;
}

bool SaveSlide::widthIsSet() const
{
	return m_WidthIsSet;
}

void SaveSlide::unsetWidth()
{
	m_WidthIsSet = false;
}

int32_t SaveSlide::getHeight() const
{
	return m_Height;
}

void SaveSlide::setHeight(int32_t value)
{
	m_Height = value;
	m_HeightIsSet = true;
}

bool SaveSlide::heightIsSet() const
{
	return m_HeightIsSet;
}

void SaveSlide::unsetHeight()
{
	m_HeightIsSet = false;
}

int32_t SaveSlide::getPosition() const
{
	return m_Position;
}

void SaveSlide::setPosition(int32_t value)
{
	m_Position = value;
	
}

web::json::value SaveSlide::toJson() const
{
	web::json::value val = this->Task::toJson();
	if (m_Output != nullptr)
	{
		val[utility::conversions::to_string_t("Output")] = ModelBase::toJson(m_Output);
	}
	if (!m_Format.empty())
	{
		val[utility::conversions::to_string_t("Format")] = ModelBase::toJson(m_Format);
	}
	if (m_Options != nullptr)
	{
		val[utility::conversions::to_string_t("Options")] = ModelBase::toJson(m_Options);
	}
	if(m_WidthIsSet)
	{
		val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
	}
	if(m_HeightIsSet)
	{
		val[utility::conversions::to_string_t("Height")] = ModelBase::toJson(m_Height);
	}
	val[utility::conversions::to_string_t("Position")] = ModelBase::toJson(m_Position);
	return val;
}

void SaveSlide::fromJson(web::json::value& val)
{
	this->Task::fromJson(val);
	web::json::value* jsonForOutput = ModelBase::getField(val, "Output");
	if(jsonForOutput != nullptr && !jsonForOutput->is_null())
	{
		std::shared_ptr<void> instanceForOutput = asposeslidescloud::api::ClassRegistry::deserialize(L"OutputFile", *jsonForOutput);
		setOutput(std::static_pointer_cast<OutputFile>(instanceForOutput));
	}
	web::json::value* jsonForFormat = ModelBase::getField(val, "Format");
	if(jsonForFormat != nullptr && !jsonForFormat->is_null())
	{
		setFormat(ModelBase::stringFromJson(*jsonForFormat));
	}
	web::json::value* jsonForOptions = ModelBase::getField(val, "Options");
	if(jsonForOptions != nullptr && !jsonForOptions->is_null())
	{
		std::shared_ptr<void> instanceForOptions = asposeslidescloud::api::ClassRegistry::deserialize(L"ExportOptions", *jsonForOptions);
		setOptions(std::static_pointer_cast<ExportOptions>(instanceForOptions));
	}
	web::json::value* jsonForWidth = ModelBase::getField(val, "Width");
	if(jsonForWidth != nullptr && !jsonForWidth->is_null() && jsonForWidth->is_number())
	{
		setWidth(ModelBase::int32_tFromJson(*jsonForWidth));
	}
	web::json::value* jsonForHeight = ModelBase::getField(val, "Height");
	if(jsonForHeight != nullptr && !jsonForHeight->is_null() && jsonForHeight->is_number())
	{
		setHeight(ModelBase::int32_tFromJson(*jsonForHeight));
	}
	web::json::value* jsonForPosition = ModelBase::getField(val, "Position");
	if(jsonForPosition != nullptr && !jsonForPosition->is_null() && jsonForPosition->is_number())
	{
		setPosition(ModelBase::int32_tFromJson(*jsonForPosition));
	}
}

}
}

