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



#include "PptxExportOptions.h"

namespace asposeslidescloud {
namespace model {

PptxExportOptions::PptxExportOptions()
{
	setFormat(L"pptx");
}

PptxExportOptions::~PptxExportOptions()
{
}

utility::string_t PptxExportOptions::getConformance() const
{
	return m_Conformance;
}

void PptxExportOptions::setConformance(utility::string_t value)
{
	m_Conformance = value;
	
}

web::json::value PptxExportOptions::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	if (!m_Conformance.empty())
	{
		val[utility::conversions::to_string_t("Conformance")] = ModelBase::toJson(m_Conformance);
	}
	return val;
}

void PptxExportOptions::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
	web::json::value* jsonForConformance = ModelBase::getField(val, "Conformance");
	if(jsonForConformance != nullptr && !jsonForConformance->is_null())
	{
		setConformance(ModelBase::stringFromJson(*jsonForConformance));
	}
}

}
}

