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

#ifndef _ApiClient_H_
#define _ApiClient_H_

#include <cpprest/http_client.h>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/replace.hpp>
#include "ApiConfiguration.h"
#include "ApiException.h"
#include "HttpContent.h"

namespace asposeslidescloud {
namespace api {

class  ApiClient
{
public:
	ApiClient(std::shared_ptr<ApiConfiguration> configuration);
	virtual ~ApiClient();

	pplx::task<web::http::http_response> callApi(
		const utility::string_t& path,
		const utility::string_t& method,
		const std::map<utility::string_t, utility::string_t>& queryParams,
		const std::map<utility::string_t, utility::string_t>& headerParams,
		const std::shared_ptr<asposeslidescloud::model::IHttpBody> postBody,
		const std::vector<std::shared_ptr<asposeslidescloud::model::HttpContent>> files) const;

	static utility::string_t parameterToString(utility::string_t value);
	static utility::string_t parameterToString(int32_t value);
	static utility::string_t parameterToString(bool value);
	static void setPathParameter(utility::string_t& path, std::string name, utility::string_t value);
	static void setPathParameter(utility::string_t& path, std::string name, int32_t value);
	static void setPathParameter(utility::string_t& path, std::string name, double value);
	static void setQueryParameter(
		std::map<utility::string_t, utility::string_t>& queryParams, utility::string_t name, utility::string_t value);
	static void setQueryParameter(
		std::map<utility::string_t, utility::string_t>& queryParams, utility::string_t name, std::vector<int32_t> value);
	static void setQueryParameter(
		std::map<utility::string_t, utility::string_t>& queryParams, utility::string_t name, int32_t value);
	static void setQueryParameter(
		std::map<utility::string_t, utility::string_t>& queryParams, utility::string_t name, double value);
	static void setBoolQueryParameter(
		std::map<utility::string_t, utility::string_t>& queryParams, utility::string_t name, bool value);
	void logString(utility::string_t contents) const;
	void assertResponseException(web::http::http_response response, std::string methodName) const;
private:
	std::shared_ptr<ApiConfiguration> m_Configuration;
	void setRequestHeaders(web::http::http_request& request, const std::map<utility::string_t, utility::string_t>& headerParams) const;
	void logRequest(web::http::http_request& request) const;
	void logResponse(web::http::http_response& response) const;
};

}
}

#endif /* _ApiClient_H_ */
