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

#include "ApiClient.h"

#include <cpprest/details/basic_types.h>
#include <cpprest/json.h>

namespace asposeslidescloud {
namespace api {

ApiClient::ApiClient(std::shared_ptr<ApiConfiguration> configuration) : m_Configuration(configuration)
{
}

ApiClient::~ApiClient()
{
}

pplx::task<web::http::http_response> ApiClient::callApi(
	const utility::string_t& path,
	const utility::string_t& method,
	const std::map<utility::string_t, utility::string_t>& queryParams,
	const std::shared_ptr<asposeslidescloud::model::IHttpBody> postBody) const
{
	web::http::client::http_client_config cfg;
	cfg.set_timeout(std::chrono::minutes(2));
	web::http::client::http_client client(m_Configuration->getBasePath(), cfg);
	web::http::http_request request;
	web::http::uri_builder builder(path);
	for (auto& kvp : queryParams)
	{
		builder.append_query(kvp.first, kvp.second);
	}
	request.set_request_uri(builder.to_uri());
	request.set_method(method);
	setRequestHeaders(request);
	logRequest(request);
	if (postBody != nullptr)
	{
		std::stringstream data;
		postBody->writeTo(data);
		auto bodyString = data.str();
		auto length = bodyString.size();
		try {
			logString(utility::conversions::to_string_t(bodyString));
		}
		catch (...) {
			logString(utility::conversions::to_string_t("length: " + std::to_string(length)));
		}
		request.set_body(
			concurrency::streams::bytestream::open_istream(std::move(bodyString)),
			length,
			utility::conversions::to_string_t("application/octet-stream"));
	}
	return client.request(request).then([=](web::http::http_response response) {
		logResponse(response);
		return response;
	});
}

void ApiClient::setRequestHeaders(web::http::http_request& request) const
{
	request.headers().add(utility::conversions::to_string_t("x-aspose-client"), utility::conversions::to_string_t("c++ sdk"));
	request.headers().add(utility::conversions::to_string_t("x-aspose-client-version"), m_Configuration->getApiVersion());
	if (m_Configuration->getTimeout())
	{
		request.headers().add(utility::conversions::to_string_t("x-aspose-timeout"), m_Configuration->getTimeout());
	}
	for (auto& kvp : m_Configuration->getHeaders())
	{
		request.headers().add(kvp.first, kvp.second);
	}
	if (!m_Configuration->getAppSid().empty() || !m_Configuration->getAccessToken().empty())
	{
		if (m_Configuration->getAccessToken().empty())
		{
			web::http::client::http_client authClient(m_Configuration->getBaseAuthUrl());
			web::http::http_request authRequest;
			web::http::uri_builder authBuilder(U("connect/token"));
			authRequest.set_request_uri(authBuilder.to_uri());
			authRequest.set_body(
				utility::conversions::to_string_t("grant_type=client_credentials&client_id=")
				+ m_Configuration->getAppSid()
				+ utility::conversions::to_string_t("&client_secret=")
				+ m_Configuration->getAppKey(),
				utility::conversions::to_string_t("application/x-www-form-urlencoded"));
			authRequest.set_method(web::http::methods::POST);
			authClient
				.request(authRequest)
				.then([](const web::http::http_response& response) {
				return response.extract_json();
			}).then([&](const web::json::value& json) {
				m_Configuration->setAccessToken(web::json::value(json)[utility::conversions::to_string_t("access_token")].as_string());
			}).wait();
		}
		request.headers().add(
			utility::conversions::to_string_t("Authorization"),
			utility::conversions::to_string_t("Bearer ") + m_Configuration->getAccessToken());
	}
}

void ApiClient::logRequest(web::http::http_request& request) const
{
	if (!m_Configuration->getDebug()) return;
	ucout << request.method() << _XPLATSTR(": ") << request.request_uri().to_string() << _XPLATSTR('\nHeaders\n');
	for (auto& kvp : request.headers())
	{
		ucout << kvp.first << _XPLATSTR(": ") << kvp.second << _XPLATSTR('\n');
	}
	ucout << _XPLATSTR('\n');
}

void ApiClient::logResponse(web::http::http_response& response) const
{
	if (!m_Configuration->getDebug()) return;
	ucout << _XPLATSTR("Response ") << response.status_code() << _XPLATSTR(": ") << response.reason_phrase() << _XPLATSTR('\nHeaders\n');
	for (auto& kvp : response.headers())
	{
		ucout << kvp.first << _XPLATSTR(": ") << kvp.second << _XPLATSTR('\n');
	}
	ucout << _XPLATSTR('\n');
}

void ApiClient::logString(utility::string_t content) const
{
	if (!m_Configuration->getDebug()) return;
	ucout << content << _XPLATSTR('\n');
}

void ApiClient::setBoolQueryParameter(
	std::map<utility::string_t, utility::string_t>& queryParams, utility::string_t name, bool value)
{
	setQueryParameter(queryParams, name, ApiClient::parameterToString(value));
}

void ApiClient::setQueryParameter(
	std::map<utility::string_t, utility::string_t>& queryParams, utility::string_t name, utility::string_t value)
{
	if (!value.empty())
	{
		queryParams[name] = value;
	}
}

void ApiClient::setQueryParameter(
	std::map<utility::string_t, utility::string_t>& queryParams, utility::string_t name, int32_t value)
{
	std::ostringstream oss;
	oss << value;
	queryParams[name] = utility::conversions::to_string_t(oss.str());
}

void ApiClient::setQueryParameter(
	std::map<utility::string_t, utility::string_t>& queryParams, utility::string_t name, std::vector<int32_t> value)
{
	std::ostringstream oss;
	if (!value.empty())
	{
		std::copy(value.begin(), value.end() - 1, std::ostream_iterator<int>(oss, ","));
		oss << value.back();
		queryParams[name] = utility::conversions::to_string_t(oss.str());
	}
}

void ApiClient::setPathParameter(utility::string_t& path, std::string name, utility::string_t value)
{
	if (!value.empty())
	{
		value = utility::conversions::to_string_t("/") + value;
	}
	boost::replace_all(path, utility::conversions::to_string_t("/{") + utility::conversions::to_string_t(name) + utility::conversions::to_string_t("}"), value);
}

void ApiClient::setPathParameter(utility::string_t& path, std::string name, int32_t value)
{
	std::stringstream valueAsStringStream;
	valueAsStringStream << value;
	setPathParameter(path, name, utility::conversions::to_string_t(valueAsStringStream.str()));
}

utility::string_t ApiClient::parameterToString(utility::string_t value)
{
	return value;
}

utility::string_t ApiClient::parameterToString(int32_t value)
{
	std::stringstream valueAsStringStream;
	valueAsStringStream << value;
	return utility::conversions::to_string_t(valueAsStringStream.str());
}

utility::string_t ApiClient::parameterToString(bool value)
{
	return utility::conversions::to_string_t(value ? "true" : "false");
}

}
}
