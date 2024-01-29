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
#include "SlideReplaceResult.h"

namespace asposeslidescloud {
namespace model {

SlideReplaceResult::SlideReplaceResult()
{
	setWidth(0.0);
	setHeight(0.0);
	setMatches(0);
}

SlideReplaceResult::~SlideReplaceResult()
{
}

int32_t SlideReplaceResult::getMatches() const
{
	return m_Matches;
}

void SlideReplaceResult::setMatches(int32_t value)
{
	m_Matches = value;
	
}

web::json::value SlideReplaceResult::toJson() const
{
	web::json::value val = this->Slide::toJson();
	val[utility::conversions::to_string_t("Matches")] = ModelBase::toJson(m_Matches);
	return val;
}

void SlideReplaceResult::fromJson(web::json::value& val)
{
	this->Slide::fromJson(val);
	web::json::value* jsonForMatches = ModelBase::getField(val, "Matches");
	if(jsonForMatches != nullptr && !jsonForMatches->is_null() && jsonForMatches->is_number())
	{
		setMatches(ModelBase::int32_tFromJson(*jsonForMatches));
	}
}

}
}

