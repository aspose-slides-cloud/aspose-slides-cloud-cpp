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
#include "OperationProgress.h"

namespace asposeslidescloud {
namespace model {

OperationProgress::OperationProgress()
{
	setStepIndex(0);
	setStepCount(0);
}

OperationProgress::~OperationProgress()
{
}

utility::string_t OperationProgress::getDescription() const
{
	return m_Description;
}

void OperationProgress::setDescription(utility::string_t value)
{
	m_Description = value;
	
}

int32_t OperationProgress::getStepIndex() const
{
	return m_StepIndex;
}

void OperationProgress::setStepIndex(int32_t value)
{
	m_StepIndex = value;
	
}

int32_t OperationProgress::getStepCount() const
{
	return m_StepCount;
}

void OperationProgress::setStepCount(int32_t value)
{
	m_StepCount = value;
	
}

web::json::value OperationProgress::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Description.empty())
	{
		val[utility::conversions::to_string_t("Description")] = ModelBase::toJson(m_Description);
	}
	val[utility::conversions::to_string_t("StepIndex")] = ModelBase::toJson(m_StepIndex);
	val[utility::conversions::to_string_t("StepCount")] = ModelBase::toJson(m_StepCount);
	return val;
}

void OperationProgress::fromJson(web::json::value& val)
{
	web::json::value* jsonForDescription = ModelBase::getField(val, "Description");
	if(jsonForDescription != nullptr && !jsonForDescription->is_null())
	{
		setDescription(ModelBase::stringFromJson(*jsonForDescription));
	}
	web::json::value* jsonForStepIndex = ModelBase::getField(val, "StepIndex");
	if(jsonForStepIndex != nullptr && !jsonForStepIndex->is_null() && jsonForStepIndex->is_number())
	{
		setStepIndex(ModelBase::int32_tFromJson(*jsonForStepIndex));
	}
	web::json::value* jsonForStepCount = ModelBase::getField(val, "StepCount");
	if(jsonForStepCount != nullptr && !jsonForStepCount->is_null() && jsonForStepCount->is_number())
	{
		setStepCount(ModelBase::int32_tFromJson(*jsonForStepCount));
	}
}

}
}

