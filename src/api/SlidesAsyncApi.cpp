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


#include "SlidesAsyncApi.h"

namespace asposeslidescloud {
namespace api {

SlidesAsyncApi::SlidesAsyncApi(std::shared_ptr<ApiConfiguration> configuration)
{
	m_ApiClient = new ApiClient(configuration);
}

SlidesAsyncApi::SlidesAsyncApi(utility::string_t appSid, utility::string_t appKey)
{
	std::shared_ptr<ApiConfiguration> configuration = std::make_shared<ApiConfiguration>();
	configuration->setAppSid(appSid);
	configuration->setAppKey(appKey);
	m_ApiClient = new ApiClient(configuration);
}

SlidesAsyncApi::~SlidesAsyncApi()
{
	delete m_ApiClient;
}

pplx::task<HttpContent> SlidesAsyncApi::getOperationResult(utility::string_t id)
{
	// verify the required parameter 'id' is set
	if (id.empty())
	{
		throw std::invalid_argument("Missing required parameter: id");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/async/{id}/result");
	ApiClient::setPathParameter(methodPath, "id", id);

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getOperationResult");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<std::shared_ptr<Operation>> SlidesAsyncApi::getOperationStatus(utility::string_t id)
{
	// verify the required parameter 'id' is set
	if (id.empty())
	{
		throw std::invalid_argument("Missing required parameter: id");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/async/{id}");
	ApiClient::setPathParameter(methodPath, "id", id);

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getOperationStatus");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Operation", json);
			return std::static_pointer_cast<Operation>(instance);
		});
}

pplx::task<utility::string_t> SlidesAsyncApi::startConvert(std::shared_ptr<HttpContent> document, utility::string_t format, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder, std::vector<int32_t> slides, std::shared_ptr<ExportOptions> options)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	// verify the required parameter 'format' is set
	if (format.empty())
	{
		throw std::invalid_argument("Missing required parameter: format");
	}
	// verify the required parameter 'format' is set
	if (format.empty())
	{
		throw std::invalid_argument("Missing required parameter: format");
	}
	// validate the parameter 'format'
	if (!boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Html") && !boost::iequals(format, "Html5") && !boost::iequals(format, "Swf") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Mpeg4"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Pdf, Xps, Tiff, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Pot, Potx, Potm, Html, Html5, Swf, Svg, Jpeg, Png, Gif, Bmp, Fodp, Xaml, Mpeg4.");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/async/convert/{format}");
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("slides"), slides);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}
	if (options != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(options->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "startConvert");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			return response;
		});
}

pplx::task<utility::string_t> SlidesAsyncApi::startConvertAndSave(std::shared_ptr<HttpContent> document, utility::string_t format, utility::string_t outPath, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder, std::vector<int32_t> slides, std::shared_ptr<ExportOptions> options)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	// verify the required parameter 'format' is set
	if (format.empty())
	{
		throw std::invalid_argument("Missing required parameter: format");
	}
	// verify the required parameter 'format' is set
	if (format.empty())
	{
		throw std::invalid_argument("Missing required parameter: format");
	}
	// validate the parameter 'format'
	if (!boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Html") && !boost::iequals(format, "Html5") && !boost::iequals(format, "Swf") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Mpeg4"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Pdf, Xps, Tiff, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Pot, Potx, Potm, Html, Html5, Swf, Svg, Jpeg, Png, Gif, Bmp, Fodp, Xaml, Mpeg4.");
	}
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/async/convert/{format}");
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), outPath);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("slides"), slides);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}
	if (options != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(options->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "startConvertAndSave");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			return response;
		});
}

pplx::task<utility::string_t> SlidesAsyncApi::startDownloadPresentation(utility::string_t name, utility::string_t format, std::shared_ptr<ExportOptions> options, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder, std::vector<int32_t> slides)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'format' is set
	if (format.empty())
	{
		throw std::invalid_argument("Missing required parameter: format");
	}
	// verify the required parameter 'format' is set
	if (format.empty())
	{
		throw std::invalid_argument("Missing required parameter: format");
	}
	// validate the parameter 'format'
	if (!boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Html") && !boost::iequals(format, "Html5") && !boost::iequals(format, "Swf") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Mpeg4"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Pdf, Xps, Tiff, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Pot, Potx, Potm, Html, Html5, Swf, Svg, Jpeg, Png, Gif, Bmp, Fodp, Xaml, Mpeg4.");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/async/{name}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("slides"), slides);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (options != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(options->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "startDownloadPresentation");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			return response;
		});
}

pplx::task<utility::string_t> SlidesAsyncApi::startMerge(std::vector<std::shared_ptr<HttpContent>> files, std::shared_ptr<OrderedMergeRequest> request, utility::string_t storage)
{
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/async/merge");

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	requestFiles.insert(requestFiles.end(), files.begin(), files.end());
	if (request != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "startMerge");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			return response;
		});
}

pplx::task<utility::string_t> SlidesAsyncApi::startMergeAndSave(utility::string_t outPath, std::vector<std::shared_ptr<HttpContent>> files, std::shared_ptr<OrderedMergeRequest> request, utility::string_t storage)
{
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/async/merge");

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), outPath);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	requestFiles.insert(requestFiles.end(), files.begin(), files.end());
	if (request != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "startMergeAndSave");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			return response;
		});
}

pplx::task<utility::string_t> SlidesAsyncApi::startSavePresentation(utility::string_t name, utility::string_t format, utility::string_t outPath, std::shared_ptr<ExportOptions> options, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder, std::vector<int32_t> slides)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'format' is set
	if (format.empty())
	{
		throw std::invalid_argument("Missing required parameter: format");
	}
	// verify the required parameter 'format' is set
	if (format.empty())
	{
		throw std::invalid_argument("Missing required parameter: format");
	}
	// validate the parameter 'format'
	if (!boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Html") && !boost::iequals(format, "Html5") && !boost::iequals(format, "Swf") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Mpeg4"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Pdf, Xps, Tiff, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Pot, Potx, Potm, Html, Html5, Swf, Svg, Jpeg, Png, Gif, Bmp, Fodp, Xaml, Mpeg4.");
	}
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/async/{name}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), outPath);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("slides"), slides);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (options != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(options->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "startSavePresentation");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			return response;
		});
}

}
}

