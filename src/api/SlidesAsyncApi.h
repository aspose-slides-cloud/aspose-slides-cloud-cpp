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
 * SlidesAsyncApi.h
 *
 * 
 */

#ifndef ASPOSESLIDESCLOUD_API_SlidesAsyncApi_H_
#define ASPOSESLIDESCLOUD_API_SlidesAsyncApi_H_

#include <boost/optional.hpp>

#include "../defines.h"
#include "../ApiClient.h"
#include "../JsonBody.h"
#include "../StringBody.h"
#include "../ClassRegistry.h"

#include "../model/ExportOptions.h"
#include "../HttpContent.h"

#include "../model/Operation.h"
#include <cpprest/details/basic_types.h>

namespace asposeslidescloud {
namespace api {

using namespace asposeslidescloud::model;

class  SlidesAsyncApi
{
public:
	ASPOSE_DLL_EXPORT SlidesAsyncApi(std::shared_ptr<ApiConfiguration> configuration);
	ASPOSE_DLL_EXPORT SlidesAsyncApi(utility::string_t appSid, utility::string_t appKey);
	ASPOSE_DLL_EXPORT virtual ~SlidesAsyncApi();

	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<HttpContent> getOperationResult(utility::string_t id);

	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<std::shared_ptr<Operation>> getOperationStatus(utility::string_t id);

	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<utility::string_t> startConvert(std::shared_ptr<HttpContent> document, utility::string_t format, utility::string_t password = utility::string_t(), utility::string_t storage = utility::string_t(), utility::string_t fontsFolder = utility::string_t(), std::vector<int32_t> slides = std::vector<int32_t>(), std::shared_ptr<ExportOptions> options = std::shared_ptr<ExportOptions>());

	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT pplx::task<utility::string_t> startDownloadPresentation(utility::string_t name, utility::string_t format, std::shared_ptr<ExportOptions> options = std::shared_ptr<ExportOptions>(), utility::string_t password = utility::string_t(), utility::string_t folder = utility::string_t(), utility::string_t storage = utility::string_t(), utility::string_t fontsFolder = utility::string_t(), std::vector<int32_t> slides = std::vector<int32_t>());

protected:
	ApiClient* m_ApiClient;
};

}
}

#endif /* ASPOSESLIDESCLOUD_API_SlidesAsyncApi_H_ */
