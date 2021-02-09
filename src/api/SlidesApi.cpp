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

pplx::task<void> SlidesApi::copyFile(std::shared_ptr<CopyFileRequest> request)
{
	// verify the required parameter 'srcPath' is set
	if (request->getSrcPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.srcPath");
	}
	// verify the required parameter 'destPath' is set
	if (request->getDestPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.destPath");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/file/copy/{srcPath}");
	ApiClient::setPathParameter(path, "srcPath", request->getSrcPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destPath"), request->getDestPath());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("srcStorageName"), request->getSrcStorageName());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destStorageName"), request->getDestStorageName());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("versionId"), request->getVersionId());

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
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

pplx::task<void> SlidesApi::copyFolder(std::shared_ptr<CopyFolderRequest> request)
{
	// verify the required parameter 'srcPath' is set
	if (request->getSrcPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.srcPath");
	}
	// verify the required parameter 'destPath' is set
	if (request->getDestPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.destPath");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/folder/copy/{srcPath}");
	ApiClient::setPathParameter(path, "srcPath", request->getSrcPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destPath"), request->getDestPath());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("srcStorageName"), request->getSrcStorageName());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destStorageName"), request->getDestStorageName());

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
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

pplx::task<void> SlidesApi::createFolder(std::shared_ptr<CreateFolderRequest> request)
{
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/folder/{path}");
	ApiClient::setPathParameter(path, "path", request->getPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), request->getStorageName());

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::deleteChartCategory(std::shared_ptr<DeleteChartCategoryRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/categories/{categoryIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "categoryIndex", request->getCategoryIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::deleteChartDataPoint(std::shared_ptr<DeleteChartDataPointRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/series/{seriesIndex}/dataPoints/{pointIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "seriesIndex", request->getSeriesIndex());
	ApiClient::setPathParameter(path, "pointIndex", request->getPointIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::deleteChartSeries(std::shared_ptr<DeleteChartSeriesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/series/{seriesIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "seriesIndex", request->getSeriesIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<void> SlidesApi::deleteFile(std::shared_ptr<DeleteFileRequest> request)
{
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/file/{path}");
	ApiClient::setPathParameter(path, "path", request->getPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), request->getStorageName());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("versionId"), request->getVersionId());

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<void> SlidesApi::deleteFolder(std::shared_ptr<DeleteFolderRequest> request)
{
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/folder/{path}");
	ApiClient::setPathParameter(path, "path", request->getPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), request->getStorageName());
	if (request->recursiveIsSet())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("recursive"), request->getRecursive());
	}

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Slide>> SlidesApi::deleteNotesSlide(std::shared_ptr<DeleteNotesSlideRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteNotesSlideParagraph(std::shared_ptr<DeleteNotesSlideParagraphRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteNotesSlideParagraphs(std::shared_ptr<DeleteNotesSlideParagraphsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("paragraphs"), request->getParagraphs());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteNotesSlidePortion(std::shared_ptr<DeleteNotesSlidePortionRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());
	ApiClient::setPathParameter(path, "portionIndex", request->getPortionIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteNotesSlidePortions(std::shared_ptr<DeleteNotesSlidePortionsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("portions"), request->getPortions());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteNotesSlideShape(std::shared_ptr<DeleteNotesSlideShapeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteNotesSlideShapes(std::shared_ptr<DeleteNotesSlideShapesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapes"), request->getShapes());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteParagraph(std::shared_ptr<DeleteParagraphRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteParagraphs(std::shared_ptr<DeleteParagraphsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("paragraphs"), request->getParagraphs());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deletePortion(std::shared_ptr<DeletePortionRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());
	ApiClient::setPathParameter(path, "portionIndex", request->getPortionIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deletePortions(std::shared_ptr<DeletePortionsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("portions"), request->getPortions());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::deleteSection(std::shared_ptr<DeleteSectionRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/sections/{sectionIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "sectionIndex", request->getSectionIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	if (request->withSlidesIsSet())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("withSlides"), request->getWithSlides());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::deleteSections(std::shared_ptr<DeleteSectionsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/sections");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sections"), request->getSections());
	if (request->withSlidesIsSet())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("withSlides"), request->getWithSlides());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSlideAnimation(std::shared_ptr<DeleteSlideAnimationRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlideAnimation: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSlideAnimationEffect(std::shared_ptr<DeleteSlideAnimationEffectRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/mainSequence/{effectIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "effectIndex", request->getEffectIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlideAnimationEffect: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSlideAnimationInteractiveSequence(std::shared_ptr<DeleteSlideAnimationInteractiveSequenceRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/interactiveSequences/{sequenceIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "sequenceIndex", request->getSequenceIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlideAnimationInteractiveSequence: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSlideAnimationInteractiveSequenceEffect(std::shared_ptr<DeleteSlideAnimationInteractiveSequenceEffectRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/interactiveSequences/{sequenceIndex}/{effectIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "sequenceIndex", request->getSequenceIndex());
	ApiClient::setPathParameter(path, "effectIndex", request->getEffectIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlideAnimationInteractiveSequenceEffect: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSlideAnimationInteractiveSequences(std::shared_ptr<DeleteSlideAnimationInteractiveSequencesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/interactiveSequences");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlideAnimationInteractiveSequences: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSlideAnimationMainSequence(std::shared_ptr<DeleteSlideAnimationMainSequenceRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/mainSequence");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlideAnimationMainSequence: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::deleteSlideByIndex(std::shared_ptr<DeleteSlideByIndexRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlideByIndex: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSlideShape(std::shared_ptr<DeleteSlideShapeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlideShape: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSlideShapes(std::shared_ptr<DeleteSlideShapesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapes"), request->getShapes());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlideShapes: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSlideSubshape(std::shared_ptr<DeleteSlideSubshapeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlideSubshape: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSlideSubshapes(std::shared_ptr<DeleteSlideSubshapesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapes"), request->getShapes());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlideSubshapes: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::deleteSlidesCleanSlidesList(std::shared_ptr<DeleteSlidesCleanSlidesListRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("slides"), request->getSlides());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlidesCleanSlidesList: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<DocumentProperties>> SlidesApi::deleteSlidesDocumentProperties(std::shared_ptr<DeleteSlidesDocumentPropertiesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/documentproperties");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlidesDocumentProperties: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<DocumentProperties>> SlidesApi::deleteSlidesDocumentProperty(std::shared_ptr<DeleteSlidesDocumentPropertyRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'propertyName' is set
	if (request->getPropertyName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.propertyName");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/documentproperties/{propertyName}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "propertyName", request->getPropertyName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlidesDocumentProperty: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideBackground>> SlidesApi::deleteSlidesSlideBackground(std::shared_ptr<DeleteSlidesSlideBackgroundRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/background");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling deleteSlidesSlideBackground: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteSubshapeParagraph(std::shared_ptr<DeleteSubshapeParagraphRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteSubshapeParagraphs(std::shared_ptr<DeleteSubshapeParagraphsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("paragraphs"), request->getParagraphs());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteSubshapePortion(std::shared_ptr<DeleteSubshapePortionRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());
	ApiClient::setPathParameter(path, "portionIndex", request->getPortionIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteSubshapePortions(std::shared_ptr<DeleteSubshapePortionsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("portions"), request->getPortions());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody)
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

pplx::task<HttpContent> SlidesApi::downloadFile(std::shared_ptr<DownloadFileRequest> request)
{
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/file/{path}");
	ApiClient::setPathParameter(path, "path", request->getPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), request->getStorageName());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("versionId"), request->getVersionId());

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<DiscUsage>> SlidesApi::getDiscUsage(std::shared_ptr<GetDiscUsageRequest> request)
{
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/disc");

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), request->getStorageName());

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<FileVersions>> SlidesApi::getFileVersions(std::shared_ptr<GetFileVersionsRequest> request)
{
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/version/{path}");
	ApiClient::setPathParameter(path, "path", request->getPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), request->getStorageName());

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<FilesList>> SlidesApi::getFilesList(std::shared_ptr<GetFilesListRequest> request)
{
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/folder/{path}");
	ApiClient::setPathParameter(path, "path", request->getPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), request->getStorageName());

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<LayoutSlide>> SlidesApi::getLayoutSlide(std::shared_ptr<GetLayoutSlideRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/layoutSlides/{slideIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<LayoutSlides>> SlidesApi::getLayoutSlidesList(std::shared_ptr<GetLayoutSlidesListRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/layoutSlides");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getLayoutSlidesList: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<MasterSlide>> SlidesApi::getMasterSlide(std::shared_ptr<GetMasterSlideRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/masterSlides/{slideIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<MasterSlides>> SlidesApi::getMasterSlidesList(std::shared_ptr<GetMasterSlidesListRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/masterSlides");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getMasterSlidesList: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<NotesSlide>> SlidesApi::getNotesSlide(std::shared_ptr<GetNotesSlideRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<EntityExists>> SlidesApi::getNotesSlideExists(std::shared_ptr<GetNotesSlideExistsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/exist");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlideExists: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<NotesSlideHeaderFooter>> SlidesApi::getNotesSlideHeaderFooter(std::shared_ptr<GetNotesSlideHeaderFooterRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/headerFooter");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::getNotesSlideShape(std::shared_ptr<GetNotesSlideShapeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getNotesSlideShapeParagraph(std::shared_ptr<GetNotesSlideShapeParagraphRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlideShapeParagraph: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::getNotesSlideShapeParagraphs(std::shared_ptr<GetNotesSlideShapeParagraphsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlideShapeParagraphs: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::getNotesSlideShapePortion(std::shared_ptr<GetNotesSlideShapePortionRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());
	ApiClient::setPathParameter(path, "portionIndex", request->getPortionIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlideShapePortion: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::getNotesSlideShapePortions(std::shared_ptr<GetNotesSlideShapePortionsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlideShapePortions: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::getNotesSlideShapes(std::shared_ptr<GetNotesSlideShapesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<HttpContent> SlidesApi::getNotesSlideWithFormat(std::shared_ptr<GetNotesSlideWithFormatRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/{format}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	if (request->widthIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), request->getWidth());
	}
	if (request->heightIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), request->getHeight());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getNotesSlideWithFormat: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::getParagraphPortion(std::shared_ptr<GetParagraphPortionRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());
	ApiClient::setPathParameter(path, "portionIndex", request->getPortionIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getParagraphPortion: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::getParagraphPortions(std::shared_ptr<GetParagraphPortionsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getParagraphPortions: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::getSections(std::shared_ptr<GetSectionsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/sections");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::getSlideAnimation(std::shared_ptr<GetSlideAnimationRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	if (request->shapeIndexIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapeIndex"), request->getShapeIndex());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideAnimation: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<HeaderFooter>> SlidesApi::getSlideHeaderFooter(std::shared_ptr<GetSlideHeaderFooterRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/headerFooter");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::getSlideShape(std::shared_ptr<GetSlideShapeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideShape: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getSlideShapeParagraph(std::shared_ptr<GetSlideShapeParagraphRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideShapeParagraph: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::getSlideShapeParagraphs(std::shared_ptr<GetSlideShapeParagraphsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideShapeParagraphs: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::getSlideShapes(std::shared_ptr<GetSlideShapesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideShapes: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::getSlideSubshape(std::shared_ptr<GetSlideSubshapeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideSubshape: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getSlideSubshapeParagraph(std::shared_ptr<GetSlideSubshapeParagraphRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideSubshapeParagraph: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::getSlideSubshapeParagraphs(std::shared_ptr<GetSlideSubshapeParagraphsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideSubshapeParagraphs: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::getSlideSubshapes(std::shared_ptr<GetSlideSubshapesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlideSubshapes: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<ApiInfo>> SlidesApi::getSlidesApiInfo()
{
	utility::string_t path = utility::conversions::to_string_t("/slides/info");

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesApiInfo: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Document>> SlidesApi::getSlidesDocument(std::shared_ptr<GetSlidesDocumentRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesDocument: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<DocumentProperties>> SlidesApi::getSlidesDocumentProperties(std::shared_ptr<GetSlidesDocumentPropertiesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/documentproperties");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesDocumentProperties: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<DocumentProperty>> SlidesApi::getSlidesDocumentProperty(std::shared_ptr<GetSlidesDocumentPropertyRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'propertyName' is set
	if (request->getPropertyName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.propertyName");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/documentproperties/{propertyName}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "propertyName", request->getPropertyName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesDocumentProperty: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::getSlidesImageWithDefaultFormat(std::shared_ptr<GetSlidesImageWithDefaultFormatRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/images/{index}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "index", request->getIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesImageWithDefaultFormat: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::getSlidesImageWithFormat(std::shared_ptr<GetSlidesImageWithFormatRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/images/{index}/{format}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "index", request->getIndex());
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesImageWithFormat: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Images>> SlidesApi::getSlidesImages(std::shared_ptr<GetSlidesImagesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/images");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesImages: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Placeholder>> SlidesApi::getSlidesPlaceholder(std::shared_ptr<GetSlidesPlaceholderRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/placeholders/{placeholderIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "placeholderIndex", request->getPlaceholderIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesPlaceholder: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Placeholders>> SlidesApi::getSlidesPlaceholders(std::shared_ptr<GetSlidesPlaceholdersRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/placeholders");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesPlaceholders: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<TextItems>> SlidesApi::getSlidesPresentationTextItems(std::shared_ptr<GetSlidesPresentationTextItemsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/textItems");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	if (request->withEmptyIsSet())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("withEmpty"), request->getWithEmpty());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesPresentationTextItems: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<ProtectionProperties>> SlidesApi::getSlidesProtectionProperties(std::shared_ptr<GetSlidesProtectionPropertiesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/protectionProperties");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesProtectionProperties: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Slide>> SlidesApi::getSlidesSlide(std::shared_ptr<GetSlidesSlideRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesSlide: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideBackground>> SlidesApi::getSlidesSlideBackground(std::shared_ptr<GetSlidesSlideBackgroundRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/background");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesSlideBackground: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideComments>> SlidesApi::getSlidesSlideComments(std::shared_ptr<GetSlidesSlideCommentsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/comments");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesSlideComments: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Images>> SlidesApi::getSlidesSlideImages(std::shared_ptr<GetSlidesSlideImagesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/images");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesSlideImages: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideProperties>> SlidesApi::getSlidesSlideProperties(std::shared_ptr<GetSlidesSlidePropertiesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slideProperties");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesSlideProperties: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<TextItems>> SlidesApi::getSlidesSlideTextItems(std::shared_ptr<GetSlidesSlideTextItemsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/textItems");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	if (request->withEmptyIsSet())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("withEmpty"), request->getWithEmpty());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesSlideTextItems: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::getSlidesSlidesList(std::shared_ptr<GetSlidesSlidesListRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesSlidesList: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Theme>> SlidesApi::getSlidesTheme(std::shared_ptr<GetSlidesThemeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/theme");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesTheme: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<ColorScheme>> SlidesApi::getSlidesThemeColorScheme(std::shared_ptr<GetSlidesThemeColorSchemeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/theme/colorScheme");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesThemeColorScheme: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<FontScheme>> SlidesApi::getSlidesThemeFontScheme(std::shared_ptr<GetSlidesThemeFontSchemeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/theme/fontScheme");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesThemeFontScheme: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<FormatScheme>> SlidesApi::getSlidesThemeFormatScheme(std::shared_ptr<GetSlidesThemeFormatSchemeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/theme/formatScheme");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesThemeFormatScheme: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<ViewProperties>> SlidesApi::getSlidesViewProperties(std::shared_ptr<GetSlidesViewPropertiesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/viewProperties");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSlidesViewProperties: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::getSubshapeParagraphPortion(std::shared_ptr<GetSubshapeParagraphPortionRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());
	ApiClient::setPathParameter(path, "portionIndex", request->getPortionIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSubshapeParagraphPortion: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::getSubshapeParagraphPortions(std::shared_ptr<GetSubshapeParagraphPortionsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling getSubshapeParagraphPortions: ") + response.reason_phrase(),
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

pplx::task<void> SlidesApi::moveFile(std::shared_ptr<MoveFileRequest> request)
{
	// verify the required parameter 'srcPath' is set
	if (request->getSrcPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.srcPath");
	}
	// verify the required parameter 'destPath' is set
	if (request->getDestPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.destPath");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/file/move/{srcPath}");
	ApiClient::setPathParameter(path, "srcPath", request->getSrcPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destPath"), request->getDestPath());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("srcStorageName"), request->getSrcStorageName());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destStorageName"), request->getDestStorageName());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("versionId"), request->getVersionId());

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
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

pplx::task<void> SlidesApi::moveFolder(std::shared_ptr<MoveFolderRequest> request)
{
	// verify the required parameter 'srcPath' is set
	if (request->getSrcPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.srcPath");
	}
	// verify the required parameter 'destPath' is set
	if (request->getDestPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.destPath");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/folder/move/{srcPath}");
	ApiClient::setPathParameter(path, "srcPath", request->getSrcPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destPath"), request->getDestPath());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("srcStorageName"), request->getSrcStorageName());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destStorageName"), request->getDestStorageName());

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<ObjectExist>> SlidesApi::objectExists(std::shared_ptr<ObjectExistsRequest> request)
{
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/exist/{path}");
	ApiClient::setPathParameter(path, "path", request->getPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), request->getStorageName());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("versionId"), request->getVersionId());

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::postAddNewParagraph(std::shared_ptr<PostAddNewParagraphRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->positionIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), request->getPosition());
	}

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postAddNewParagraph: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::postAddNewPortion(std::shared_ptr<PostAddNewPortionRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->positionIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), request->getPosition());
	}

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postAddNewPortion: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::postAddNewShape(std::shared_ptr<PostAddNewShapeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->shapeToCloneIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapeToClone"), request->getShapeToClone());
	}
	if (request->positionIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), request->getPosition());
	}

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postAddNewShape: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::postAddNewSubshape(std::shared_ptr<PostAddNewSubshapeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->shapeToCloneIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapeToClone"), request->getShapeToClone());
	}
	if (request->positionIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), request->getPosition());
	}

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postAddNewSubshape: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::postAddNewSubshapeParagraph(std::shared_ptr<PostAddNewSubshapeParagraphRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->positionIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), request->getPosition());
	}

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postAddNewSubshapeParagraph: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::postAddNewSubshapePortion(std::shared_ptr<PostAddNewSubshapePortionRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->positionIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), request->getPosition());
	}

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postAddNewSubshapePortion: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<NotesSlide>> SlidesApi::postAddNotesSlide(std::shared_ptr<PostAddNotesSlideRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postAddNotesSlide: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::postChartCategory(std::shared_ptr<PostChartCategoryRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getCategory() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.category");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/categories");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getCategory() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getCategory()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postChartCategory: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::postChartDataPoint(std::shared_ptr<PostChartDataPointRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDataPoint() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dataPoint");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/series/{seriesIndex}/dataPoints");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "seriesIndex", request->getSeriesIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDataPoint() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDataPoint()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postChartDataPoint: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::postChartSeries(std::shared_ptr<PostChartSeriesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getSeries() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.series");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/series");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getSeries() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getSeries()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postChartSeries: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<LayoutSlide>> SlidesApi::postCopyLayoutSlideFromSourcePresentation(std::shared_ptr<PostCopyLayoutSlideFromSourcePresentationRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'cloneFrom' is set
	if (request->getCloneFrom().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.cloneFrom");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/layoutSlides");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("cloneFrom"), request->getCloneFrom());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("cloneFromPosition"), request->getCloneFromPosition());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("cloneFromStorage"), request->getCloneFromStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("cloneFromPassword"), request->getCloneFromPassword());
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postCopyLayoutSlideFromSourcePresentation: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<MasterSlide>> SlidesApi::postCopyMasterSlideFromSourcePresentation(std::shared_ptr<PostCopyMasterSlideFromSourcePresentationRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'cloneFrom' is set
	if (request->getCloneFrom().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.cloneFrom");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/masterSlides");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("cloneFrom"), request->getCloneFrom());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("cloneFromPosition"), request->getCloneFromPosition());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("cloneFromStorage"), request->getCloneFromStorage());
	if (request->applyToAllIsSet())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("applyToAll"), request->getApplyToAll());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("cloneFromPassword"), request->getCloneFromPassword());
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postCopyMasterSlideFromSourcePresentation: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<NotesSlide>> SlidesApi::postGetNotesSlide(std::shared_ptr<PostGetNotesSlideRequest> request)
{
	if (request->getDocument() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/slides/{slideIndex}/notesSlide");
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	httpBody = request->getDocument();

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postGetNotesSlide: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<EntityExists>> SlidesApi::postGetNotesSlideExists(std::shared_ptr<PostGetNotesSlideExistsRequest> request)
{
	if (request->getDocument() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/slides/{slideIndex}/notesSlide/exist");
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	httpBody = request->getDocument();

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postGetNotesSlideExists: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postGetNotesSlideWithFormat(std::shared_ptr<PostGetNotesSlideWithFormatRequest> request)
{
	if (request->getDocument() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/slides/{slideIndex}/notesSlide/{format}");
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	if (request->widthIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), request->getWidth());
	}
	if (request->heightIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), request->getHeight());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	httpBody = request->getDocument();

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postGetNotesSlideWithFormat: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::postNotesSlideAddNewParagraph(std::shared_ptr<PostNotesSlideAddNewParagraphRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->positionIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), request->getPosition());
	}

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postNotesSlideAddNewParagraph: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::postNotesSlideAddNewPortion(std::shared_ptr<PostNotesSlideAddNewPortionRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->positionIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), request->getPosition());
	}

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postNotesSlideAddNewPortion: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::postNotesSlideAddNewShape(std::shared_ptr<PostNotesSlideAddNewShapeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->shapeToCloneIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapeToClone"), request->getShapeToClone());
	}
	if (request->positionIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), request->getPosition());
	}

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postNotesSlideAddNewShape: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postNotesSlideShapeSaveAs(std::shared_ptr<PostNotesSlideShapeSaveAsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/{format}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->scaleXIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), request->getScaleX());
	}
	if (request->scaleYIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), request->getScaleY());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), request->getBounds());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getOptions() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getOptions()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postNotesSlideShapeSaveAs: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Document>> SlidesApi::postPresentationMerge(std::shared_ptr<PostPresentationMergeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getRequest() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.request");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/merge");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getRequest() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getRequest()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postPresentationMerge: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::postSection(std::shared_ptr<PostSectionRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'sectionName' is set
	if (request->getSectionName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.sectionName");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/sections");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sectionName"), request->getSectionName());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("slideIndex"), request->getSlideIndex());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSection: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::postSectionMove(std::shared_ptr<PostSectionMoveRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/sections/{sectionIndex}/move");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "sectionIndex", request->getSectionIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("newPosition"), request->getNewPosition());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSectionMove: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postShapeSaveAs(std::shared_ptr<PostShapeSaveAsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/{format}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->scaleXIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), request->getScaleX());
	}
	if (request->scaleYIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), request->getScaleY());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), request->getBounds());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getOptions() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getOptions()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postShapeSaveAs: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::postSlideAnimationEffect(std::shared_ptr<PostSlideAnimationEffectRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getEffect() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.effect");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/mainSequence");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getEffect() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getEffect()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlideAnimationEffect: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::postSlideAnimationInteractiveSequence(std::shared_ptr<PostSlideAnimationInteractiveSequenceRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getSequence() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.sequence");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/interactiveSequences");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getSequence() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getSequence()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlideAnimationInteractiveSequence: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::postSlideAnimationInteractiveSequenceEffect(std::shared_ptr<PostSlideAnimationInteractiveSequenceEffectRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getEffect() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.effect");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/interactiveSequences/{sequenceIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "sequenceIndex", request->getSequenceIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getEffect() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getEffect()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlideAnimationInteractiveSequenceEffect: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postSlideSaveAs(std::shared_ptr<PostSlideSaveAsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{format}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	if (request->widthIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), request->getWidth());
	}
	if (request->heightIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), request->getHeight());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getOptions() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getOptions()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlideSaveAs: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::postSlidesAdd(std::shared_ptr<PostSlidesAddRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	if (request->positionIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), request->getPosition());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("layoutAlias"), request->getLayoutAlias());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesAdd: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postSlidesConvert(std::shared_ptr<PostSlidesConvertRequest> request)
{
	if (request->getDocument() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/convert/{format}");
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	httpBody = request->getDocument();

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesConvert: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::postSlidesCopy(std::shared_ptr<PostSlidesCopyRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/copy");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("slideToCopy"), request->getSlideToCopy());
	if (request->positionIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("position"), request->getPosition());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("source"), request->getSource());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sourceStorage"), request->getSourceStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("sourcePassword"), request->getSourcePassword());
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesCopy: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Document>> SlidesApi::postSlidesDocument(std::shared_ptr<PostSlidesDocumentRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("inputPassword"), request->getInputPassword());
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	httpBody = request->getData();

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesDocument: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Document>> SlidesApi::postSlidesDocumentFromHtml(std::shared_ptr<PostSlidesDocumentFromHtmlRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/fromHtml");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (!request->getHtml().empty())
	{
		httpBody = std::shared_ptr<IHttpBody>(new StringBody(request->getHtml()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesDocumentFromHtml: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Document>> SlidesApi::postSlidesDocumentFromPdf(std::shared_ptr<PostSlidesDocumentFromPdfRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/fromPdf");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	httpBody = request->getPdf();

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesDocumentFromPdf: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Document>> SlidesApi::postSlidesDocumentFromSource(std::shared_ptr<PostSlidesDocumentFromSourceRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/fromSource");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sourcePath"), request->getSourcePath());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sourceStorage"), request->getSourceStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("sourcePassword"), request->getSourcePassword());
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesDocumentFromSource: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Document>> SlidesApi::postSlidesDocumentFromTemplate(std::shared_ptr<PostSlidesDocumentFromTemplateRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'templatePath' is set
	if (request->getTemplatePath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.templatePath");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/fromTemplate");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("templatePath"), request->getTemplatePath());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("templateStorage"), request->getTemplateStorage());
	if (request->isImageDataEmbeddedIsSet())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("isImageDataEmbedded"), request->getIsImageDataEmbedded());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("templatePassword"), request->getTemplatePassword());
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (!request->getData().empty())
	{
		httpBody = std::shared_ptr<IHttpBody>(new StringBody(request->getData()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesDocumentFromTemplate: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postSlidesPipeline(std::shared_ptr<PostSlidesPipelineRequest> request)
{
	if (request->getPipeline() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.pipeline");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/pipeline");

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getPipeline() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getPipeline()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesPipeline: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<DocumentReplaceResult>> SlidesApi::postSlidesPresentationReplaceText(std::shared_ptr<PostSlidesPresentationReplaceTextRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'oldValue' is set
	if (request->getOldValue().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.oldValue");
	}
	// verify the required parameter 'newValue' is set
	if (request->getNewValue().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.newValue");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/replaceText");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("oldValue"), request->getOldValue());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("newValue"), request->getNewValue());
	if (request->ignoreCaseIsSet())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("ignoreCase"), request->getIgnoreCase());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesPresentationReplaceText: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::postSlidesReorder(std::shared_ptr<PostSlidesReorderRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/move");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("newPosition"), request->getNewPosition());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesReorder: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::postSlidesReorderMany(std::shared_ptr<PostSlidesReorderManyRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/reorder");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("oldPositions"), request->getOldPositions());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("newPositions"), request->getNewPositions());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesReorderMany: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postSlidesSaveAs(std::shared_ptr<PostSlidesSaveAsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/{format}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getOptions() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getOptions()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesSaveAs: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<DocumentProperties>> SlidesApi::postSlidesSetDocumentProperties(std::shared_ptr<PostSlidesSetDocumentPropertiesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getProperties() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.properties");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/documentproperties");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getProperties() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getProperties()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesSetDocumentProperties: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideReplaceResult>> SlidesApi::postSlidesSlideReplaceText(std::shared_ptr<PostSlidesSlideReplaceTextRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'oldValue' is set
	if (request->getOldValue().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.oldValue");
	}
	// verify the required parameter 'newValue' is set
	if (request->getNewValue().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.newValue");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/replaceText");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("oldValue"), request->getOldValue());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("newValue"), request->getNewValue());
	if (request->ignoreCaseIsSet())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("ignoreCase"), request->getIgnoreCase());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesSlideReplaceText: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SplitDocumentResult>> SlidesApi::postSlidesSplit(std::shared_ptr<PostSlidesSplitRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/split");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("format"), request->getFormat());
	if (request->widthIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), request->getWidth());
	}
	if (request->heightIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), request->getHeight());
	}
	if (request->toIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("to"), request->getTo());
	}
	if (request->fromIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("from"), request->getFrom());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("destFolder"), request->getDestFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getOptions() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getOptions()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlidesSplit: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postSubshapeSaveAs(std::shared_ptr<PostSubshapeSaveAsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/{format}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->scaleXIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), request->getScaleX());
	}
	if (request->scaleYIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), request->getScaleY());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), request->getBounds());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getOptions() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getOptions()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSubshapeSaveAs: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::putChartCategory(std::shared_ptr<PutChartCategoryRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getCategory() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.category");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/categories/{categoryIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "categoryIndex", request->getCategoryIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getCategory() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getCategory()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putChartCategory: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::putChartDataPoint(std::shared_ptr<PutChartDataPointRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDataPoint() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dataPoint");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/series/{seriesIndex}/dataPoints/{pointIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "seriesIndex", request->getSeriesIndex());
	ApiClient::setPathParameter(path, "pointIndex", request->getPointIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDataPoint() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDataPoint()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putChartDataPoint: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::putChartSeries(std::shared_ptr<PutChartSeriesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getSeries() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.series");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/series/{seriesIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "seriesIndex", request->getSeriesIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getSeries() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getSeries()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putChartSeries: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<LayoutSlide>> SlidesApi::putLayoutSlide(std::shared_ptr<PutLayoutSlideRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getSlideDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.slideDto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/layoutSlides/{slideIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getSlideDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getSlideDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putLayoutSlide: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<NotesSlideHeaderFooter>> SlidesApi::putNotesSlideHeaderFooter(std::shared_ptr<PutNotesSlideHeaderFooterRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/headerFooter");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putNotesSlideHeaderFooter: ") + response.reason_phrase(),
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

pplx::task<void> SlidesApi::putNotesSlideShapeSaveAs(std::shared_ptr<PutNotesSlideShapeSaveAsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'outPath' is set
	if (request->getOutPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.outPath");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/{format}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), request->getOutPath());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->scaleXIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), request->getScaleX());
	}
	if (request->scaleYIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), request->getScaleY());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), request->getBounds());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getOptions() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getOptions()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putNotesSlideShapeSaveAs: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Document>> SlidesApi::putPresentationMerge(std::shared_ptr<PutPresentationMergeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getRequest() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.request");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/merge");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getRequest() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getRequest()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putPresentationMerge: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::putSection(std::shared_ptr<PutSectionRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'sectionName' is set
	if (request->getSectionName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.sectionName");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/sections/{sectionIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "sectionIndex", request->getSectionIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sectionName"), request->getSectionName());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSection: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::putSections(std::shared_ptr<PutSectionsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getSections() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.sections");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/sections");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getSections() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getSections()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSections: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::putSetParagraphPortionProperties(std::shared_ptr<PutSetParagraphPortionPropertiesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());
	ApiClient::setPathParameter(path, "portionIndex", request->getPortionIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSetParagraphPortionProperties: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::putSetParagraphProperties(std::shared_ptr<PutSetParagraphPropertiesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSetParagraphProperties: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::putSetSubshapeParagraphPortionProperties(std::shared_ptr<PutSetSubshapeParagraphPortionPropertiesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());
	ApiClient::setPathParameter(path, "portionIndex", request->getPortionIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSetSubshapeParagraphPortionProperties: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::putSetSubshapeParagraphProperties(std::shared_ptr<PutSetSubshapeParagraphPropertiesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSetSubshapeParagraphProperties: ") + response.reason_phrase(),
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

pplx::task<void> SlidesApi::putShapeSaveAs(std::shared_ptr<PutShapeSaveAsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'outPath' is set
	if (request->getOutPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.outPath");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/{format}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), request->getOutPath());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->scaleXIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), request->getScaleX());
	}
	if (request->scaleYIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), request->getScaleY());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), request->getBounds());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getOptions() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getOptions()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putShapeSaveAs: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::putSlideAnimation(std::shared_ptr<PutSlideAnimationRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getAnimation() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.animation");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getAnimation() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getAnimation()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlideAnimation: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::putSlideAnimationEffect(std::shared_ptr<PutSlideAnimationEffectRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getEffect() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.effect");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/mainSequence/{effectIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "effectIndex", request->getEffectIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getEffect() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getEffect()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlideAnimationEffect: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::putSlideAnimationInteractiveSequenceEffect(std::shared_ptr<PutSlideAnimationInteractiveSequenceEffectRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getEffect() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.effect");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/animation/interactiveSequences/{sequenceIndex}/{effectIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "sequenceIndex", request->getSequenceIndex());
	ApiClient::setPathParameter(path, "effectIndex", request->getEffectIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getEffect() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getEffect()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlideAnimationInteractiveSequenceEffect: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<HeaderFooter>> SlidesApi::putSlideHeaderFooter(std::shared_ptr<PutSlideHeaderFooterRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/headerFooter");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlideHeaderFooter: ") + response.reason_phrase(),
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

pplx::task<void> SlidesApi::putSlideSaveAs(std::shared_ptr<PutSlideSaveAsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'outPath' is set
	if (request->getOutPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.outPath");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{format}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), request->getOutPath());
	if (request->widthIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), request->getWidth());
	}
	if (request->heightIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), request->getHeight());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getOptions() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getOptions()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlideSaveAs: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::putSlideShapeInfo(std::shared_ptr<PutSlideShapeInfoRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlideShapeInfo: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::putSlideSubshapeInfo(std::shared_ptr<PutSlideSubshapeInfoRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlideSubshapeInfo: ") + response.reason_phrase(),
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

pplx::task<void> SlidesApi::putSlidesConvert(std::shared_ptr<PutSlidesConvertRequest> request)
{
	if (request->getDocument() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'outPath' is set
	if (request->getOutPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.outPath");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/convert/{format}");
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), request->getOutPath());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	httpBody = request->getDocument();

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlidesConvert: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Document>> SlidesApi::putSlidesDocumentFromHtml(std::shared_ptr<PutSlidesDocumentFromHtmlRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/fromHtml");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (!request->getHtml().empty())
	{
		httpBody = std::shared_ptr<IHttpBody>(new StringBody(request->getHtml()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlidesDocumentFromHtml: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Document>> SlidesApi::putSlidesHeaderFooter(std::shared_ptr<PutSlidesHeaderFooterRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/headerFooter");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlidesHeaderFooter: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<ProtectionProperties>> SlidesApi::putSlidesProtectionProperties(std::shared_ptr<PutSlidesProtectionPropertiesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/protectionProperties");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlidesProtectionProperties: ") + response.reason_phrase(),
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

pplx::task<void> SlidesApi::putSlidesSaveAs(std::shared_ptr<PutSlidesSaveAsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'outPath' is set
	if (request->getOutPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.outPath");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/{format}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), request->getOutPath());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getOptions() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getOptions()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlidesSaveAs: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<DocumentProperty>> SlidesApi::putSlidesSetDocumentProperty(std::shared_ptr<PutSlidesSetDocumentPropertyRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'propertyName' is set
	if (request->getPropertyName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.propertyName");
	}
	if (request->getProperty() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.property");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/documentproperties/{propertyName}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "propertyName", request->getPropertyName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getProperty() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getProperty()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlidesSetDocumentProperty: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Slide>> SlidesApi::putSlidesSlide(std::shared_ptr<PutSlidesSlideRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getSlideDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.slideDto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getSlideDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getSlideDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlidesSlide: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideBackground>> SlidesApi::putSlidesSlideBackground(std::shared_ptr<PutSlidesSlideBackgroundRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getBackground() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.background");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/background");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getBackground() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getBackground()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlidesSlideBackground: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideBackground>> SlidesApi::putSlidesSlideBackgroundColor(std::shared_ptr<PutSlidesSlideBackgroundColorRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'color' is set
	if (request->getColor().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.color");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/backgroundColor");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("color"), request->getColor());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlidesSlideBackgroundColor: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SlideProperties>> SlidesApi::putSlidesSlideProperties(std::shared_ptr<PutSlidesSlidePropertiesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slideProperties");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlidesSlideProperties: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Document>> SlidesApi::putSlidesSlideSize(std::shared_ptr<PutSlidesSlideSizeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slideSize");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	if (request->widthIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), request->getWidth());
	}
	if (request->heightIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), request->getHeight());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sizeType"), request->getSizeType());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleType"), request->getScaleType());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlidesSlideSize: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<ViewProperties>> SlidesApi::putSlidesViewProperties(std::shared_ptr<PutSlidesViewPropertiesRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/viewProperties");
	ApiClient::setPathParameter(path, "name", request->getName());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSlidesViewProperties: ") + response.reason_phrase(),
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

pplx::task<void> SlidesApi::putSubshapeSaveAs(std::shared_ptr<PutSubshapeSaveAsRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'format' is set
	if (request->getFormat().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.format");
	}
	// verify the required parameter 'outPath' is set
	if (request->getOutPath().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.outPath");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{path}/{shapeIndex}/{format}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "path", request->getPath());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "format", request->getFormat());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), request->getOutPath());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());
	if (request->scaleXIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), request->getScaleX());
	}
	if (request->scaleYIsSet())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), request->getScaleY());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), request->getBounds());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), request->getFontsFolder());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getOptions() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getOptions()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putSubshapeSaveAs: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<NotesSlide>> SlidesApi::putUpdateNotesSlide(std::shared_ptr<PutUpdateNotesSlideRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putUpdateNotesSlide: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::putUpdateNotesSlideShape(std::shared_ptr<PutUpdateNotesSlideShapeRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putUpdateNotesSlideShape: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::putUpdateNotesSlideShapeParagraph(std::shared_ptr<PutUpdateNotesSlideShapeParagraphRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putUpdateNotesSlideShapeParagraph: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::putUpdateNotesSlideShapePortion(std::shared_ptr<PutUpdateNotesSlideShapePortionRequest> request)
{
	// verify the required parameter 'name' is set
	if (request->getName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.name");
	}
	if (request->getDto() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.dto");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/notesSlide/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}");
	ApiClient::setPathParameter(path, "name", request->getName());
	ApiClient::setPathParameter(path, "slideIndex", request->getSlideIndex());
	ApiClient::setPathParameter(path, "shapeIndex", request->getShapeIndex());
	ApiClient::setPathParameter(path, "paragraphIndex", request->getParagraphIndex());
	ApiClient::setPathParameter(path, "portionIndex", request->getPortionIndex());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), request->getFolder());
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), request->getStorage());

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), request->getPassword());

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	if (request->getDto() != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(request->getDto()->toJson()));
	}

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putUpdateNotesSlideShapePortion: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<StorageExist>> SlidesApi::storageExists(std::shared_ptr<StorageExistsRequest> request)
{
	// verify the required parameter 'storageName' is set
	if (request->getStorageName().empty())
	{
		throw std::invalid_argument("Missing required parameter: request.storageName");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/{storageName}/exist");
	ApiClient::setPathParameter(path, "storageName", request->getStorageName());

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody)
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

pplx::task<std::shared_ptr<FilesUploadResult>> SlidesApi::uploadFile(std::shared_ptr<UploadFileRequest> request)
{
	if (request->getFile() == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.file");
	}
	utility::string_t path = utility::conversions::to_string_t("/slides/storage/file/{path}");
	ApiClient::setPathParameter(path, "path", request->getPath());

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storageName"), request->getStorageName());

	std::map<utility::string_t, utility::string_t> headerParams;

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	httpBody = request->getFile();

	return m_ApiClient->callApi(path, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody)
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

