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


#include "SlidesApi.h"

namespace asposeslidescloud {
namespace api {

SlidesApi::SlidesApi(std::shared_ptr<ApiConfiguration> configuration)
{
	m_ApiClient = new ApiClient(configuration);
}

SlidesApi::SlidesApi(utility::string_t appSid, utility::string_t appKey)
{
	std::shared_ptr<ApiConfiguration> configuration = std::make_shared<ApiConfiguration>();
	configuration->setAppSid(appSid);
	configuration->setAppKey(appKey);
	m_ApiClient = new ApiClient(configuration);
}

SlidesApi::~SlidesApi()
{
	delete m_ApiClient;
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::alignShapes(utility::string_t name, int32_t slideIndex, utility::string_t alignmentType, boost::optional<bool> alignToSlide, std::vector<int32_t> shapes, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'alignmentType' is set
	if (alignmentType.empty())
	{
		throw std::invalid_argument("Missing required parameter: alignmentType");
	}
	// verify the required parameter 'alignmentType' is set
	if (alignmentType.empty())
	{
		throw std::invalid_argument("Missing required parameter: alignmentType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/align/{alignmentType}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "alignmentType", alignmentType);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (alignToSlide.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("alignToSlide"), alignToSlide.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapes"), shapes);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling alignShapes: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Shapes> result(new Shapes());
			result->fromJson(json);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::convert(std::shared_ptr<HttpContent> document, utility::string_t format, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/convert/{format}");
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling convert: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<void> SlidesApi::convertAndSave(std::shared_ptr<HttpContent> document, utility::string_t format, utility::string_t outPath, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder)
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
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/convert/{format}");
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), outPath);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling convertAndSave: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::copyFile(utility::string_t srcPath, utility::string_t destPath, utility::string_t srcStorageName, utility::string_t destStorageName, utility::string_t versionId)
{
	// verify the required parameter 'srcPath' is set
	if (srcPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: srcPath");
	}
	// verify the required parameter 'destPath' is set
	if (destPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: destPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/file/copy/{srcPath}");
	ApiClient::setPathParameter(methodPath, "srcPath", srcPath);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destPath"), destPath);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("srcStorageName"), srcStorageName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destStorageName"), destStorageName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("versionId"), versionId);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling copyFile: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::copyFolder(utility::string_t srcPath, utility::string_t destPath, utility::string_t srcStorageName, utility::string_t destStorageName)
{
	// verify the required parameter 'srcPath' is set
	if (srcPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: srcPath");
	}
	// verify the required parameter 'destPath' is set
	if (destPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: destPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/folder/copy/{srcPath}");
	ApiClient::setPathParameter(methodPath, "srcPath", srcPath);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destPath"), destPath);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("srcStorageName"), srcStorageName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destStorageName"), destStorageName);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling copyFolder: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<std::shared_ptr<LayoutSlide>> SlidesApi::copyLayoutSlide(utility::string_t name, utility::string_t cloneFrom, int32_t cloneFromPosition, utility::string_t cloneFromPassword, utility::string_t cloneFromStorage, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'cloneFrom' is set
	if (cloneFrom.empty())
	{
		throw std::invalid_argument("Missing required parameter: cloneFrom");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/layoutSlides");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("cloneFrom"), cloneFrom);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("cloneFromPosition"), cloneFromPosition);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("cloneFromStorage"), cloneFromStorage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("cloneFromPassword"), cloneFromPassword);
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling copyLayoutSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<LayoutSlide> result(new LayoutSlide());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<MasterSlide>> SlidesApi::copyMasterSlide(utility::string_t name, utility::string_t cloneFrom, int32_t cloneFromPosition, utility::string_t cloneFromPassword, utility::string_t cloneFromStorage, boost::optional<bool> applyToAll, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'cloneFrom' is set
	if (cloneFrom.empty())
	{
		throw std::invalid_argument("Missing required parameter: cloneFrom");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/masterSlides");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("cloneFrom"), cloneFrom);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("cloneFromPosition"), cloneFromPosition);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("cloneFromStorage"), cloneFromStorage);
	if (applyToAll.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("applyToAll"), applyToAll.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("cloneFromPassword"), cloneFromPassword);
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling copyMasterSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<MasterSlide> result(new MasterSlide());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Slides>> SlidesApi::copySlide(utility::string_t name, int32_t slideToCopy, boost::optional<int32_t> position, utility::string_t source, utility::string_t sourcePassword, utility::string_t sourceStorage, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/copy");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("slideToCopy"), slideToCopy);
	if (position.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), position.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("source"), source);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sourceStorage"), sourceStorage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("sourcePassword"), sourcePassword);
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling copySlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Slides> result(new Slides());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::createAnimationEffect(utility::string_t name, int32_t slideIndex, std::shared_ptr<Effect> effect, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (effect == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.effect");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/mainSequence");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (effect != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(effect->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createAnimationEffect: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideAnimation> result(new SlideAnimation());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::createAnimationInteractiveSequence(utility::string_t name, int32_t slideIndex, std::shared_ptr<InteractiveSequence> sequence, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (sequence == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.sequence");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/interactiveSequences");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (sequence != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(sequence->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createAnimationInteractiveSequence: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideAnimation> result(new SlideAnimation());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::createAnimationInteractiveSequenceEffect(utility::string_t name, int32_t slideIndex, int32_t sequenceIndex, std::shared_ptr<Effect> effect, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (effect == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.effect");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/interactiveSequences/{sequenceIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "sequenceIndex", sequenceIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (effect != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(effect->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createAnimationInteractiveSequenceEffect: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideAnimation> result(new SlideAnimation());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Chart>> SlidesApi::createChartCategory(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<ChartCategory> category, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (category == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.category");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/categories");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (category != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(category->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createChartCategory: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Chart> result(new Chart());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Chart>> SlidesApi::createChartDataPoint(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t seriesIndex, std::shared_ptr<DataPoint> dataPoint, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dataPoint == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dataPoint");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/series/{seriesIndex}/dataPoints");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "seriesIndex", seriesIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dataPoint != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dataPoint->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createChartDataPoint: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Chart> result(new Chart());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Chart>> SlidesApi::createChartSeries(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<Series> series, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (series == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.series");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/series");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (series != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(series->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createChartSeries: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Chart> result(new Chart());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideComments>> SlidesApi::createComment(utility::string_t name, int32_t slideIndex, std::shared_ptr<SlideComment> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/comments");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createComment: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideComments> result(new SlideComments());
			result->fromJson(json);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::createCommentOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, std::shared_ptr<SlideComment> dto, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/slides/{slideIndex}/comments");
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createCommentOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<void> SlidesApi::createFolder(utility::string_t path, utility::string_t storageName)
{
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/folder/{path}");
	ApiClient::setPathParameter(methodPath, "path", path);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), storageName);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createFolder: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::createImageWatermark(utility::string_t name, std::shared_ptr<HttpContent> image, std::shared_ptr<PictureFrame> pictureFrame, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/watermark/image");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (image != nullptr)
	{
		requestFiles.push_back(image);
	}
	if (pictureFrame != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(pictureFrame->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createImageWatermark: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<HttpContent> SlidesApi::createImageWatermarkOnline(std::shared_ptr<HttpContent> document, std::shared_ptr<HttpContent> image, std::shared_ptr<PictureFrame> pictureFrame, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/watermark/image");

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}
	if (image != nullptr)
	{
		requestFiles.push_back(image);
	}
	if (pictureFrame != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(pictureFrame->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createImageWatermarkOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<std::shared_ptr<NotesSlide>> SlidesApi::createNotesSlide(utility::string_t name, int32_t slideIndex, std::shared_ptr<NotesSlide> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createNotesSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<NotesSlide> result(new NotesSlide());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::createNotesSlideParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<Paragraph> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (position.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), position.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createNotesSlideParagraph: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraph> result(new Paragraph());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::createNotesSlidePortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Portion> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (position.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), position.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createNotesSlidePortion: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portion> result(new Portion());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::createNotesSlideShape(utility::string_t name, int32_t slideIndex, std::shared_ptr<ShapeBase> dto, boost::optional<int32_t> shapeToClone, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (shapeToClone.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapeToClone"), shapeToClone.value());
	}
	if (position.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), position.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createNotesSlideShape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ShapeBase> result(new ShapeBase());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::createParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<Paragraph> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (position.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), position.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createParagraph: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraph> result(new Paragraph());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::createPortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Portion> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (position.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), position.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createPortion: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portion> result(new Portion());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Document>> SlidesApi::createPresentation(utility::string_t name, std::shared_ptr<HttpContent> data, utility::string_t inputPassword, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("inputPassword"), inputPassword);
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (data != nullptr)
	{
		requestFiles.push_back(data);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createPresentation: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Document> result(new Document());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Document>> SlidesApi::createPresentationFromSource(utility::string_t name, utility::string_t sourcePath, utility::string_t sourcePassword, utility::string_t sourceStorage, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/fromSource");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sourcePath"), sourcePath);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sourceStorage"), sourceStorage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("sourcePassword"), sourcePassword);
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createPresentationFromSource: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Document> result(new Document());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Document>> SlidesApi::createPresentationFromTemplate(utility::string_t name, utility::string_t templatePath, utility::string_t data, utility::string_t templatePassword, utility::string_t templateStorage, boost::optional<bool> isImageDataEmbedded, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'templatePath' is set
	if (templatePath.empty())
	{
		throw std::invalid_argument("Missing required parameter: templatePath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/fromTemplate");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("templatePath"), templatePath);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("templateStorage"), templateStorage);
	if (isImageDataEmbedded.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("isImageDataEmbedded"), isImageDataEmbedded.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("templatePassword"), templatePassword);
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (!data.empty())
	{
		httpBody = std::shared_ptr<IHttpBody>(new StringBody(data));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createPresentationFromTemplate: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Document> result(new Document());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Sections>> SlidesApi::createSection(utility::string_t name, utility::string_t sectionName, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'sectionName' is set
	if (sectionName.empty())
	{
		throw std::invalid_argument("Missing required parameter: sectionName");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/sections");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sectionName"), sectionName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("slideIndex"), slideIndex);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createSection: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Sections> result(new Sections());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::createShape(utility::string_t name, int32_t slideIndex, std::shared_ptr<ShapeBase> dto, boost::optional<int32_t> shapeToClone, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (shapeToClone.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapeToClone"), shapeToClone.value());
	}
	if (position.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), position.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createShape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ShapeBase> result(new ShapeBase());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Slides>> SlidesApi::createSlide(utility::string_t name, utility::string_t layoutAlias, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("layoutAlias"), layoutAlias);
	if (position.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), position.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Slides> result(new Slides());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::createSubshape(utility::string_t name, int32_t slideIndex, utility::string_t path, std::shared_ptr<ShapeBase> dto, boost::optional<int32_t> shapeToClone, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (shapeToClone.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapeToClone"), shapeToClone.value());
	}
	if (position.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), position.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createSubshape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ShapeBase> result(new ShapeBase());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::createSubshapeParagraph(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, std::shared_ptr<Paragraph> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (position.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), position.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createSubshapeParagraph: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraph> result(new Paragraph());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::createSubshapePortion(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Portion> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (position.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), position.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createSubshapePortion: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portion> result(new Portion());
			result->fromJson(json);
			return result;
		});
}

pplx::task<void> SlidesApi::createWatermark(utility::string_t name, std::shared_ptr<Shape> shape, boost::optional<double> fontHeight, utility::string_t text, utility::string_t fontName, utility::string_t fontColor, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/watermark");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (fontHeight.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontHeight"), fontHeight.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("text"), text);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontName"), fontName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontColor"), fontColor);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (shape != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(shape->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createWatermark: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<HttpContent> SlidesApi::createWatermarkOnline(std::shared_ptr<HttpContent> document, std::shared_ptr<Shape> shape, boost::optional<double> fontHeight, utility::string_t text, utility::string_t fontName, utility::string_t fontColor, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/watermark");

	std::map<utility::string_t, utility::string_t> queryParams;
	if (fontHeight.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontHeight"), fontHeight.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("text"), text);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontName"), fontName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontColor"), fontColor);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}
	if (shape != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(shape->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling createWatermarkOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteAnimation(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteAnimation: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideAnimation> result(new SlideAnimation());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteAnimationEffect(utility::string_t name, int32_t slideIndex, int32_t effectIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/mainSequence/{effectIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "effectIndex", effectIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteAnimationEffect: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideAnimation> result(new SlideAnimation());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteAnimationInteractiveSequence(utility::string_t name, int32_t slideIndex, int32_t sequenceIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/interactiveSequences/{sequenceIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "sequenceIndex", sequenceIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteAnimationInteractiveSequence: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideAnimation> result(new SlideAnimation());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteAnimationInteractiveSequenceEffect(utility::string_t name, int32_t slideIndex, int32_t sequenceIndex, int32_t effectIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/interactiveSequences/{sequenceIndex}/{effectIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "sequenceIndex", sequenceIndex);
	ApiClient::setPathParameter(methodPath, "effectIndex", effectIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteAnimationInteractiveSequenceEffect: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideAnimation> result(new SlideAnimation());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteAnimationInteractiveSequences(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/interactiveSequences");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteAnimationInteractiveSequences: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideAnimation> result(new SlideAnimation());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteAnimationMainSequence(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/mainSequence");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteAnimationMainSequence: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideAnimation> result(new SlideAnimation());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideBackground>> SlidesApi::deleteBackground(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/background");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteBackground: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideBackground> result(new SlideBackground());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Chart>> SlidesApi::deleteChartCategory(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t categoryIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/categories/{categoryIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "categoryIndex", categoryIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteChartCategory: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Chart> result(new Chart());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Chart>> SlidesApi::deleteChartDataPoint(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t seriesIndex, int32_t pointIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/series/{seriesIndex}/dataPoints/{pointIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "seriesIndex", seriesIndex);
	ApiClient::setPathParameter(methodPath, "pointIndex", pointIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteChartDataPoint: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Chart> result(new Chart());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Chart>> SlidesApi::deleteChartSeries(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t seriesIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/series/{seriesIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "seriesIndex", seriesIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteChartSeries: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Chart> result(new Chart());
			result->fromJson(json);
			return result;
		});
}

pplx::task<void> SlidesApi::deleteComments(utility::string_t name, utility::string_t author, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/comments");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("author"), author);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteComments: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<HttpContent> SlidesApi::deleteCommentsOnline(std::shared_ptr<HttpContent> document, utility::string_t author, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/comments/delete");

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("author"), author);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteCommentsOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<std::shared_ptr<DocumentProperties>> SlidesApi::deleteDocumentProperties(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/documentproperties");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteDocumentProperties: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<DocumentProperties> result(new DocumentProperties());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<DocumentProperties>> SlidesApi::deleteDocumentProperty(utility::string_t name, utility::string_t propertyName, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'propertyName' is set
	if (propertyName.empty())
	{
		throw std::invalid_argument("Missing required parameter: propertyName");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/documentproperties/{propertyName}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "propertyName", propertyName);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteDocumentProperty: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<DocumentProperties> result(new DocumentProperties());
			result->fromJson(json);
			return result;
		});
}

pplx::task<void> SlidesApi::deleteFile(utility::string_t path, utility::string_t storageName, utility::string_t versionId)
{
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/file/{path}");
	ApiClient::setPathParameter(methodPath, "path", path);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), storageName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("versionId"), versionId);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteFile: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::deleteFolder(utility::string_t path, utility::string_t storageName, boost::optional<bool> recursive)
{
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/folder/{path}");
	ApiClient::setPathParameter(methodPath, "path", path);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), storageName);
	if (recursive.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("recursive"), recursive.value());
	}

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteFolder: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<std::shared_ptr<Slide>> SlidesApi::deleteNotesSlide(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteNotesSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Slide> result(new Slide());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteNotesSlideParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteNotesSlideParagraph: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraphs> result(new Paragraphs());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteNotesSlideParagraphs(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::vector<int32_t> paragraphs, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("paragraphs"), paragraphs);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteNotesSlideParagraphs: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraphs> result(new Paragraphs());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteNotesSlidePortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);
	ApiClient::setPathParameter(methodPath, "portionIndex", portionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteNotesSlidePortion: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portions> result(new Portions());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteNotesSlidePortions(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, std::vector<int32_t> portions, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("portions"), portions);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteNotesSlidePortions: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portions> result(new Portions());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteNotesSlideShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteNotesSlideShape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Shapes> result(new Shapes());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteNotesSlideShapes(utility::string_t name, int32_t slideIndex, std::vector<int32_t> shapes, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapes"), shapes);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteNotesSlideShapes: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Shapes> result(new Shapes());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteParagraph: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraphs> result(new Paragraphs());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteParagraphs(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::vector<int32_t> paragraphs, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("paragraphs"), paragraphs);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteParagraphs: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraphs> result(new Paragraphs());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::deletePortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);
	ApiClient::setPathParameter(methodPath, "portionIndex", portionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deletePortion: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portions> result(new Portions());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::deletePortions(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, std::vector<int32_t> portions, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("portions"), portions);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deletePortions: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portions> result(new Portions());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ProtectionProperties>> SlidesApi::deleteProtection(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/protection");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteProtection: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ProtectionProperties> result(new ProtectionProperties());
			result->fromJson(json);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::deleteProtectionOnline(std::shared_ptr<HttpContent> document, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	// verify the required parameter 'password' is set
	if (password.empty())
	{
		throw std::invalid_argument("Missing required parameter: password");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/protection/delete");

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteProtectionOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<std::shared_ptr<Sections>> SlidesApi::deleteSection(utility::string_t name, int32_t sectionIndex, boost::optional<bool> withSlides, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/sections/{sectionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "sectionIndex", sectionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (withSlides.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("withSlides"), withSlides.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSection: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Sections> result(new Sections());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Sections>> SlidesApi::deleteSections(utility::string_t name, std::vector<int32_t> sections, boost::optional<bool> withSlides, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/sections");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sections"), sections);
	if (withSlides.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("withSlides"), withSlides.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSections: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Sections> result(new Sections());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteShape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Shapes> result(new Shapes());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteShapes(utility::string_t name, int32_t slideIndex, std::vector<int32_t> shapes, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapes"), shapes);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteShapes: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Shapes> result(new Shapes());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Slides>> SlidesApi::deleteSlide(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Slides> result(new Slides());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideComments>> SlidesApi::deleteSlideComments(utility::string_t name, int32_t slideIndex, utility::string_t author, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/comments");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("author"), author);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlideComments: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideComments> result(new SlideComments());
			result->fromJson(json);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::deleteSlideCommentsOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t author, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/slides/{slideIndex}/comments/delete");
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("author"), author);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlideCommentsOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<std::shared_ptr<Slides>> SlidesApi::deleteSlides(utility::string_t name, std::vector<int32_t> slides, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("slides"), slides);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlides: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Slides> result(new Slides());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSubshape(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSubshape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Shapes> result(new Shapes());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteSubshapeParagraph(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSubshapeParagraph: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraphs> result(new Paragraphs());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteSubshapeParagraphs(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, std::vector<int32_t> paragraphs, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("paragraphs"), paragraphs);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSubshapeParagraphs: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraphs> result(new Paragraphs());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteSubshapePortion(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);
	ApiClient::setPathParameter(methodPath, "portionIndex", portionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSubshapePortion: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portions> result(new Portions());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteSubshapePortions(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, std::vector<int32_t> portions, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("portions"), portions);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSubshapePortions: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portions> result(new Portions());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSubshapes(utility::string_t name, int32_t slideIndex, utility::string_t path, std::vector<int32_t> shapes, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapes"), shapes);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSubshapes: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Shapes> result(new Shapes());
			result->fromJson(json);
			return result;
		});
}

pplx::task<void> SlidesApi::deleteWatermark(utility::string_t name, utility::string_t shapeName, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/watermark/delete");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapeName"), shapeName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteWatermark: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<HttpContent> SlidesApi::deleteWatermarkOnline(std::shared_ptr<HttpContent> document, utility::string_t shapeName, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/watermark/delete");

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapeName"), shapeName);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteWatermarkOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadFile(utility::string_t path, utility::string_t storageName, utility::string_t versionId)
{
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/file/{path}");
	ApiClient::setPathParameter(methodPath, "path", path);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), storageName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("versionId"), versionId);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadFile: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadImage(utility::string_t name, int32_t index, utility::string_t format, utility::string_t password, utility::string_t folder, utility::string_t storage)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/images/{index}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "index", index);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadImage: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadImageDefaultFormat(utility::string_t name, int32_t index, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/images/{index}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "index", index);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadImageDefaultFormat: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadImageDefaultFormatOnline(std::shared_ptr<HttpContent> document, int32_t index, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/images/{index}");
	ApiClient::setPathParameter(methodPath, "index", index);

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadImageDefaultFormatOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadImageOnline(std::shared_ptr<HttpContent> document, int32_t index, utility::string_t format, utility::string_t password)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/images/{index}/{format}");
	ApiClient::setPathParameter(methodPath, "index", index);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadImageOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadImages(utility::string_t name, utility::string_t format, utility::string_t password, utility::string_t folder, utility::string_t storage)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/images/download/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadImages: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadImagesDefaultFormat(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/images/download");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadImagesDefaultFormat: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadImagesDefaultFormatOnline(std::shared_ptr<HttpContent> document, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/images/download");

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadImagesDefaultFormatOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadImagesOnline(std::shared_ptr<HttpContent> document, utility::string_t format, utility::string_t password)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/images/download/{format}");
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadImagesOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadNotesSlide(utility::string_t name, int32_t slideIndex, utility::string_t format, boost::optional<int32_t> width, boost::optional<int32_t> height, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (width.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), width.value());
	}
	if (height.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), height.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadNotesSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadNotesSlideOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t format, boost::optional<int32_t> width, boost::optional<int32_t> height, utility::string_t password, utility::string_t fontsFolder)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/slides/{slideIndex}/notesSlide/{format}");
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (width.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), width.value());
	}
	if (height.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), height.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadNotesSlideOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadNotesSlideShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (scaleX.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), scaleX.value());
	}
	if (scaleY.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), scaleY.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), bounds);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

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
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadNotesSlideShape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadPresentation(utility::string_t name, utility::string_t format, std::shared_ptr<ExportOptions> options, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

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
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadPresentation: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (scaleX.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), scaleX.value());
	}
	if (scaleY.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), scaleY.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), bounds);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

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
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadShape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadShapeOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/slides/{slideIndex}/shapes/{shapeIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (scaleX.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), scaleX.value());
	}
	if (scaleY.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), scaleY.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), bounds);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadShapeOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadSlide(utility::string_t name, int32_t slideIndex, utility::string_t format, std::shared_ptr<ExportOptions> options, boost::optional<int32_t> width, boost::optional<int32_t> height, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (width.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), width.value());
	}
	if (height.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), height.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

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
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadSlideOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t format, boost::optional<int32_t> width, boost::optional<int32_t> height, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/slides/{slideIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (width.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), width.value());
	}
	if (height.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), height.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadSlideOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadSubshape(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, utility::string_t format, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (scaleX.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), scaleX.value());
	}
	if (scaleY.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), scaleY.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), bounds);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

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
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling downloadSubshape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::getAnimation(utility::string_t name, int32_t slideIndex, boost::optional<int32_t> shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (shapeIndex.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapeIndex"), shapeIndex.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getAnimation: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideAnimation> result(new SlideAnimation());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ApiInfo>> SlidesApi::getApiInfo()
{
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/info");

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getApiInfo: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ApiInfo> result(new ApiInfo());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideBackground>> SlidesApi::getBackground(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/background");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getBackground: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideBackground> result(new SlideBackground());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ColorScheme>> SlidesApi::getColorScheme(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/theme/colorScheme");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getColorScheme: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ColorScheme> result(new ColorScheme());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<DiscUsage>> SlidesApi::getDiscUsage(utility::string_t storageName)
{
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/disc");

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), storageName);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getDiscUsage: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<DiscUsage> result(new DiscUsage());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<DocumentProperties>> SlidesApi::getDocumentProperties(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/documentproperties");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getDocumentProperties: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<DocumentProperties> result(new DocumentProperties());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<DocumentProperty>> SlidesApi::getDocumentProperty(utility::string_t name, utility::string_t propertyName, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'propertyName' is set
	if (propertyName.empty())
	{
		throw std::invalid_argument("Missing required parameter: propertyName");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/documentproperties/{propertyName}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "propertyName", propertyName);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getDocumentProperty: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<DocumentProperty> result(new DocumentProperty());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<FileVersions>> SlidesApi::getFileVersions(utility::string_t path, utility::string_t storageName)
{
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/version/{path}");
	ApiClient::setPathParameter(methodPath, "path", path);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), storageName);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getFileVersions: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<FileVersions> result(new FileVersions());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<FilesList>> SlidesApi::getFilesList(utility::string_t path, utility::string_t storageName)
{
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/folder/{path}");
	ApiClient::setPathParameter(methodPath, "path", path);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), storageName);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getFilesList: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<FilesList> result(new FilesList());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<FontScheme>> SlidesApi::getFontScheme(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/theme/fontScheme");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getFontScheme: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<FontScheme> result(new FontScheme());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<FormatScheme>> SlidesApi::getFormatScheme(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/theme/formatScheme");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getFormatScheme: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<FormatScheme> result(new FormatScheme());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<LayoutSlide>> SlidesApi::getLayoutSlide(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/layoutSlides/{slideIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getLayoutSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<LayoutSlide> result(new LayoutSlide());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<LayoutSlides>> SlidesApi::getLayoutSlides(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/layoutSlides");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getLayoutSlides: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<LayoutSlides> result(new LayoutSlides());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<MasterSlide>> SlidesApi::getMasterSlide(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/masterSlides/{slideIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getMasterSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<MasterSlide> result(new MasterSlide());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<MasterSlides>> SlidesApi::getMasterSlides(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/masterSlides");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getMasterSlides: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<MasterSlides> result(new MasterSlides());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<NotesSlide>> SlidesApi::getNotesSlide(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<NotesSlide> result(new NotesSlide());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<NotesSlideHeaderFooter>> SlidesApi::getNotesSlideHeaderFooter(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/headerFooter");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlideHeaderFooter: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<NotesSlideHeaderFooter> result(new NotesSlideHeaderFooter());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<NotesSlide>> SlidesApi::getNotesSlideOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/slides/{slideIndex}/notesSlide");
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlideOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<NotesSlide> result(new NotesSlide());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getNotesSlideParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlideParagraph: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraph> result(new Paragraph());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::getNotesSlideParagraphs(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlideParagraphs: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraphs> result(new Paragraphs());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::getNotesSlidePortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);
	ApiClient::setPathParameter(methodPath, "portionIndex", portionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlidePortion: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portion> result(new Portion());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::getNotesSlidePortions(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlidePortions: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portions> result(new Portions());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::getNotesSlideShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlideShape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ShapeBase> result(new ShapeBase());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::getNotesSlideShapes(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlideShapes: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Shapes> result(new Shapes());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getParagraph: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraph> result(new Paragraph());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::getParagraphs(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getParagraphs: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraphs> result(new Paragraphs());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Placeholder>> SlidesApi::getPlaceholder(utility::string_t name, int32_t slideIndex, int32_t placeholderIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/placeholders/{placeholderIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "placeholderIndex", placeholderIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getPlaceholder: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Placeholder> result(new Placeholder());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Placeholders>> SlidesApi::getPlaceholders(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/placeholders");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getPlaceholders: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Placeholders> result(new Placeholders());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::getPortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);
	ApiClient::setPathParameter(methodPath, "portionIndex", portionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getPortion: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portion> result(new Portion());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::getPortions(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getPortions: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portions> result(new Portions());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Document>> SlidesApi::getPresentation(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getPresentation: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Document> result(new Document());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Images>> SlidesApi::getPresentationImages(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/images");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getPresentationImages: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Images> result(new Images());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<TextItems>> SlidesApi::getPresentationTextItems(utility::string_t name, boost::optional<bool> withEmpty, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/textItems");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (withEmpty.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("withEmpty"), withEmpty.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getPresentationTextItems: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<TextItems> result(new TextItems());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ProtectionProperties>> SlidesApi::getProtectionProperties(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/protection");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getProtectionProperties: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ProtectionProperties> result(new ProtectionProperties());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Sections>> SlidesApi::getSections(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/sections");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSections: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Sections> result(new Sections());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::getShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getShape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ShapeBase> result(new ShapeBase());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::getShapes(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getShapes: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Shapes> result(new Shapes());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Slide>> SlidesApi::getSlide(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Slide> result(new Slide());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideComments>> SlidesApi::getSlideComments(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/comments");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideComments: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideComments> result(new SlideComments());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<HeaderFooter>> SlidesApi::getSlideHeaderFooter(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/headerFooter");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideHeaderFooter: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<HeaderFooter> result(new HeaderFooter());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Images>> SlidesApi::getSlideImages(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/images");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideImages: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Images> result(new Images());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideProperties>> SlidesApi::getSlideProperties(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slideProperties");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideProperties: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideProperties> result(new SlideProperties());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<TextItems>> SlidesApi::getSlideTextItems(utility::string_t name, int32_t slideIndex, boost::optional<bool> withEmpty, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/textItems");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (withEmpty.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("withEmpty"), withEmpty.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideTextItems: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<TextItems> result(new TextItems());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Slides>> SlidesApi::getSlides(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlides: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Slides> result(new Slides());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::getSubshape(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSubshape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ShapeBase> result(new ShapeBase());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getSubshapeParagraph(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSubshapeParagraph: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraph> result(new Paragraph());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::getSubshapeParagraphs(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSubshapeParagraphs: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraphs> result(new Paragraphs());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::getSubshapePortion(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);
	ApiClient::setPathParameter(methodPath, "portionIndex", portionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSubshapePortion: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portion> result(new Portion());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::getSubshapePortions(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSubshapePortions: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portions> result(new Portions());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::getSubshapes(utility::string_t name, int32_t slideIndex, utility::string_t path, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSubshapes: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Shapes> result(new Shapes());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Theme>> SlidesApi::getTheme(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/theme");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getTheme: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Theme> result(new Theme());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ViewProperties>> SlidesApi::getViewProperties(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/viewProperties");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getViewProperties: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ViewProperties> result(new ViewProperties());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Document>> SlidesApi::importFromHtml(utility::string_t name, utility::string_t html, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/fromHtml");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (!html.empty())
	{
		httpBody = std::shared_ptr<IHttpBody>(new StringBody(html));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling importFromHtml: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Document> result(new Document());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Document>> SlidesApi::importFromPdf(utility::string_t name, std::shared_ptr<HttpContent> pdf, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/fromPdf");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (pdf != nullptr)
	{
		requestFiles.push_back(pdf);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling importFromPdf: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Document> result(new Document());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Document>> SlidesApi::merge(utility::string_t name, std::shared_ptr<PresentationsMergeRequest> request, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (request == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.request");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/merge");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (request != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling merge: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Document> result(new Document());
			result->fromJson(json);
			return result;
		});
}

pplx::task<void> SlidesApi::mergeAndSaveOnline(utility::string_t outPath, std::vector<std::shared_ptr<HttpContent>> files, std::shared_ptr<OrderedMergeRequest> request, utility::string_t storage)
{
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/merge");

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
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling mergeAndSaveOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<HttpContent> SlidesApi::mergeOnline(std::vector<std::shared_ptr<HttpContent>> files, std::shared_ptr<OrderedMergeRequest> request, utility::string_t storage)
{
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/merge");

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
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling mergeOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<void> SlidesApi::moveFile(utility::string_t srcPath, utility::string_t destPath, utility::string_t srcStorageName, utility::string_t destStorageName, utility::string_t versionId)
{
	// verify the required parameter 'srcPath' is set
	if (srcPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: srcPath");
	}
	// verify the required parameter 'destPath' is set
	if (destPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: destPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/file/move/{srcPath}");
	ApiClient::setPathParameter(methodPath, "srcPath", srcPath);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destPath"), destPath);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("srcStorageName"), srcStorageName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destStorageName"), destStorageName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("versionId"), versionId);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling moveFile: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::moveFolder(utility::string_t srcPath, utility::string_t destPath, utility::string_t srcStorageName, utility::string_t destStorageName)
{
	// verify the required parameter 'srcPath' is set
	if (srcPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: srcPath");
	}
	// verify the required parameter 'destPath' is set
	if (destPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: destPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/folder/move/{srcPath}");
	ApiClient::setPathParameter(methodPath, "srcPath", srcPath);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destPath"), destPath);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("srcStorageName"), srcStorageName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destStorageName"), destStorageName);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling moveFolder: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<std::shared_ptr<Sections>> SlidesApi::moveSection(utility::string_t name, int32_t sectionIndex, int32_t newPosition, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/sections/{sectionIndex}/move");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "sectionIndex", sectionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("newPosition"), newPosition);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling moveSection: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Sections> result(new Sections());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Slides>> SlidesApi::moveSlide(utility::string_t name, int32_t slideIndex, int32_t newPosition, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/move");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("newPosition"), newPosition);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling moveSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Slides> result(new Slides());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<EntityExists>> SlidesApi::notesSlideExists(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/exist");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling notesSlideExists: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<EntityExists> result(new EntityExists());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<EntityExists>> SlidesApi::notesSlideExistsOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/slides/{slideIndex}/notesSlide/exist");
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling notesSlideExistsOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<EntityExists> result(new EntityExists());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ObjectExist>> SlidesApi::objectExists(utility::string_t path, utility::string_t storageName, utility::string_t versionId)
{
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/exist/{path}");
	ApiClient::setPathParameter(methodPath, "path", path);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), storageName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("versionId"), versionId);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling objectExists: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ObjectExist> result(new ObjectExist());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Document>> SlidesApi::orderedMerge(utility::string_t name, std::shared_ptr<OrderedMergeRequest> request, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (request == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.request");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/merge");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (request != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling orderedMerge: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Document> result(new Document());
			result->fromJson(json);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::pipeline(std::shared_ptr<Pipeline> pipeline, std::vector<std::shared_ptr<HttpContent>> files)
{
	if (pipeline == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.pipeline");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/pipeline");

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (pipeline != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(pipeline->toJson()));
	}
	requestFiles.insert(requestFiles.end(), files.begin(), files.end());

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling pipeline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<std::shared_ptr<Slides>> SlidesApi::reorderSlides(utility::string_t name, std::vector<int32_t> oldPositions, std::vector<int32_t> newPositions, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/reorder");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("oldPositions"), oldPositions);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("newPositions"), newPositions);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling reorderSlides: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Slides> result(new Slides());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<DocumentReplaceResult>> SlidesApi::replacePresentationText(utility::string_t name, utility::string_t oldValue, utility::string_t newValue, boost::optional<bool> ignoreCase, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'oldValue' is set
	if (oldValue.empty())
	{
		throw std::invalid_argument("Missing required parameter: oldValue");
	}
	// verify the required parameter 'newValue' is set
	if (newValue.empty())
	{
		throw std::invalid_argument("Missing required parameter: newValue");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/replaceText");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("oldValue"), oldValue);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("newValue"), newValue);
	if (ignoreCase.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("ignoreCase"), ignoreCase.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling replacePresentationText: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<DocumentReplaceResult> result(new DocumentReplaceResult());
			result->fromJson(json);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::replacePresentationTextOnline(std::shared_ptr<HttpContent> document, utility::string_t oldValue, utility::string_t newValue, boost::optional<bool> ignoreCase, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	// verify the required parameter 'oldValue' is set
	if (oldValue.empty())
	{
		throw std::invalid_argument("Missing required parameter: oldValue");
	}
	// verify the required parameter 'newValue' is set
	if (newValue.empty())
	{
		throw std::invalid_argument("Missing required parameter: newValue");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/replaceText");

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("oldValue"), oldValue);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("newValue"), newValue);
	if (ignoreCase.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("ignoreCase"), ignoreCase.value());
	}

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling replacePresentationTextOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideReplaceResult>> SlidesApi::replaceSlideText(utility::string_t name, int32_t slideIndex, utility::string_t oldValue, utility::string_t newValue, boost::optional<bool> ignoreCase, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'oldValue' is set
	if (oldValue.empty())
	{
		throw std::invalid_argument("Missing required parameter: oldValue");
	}
	// verify the required parameter 'newValue' is set
	if (newValue.empty())
	{
		throw std::invalid_argument("Missing required parameter: newValue");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/replaceText");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("oldValue"), oldValue);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("newValue"), newValue);
	if (ignoreCase.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("ignoreCase"), ignoreCase.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling replaceSlideText: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideReplaceResult> result(new SlideReplaceResult());
			result->fromJson(json);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::replaceSlideTextOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t oldValue, utility::string_t newValue, boost::optional<bool> ignoreCase, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	// verify the required parameter 'oldValue' is set
	if (oldValue.empty())
	{
		throw std::invalid_argument("Missing required parameter: oldValue");
	}
	// verify the required parameter 'newValue' is set
	if (newValue.empty())
	{
		throw std::invalid_argument("Missing required parameter: newValue");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/slides/{slideIndex}/replaceText");
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("oldValue"), oldValue);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("newValue"), newValue);
	if (ignoreCase.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("ignoreCase"), ignoreCase.value());
	}

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling replaceSlideTextOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<void> SlidesApi::saveNotesSlideShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, utility::string_t outPath, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
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
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), outPath);
	if (scaleX.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), scaleX.value());
	}
	if (scaleY.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), scaleY.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), bounds);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

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
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling saveNotesSlideShape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::savePresentation(utility::string_t name, utility::string_t format, utility::string_t outPath, std::shared_ptr<ExportOptions> options, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
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
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), outPath);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

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
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling savePresentation: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::saveShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, utility::string_t outPath, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
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
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), outPath);
	if (scaleX.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), scaleX.value());
	}
	if (scaleY.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), scaleY.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), bounds);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

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
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling saveShape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::saveShapeOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, utility::string_t outPath, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder)
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
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/slides/{slideIndex}/shapes/{shapeIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), outPath);
	if (scaleX.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), scaleX.value());
	}
	if (scaleY.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), scaleY.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), bounds);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling saveShapeOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::saveSlide(utility::string_t name, int32_t slideIndex, utility::string_t format, utility::string_t outPath, std::shared_ptr<ExportOptions> options, boost::optional<int32_t> width, boost::optional<int32_t> height, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
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
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), outPath);
	if (width.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), width.value());
	}
	if (height.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), height.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

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
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling saveSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::saveSlideOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t format, utility::string_t outPath, boost::optional<int32_t> width, boost::optional<int32_t> height, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder)
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
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/slides/{slideIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), outPath);
	if (width.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), width.value());
	}
	if (height.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), height.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling saveSlideOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::saveSubshape(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, utility::string_t format, utility::string_t outPath, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
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
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), outPath);
	if (scaleX.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), scaleX.value());
	}
	if (scaleY.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), scaleY.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), bounds);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

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
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling saveSubshape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::setAnimation(utility::string_t name, int32_t slideIndex, std::shared_ptr<SlideAnimation> animation, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (animation == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.animation");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (animation != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(animation->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling setAnimation: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideAnimation> result(new SlideAnimation());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideBackground>> SlidesApi::setBackground(utility::string_t name, int32_t slideIndex, std::shared_ptr<SlideBackground> background, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (background == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.background");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/background");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (background != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(background->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling setBackground: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideBackground> result(new SlideBackground());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideBackground>> SlidesApi::setBackgroundColor(utility::string_t name, int32_t slideIndex, utility::string_t color, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'color' is set
	if (color.empty())
	{
		throw std::invalid_argument("Missing required parameter: color");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/backgroundColor");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("color"), color);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling setBackgroundColor: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideBackground> result(new SlideBackground());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<DocumentProperties>> SlidesApi::setDocumentProperties(utility::string_t name, std::shared_ptr<DocumentProperties> properties, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (properties == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.properties");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/documentproperties");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (properties != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(properties->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling setDocumentProperties: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<DocumentProperties> result(new DocumentProperties());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<DocumentProperty>> SlidesApi::setDocumentProperty(utility::string_t name, utility::string_t propertyName, std::shared_ptr<DocumentProperty> property, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'propertyName' is set
	if (propertyName.empty())
	{
		throw std::invalid_argument("Missing required parameter: propertyName");
	}
	if (property == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.property");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/documentproperties/{propertyName}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "propertyName", propertyName);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (property != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(property->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling setDocumentProperty: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<DocumentProperty> result(new DocumentProperty());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<NotesSlideHeaderFooter>> SlidesApi::setNotesSlideHeaderFooter(utility::string_t name, int32_t slideIndex, std::shared_ptr<NotesSlideHeaderFooter> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/headerFooter");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling setNotesSlideHeaderFooter: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<NotesSlideHeaderFooter> result(new NotesSlideHeaderFooter());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Document>> SlidesApi::setPresentationHeaderFooter(utility::string_t name, std::shared_ptr<HeaderFooter> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/headerFooter");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling setPresentationHeaderFooter: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Document> result(new Document());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ProtectionProperties>> SlidesApi::setProtection(utility::string_t name, std::shared_ptr<ProtectionProperties> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/protection");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling setProtection: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ProtectionProperties> result(new ProtectionProperties());
			result->fromJson(json);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::setProtectionOnline(std::shared_ptr<HttpContent> document, std::shared_ptr<ProtectionProperties> dto, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/protection");

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling setProtectionOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<std::shared_ptr<Sections>> SlidesApi::setSections(utility::string_t name, std::shared_ptr<Sections> sections, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (sections == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.sections");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/sections");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (sections != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(sections->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling setSections: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Sections> result(new Sections());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<HeaderFooter>> SlidesApi::setSlideHeaderFooter(utility::string_t name, int32_t slideIndex, std::shared_ptr<HeaderFooter> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/headerFooter");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling setSlideHeaderFooter: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<HeaderFooter> result(new HeaderFooter());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideProperties>> SlidesApi::setSlideProperties(utility::string_t name, std::shared_ptr<SlideProperties> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slideProperties");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling setSlideProperties: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideProperties> result(new SlideProperties());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ViewProperties>> SlidesApi::setViewProperties(utility::string_t name, std::shared_ptr<ViewProperties> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/viewProperties");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling setViewProperties: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ViewProperties> result(new ViewProperties());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SplitDocumentResult>> SlidesApi::split(utility::string_t name, std::shared_ptr<ExportOptions> options, utility::string_t format, boost::optional<int32_t> width, boost::optional<int32_t> height, boost::optional<int32_t> from, boost::optional<int32_t> to, utility::string_t destFolder, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/split");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("format"), format);
	if (width.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), width.value());
	}
	if (height.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), height.value());
	}
	if (from.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("from"), from.value());
	}
	if (to.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("to"), to.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destFolder"), destFolder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

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
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling split: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SplitDocumentResult> result(new SplitDocumentResult());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SplitDocumentResult>> SlidesApi::splitAndSaveOnline(std::shared_ptr<HttpContent> document, utility::string_t format, utility::string_t destFolder, boost::optional<int32_t> width, boost::optional<int32_t> height, boost::optional<int32_t> from, boost::optional<int32_t> to, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/split/{format}");
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destFolder"), destFolder);
	if (width.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), width.value());
	}
	if (height.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), height.value());
	}
	if (from.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("from"), from.value());
	}
	if (to.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("to"), to.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling splitAndSaveOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SplitDocumentResult> result(new SplitDocumentResult());
			result->fromJson(json);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::splitOnline(std::shared_ptr<HttpContent> document, utility::string_t format, boost::optional<int32_t> width, boost::optional<int32_t> height, boost::optional<int32_t> from, boost::optional<int32_t> to, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/split/{format}");
	ApiClient::setPathParameter(methodPath, "format", format);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (width.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), width.value());
	}
	if (height.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), height.value());
	}
	if (from.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("from"), from.value());
	}
	if (to.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("to"), to.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling splitOnline: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> response)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(response.begin(), response.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<std::shared_ptr<StorageExist>> SlidesApi::storageExists(utility::string_t storageName)
{
	// verify the required parameter 'storageName' is set
	if (storageName.empty())
	{
		throw std::invalid_argument("Missing required parameter: storageName");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/{storageName}/exist");
	ApiClient::setPathParameter(methodPath, "storageName", storageName);

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling storageExists: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<StorageExist> result(new StorageExist());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::updateAnimationEffect(utility::string_t name, int32_t slideIndex, int32_t effectIndex, std::shared_ptr<Effect> effect, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (effect == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.effect");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/mainSequence/{effectIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "effectIndex", effectIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (effect != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(effect->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateAnimationEffect: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideAnimation> result(new SlideAnimation());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::updateAnimationInteractiveSequenceEffect(utility::string_t name, int32_t slideIndex, int32_t sequenceIndex, int32_t effectIndex, std::shared_ptr<Effect> effect, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (effect == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.effect");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/interactiveSequences/{sequenceIndex}/{effectIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "sequenceIndex", sequenceIndex);
	ApiClient::setPathParameter(methodPath, "effectIndex", effectIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (effect != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(effect->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateAnimationInteractiveSequenceEffect: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<SlideAnimation> result(new SlideAnimation());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Chart>> SlidesApi::updateChartCategory(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t categoryIndex, std::shared_ptr<ChartCategory> category, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (category == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.category");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/categories/{categoryIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "categoryIndex", categoryIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (category != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(category->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateChartCategory: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Chart> result(new Chart());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Chart>> SlidesApi::updateChartDataPoint(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t seriesIndex, int32_t pointIndex, std::shared_ptr<DataPoint> dataPoint, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dataPoint == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dataPoint");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/series/{seriesIndex}/dataPoints/{pointIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "seriesIndex", seriesIndex);
	ApiClient::setPathParameter(methodPath, "pointIndex", pointIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dataPoint != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dataPoint->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateChartDataPoint: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Chart> result(new Chart());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Chart>> SlidesApi::updateChartSeries(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t seriesIndex, std::shared_ptr<Series> series, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (series == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.series");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/series/{seriesIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "seriesIndex", seriesIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (series != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(series->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateChartSeries: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Chart> result(new Chart());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<LayoutSlide>> SlidesApi::updateLayoutSlide(utility::string_t name, int32_t slideIndex, std::shared_ptr<LayoutSlide> slideDto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (slideDto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.slideDto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/layoutSlides/{slideIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (slideDto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(slideDto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateLayoutSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<LayoutSlide> result(new LayoutSlide());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<NotesSlide>> SlidesApi::updateNotesSlide(utility::string_t name, int32_t slideIndex, std::shared_ptr<NotesSlide> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateNotesSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<NotesSlide> result(new NotesSlide());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::updateNotesSlideParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Paragraph> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateNotesSlideParagraph: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraph> result(new Paragraph());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::updateNotesSlidePortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, std::shared_ptr<Portion> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);
	ApiClient::setPathParameter(methodPath, "portionIndex", portionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateNotesSlidePortion: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portion> result(new Portion());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::updateNotesSlideShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<ShapeBase> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateNotesSlideShape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ShapeBase> result(new ShapeBase());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::updateParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Paragraph> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateParagraph: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraph> result(new Paragraph());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::updatePortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, std::shared_ptr<Portion> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);
	ApiClient::setPathParameter(methodPath, "portionIndex", portionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updatePortion: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portion> result(new Portion());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Sections>> SlidesApi::updateSection(utility::string_t name, int32_t sectionIndex, utility::string_t sectionName, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'sectionName' is set
	if (sectionName.empty())
	{
		throw std::invalid_argument("Missing required parameter: sectionName");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/sections/{sectionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "sectionIndex", sectionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sectionName"), sectionName);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateSection: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Sections> result(new Sections());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::updateShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<ShapeBase> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateShape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ShapeBase> result(new ShapeBase());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Slide>> SlidesApi::updateSlide(utility::string_t name, int32_t slideIndex, std::shared_ptr<Slide> slideDto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (slideDto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.slideDto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (slideDto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(slideDto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateSlide: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Slide> result(new Slide());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::updateSubshape(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, std::shared_ptr<ShapeBase> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateSubshape: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<ShapeBase> result(new ShapeBase());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::updateSubshapeParagraph(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Paragraph> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateSubshapeParagraph: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Paragraph> result(new Paragraph());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::updateSubshapePortion(utility::string_t name, int32_t slideIndex, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, std::shared_ptr<Portion> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "path", path);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);
	ApiClient::setPathParameter(methodPath, "portionIndex", portionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling updateSubshapePortion: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<Portion> result(new Portion());
			result->fromJson(json);
			return result;
		});
}

pplx::task<std::shared_ptr<FilesUploadResult>> SlidesApi::uploadFile(utility::string_t path, std::shared_ptr<HttpContent> file, utility::string_t storageName)
{
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	if (file == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.file");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/storage/file/{path}");
	ApiClient::setPathParameter(methodPath, "path", path);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), storageName);

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (file != nullptr)
	{
		requestFiles.push_back(file);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling uploadFile: ") + response.reason_phrase(),
					std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
			}
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<FilesUploadResult> result(new FilesUploadResult());
			result->fromJson(json);
			return result;
		});
}

}
}

