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
#include "Operation.h"

namespace asposeslidescloud {
namespace model {

Operation::Operation()
{
}

Operation::~Operation()
{
}

utility::string_t Operation::getId() const
{
	return m_Id;
}

void Operation::setId(utility::string_t value)
{
	m_Id = value;
	
}

utility::string_t Operation::getMethod() const
{
	return m_Method;
}

void Operation::setMethod(utility::string_t value)
{
	m_Method = value;
	
}

utility::string_t Operation::getStatus() const
{
	return m_Status;
}

void Operation::setStatus(utility::string_t value)
{
	m_Status = value;
	
}

std::shared_ptr<OperationProgress> Operation::getProgress() const
{
	return m_Progress;
}

void Operation::setProgress(std::shared_ptr<OperationProgress> value)
{
	m_Progress = value;
	
}

utility::datetime Operation::getCreated() const
{
	return m_Created;
}

void Operation::setCreated(utility::datetime value)
{
	m_Created = value;
	
}

utility::datetime Operation::getStarted() const
{
	return m_Started;
}

void Operation::setStarted(utility::datetime value)
{
	m_Started = value;
	
}

utility::datetime Operation::getFailed() const
{
	return m_Failed;
}

void Operation::setFailed(utility::datetime value)
{
	m_Failed = value;
	
}

utility::datetime Operation::getCanceled() const
{
	return m_Canceled;
}

void Operation::setCanceled(utility::datetime value)
{
	m_Canceled = value;
	
}

utility::datetime Operation::getFinished() const
{
	return m_Finished;
}

void Operation::setFinished(utility::datetime value)
{
	m_Finished = value;
	
}

std::shared_ptr<OperationError> Operation::getError() const
{
	return m_Error;
}

void Operation::setError(std::shared_ptr<OperationError> value)
{
	m_Error = value;
	
}

web::json::value Operation::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Id.empty())
	{
		val[utility::conversions::to_string_t("Id")] = ModelBase::toJson(m_Id);
	}
	if (!m_Method.empty())
	{
		val[utility::conversions::to_string_t("Method")] = ModelBase::toJson(m_Method);
	}
	if (!m_Status.empty())
	{
		val[utility::conversions::to_string_t("Status")] = ModelBase::toJson(m_Status);
	}
	if (m_Progress != nullptr)
	{
		val[utility::conversions::to_string_t("Progress")] = ModelBase::toJson(m_Progress);
	}
	if (m_Created.is_initialized())
	{
		val[utility::conversions::to_string_t("Created")] = ModelBase::toJson(m_Created);
	}
	if (m_Started.is_initialized())
	{
		val[utility::conversions::to_string_t("Started")] = ModelBase::toJson(m_Started);
	}
	if (m_Failed.is_initialized())
	{
		val[utility::conversions::to_string_t("Failed")] = ModelBase::toJson(m_Failed);
	}
	if (m_Canceled.is_initialized())
	{
		val[utility::conversions::to_string_t("Canceled")] = ModelBase::toJson(m_Canceled);
	}
	if (m_Finished.is_initialized())
	{
		val[utility::conversions::to_string_t("Finished")] = ModelBase::toJson(m_Finished);
	}
	if (m_Error != nullptr)
	{
		val[utility::conversions::to_string_t("Error")] = ModelBase::toJson(m_Error);
	}
	return val;
}

void Operation::fromJson(web::json::value& val)
{
	web::json::value* jsonForId = ModelBase::getField(val, "Id");
	if(jsonForId != nullptr && !jsonForId->is_null())
	{
		setId(ModelBase::stringFromJson(*jsonForId));
	}
	web::json::value* jsonForMethod = ModelBase::getField(val, "Method");
	if(jsonForMethod != nullptr && !jsonForMethod->is_null())
	{
		setMethod(ModelBase::stringFromJson(*jsonForMethod));
	}
	web::json::value* jsonForStatus = ModelBase::getField(val, "Status");
	if(jsonForStatus != nullptr && !jsonForStatus->is_null())
	{
		setStatus(ModelBase::stringFromJson(*jsonForStatus));
	}
	web::json::value* jsonForProgress = ModelBase::getField(val, "Progress");
	if(jsonForProgress != nullptr && !jsonForProgress->is_null())
	{
		std::shared_ptr<void> instanceForProgress = asposeslidescloud::api::ClassRegistry::deserialize(L"OperationProgress", *jsonForProgress);
		setProgress(std::static_pointer_cast<OperationProgress>(instanceForProgress));
	}
	web::json::value* jsonForCreated = ModelBase::getField(val, "Created");
	if(jsonForCreated != nullptr && !jsonForCreated->is_null())
	{
		setCreated(ModelBase::dateFromJson(*jsonForCreated));
	}
	web::json::value* jsonForStarted = ModelBase::getField(val, "Started");
	if(jsonForStarted != nullptr && !jsonForStarted->is_null())
	{
		setStarted(ModelBase::dateFromJson(*jsonForStarted));
	}
	web::json::value* jsonForFailed = ModelBase::getField(val, "Failed");
	if(jsonForFailed != nullptr && !jsonForFailed->is_null())
	{
		setFailed(ModelBase::dateFromJson(*jsonForFailed));
	}
	web::json::value* jsonForCanceled = ModelBase::getField(val, "Canceled");
	if(jsonForCanceled != nullptr && !jsonForCanceled->is_null())
	{
		setCanceled(ModelBase::dateFromJson(*jsonForCanceled));
	}
	web::json::value* jsonForFinished = ModelBase::getField(val, "Finished");
	if(jsonForFinished != nullptr && !jsonForFinished->is_null())
	{
		setFinished(ModelBase::dateFromJson(*jsonForFinished));
	}
	web::json::value* jsonForError = ModelBase::getField(val, "Error");
	if(jsonForError != nullptr && !jsonForError->is_null())
	{
		std::shared_ptr<void> instanceForError = asposeslidescloud::api::ClassRegistry::deserialize(L"OperationError", *jsonForError);
		setError(std::static_pointer_cast<OperationError>(instanceForError));
	}
}

}
}

