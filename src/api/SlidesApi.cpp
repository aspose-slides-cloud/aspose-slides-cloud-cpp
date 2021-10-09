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
			m_ApiClient->assertResponseException(response, "alignShapes");
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::alignSpecialSlideShapes(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t alignmentType, boost::optional<bool> alignToSlide, std::vector<int32_t> shapes, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/align/{alignmentType}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "alignSpecialSlideShapes");
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

pplx::task<HttpContent> SlidesApi::convert(std::shared_ptr<HttpContent> document, utility::string_t format, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder, std::vector<int32_t> slides, std::shared_ptr<ExportOptions> options)
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
			m_ApiClient->assertResponseException(response, "convert");
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

pplx::task<void> SlidesApi::convertAndSave(std::shared_ptr<HttpContent> document, utility::string_t format, utility::string_t outPath, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder, std::vector<int32_t> slides, std::shared_ptr<ExportOptions> options)
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
			m_ApiClient->assertResponseException(response, "convertAndSave");
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
			m_ApiClient->assertResponseException(response, "copyFile");
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
			m_ApiClient->assertResponseException(response, "copyFolder");
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
			m_ApiClient->assertResponseException(response, "copyLayoutSlide");
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
			m_ApiClient->assertResponseException(response, "copyMasterSlide");
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
			m_ApiClient->assertResponseException(response, "copySlide");
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
			m_ApiClient->assertResponseException(response, "createAnimationEffect");
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
			m_ApiClient->assertResponseException(response, "createAnimationInteractiveSequence");
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
			m_ApiClient->assertResponseException(response, "createAnimationInteractiveSequenceEffect");
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
			m_ApiClient->assertResponseException(response, "createChartCategory");
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
			m_ApiClient->assertResponseException(response, "createChartDataPoint");
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
			m_ApiClient->assertResponseException(response, "createChartSeries");
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
			m_ApiClient->assertResponseException(response, "createComment");
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
			m_ApiClient->assertResponseException(response, "createCommentOnline");
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
			m_ApiClient->assertResponseException(response, "createFolder");
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
			m_ApiClient->assertResponseException(response, "createImageWatermark");
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
			m_ApiClient->assertResponseException(response, "createImageWatermarkOnline");
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
			m_ApiClient->assertResponseException(response, "createNotesSlide");
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
			m_ApiClient->assertResponseException(response, "createParagraph");
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
			m_ApiClient->assertResponseException(response, "createPortion");
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
			m_ApiClient->assertResponseException(response, "createPresentation");
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
			m_ApiClient->assertResponseException(response, "createPresentationFromSource");
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
			m_ApiClient->assertResponseException(response, "createPresentationFromTemplate");
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
			m_ApiClient->assertResponseException(response, "createSection");
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
			m_ApiClient->assertResponseException(response, "createShape");
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
			m_ApiClient->assertResponseException(response, "createSlide");
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::createSpecialSlideAnimationEffect(utility::string_t name, int32_t slideIndex, utility::string_t slideType, std::shared_ptr<Effect> effect, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	if (effect == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.effect");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/animation/mainSequence");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);

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
			m_ApiClient->assertResponseException(response, "createSpecialSlideAnimationEffect");
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::createSpecialSlideAnimationInteractiveSequence(utility::string_t name, int32_t slideIndex, utility::string_t slideType, std::shared_ptr<InteractiveSequence> sequence, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	if (sequence == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.sequence");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/animation/interactiveSequences");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);

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
			m_ApiClient->assertResponseException(response, "createSpecialSlideAnimationInteractiveSequence");
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::createSpecialSlideAnimationInteractiveSequenceEffect(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t sequenceIndex, std::shared_ptr<Effect> effect, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	if (effect == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.effect");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/animation/interactiveSequences/{sequenceIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "createSpecialSlideAnimationInteractiveSequenceEffect");
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::createSpecialSlideParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, std::shared_ptr<Paragraph> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "createSpecialSlideParagraph");
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::createSpecialSlidePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Portion> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "createSpecialSlidePortion");
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::createSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, std::shared_ptr<ShapeBase> dto, boost::optional<int32_t> shapeToClone, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);

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
			m_ApiClient->assertResponseException(response, "createSpecialSlideShape");
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::createSpecialSlideSubshape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, std::shared_ptr<ShapeBase> dto, boost::optional<int32_t> shapeToClone, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "createSpecialSlideSubshape");
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::createSpecialSlideSubshapeParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, std::shared_ptr<Paragraph> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "createSpecialSlideSubshapeParagraph");
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::createSpecialSlideSubshapePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Portion> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "createSpecialSlideSubshapePortion");
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
			m_ApiClient->assertResponseException(response, "createSubshape");
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
			m_ApiClient->assertResponseException(response, "createSubshapeParagraph");
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
			m_ApiClient->assertResponseException(response, "createSubshapePortion");
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
			m_ApiClient->assertResponseException(response, "createWatermark");
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
			m_ApiClient->assertResponseException(response, "createWatermarkOnline");
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
			m_ApiClient->assertResponseException(response, "deleteAnimation");
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
			m_ApiClient->assertResponseException(response, "deleteAnimationEffect");
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
			m_ApiClient->assertResponseException(response, "deleteAnimationInteractiveSequence");
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
			m_ApiClient->assertResponseException(response, "deleteAnimationInteractiveSequenceEffect");
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
			m_ApiClient->assertResponseException(response, "deleteAnimationInteractiveSequences");
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
			m_ApiClient->assertResponseException(response, "deleteAnimationMainSequence");
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
			m_ApiClient->assertResponseException(response, "deleteBackground");
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
			m_ApiClient->assertResponseException(response, "deleteChartCategory");
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
			m_ApiClient->assertResponseException(response, "deleteChartDataPoint");
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
			m_ApiClient->assertResponseException(response, "deleteChartSeries");
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
			m_ApiClient->assertResponseException(response, "deleteComments");
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
			m_ApiClient->assertResponseException(response, "deleteCommentsOnline");
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
			m_ApiClient->assertResponseException(response, "deleteDocumentProperties");
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
			m_ApiClient->assertResponseException(response, "deleteDocumentProperty");
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
			m_ApiClient->assertResponseException(response, "deleteFile");
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
			m_ApiClient->assertResponseException(response, "deleteFolder");
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
			m_ApiClient->assertResponseException(response, "deleteNotesSlide");
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
			m_ApiClient->assertResponseException(response, "deleteParagraph");
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
			m_ApiClient->assertResponseException(response, "deleteParagraphs");
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
			m_ApiClient->assertResponseException(response, "deletePortion");
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
			m_ApiClient->assertResponseException(response, "deletePortions");
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
			m_ApiClient->assertResponseException(response, "deleteProtection");
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
			m_ApiClient->assertResponseException(response, "deleteProtectionOnline");
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
			m_ApiClient->assertResponseException(response, "deleteSection");
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
			m_ApiClient->assertResponseException(response, "deleteSections");
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
			m_ApiClient->assertResponseException(response, "deleteShape");
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
			m_ApiClient->assertResponseException(response, "deleteShapes");
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
			m_ApiClient->assertResponseException(response, "deleteSlide");
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
			m_ApiClient->assertResponseException(response, "deleteSlideComments");
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
			m_ApiClient->assertResponseException(response, "deleteSlideCommentsOnline");
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
			m_ApiClient->assertResponseException(response, "deleteSlides");
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSpecialSlideAnimation(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/animation");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);

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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideAnimation");
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSpecialSlideAnimationEffect(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t effectIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/animation/mainSequence/{effectIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideAnimationEffect");
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSpecialSlideAnimationInteractiveSequence(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t sequenceIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/animation/interactiveSequences/{sequenceIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideAnimationInteractiveSequence");
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSpecialSlideAnimationInteractiveSequenceEffect(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t sequenceIndex, int32_t effectIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/animation/interactiveSequences/{sequenceIndex}/{effectIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideAnimationInteractiveSequenceEffect");
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSpecialSlideAnimationInteractiveSequences(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/animation/interactiveSequences");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);

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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideAnimationInteractiveSequences");
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSpecialSlideAnimationMainSequence(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/animation/mainSequence");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);

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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideAnimationMainSequence");
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteSpecialSlideParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideParagraph");
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteSpecialSlideParagraphs(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, std::vector<int32_t> paragraphs, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideParagraphs");
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteSpecialSlidePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlidePortion");
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteSpecialSlidePortions(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, std::vector<int32_t> portions, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlidePortions");
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideShape");
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSpecialSlideShapes(utility::string_t name, int32_t slideIndex, utility::string_t slideType, std::vector<int32_t> shapes, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);

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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideShapes");
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSpecialSlideSubshape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideSubshape");
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteSpecialSlideSubshapeParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideSubshapeParagraph");
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteSpecialSlideSubshapeParagraphs(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, std::vector<int32_t> paragraphs, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideSubshapeParagraphs");
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteSpecialSlideSubshapePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideSubshapePortion");
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteSpecialSlideSubshapePortions(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, std::vector<int32_t> portions, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideSubshapePortions");
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSpecialSlideSubshapes(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, std::vector<int32_t> shapes, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideSubshapes");
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
			m_ApiClient->assertResponseException(response, "deleteSubshape");
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
			m_ApiClient->assertResponseException(response, "deleteSubshapeParagraph");
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
			m_ApiClient->assertResponseException(response, "deleteSubshapeParagraphs");
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
			m_ApiClient->assertResponseException(response, "deleteSubshapePortion");
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
			m_ApiClient->assertResponseException(response, "deleteSubshapePortions");
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
			m_ApiClient->assertResponseException(response, "deleteSubshapes");
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
			m_ApiClient->assertResponseException(response, "deleteWatermark");
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
			m_ApiClient->assertResponseException(response, "deleteWatermarkOnline");
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
			m_ApiClient->assertResponseException(response, "downloadFile");
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
			m_ApiClient->assertResponseException(response, "downloadImage");
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
			m_ApiClient->assertResponseException(response, "downloadImageDefaultFormat");
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
			m_ApiClient->assertResponseException(response, "downloadImageDefaultFormatOnline");
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
			m_ApiClient->assertResponseException(response, "downloadImageOnline");
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
			m_ApiClient->assertResponseException(response, "downloadImages");
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
			m_ApiClient->assertResponseException(response, "downloadImagesDefaultFormat");
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
			m_ApiClient->assertResponseException(response, "downloadImagesDefaultFormatOnline");
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
			m_ApiClient->assertResponseException(response, "downloadImagesOnline");
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
			m_ApiClient->assertResponseException(response, "downloadNotesSlide");
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
			m_ApiClient->assertResponseException(response, "downloadNotesSlideOnline");
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

pplx::task<HttpContent> SlidesApi::downloadPresentation(utility::string_t name, utility::string_t format, std::shared_ptr<ExportOptions> options, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder, std::vector<int32_t> slides)
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
			m_ApiClient->assertResponseException(response, "downloadPresentation");
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
			m_ApiClient->assertResponseException(response, "downloadShape");
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

pplx::task<HttpContent> SlidesApi::downloadShapeOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder, std::shared_ptr<IShapeExportOptions> options)
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
	if (options != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(options->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "downloadShapeOnline");
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
			m_ApiClient->assertResponseException(response, "downloadSlide");
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

pplx::task<HttpContent> SlidesApi::downloadSlideOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t format, boost::optional<int32_t> width, boost::optional<int32_t> height, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder, std::shared_ptr<ExportOptions> options)
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
	if (options != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(options->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "downloadSlideOnline");
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

pplx::task<HttpContent> SlidesApi::downloadSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t format, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "downloadSpecialSlideShape");
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

pplx::task<HttpContent> SlidesApi::downloadSpecialSlideSubshape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, utility::string_t format, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "downloadSpecialSlideSubshape");
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
			m_ApiClient->assertResponseException(response, "downloadSubshape");
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
			m_ApiClient->assertResponseException(response, "getAnimation");
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
			m_ApiClient->assertResponseException(response, "getApiInfo");
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
			m_ApiClient->assertResponseException(response, "getBackground");
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
			m_ApiClient->assertResponseException(response, "getColorScheme");
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
			m_ApiClient->assertResponseException(response, "getDiscUsage");
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
			m_ApiClient->assertResponseException(response, "getDocumentProperties");
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
			m_ApiClient->assertResponseException(response, "getDocumentProperty");
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
			m_ApiClient->assertResponseException(response, "getFileVersions");
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
			m_ApiClient->assertResponseException(response, "getFilesList");
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
			m_ApiClient->assertResponseException(response, "getFontScheme");
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
			m_ApiClient->assertResponseException(response, "getFormatScheme");
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
			m_ApiClient->assertResponseException(response, "getLayoutSlide");
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
			m_ApiClient->assertResponseException(response, "getLayoutSlides");
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
			m_ApiClient->assertResponseException(response, "getMasterSlide");
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
			m_ApiClient->assertResponseException(response, "getMasterSlides");
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
			m_ApiClient->assertResponseException(response, "getNotesSlide");
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
			m_ApiClient->assertResponseException(response, "getNotesSlideHeaderFooter");
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
			m_ApiClient->assertResponseException(response, "getNotesSlideOnline");
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
			m_ApiClient->assertResponseException(response, "getParagraph");
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
			m_ApiClient->assertResponseException(response, "getParagraphs");
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
			m_ApiClient->assertResponseException(response, "getPlaceholder");
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
			m_ApiClient->assertResponseException(response, "getPlaceholders");
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
			m_ApiClient->assertResponseException(response, "getPortion");
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
			m_ApiClient->assertResponseException(response, "getPortions");
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
			m_ApiClient->assertResponseException(response, "getPresentation");
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
			m_ApiClient->assertResponseException(response, "getPresentationImages");
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
			m_ApiClient->assertResponseException(response, "getPresentationTextItems");
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
			m_ApiClient->assertResponseException(response, "getProtectionProperties");
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
			m_ApiClient->assertResponseException(response, "getSections");
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
			m_ApiClient->assertResponseException(response, "getShape");
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
			m_ApiClient->assertResponseException(response, "getShapes");
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
			m_ApiClient->assertResponseException(response, "getSlide");
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
			m_ApiClient->assertResponseException(response, "getSlideComments");
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
			m_ApiClient->assertResponseException(response, "getSlideHeaderFooter");
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
			m_ApiClient->assertResponseException(response, "getSlideImages");
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
			m_ApiClient->assertResponseException(response, "getSlideProperties");
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
			m_ApiClient->assertResponseException(response, "getSlideTextItems");
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
			m_ApiClient->assertResponseException(response, "getSlides");
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::getSpecialSlideAnimation(utility::string_t name, int32_t slideIndex, utility::string_t slideType, boost::optional<int32_t> shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/animation");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);

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
			m_ApiClient->assertResponseException(response, "getSpecialSlideAnimation");
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getSpecialSlideParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "getSpecialSlideParagraph");
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::getSpecialSlideParagraphs(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "getSpecialSlideParagraphs");
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::getSpecialSlidePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "getSpecialSlidePortion");
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::getSpecialSlidePortions(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "getSpecialSlidePortions");
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::getSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "getSpecialSlideShape");
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::getSpecialSlideShapes(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);

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
			m_ApiClient->assertResponseException(response, "getSpecialSlideShapes");
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::getSpecialSlideSubshape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "getSpecialSlideSubshape");
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getSpecialSlideSubshapeParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "getSpecialSlideSubshapeParagraph");
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::getSpecialSlideSubshapeParagraphs(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "getSpecialSlideSubshapeParagraphs");
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::getSpecialSlideSubshapePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "getSpecialSlideSubshapePortion");
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::getSpecialSlideSubshapePortions(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "getSpecialSlideSubshapePortions");
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::getSpecialSlideSubshapes(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'path' is set
	if (path.empty())
	{
		throw std::invalid_argument("Missing required parameter: path");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "getSpecialSlideSubshapes");
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
			m_ApiClient->assertResponseException(response, "getSubshape");
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
			m_ApiClient->assertResponseException(response, "getSubshapeParagraph");
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
			m_ApiClient->assertResponseException(response, "getSubshapeParagraphs");
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
			m_ApiClient->assertResponseException(response, "getSubshapePortion");
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
			m_ApiClient->assertResponseException(response, "getSubshapePortions");
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
			m_ApiClient->assertResponseException(response, "getSubshapes");
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
			m_ApiClient->assertResponseException(response, "getTheme");
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
			m_ApiClient->assertResponseException(response, "getViewProperties");
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
			m_ApiClient->assertResponseException(response, "importFromHtml");
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
			m_ApiClient->assertResponseException(response, "importFromPdf");
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
			m_ApiClient->assertResponseException(response, "merge");
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
			m_ApiClient->assertResponseException(response, "mergeAndSaveOnline");
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
			m_ApiClient->assertResponseException(response, "mergeOnline");
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
			m_ApiClient->assertResponseException(response, "moveFile");
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
			m_ApiClient->assertResponseException(response, "moveFolder");
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
			m_ApiClient->assertResponseException(response, "moveSection");
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
			m_ApiClient->assertResponseException(response, "moveSlide");
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
			m_ApiClient->assertResponseException(response, "notesSlideExists");
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
			m_ApiClient->assertResponseException(response, "notesSlideExistsOnline");
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
			m_ApiClient->assertResponseException(response, "objectExists");
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
			m_ApiClient->assertResponseException(response, "orderedMerge");
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
			m_ApiClient->assertResponseException(response, "pipeline");
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
			m_ApiClient->assertResponseException(response, "reorderSlides");
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
			m_ApiClient->assertResponseException(response, "replacePresentationText");
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
			m_ApiClient->assertResponseException(response, "replacePresentationTextOnline");
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
			m_ApiClient->assertResponseException(response, "replaceSlideText");
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
			m_ApiClient->assertResponseException(response, "replaceSlideTextOnline");
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

pplx::task<void> SlidesApi::savePresentation(utility::string_t name, utility::string_t format, utility::string_t outPath, std::shared_ptr<ExportOptions> options, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder, std::vector<int32_t> slides)
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
			m_ApiClient->assertResponseException(response, "savePresentation");
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
			m_ApiClient->assertResponseException(response, "saveShape");
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::saveShapeOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, utility::string_t outPath, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder, std::shared_ptr<IShapeExportOptions> options)
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
	if (options != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(options->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "saveShapeOnline");
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
			m_ApiClient->assertResponseException(response, "saveSlide");
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::saveSlideOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, utility::string_t format, utility::string_t outPath, boost::optional<int32_t> width, boost::optional<int32_t> height, utility::string_t password, utility::string_t storage, utility::string_t fontsFolder, std::shared_ptr<ExportOptions> options)
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
	if (options != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(options->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "saveSlideOnline");
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::saveSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t format, utility::string_t outPath, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "saveSpecialSlideShape");
			return response.extract_string();
		})
		.then([=](utility::string_t response)
		{
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::saveSpecialSlideSubshape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, utility::string_t format, utility::string_t outPath, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/{format}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "saveSpecialSlideSubshape");
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
			m_ApiClient->assertResponseException(response, "saveSubshape");
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
			m_ApiClient->assertResponseException(response, "setAnimation");
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
			m_ApiClient->assertResponseException(response, "setBackground");
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
			m_ApiClient->assertResponseException(response, "setBackgroundColor");
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
			m_ApiClient->assertResponseException(response, "setDocumentProperties");
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
			m_ApiClient->assertResponseException(response, "setDocumentProperty");
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
			m_ApiClient->assertResponseException(response, "setNotesSlideHeaderFooter");
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
			m_ApiClient->assertResponseException(response, "setPresentationHeaderFooter");
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
			m_ApiClient->assertResponseException(response, "setProtection");
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
			m_ApiClient->assertResponseException(response, "setProtectionOnline");
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
			m_ApiClient->assertResponseException(response, "setSections");
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
			m_ApiClient->assertResponseException(response, "setSlideHeaderFooter");
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
			m_ApiClient->assertResponseException(response, "setSlideProperties");
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::setSpecialSlideAnimation(utility::string_t name, int32_t slideIndex, utility::string_t slideType, std::shared_ptr<SlideAnimation> animation, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	if (animation == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.animation");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/animation");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);

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
			m_ApiClient->assertResponseException(response, "setSpecialSlideAnimation");
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
			m_ApiClient->assertResponseException(response, "setViewProperties");
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
			m_ApiClient->assertResponseException(response, "split");
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
			m_ApiClient->assertResponseException(response, "splitAndSaveOnline");
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
			m_ApiClient->assertResponseException(response, "splitOnline");
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
			m_ApiClient->assertResponseException(response, "storageExists");
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
			m_ApiClient->assertResponseException(response, "updateAnimationEffect");
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
			m_ApiClient->assertResponseException(response, "updateAnimationInteractiveSequenceEffect");
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
			m_ApiClient->assertResponseException(response, "updateChartCategory");
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
			m_ApiClient->assertResponseException(response, "updateChartDataPoint");
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
			m_ApiClient->assertResponseException(response, "updateChartSeries");
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
			m_ApiClient->assertResponseException(response, "updateLayoutSlide");
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
			m_ApiClient->assertResponseException(response, "updateNotesSlide");
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
			m_ApiClient->assertResponseException(response, "updateParagraph");
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
			m_ApiClient->assertResponseException(response, "updatePortion");
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
			m_ApiClient->assertResponseException(response, "updateSection");
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
			m_ApiClient->assertResponseException(response, "updateShape");
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
			m_ApiClient->assertResponseException(response, "updateSlide");
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::updateSpecialSlideAnimationEffect(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t effectIndex, std::shared_ptr<Effect> effect, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	if (effect == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.effect");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/animation/mainSequence/{effectIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "updateSpecialSlideAnimationEffect");
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::updateSpecialSlideAnimationInteractiveSequenceEffect(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t sequenceIndex, int32_t effectIndex, std::shared_ptr<Effect> effect, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	if (effect == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.effect");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/animation/interactiveSequences/{sequenceIndex}/{effectIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "updateSpecialSlideAnimationInteractiveSequenceEffect");
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::updateSpecialSlideParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Paragraph> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "updateSpecialSlideParagraph");
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::updateSpecialSlidePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, std::shared_ptr<Portion> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "updateSpecialSlidePortion");
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::updateSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, std::shared_ptr<ShapeBase> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	if (dto == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "updateSpecialSlideShape");
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::updateSpecialSlideSubshape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, std::shared_ptr<ShapeBase> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "updateSpecialSlideSubshape");
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::updateSpecialSlideSubshapeParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Paragraph> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "updateSpecialSlideSubshapeParagraph");
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::updateSpecialSlideSubshapePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t path, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, std::shared_ptr<Portion> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
	}
	// verify the required parameter 'slideType' is set
	if (slideType.empty())
	{
		throw std::invalid_argument("Missing required parameter: slideType");
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
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
			m_ApiClient->assertResponseException(response, "updateSpecialSlideSubshapePortion");
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
			m_ApiClient->assertResponseException(response, "updateSubshape");
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
			m_ApiClient->assertResponseException(response, "updateSubshapeParagraph");
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
			m_ApiClient->assertResponseException(response, "updateSubshapePortion");
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
			m_ApiClient->assertResponseException(response, "uploadFile");
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

