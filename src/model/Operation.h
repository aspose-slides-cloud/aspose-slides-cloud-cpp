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

/*
 * Operation.h
 *
 * 
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_Operation_H_
#define ASPOSESLIDESCLOUD_MODEL_Operation_H_

#include "../ModelBase.h"

#include "../model/OperationProgress.h"
#include <cpprest/details/basic_types.h>
#include <cpprest/asyncrt_utils.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// 
/// </summary>
class  Operation : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT Operation();
	ASPOSE_DLL_EXPORT virtual ~Operation();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getId() const;
	ASPOSE_DLL_EXPORT void setId(utility::string_t value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getMethod() const;
	ASPOSE_DLL_EXPORT void setMethod(utility::string_t value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getStatus() const;
	ASPOSE_DLL_EXPORT void setStatus(utility::string_t value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<OperationProgress> getProgress() const;
	ASPOSE_DLL_EXPORT void setProgress(std::shared_ptr<OperationProgress> value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::datetime getCreated() const;
	ASPOSE_DLL_EXPORT void setCreated(utility::datetime value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::datetime getStarted() const;
	ASPOSE_DLL_EXPORT void setStarted(utility::datetime value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::datetime getFailed() const;
	ASPOSE_DLL_EXPORT void setFailed(utility::datetime value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::datetime getCanceled() const;
	ASPOSE_DLL_EXPORT void setCanceled(utility::datetime value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::datetime getFinished() const;
	ASPOSE_DLL_EXPORT void setFinished(utility::datetime value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getError() const;
	ASPOSE_DLL_EXPORT void setError(utility::string_t value);

protected:
	utility::string_t m_Id;
	utility::string_t m_Method;
	utility::string_t m_Status;
	std::shared_ptr<OperationProgress> m_Progress;
	utility::datetime m_Created;
	utility::datetime m_Started;
	utility::datetime m_Failed;
	utility::datetime m_Canceled;
	utility::datetime m_Finished;
	utility::string_t m_Error;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_Operation_H_ */
