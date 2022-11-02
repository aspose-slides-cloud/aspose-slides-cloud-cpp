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
#include "MergingSource.h"

namespace asposeslidescloud {
namespace model {

MergingSource::MergingSource()
{
	m_SlidesIsSet = false;
}

MergingSource::~MergingSource()
{
}

std::shared_ptr<InputFile> MergingSource::getInput() const
{
	return m_Input;
}

void MergingSource::setInput(std::shared_ptr<InputFile> value)
{
	m_Input = value;
	
}

std::vector<int32_t> MergingSource::getSlides() const
{
	return m_Slides;
}

void MergingSource::setSlides(std::vector<int32_t> value)
{
	m_Slides = value;
	m_SlidesIsSet = true;
}

bool MergingSource::slidesIsSet() const
{
	return m_SlidesIsSet;
}

void MergingSource::unsetSlides()
{
	m_SlidesIsSet = false;
}

web::json::value MergingSource::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_Input != nullptr)
	{
		val[utility::conversions::to_string_t("Input")] = ModelBase::toJson(m_Input);
	}
	if (m_Slides.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Slides)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Slides")] = web::json::value::array(jsonArray);
	}
	return val;
}

void MergingSource::fromJson(web::json::value& val)
{
	web::json::value* jsonForInput = ModelBase::getField(val, "Input");
	if(jsonForInput != nullptr && !jsonForInput->is_null())
	{
		std::shared_ptr<void> instanceForInput = asposeslidescloud::api::ClassRegistry::deserialize(L"InputFile", *jsonForInput);
		setInput(std::static_pointer_cast<InputFile>(instanceForInput));
	}
	web::json::value* jsonForSlides = ModelBase::getField(val, "Slides");
	if(jsonForSlides != nullptr && !jsonForSlides->is_null())
	{
		{
			m_Slides.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForSlides->as_array())
			{
				m_Slides.push_back(ModelBase::int32_tFromJson(item));
			}
        	}
	}
}

}
}

