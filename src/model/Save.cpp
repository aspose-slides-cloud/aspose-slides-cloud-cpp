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



#include "Save.h"

namespace asposeslidescloud {
namespace model {

Save::Save()
{
	setType(L"Save");
}

Save::~Save()
{
}

utility::string_t Save::getFormat() const
{
	return m_Format;
}

void Save::setFormat(utility::string_t value)
{
	m_Format = value;
	
}

std::shared_ptr<OutputFile> Save::getOutput() const
{
	return m_Output;
}

void Save::setOutput(std::shared_ptr<OutputFile> value)
{
	m_Output = value;
	
}

std::shared_ptr<ExportOptions> Save::getOptions() const
{
	return m_Options;
}

void Save::setOptions(std::shared_ptr<ExportOptions> value)
{
	m_Options = value;
	
}

web::json::value Save::toJson() const
{
	web::json::value val = this->Task::toJson();
	if (!m_Format.empty())
	{
		val[utility::conversions::to_string_t("Format")] = ModelBase::toJson(m_Format);
	}
	if (m_Output != nullptr)
	{
		val[utility::conversions::to_string_t("Output")] = ModelBase::toJson(m_Output);
	}
	if (m_Options != nullptr)
	{
		val[utility::conversions::to_string_t("Options")] = ModelBase::toJson(m_Options);
	}
	return val;
}

void Save::fromJson(web::json::value& val)
{
	this->Task::fromJson(val);
	web::json::value* jsonForFormat = ModelBase::getField(val, "Format");
	if(jsonForFormat != nullptr && !jsonForFormat->is_null())
	{
		setFormat(ModelBase::stringFromJson(*jsonForFormat));
	}
	web::json::value* jsonForOutput = ModelBase::getField(val, "Output");
	if(jsonForOutput != nullptr && !jsonForOutput->is_null())
	{
		std::shared_ptr<OutputFile> newItem(new OutputFile());
		newItem->fromJson(*jsonForOutput);
		setOutput(newItem);
	}
	web::json::value* jsonForOptions = ModelBase::getField(val, "Options");
	if(jsonForOptions != nullptr && !jsonForOptions->is_null())
	{
		std::shared_ptr<ExportOptions> newItem(new ExportOptions());
		newItem->fromJson(*jsonForOptions);
		setOptions(newItem);
	}
}

}
}

