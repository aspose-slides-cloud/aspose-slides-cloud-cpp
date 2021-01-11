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

#ifndef _ApiConfiguration_H_
#define _ApiConfiguration_H_

#include <map>
#include "defines.h"

#include <cpprest/details/basic_types.h>
#include <cpprest/http_client.h>

namespace asposeslidescloud {
namespace api {

class  ApiConfiguration
{
public:
	ASPOSE_DLL_EXPORT ApiConfiguration();
	ASPOSE_DLL_EXPORT virtual ~ApiConfiguration();

	ASPOSE_DLL_EXPORT utility::string_t getBaseUrl() const;
	ASPOSE_DLL_EXPORT void setBaseUrl(const utility::string_t& value);

	ASPOSE_DLL_EXPORT utility::string_t getBaseAuthUrl() const;
	ASPOSE_DLL_EXPORT void setBaseAuthUrl(const utility::string_t& value);

	ASPOSE_DLL_EXPORT utility::string_t getVersion() const;
	ASPOSE_DLL_EXPORT void setVersion(const utility::string_t& value);

	ASPOSE_DLL_EXPORT utility::string_t getApiVersion() const;

	ASPOSE_DLL_EXPORT utility::string_t getBasePath() const;

	ASPOSE_DLL_EXPORT std::map<utility::string_t, utility::string_t>& getHeaders();
	ASPOSE_DLL_EXPORT void setHeader(const utility::string_t& key, const utility::string_t& value);

	ASPOSE_DLL_EXPORT utility::string_t getAppSid() const;
	ASPOSE_DLL_EXPORT void setAppSid(const utility::string_t& value);

	ASPOSE_DLL_EXPORT utility::string_t getAppKey() const;
	ASPOSE_DLL_EXPORT void setAppKey(const utility::string_t& value);

	ASPOSE_DLL_EXPORT utility::string_t getAccessToken() const;
	ASPOSE_DLL_EXPORT void setAccessToken(const utility::string_t& value);

	ASPOSE_DLL_EXPORT bool getDebug() const;
	ASPOSE_DLL_EXPORT void setDebug(const bool value);

	ASPOSE_DLL_EXPORT int32_t getTimeout() const;
	ASPOSE_DLL_EXPORT void setTimeout(const int32_t value);

protected:
	utility::string_t m_BaseUrl;
	utility::string_t m_BaseAuthUrl;
	utility::string_t m_Version;
	utility::string_t m_ApiVersion;
	std::map<utility::string_t, utility::string_t> m_Headers;
	utility::string_t m_AppSid;
	utility::string_t m_AppKey;
	utility::string_t m_AccessToken;
	bool m_Debug;
	int32_t m_Timeout;
};

}
}

#endif /* _ApiConfiguration_H_ */
