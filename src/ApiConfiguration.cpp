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

#include "ApiConfiguration.h"

namespace asposeslidescloud {
namespace api {

ApiConfiguration::ApiConfiguration()
{
	m_BaseUrl = utility::conversions::to_string_t("https://api.aspose.cloud");
	m_BaseAuthUrl = utility::conversions::to_string_t("");
	m_Version = utility::conversions::to_string_t("v3.0");
	m_ApiVersion = utility::conversions::to_string_t("22.1.0");
	m_Debug = false;
	m_Timeout = 0;
}

ApiConfiguration::~ApiConfiguration()
{
}

utility::string_t ApiConfiguration::getBaseUrl() const
{
    return m_BaseUrl;
}

void ApiConfiguration::setBaseUrl(const utility::string_t& value)
{
    m_BaseUrl = value;
}

utility::string_t ApiConfiguration::getBaseAuthUrl() const
{
	return m_BaseAuthUrl.empty() ? m_BaseUrl : m_BaseAuthUrl;
}

void ApiConfiguration::setBaseAuthUrl(const utility::string_t& value)
{
	m_BaseAuthUrl = value;
}

utility::string_t ApiConfiguration::getVersion() const
{
	return m_Version;
}

void ApiConfiguration::setVersion(const utility::string_t& value)
{
	m_Version = value;
}

utility::string_t ApiConfiguration::getApiVersion() const
{
	return m_ApiVersion;
}

utility::string_t ApiConfiguration::getBasePath() const
{
	return m_BaseUrl + utility::conversions::to_string_t("/") + m_Version;
}

std::map<utility::string_t, utility::string_t>& ApiConfiguration::getHeaders()
{
    return m_Headers;
}

void ApiConfiguration::setHeader(const utility::string_t& key, const utility::string_t& value)
{
	m_Headers[key] = value;
}

utility::string_t ApiConfiguration::getAppSid() const
{
    return m_AppSid;
}

void ApiConfiguration::setAppSid(const utility::string_t& value)
{
    m_AppSid = value;
}

utility::string_t ApiConfiguration::getAppKey() const
{
	return m_AppKey;
}

void ApiConfiguration::setAppKey(const utility::string_t& value)
{
	m_AppKey = value;
}

utility::string_t ApiConfiguration::getAccessToken() const
{
	return m_AccessToken;
}

void ApiConfiguration::setAccessToken(const utility::string_t& value)
{
	m_AccessToken = value;
}

bool ApiConfiguration::getDebug() const
{
	return m_Debug;
}

void ApiConfiguration::setDebug(const bool value)
{
	m_Debug = value;
}

int32_t ApiConfiguration::getTimeout() const
{
	return m_Timeout;
}

void ApiConfiguration::setTimeout(const int32_t value)
{
	m_Timeout = value;
}

}
}
