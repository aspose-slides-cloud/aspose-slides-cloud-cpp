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
#include "Pipeline.h"

namespace asposeslidescloud {
namespace model {

Pipeline::Pipeline()
{
}

Pipeline::~Pipeline()
{
}

std::shared_ptr<Input> Pipeline::getInput() const
{
	return m_Input;
}

void Pipeline::setInput(std::shared_ptr<Input> value)
{
	m_Input = value;
	
}

std::vector<std::shared_ptr<Task>> Pipeline::getTasks() const
{
	return m_Tasks;
}

void Pipeline::setTasks(std::vector<std::shared_ptr<Task>> value)
{
	m_Tasks = value;
	
}

web::json::value Pipeline::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_Input != nullptr)
	{
		val[utility::conversions::to_string_t("Input")] = ModelBase::toJson(m_Input);
	}
	if (m_Tasks.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Tasks)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Tasks")] = web::json::value::array(jsonArray);
	}
	return val;
}

void Pipeline::fromJson(web::json::value& val)
{
	web::json::value* jsonForInput = ModelBase::getField(val, "Input");
	if(jsonForInput != nullptr && !jsonForInput->is_null())
	{
		std::shared_ptr<void> instanceForInput = asposeslidescloud::api::ClassRegistry::deserialize(L"Input", *jsonForInput);
		setInput(std::static_pointer_cast<Input>(instanceForInput));
	}
	web::json::value* jsonForTasks = ModelBase::getField(val, "Tasks");
	if(jsonForTasks != nullptr && !jsonForTasks->is_null())
	{
		{
			m_Tasks.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForTasks->as_array())
			{
				if(item.is_null())
				{
					m_Tasks.push_back(std::shared_ptr<Task>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"Task", item);
					m_Tasks.push_back(std::static_pointer_cast<Task>(newItem));
				}
			}
        	}
	}
}

}
}

