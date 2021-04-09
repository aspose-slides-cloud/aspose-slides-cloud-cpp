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

pplx::task<void> SlidesApi::copyFile(std::shared_ptr<CopyFileRequest> request)
{
	return copyFile(request->getSrcPath(), request->getDestPath(), request->getSrcStorageName(), request->getDestStorageName(), request->getVersionId());
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

pplx::task<void> SlidesApi::copyFolder(std::shared_ptr<CopyFolderRequest> request)
{
	return copyFolder(request->getSrcPath(), request->getDestPath(), request->getSrcStorageName(), request->getDestStorageName());
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

pplx::task<void> SlidesApi::createFolder(std::shared_ptr<CreateFolderRequest> request)
{
	return createFolder(request->getPath(), request->getStorageName());
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::deleteChartCategory(std::shared_ptr<DeleteChartCategoryRequest> request)
{
	return deleteChartCategory(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getCategoryIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::deleteChartDataPoint(std::shared_ptr<DeleteChartDataPointRequest> request)
{
	return deleteChartDataPoint(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getSeriesIndex(), request->getPointIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::deleteChartSeries(std::shared_ptr<DeleteChartSeriesRequest> request)
{
	return deleteChartSeries(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getSeriesIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<void> SlidesApi::deleteFile(std::shared_ptr<DeleteFileRequest> request)
{
	return deleteFile(request->getPath(), request->getStorageName(), request->getVersionId());
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

pplx::task<void> SlidesApi::deleteFolder(std::shared_ptr<DeleteFolderRequest> request)
{
	return deleteFolder(request->getPath(), request->getStorageName(), request->getRecursive());
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

pplx::task<std::shared_ptr<Slide>> SlidesApi::deleteNotesSlide(std::shared_ptr<DeleteNotesSlideRequest> request)
{
	return deleteNotesSlide(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteNotesSlideParagraph(std::shared_ptr<DeleteNotesSlideParagraphRequest> request)
{
	return deleteNotesSlideParagraph(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteNotesSlideParagraphs(std::shared_ptr<DeleteNotesSlideParagraphsRequest> request)
{
	return deleteNotesSlideParagraphs(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphs(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteNotesSlidePortion(std::shared_ptr<DeleteNotesSlidePortionRequest> request)
{
	return deleteNotesSlidePortion(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPortionIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteNotesSlidePortions(std::shared_ptr<DeleteNotesSlidePortionsRequest> request)
{
	return deleteNotesSlidePortions(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPortions(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteNotesSlideShape(std::shared_ptr<DeleteNotesSlideShapeRequest> request)
{
	return deleteNotesSlideShape(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteNotesSlideShapes(std::shared_ptr<DeleteNotesSlideShapesRequest> request)
{
	return deleteNotesSlideShapes(request->getName(), request->getSlideIndex(), request->getShapes(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteParagraph(std::shared_ptr<DeleteParagraphRequest> request)
{
	return deleteParagraph(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteParagraphs(std::shared_ptr<DeleteParagraphsRequest> request)
{
	return deleteParagraphs(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphs(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deletePortion(std::shared_ptr<DeletePortionRequest> request)
{
	return deletePortion(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPortionIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deletePortions(std::shared_ptr<DeletePortionsRequest> request)
{
	return deletePortions(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPortions(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::deleteSection(std::shared_ptr<DeleteSectionRequest> request)
{
	return deleteSection(request->getName(), request->getSectionIndex(), request->getWithSlides(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::deleteSections(std::shared_ptr<DeleteSectionsRequest> request)
{
	return deleteSections(request->getName(), request->getSections(), request->getWithSlides(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSlideAnimation(std::shared_ptr<DeleteSlideAnimationRequest> request)
{
	return deleteAnimation(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSlideAnimationEffect(std::shared_ptr<DeleteSlideAnimationEffectRequest> request)
{
	return deleteAnimationEffect(request->getName(), request->getSlideIndex(), request->getEffectIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSlideAnimationInteractiveSequence(std::shared_ptr<DeleteSlideAnimationInteractiveSequenceRequest> request)
{
	return deleteAnimationInteractiveSequence(request->getName(), request->getSlideIndex(), request->getSequenceIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSlideAnimationInteractiveSequenceEffect(std::shared_ptr<DeleteSlideAnimationInteractiveSequenceEffectRequest> request)
{
	return deleteAnimationInteractiveSequenceEffect(request->getName(), request->getSlideIndex(), request->getSequenceIndex(), request->getEffectIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSlideAnimationInteractiveSequences(std::shared_ptr<DeleteSlideAnimationInteractiveSequencesRequest> request)
{
	return deleteAnimationInteractiveSequences(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::deleteSlideAnimationMainSequence(std::shared_ptr<DeleteSlideAnimationMainSequenceRequest> request)
{
	return deleteAnimationMainSequence(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::deleteSlideByIndex(std::shared_ptr<DeleteSlideByIndexRequest> request)
{
	return deleteSlide(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSlideShape(std::shared_ptr<DeleteSlideShapeRequest> request)
{
	return deleteShape(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSlideShapes(std::shared_ptr<DeleteSlideShapesRequest> request)
{
	return deleteShapes(request->getName(), request->getSlideIndex(), request->getShapes(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSlideSubshape(std::shared_ptr<DeleteSlideSubshapeRequest> request)
{
	return deleteSubshape(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSlideSubshapes(std::shared_ptr<DeleteSlideSubshapesRequest> request)
{
	return deleteSubshapes(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapes(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::deleteSlidesCleanSlidesList(std::shared_ptr<DeleteSlidesCleanSlidesListRequest> request)
{
	return deleteSlides(request->getName(), request->getSlides(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<DocumentProperties>> SlidesApi::deleteSlidesDocumentProperties(std::shared_ptr<DeleteSlidesDocumentPropertiesRequest> request)
{
	return deleteDocumentProperties(request->getName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<DocumentProperties>> SlidesApi::deleteSlidesDocumentProperty(std::shared_ptr<DeleteSlidesDocumentPropertyRequest> request)
{
	return deleteDocumentProperty(request->getName(), request->getPropertyName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideBackground>> SlidesApi::deleteSlidesSlideBackground(std::shared_ptr<DeleteSlidesSlideBackgroundRequest> request)
{
	return deleteBackground(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteSubshapeParagraph(std::shared_ptr<DeleteSubshapeParagraphRequest> request)
{
	return deleteSubshapeParagraph(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getParagraphIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteSubshapeParagraphs(std::shared_ptr<DeleteSubshapeParagraphsRequest> request)
{
	return deleteSubshapeParagraphs(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getParagraphs(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteSubshapePortion(std::shared_ptr<DeleteSubshapePortionRequest> request)
{
	return deleteSubshapePortion(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getParagraphIndex(), request->getPortionIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteSubshapePortions(std::shared_ptr<DeleteSubshapePortionsRequest> request)
{
	return deleteSubshapePortions(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getParagraphIndex(), request->getPortions(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<HttpContent> SlidesApi::downloadFile(std::shared_ptr<DownloadFileRequest> request)
{
	return downloadFile(request->getPath(), request->getStorageName(), request->getVersionId());
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

pplx::task<std::shared_ptr<DiscUsage>> SlidesApi::getDiscUsage(std::shared_ptr<GetDiscUsageRequest> request)
{
	return getDiscUsage(request->getStorageName());
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

pplx::task<std::shared_ptr<FileVersions>> SlidesApi::getFileVersions(std::shared_ptr<GetFileVersionsRequest> request)
{
	return getFileVersions(request->getPath(), request->getStorageName());
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

pplx::task<std::shared_ptr<FilesList>> SlidesApi::getFilesList(std::shared_ptr<GetFilesListRequest> request)
{
	return getFilesList(request->getPath(), request->getStorageName());
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

pplx::task<std::shared_ptr<LayoutSlide>> SlidesApi::getLayoutSlide(std::shared_ptr<GetLayoutSlideRequest> request)
{
	return getLayoutSlide(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<LayoutSlides>> SlidesApi::getLayoutSlidesList(std::shared_ptr<GetLayoutSlidesListRequest> request)
{
	return getLayoutSlides(request->getName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<MasterSlide>> SlidesApi::getMasterSlide(std::shared_ptr<GetMasterSlideRequest> request)
{
	return getMasterSlide(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<MasterSlides>> SlidesApi::getMasterSlidesList(std::shared_ptr<GetMasterSlidesListRequest> request)
{
	return getMasterSlides(request->getName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<NotesSlide>> SlidesApi::getNotesSlide(std::shared_ptr<GetNotesSlideRequest> request)
{
	return getNotesSlide(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<EntityExists>> SlidesApi::getNotesSlideExists(std::shared_ptr<GetNotesSlideExistsRequest> request)
{
	return notesSlideExists(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<NotesSlideHeaderFooter>> SlidesApi::getNotesSlideHeaderFooter(std::shared_ptr<GetNotesSlideHeaderFooterRequest> request)
{
	return getNotesSlideHeaderFooter(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::getNotesSlideShape(std::shared_ptr<GetNotesSlideShapeRequest> request)
{
	return getNotesSlideShape(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getNotesSlideShapeParagraph(std::shared_ptr<GetNotesSlideShapeParagraphRequest> request)
{
	return getNotesSlideParagraph(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::getNotesSlideShapeParagraphs(std::shared_ptr<GetNotesSlideShapeParagraphsRequest> request)
{
	return getNotesSlideParagraphs(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::getNotesSlideShapePortion(std::shared_ptr<GetNotesSlideShapePortionRequest> request)
{
	return getNotesSlidePortion(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPortionIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::getNotesSlideShapePortions(std::shared_ptr<GetNotesSlideShapePortionsRequest> request)
{
	return getNotesSlidePortions(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::getNotesSlideShapes(std::shared_ptr<GetNotesSlideShapesRequest> request)
{
	return getNotesSlideShapes(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<HttpContent> SlidesApi::getNotesSlideWithFormat(std::shared_ptr<GetNotesSlideWithFormatRequest> request)
{
	return downloadNotesSlide(request->getName(), request->getSlideIndex(), request->getFormat(), request->getWidth(), request->getHeight(), request->getPassword(), request->getFolder(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::getParagraphPortion(std::shared_ptr<GetParagraphPortionRequest> request)
{
	return getPortion(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPortionIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::getParagraphPortions(std::shared_ptr<GetParagraphPortionsRequest> request)
{
	return getPortions(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::getSections(std::shared_ptr<GetSectionsRequest> request)
{
	return getSections(request->getName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::getSlideAnimation(std::shared_ptr<GetSlideAnimationRequest> request)
{
	return getAnimation(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<HeaderFooter>> SlidesApi::getSlideHeaderFooter(std::shared_ptr<GetSlideHeaderFooterRequest> request)
{
	return getSlideHeaderFooter(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::getSlideShape(std::shared_ptr<GetSlideShapeRequest> request)
{
	return getShape(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getSlideShapeParagraph(std::shared_ptr<GetSlideShapeParagraphRequest> request)
{
	return getParagraph(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::getSlideShapeParagraphs(std::shared_ptr<GetSlideShapeParagraphsRequest> request)
{
	return getParagraphs(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::getSlideShapes(std::shared_ptr<GetSlideShapesRequest> request)
{
	return getShapes(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::getSlideSubshape(std::shared_ptr<GetSlideSubshapeRequest> request)
{
	return getSubshape(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getSlideSubshapeParagraph(std::shared_ptr<GetSlideSubshapeParagraphRequest> request)
{
	return getSubshapeParagraph(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getParagraphIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::getSlideSubshapeParagraphs(std::shared_ptr<GetSlideSubshapeParagraphsRequest> request)
{
	return getSubshapeParagraphs(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::getSlideSubshapes(std::shared_ptr<GetSlideSubshapesRequest> request)
{
	return getSubshapes(request->getName(), request->getSlideIndex(), request->getPath(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<ApiInfo>> SlidesApi::getSlidesApiInfo()
{
	return getApiInfo();
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

pplx::task<std::shared_ptr<Document>> SlidesApi::getSlidesDocument(std::shared_ptr<GetSlidesDocumentRequest> request)
{
	return getPresentation(request->getName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<DocumentProperties>> SlidesApi::getSlidesDocumentProperties(std::shared_ptr<GetSlidesDocumentPropertiesRequest> request)
{
	return getDocumentProperties(request->getName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<DocumentProperty>> SlidesApi::getSlidesDocumentProperty(std::shared_ptr<GetSlidesDocumentPropertyRequest> request)
{
	return getDocumentProperty(request->getName(), request->getPropertyName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<HttpContent> SlidesApi::getSlidesImageWithDefaultFormat(std::shared_ptr<GetSlidesImageWithDefaultFormatRequest> request)
{
	return downloadImageDefaultFormat(request->getName(), request->getIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<HttpContent> SlidesApi::getSlidesImageWithFormat(std::shared_ptr<GetSlidesImageWithFormatRequest> request)
{
	return downloadImage(request->getName(), request->getIndex(), request->getFormat(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Images>> SlidesApi::getSlidesImages(std::shared_ptr<GetSlidesImagesRequest> request)
{
	return getPresentationImages(request->getName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Placeholder>> SlidesApi::getSlidesPlaceholder(std::shared_ptr<GetSlidesPlaceholderRequest> request)
{
	return getPlaceholder(request->getName(), request->getSlideIndex(), request->getPlaceholderIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Placeholders>> SlidesApi::getSlidesPlaceholders(std::shared_ptr<GetSlidesPlaceholdersRequest> request)
{
	return getPlaceholders(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<TextItems>> SlidesApi::getSlidesPresentationTextItems(std::shared_ptr<GetSlidesPresentationTextItemsRequest> request)
{
	return getPresentationTextItems(request->getName(), request->getWithEmpty(), request->getPassword(), request->getFolder(), request->getStorage());
}

pplx::task<std::shared_ptr<ProtectionProperties>> SlidesApi::getProtectionProperties(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/protectionProperties");
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

pplx::task<std::shared_ptr<ProtectionProperties>> SlidesApi::getSlidesProtectionProperties(std::shared_ptr<GetSlidesProtectionPropertiesRequest> request)
{
	return getProtectionProperties(request->getName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Slide>> SlidesApi::getSlidesSlide(std::shared_ptr<GetSlidesSlideRequest> request)
{
	return getSlide(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideBackground>> SlidesApi::getSlidesSlideBackground(std::shared_ptr<GetSlidesSlideBackgroundRequest> request)
{
	return getBackground(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
}

pplx::task<std::shared_ptr<SlideComments>> SlidesApi::getComments(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
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

pplx::task<std::shared_ptr<SlideComments>> SlidesApi::getSlidesSlideComments(std::shared_ptr<GetSlidesSlideCommentsRequest> request)
{
	return getComments(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Images>> SlidesApi::getSlidesSlideImages(std::shared_ptr<GetSlidesSlideImagesRequest> request)
{
	return getSlideImages(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideProperties>> SlidesApi::getSlidesSlideProperties(std::shared_ptr<GetSlidesSlidePropertiesRequest> request)
{
	return getSlideProperties(request->getName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<TextItems>> SlidesApi::getSlidesSlideTextItems(std::shared_ptr<GetSlidesSlideTextItemsRequest> request)
{
	return getSlideTextItems(request->getName(), request->getSlideIndex(), request->getWithEmpty(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::getSlidesSlidesList(std::shared_ptr<GetSlidesSlidesListRequest> request)
{
	return getSlides(request->getName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Theme>> SlidesApi::getSlidesTheme(std::shared_ptr<GetSlidesThemeRequest> request)
{
	return getTheme(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<ColorScheme>> SlidesApi::getSlidesThemeColorScheme(std::shared_ptr<GetSlidesThemeColorSchemeRequest> request)
{
	return getColorScheme(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<FontScheme>> SlidesApi::getSlidesThemeFontScheme(std::shared_ptr<GetSlidesThemeFontSchemeRequest> request)
{
	return getFontScheme(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<FormatScheme>> SlidesApi::getSlidesThemeFormatScheme(std::shared_ptr<GetSlidesThemeFormatSchemeRequest> request)
{
	return getFormatScheme(request->getName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<ViewProperties>> SlidesApi::getSlidesViewProperties(std::shared_ptr<GetSlidesViewPropertiesRequest> request)
{
	return getViewProperties(request->getName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::getSubshapeParagraphPortion(std::shared_ptr<GetSubshapeParagraphPortionRequest> request)
{
	return getSubshapePortion(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getParagraphIndex(), request->getPortionIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portions>> SlidesApi::getSubshapeParagraphPortions(std::shared_ptr<GetSubshapeParagraphPortionsRequest> request)
{
	return getSubshapePortions(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getParagraphIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<void> SlidesApi::moveFile(std::shared_ptr<MoveFileRequest> request)
{
	return moveFile(request->getSrcPath(), request->getDestPath(), request->getSrcStorageName(), request->getDestStorageName(), request->getVersionId());
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

pplx::task<void> SlidesApi::moveFolder(std::shared_ptr<MoveFolderRequest> request)
{
	return moveFolder(request->getSrcPath(), request->getDestPath(), request->getSrcStorageName(), request->getDestStorageName());
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

pplx::task<std::shared_ptr<ObjectExist>> SlidesApi::objectExists(std::shared_ptr<ObjectExistsRequest> request)
{
	return objectExists(request->getPath(), request->getStorageName(), request->getVersionId());
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::postAddNewParagraph(std::shared_ptr<PostAddNewParagraphRequest> request)
{
	return createParagraph(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getDto(), request->getPosition(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::postAddNewPortion(std::shared_ptr<PostAddNewPortionRequest> request)
{
	return createPortion(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getDto(), request->getPosition(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::postAddNewShape(std::shared_ptr<PostAddNewShapeRequest> request)
{
	return createShape(request->getName(), request->getSlideIndex(), request->getDto(), request->getShapeToClone(), request->getPosition(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::postAddNewSubshape(std::shared_ptr<PostAddNewSubshapeRequest> request)
{
	return createSubshape(request->getName(), request->getSlideIndex(), request->getPath(), request->getDto(), request->getShapeToClone(), request->getPosition(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::postAddNewSubshapeParagraph(std::shared_ptr<PostAddNewSubshapeParagraphRequest> request)
{
	return createSubshapeParagraph(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getDto(), request->getPosition(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::postAddNewSubshapePortion(std::shared_ptr<PostAddNewSubshapePortionRequest> request)
{
	return createSubshapePortion(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getParagraphIndex(), request->getDto(), request->getPosition(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<NotesSlide>> SlidesApi::postAddNotesSlide(std::shared_ptr<PostAddNotesSlideRequest> request)
{
	return createNotesSlide(request->getName(), request->getSlideIndex(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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
					utility::conversions::to_string_t("error calling postAlignShapes: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::postAlignShapes(std::shared_ptr<PostAlignShapesRequest> request)
{
	return alignShapes(request->getName(), request->getSlideIndex(), request->getAlignmentType(), request->getAlignToSlide(), request->getShapes(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::postChartCategory(std::shared_ptr<PostChartCategoryRequest> request)
{
	return createChartCategory(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getCategory(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::postChartDataPoint(std::shared_ptr<PostChartDataPointRequest> request)
{
	return createChartDataPoint(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getSeriesIndex(), request->getDataPoint(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::postChartSeries(std::shared_ptr<PostChartSeriesRequest> request)
{
	return createChartSeries(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getSeries(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<LayoutSlide>> SlidesApi::postCopyLayoutSlideFromSourcePresentation(std::shared_ptr<PostCopyLayoutSlideFromSourcePresentationRequest> request)
{
	return copyLayoutSlide(request->getName(), request->getCloneFrom(), request->getCloneFromPosition(), request->getCloneFromPassword(), request->getCloneFromStorage(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<MasterSlide>> SlidesApi::postCopyMasterSlideFromSourcePresentation(std::shared_ptr<PostCopyMasterSlideFromSourcePresentationRequest> request)
{
	return copyMasterSlide(request->getName(), request->getCloneFrom(), request->getCloneFromPosition(), request->getCloneFromPassword(), request->getCloneFromStorage(), request->getApplyToAll(), request->getPassword(), request->getFolder(), request->getStorage());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postExportImageWithDefaultFormat: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postExportImageWithDefaultFormat(std::shared_ptr<PostExportImageWithDefaultFormatRequest> request)
{
	return downloadImageDefaultFormatOnline(request->getDocument(), request->getIndex(), request->getPassword());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postExportImageWithFormat: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postExportImageWithFormat(std::shared_ptr<PostExportImageWithFormatRequest> request)
{
	return downloadImageOnline(request->getDocument(), request->getIndex(), request->getFormat(), request->getPassword());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postExportImagesFromRequestWithFormat: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postExportImagesFromRequestWithFormat(std::shared_ptr<PostExportImagesFromRequestWithFormatRequest> request)
{
	return downloadImagesOnline(request->getDocument(), request->getFormat(), request->getPassword());
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
					utility::conversions::to_string_t("error calling postExportImagesWithDefaultFormat: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postExportImagesWithDefaultFormat(std::shared_ptr<PostExportImagesWithDefaultFormatRequest> request)
{
	return downloadImagesDefaultFormat(request->getName(), request->getPassword(), request->getFolder(), request->getStorage());
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
					utility::conversions::to_string_t("error calling postExportImagesWithFormat: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postExportImagesWithFormat(std::shared_ptr<PostExportImagesWithFormatRequest> request)
{
	return downloadImages(request->getName(), request->getFormat(), request->getPassword(), request->getFolder(), request->getStorage());
}

pplx::task<HttpContent> SlidesApi::downloadShapeOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, utility::string_t password, utility::string_t storage, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t fontsFolder)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	if (scaleX.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), scaleX.value());
	}
	if (scaleY.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), scaleY.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), bounds);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postExportShape: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postExportShape(std::shared_ptr<PostExportShapeRequest> request)
{
	return downloadShapeOnline(request->getDocument(), request->getSlideIndex(), request->getShapeIndex(), request->getFormat(), request->getPassword(), request->getStorage(), request->getScaleX(), request->getScaleY(), request->getBounds(), request->getFontsFolder());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postExportSlide: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postExportSlide(std::shared_ptr<PostExportSlideRequest> request)
{
	return downloadSlideOnline(request->getDocument(), request->getSlideIndex(), request->getFormat(), request->getWidth(), request->getHeight(), request->getPassword(), request->getStorage(), request->getFontsFolder());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
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

pplx::task<std::shared_ptr<NotesSlide>> SlidesApi::postGetNotesSlide(std::shared_ptr<PostGetNotesSlideRequest> request)
{
	return getNotesSlideOnline(request->getDocument(), request->getSlideIndex(), request->getPassword());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
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

pplx::task<std::shared_ptr<EntityExists>> SlidesApi::postGetNotesSlideExists(std::shared_ptr<PostGetNotesSlideExistsRequest> request)
{
	return notesSlideExistsOnline(request->getDocument(), request->getSlideIndex(), request->getPassword());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
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

pplx::task<HttpContent> SlidesApi::postGetNotesSlideWithFormat(std::shared_ptr<PostGetNotesSlideWithFormatRequest> request)
{
	return downloadNotesSlideOnline(request->getDocument(), request->getSlideIndex(), request->getFormat(), request->getWidth(), request->getHeight(), request->getPassword(), request->getFontsFolder());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postImagesFromRequestWithDefaultFormat: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postImagesFromRequestWithDefaultFormat(std::shared_ptr<PostImagesFromRequestWithDefaultFormatRequest> request)
{
	return downloadImagesDefaultFormatOnline(request->getDocument(), request->getPassword());
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::postNotesSlideAddNewParagraph(std::shared_ptr<PostNotesSlideAddNewParagraphRequest> request)
{
	return createNotesSlideParagraph(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getDto(), request->getPosition(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::postNotesSlideAddNewPortion(std::shared_ptr<PostNotesSlideAddNewPortionRequest> request)
{
	return createNotesSlidePortion(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getDto(), request->getPosition(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::postNotesSlideAddNewShape(std::shared_ptr<PostNotesSlideAddNewShapeRequest> request)
{
	return createNotesSlideShape(request->getName(), request->getSlideIndex(), request->getDto(), request->getShapeToClone(), request->getPosition(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<HttpContent> SlidesApi::postNotesSlideShapeSaveAs(std::shared_ptr<PostNotesSlideShapeSaveAsRequest> request)
{
	return downloadNotesSlideShape(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getFormat(), request->getOptions(), request->getScaleX(), request->getScaleY(), request->getBounds(), request->getPassword(), request->getFolder(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<Document>> SlidesApi::postPresentationMerge(std::shared_ptr<PostPresentationMergeRequest> request)
{
	return merge(request->getName(), request->getRequest(), request->getPassword(), request->getFolder(), request->getStorage());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postPresentationReplaceText: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postPresentationReplaceText(std::shared_ptr<PostPresentationReplaceTextRequest> request)
{
	return replacePresentationTextOnline(request->getDocument(), request->getOldValue(), request->getNewValue(), request->getIgnoreCase(), request->getPassword());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postPresentationSplit: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postPresentationSplit(std::shared_ptr<PostPresentationSplitRequest> request)
{
	return splitOnline(request->getDocument(), request->getFormat(), request->getWidth(), request->getHeight(), request->getFrom(), request->getTo(), request->getPassword(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::postSection(std::shared_ptr<PostSectionRequest> request)
{
	return createSection(request->getName(), request->getSectionName(), request->getSlideIndex(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::postSectionMove(std::shared_ptr<PostSectionMoveRequest> request)
{
	return moveSection(request->getName(), request->getSectionIndex(), request->getNewPosition(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<HttpContent> SlidesApi::postShapeSaveAs(std::shared_ptr<PostShapeSaveAsRequest> request)
{
	return downloadShape(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getFormat(), request->getOptions(), request->getScaleX(), request->getScaleY(), request->getBounds(), request->getPassword(), request->getFolder(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::postSlideAnimationEffect(std::shared_ptr<PostSlideAnimationEffectRequest> request)
{
	return createAnimationEffect(request->getName(), request->getSlideIndex(), request->getEffect(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::postSlideAnimationInteractiveSequence(std::shared_ptr<PostSlideAnimationInteractiveSequenceRequest> request)
{
	return createAnimationInteractiveSequence(request->getName(), request->getSlideIndex(), request->getSequence(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::postSlideAnimationInteractiveSequenceEffect(std::shared_ptr<PostSlideAnimationInteractiveSequenceEffectRequest> request)
{
	return createAnimationInteractiveSequenceEffect(request->getName(), request->getSlideIndex(), request->getSequenceIndex(), request->getEffect(), request->getPassword(), request->getFolder(), request->getStorage());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling postSlideReplaceText: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postSlideReplaceText(std::shared_ptr<PostSlideReplaceTextRequest> request)
{
	return replaceSlideTextOnline(request->getDocument(), request->getSlideIndex(), request->getOldValue(), request->getNewValue(), request->getIgnoreCase(), request->getPassword());
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

pplx::task<HttpContent> SlidesApi::postSlideSaveAs(std::shared_ptr<PostSlideSaveAsRequest> request)
{
	return downloadSlide(request->getName(), request->getSlideIndex(), request->getFormat(), request->getOptions(), request->getWidth(), request->getHeight(), request->getPassword(), request->getFolder(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::postSlidesAdd(std::shared_ptr<PostSlidesAddRequest> request)
{
	return createSlide(request->getName(), request->getLayoutAlias(), request->getPosition(), request->getPassword(), request->getFolder(), request->getStorage());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
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

pplx::task<HttpContent> SlidesApi::postSlidesConvert(std::shared_ptr<PostSlidesConvertRequest> request)
{
	return convert(request->getDocument(), request->getFormat(), request->getPassword(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::postSlidesCopy(std::shared_ptr<PostSlidesCopyRequest> request)
{
	return copySlide(request->getName(), request->getSlideToCopy(), request->getPosition(), request->getSource(), request->getSourcePassword(), request->getSourceStorage(), request->getPassword(), request->getFolder(), request->getStorage());
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
	httpBody = data;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
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

pplx::task<std::shared_ptr<Document>> SlidesApi::postSlidesDocument(std::shared_ptr<PostSlidesDocumentRequest> request)
{
	return createPresentation(request->getName(), request->getData(), request->getInputPassword(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Document>> SlidesApi::postSlidesDocumentFromHtml(std::shared_ptr<PostSlidesDocumentFromHtmlRequest> request)
{
	return importFromHtml(request->getName(), request->getHtml(), request->getPassword(), request->getFolder(), request->getStorage());
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
	httpBody = pdf;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
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

pplx::task<std::shared_ptr<Document>> SlidesApi::postSlidesDocumentFromPdf(std::shared_ptr<PostSlidesDocumentFromPdfRequest> request)
{
	return importFromPdf(request->getName(), request->getPdf(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Document>> SlidesApi::postSlidesDocumentFromSource(std::shared_ptr<PostSlidesDocumentFromSourceRequest> request)
{
	return createPresentationFromSource(request->getName(), request->getSourcePath(), request->getSourcePassword(), request->getSourceStorage(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Document>> SlidesApi::postSlidesDocumentFromTemplate(std::shared_ptr<PostSlidesDocumentFromTemplateRequest> request)
{
	return createPresentationFromTemplate(request->getName(), request->getTemplatePath(), request->getData(), request->getTemplatePassword(), request->getTemplateStorage(), request->getIsImageDataEmbedded(), request->getPassword(), request->getFolder(), request->getStorage());
}

pplx::task<HttpContent> SlidesApi::mergeOnline(std::vector<std::shared_ptr<HttpContent>> files, std::shared_ptr<OrderedMergeRequest> request, utility::string_t password)
{
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/merge");

	std::map<utility::string_t, utility::string_t> queryParams;

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	requestFiles = files;
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
					utility::conversions::to_string_t("error calling postSlidesMerge: ") + response.reason_phrase(),
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

pplx::task<HttpContent> SlidesApi::postSlidesMerge(std::shared_ptr<PostSlidesMergeRequest> request)
{
	return mergeOnline(request->getFiles(), request->getRequest(), request->getPassword());
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
	requestFiles = files;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
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

pplx::task<HttpContent> SlidesApi::postSlidesPipeline(std::shared_ptr<PostSlidesPipelineRequest> request)
{
	return pipeline(request->getPipeline(), request->getFiles());
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

pplx::task<std::shared_ptr<DocumentReplaceResult>> SlidesApi::postSlidesPresentationReplaceText(std::shared_ptr<PostSlidesPresentationReplaceTextRequest> request)
{
	return replacePresentationText(request->getName(), request->getOldValue(), request->getNewValue(), request->getIgnoreCase(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::postSlidesReorder(std::shared_ptr<PostSlidesReorderRequest> request)
{
	return moveSlide(request->getName(), request->getSlideIndex(), request->getNewPosition(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Slides>> SlidesApi::postSlidesReorderMany(std::shared_ptr<PostSlidesReorderManyRequest> request)
{
	return reorderSlides(request->getName(), request->getOldPositions(), request->getNewPositions(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<HttpContent> SlidesApi::postSlidesSaveAs(std::shared_ptr<PostSlidesSaveAsRequest> request)
{
	return downloadPresentation(request->getName(), request->getFormat(), request->getOptions(), request->getPassword(), request->getFolder(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<DocumentProperties>> SlidesApi::postSlidesSetDocumentProperties(std::shared_ptr<PostSlidesSetDocumentPropertiesRequest> request)
{
	return setDocumentProperties(request->getName(), request->getProperties(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideReplaceResult>> SlidesApi::postSlidesSlideReplaceText(std::shared_ptr<PostSlidesSlideReplaceTextRequest> request)
{
	return replaceSlideText(request->getName(), request->getSlideIndex(), request->getOldValue(), request->getNewValue(), request->getIgnoreCase(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SplitDocumentResult>> SlidesApi::postSlidesSplit(std::shared_ptr<PostSlidesSplitRequest> request)
{
	return split(request->getName(), request->getOptions(), request->getFormat(), request->getWidth(), request->getHeight(), request->getFrom(), request->getTo(), request->getDestFolder(), request->getPassword(), request->getFolder(), request->getStorage(), request->getFontsFolder());
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

pplx::task<HttpContent> SlidesApi::postSubshapeSaveAs(std::shared_ptr<PostSubshapeSaveAsRequest> request)
{
	return downloadSubshape(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getFormat(), request->getOptions(), request->getScaleX(), request->getScaleY(), request->getBounds(), request->getPassword(), request->getFolder(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::putChartCategory(std::shared_ptr<PutChartCategoryRequest> request)
{
	return updateChartCategory(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getCategoryIndex(), request->getCategory(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::putChartDataPoint(std::shared_ptr<PutChartDataPointRequest> request)
{
	return updateChartDataPoint(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getSeriesIndex(), request->getPointIndex(), request->getDataPoint(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Chart>> SlidesApi::putChartSeries(std::shared_ptr<PutChartSeriesRequest> request)
{
	return updateChartSeries(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getSeriesIndex(), request->getSeries(), request->getPassword(), request->getFolder(), request->getStorage());
}

pplx::task<void> SlidesApi::saveShapeOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, utility::string_t outPath, utility::string_t password, utility::string_t storage, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t fontsFolder)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	if (scaleX.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleX"), scaleX.value());
	}
	if (scaleY.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleY"), scaleY.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("bounds"), bounds);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putExportShape: ") + response.reason_phrase(),
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

pplx::task<void> SlidesApi::putExportShape(std::shared_ptr<PutExportShapeRequest> request)
{
	return saveShapeOnline(request->getDocument(), request->getSlideIndex(), request->getShapeIndex(), request->getFormat(), request->getOutPath(), request->getPassword(), request->getStorage(), request->getScaleX(), request->getScaleY(), request->getBounds(), request->getFontsFolder());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putExportSlide: ") + response.reason_phrase(),
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

pplx::task<void> SlidesApi::putExportSlide(std::shared_ptr<PutExportSlideRequest> request)
{
	return saveSlideOnline(request->getDocument(), request->getSlideIndex(), request->getFormat(), request->getOutPath(), request->getWidth(), request->getHeight(), request->getPassword(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<LayoutSlide>> SlidesApi::putLayoutSlide(std::shared_ptr<PutLayoutSlideRequest> request)
{
	return updateLayoutSlide(request->getName(), request->getSlideIndex(), request->getSlideDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<NotesSlideHeaderFooter>> SlidesApi::putNotesSlideHeaderFooter(std::shared_ptr<PutNotesSlideHeaderFooterRequest> request)
{
	return setNotesSlideHeaderFooter(request->getName(), request->getSlideIndex(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<void> SlidesApi::putNotesSlideShapeSaveAs(std::shared_ptr<PutNotesSlideShapeSaveAsRequest> request)
{
	return saveNotesSlideShape(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getFormat(), request->getOutPath(), request->getOptions(), request->getScaleX(), request->getScaleY(), request->getBounds(), request->getPassword(), request->getFolder(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<Document>> SlidesApi::putPresentationMerge(std::shared_ptr<PutPresentationMergeRequest> request)
{
	return orderedMerge(request->getName(), request->getRequest(), request->getPassword(), request->getFolder(), request->getStorage());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			if (response.status_code() >= 400)
			{
				throw ApiException(
					response.status_code(),
					utility::conversions::to_string_t("error calling putPresentationSplit: ") + response.reason_phrase(),
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

pplx::task<std::shared_ptr<SplitDocumentResult>> SlidesApi::putPresentationSplit(std::shared_ptr<PutPresentationSplitRequest> request)
{
	return splitAndSaveOnline(request->getDocument(), request->getFormat(), request->getDestFolder(), request->getWidth(), request->getHeight(), request->getFrom(), request->getTo(), request->getPassword(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::putSection(std::shared_ptr<PutSectionRequest> request)
{
	return updateSection(request->getName(), request->getSectionIndex(), request->getSectionName(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Sections>> SlidesApi::putSections(std::shared_ptr<PutSectionsRequest> request)
{
	return setSections(request->getName(), request->getSections(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::putSetParagraphPortionProperties(std::shared_ptr<PutSetParagraphPortionPropertiesRequest> request)
{
	return updatePortion(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPortionIndex(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::putSetParagraphProperties(std::shared_ptr<PutSetParagraphPropertiesRequest> request)
{
	return updateParagraph(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::putSetSubshapeParagraphPortionProperties(std::shared_ptr<PutSetSubshapeParagraphPortionPropertiesRequest> request)
{
	return updateSubshapePortion(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getParagraphIndex(), request->getPortionIndex(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::putSetSubshapeParagraphProperties(std::shared_ptr<PutSetSubshapeParagraphPropertiesRequest> request)
{
	return updateSubshapeParagraph(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getParagraphIndex(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<void> SlidesApi::putShapeSaveAs(std::shared_ptr<PutShapeSaveAsRequest> request)
{
	return saveShape(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getFormat(), request->getOutPath(), request->getOptions(), request->getScaleX(), request->getScaleY(), request->getBounds(), request->getPassword(), request->getFolder(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::putSlideAnimation(std::shared_ptr<PutSlideAnimationRequest> request)
{
	return setAnimation(request->getName(), request->getSlideIndex(), request->getAnimation(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::putSlideAnimationEffect(std::shared_ptr<PutSlideAnimationEffectRequest> request)
{
	return updateAnimationEffect(request->getName(), request->getSlideIndex(), request->getEffectIndex(), request->getEffect(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::putSlideAnimationInteractiveSequenceEffect(std::shared_ptr<PutSlideAnimationInteractiveSequenceEffectRequest> request)
{
	return updateAnimationInteractiveSequenceEffect(request->getName(), request->getSlideIndex(), request->getSequenceIndex(), request->getEffectIndex(), request->getEffect(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<HeaderFooter>> SlidesApi::putSlideHeaderFooter(std::shared_ptr<PutSlideHeaderFooterRequest> request)
{
	return setSlideHeaderFooter(request->getName(), request->getSlideIndex(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<void> SlidesApi::putSlideSaveAs(std::shared_ptr<PutSlideSaveAsRequest> request)
{
	return saveSlide(request->getName(), request->getSlideIndex(), request->getFormat(), request->getOutPath(), request->getOptions(), request->getWidth(), request->getHeight(), request->getPassword(), request->getFolder(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::putSlideShapeInfo(std::shared_ptr<PutSlideShapeInfoRequest> request)
{
	return updateShape(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::putSlideSubshapeInfo(std::shared_ptr<PutSlideSubshapeInfoRequest> request)
{
	return updateSubshape(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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
	httpBody = document;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
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

pplx::task<void> SlidesApi::putSlidesConvert(std::shared_ptr<PutSlidesConvertRequest> request)
{
	return convertAndSave(request->getDocument(), request->getFormat(), request->getOutPath(), request->getPassword(), request->getStorage(), request->getFontsFolder());
}

pplx::task<std::shared_ptr<Document>> SlidesApi::putSlidesDocumentFromHtml(utility::string_t name, utility::string_t html, utility::string_t password, utility::string_t folder, utility::string_t storage)
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

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
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

pplx::task<std::shared_ptr<Document>> SlidesApi::putSlidesDocumentFromHtml(std::shared_ptr<PutSlidesDocumentFromHtmlRequest> request)
{
	return putSlidesDocumentFromHtml(request->getName(), request->getHtml(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Document>> SlidesApi::putSlidesHeaderFooter(std::shared_ptr<PutSlidesHeaderFooterRequest> request)
{
	return setPresentationHeaderFooter(request->getName(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
}

pplx::task<void> SlidesApi::mergeAndSaveOnline(utility::string_t outPath, std::vector<std::shared_ptr<HttpContent>> files, std::shared_ptr<OrderedMergeRequest> request, utility::string_t password, utility::string_t storage)
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
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	requestFiles = files;
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
					utility::conversions::to_string_t("error calling putSlidesMerge: ") + response.reason_phrase(),
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

pplx::task<void> SlidesApi::putSlidesMerge(std::shared_ptr<PutSlidesMergeRequest> request)
{
	return mergeAndSaveOnline(request->getOutPath(), request->getFiles(), request->getRequest(), request->getPassword(), request->getStorage());
}

pplx::task<std::shared_ptr<ProtectionProperties>> SlidesApi::setProtectionProperties(utility::string_t name, std::shared_ptr<ProtectionProperties> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/protectionProperties");
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

pplx::task<std::shared_ptr<ProtectionProperties>> SlidesApi::putSlidesProtectionProperties(std::shared_ptr<PutSlidesProtectionPropertiesRequest> request)
{
	return setProtectionProperties(request->getName(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<void> SlidesApi::putSlidesSaveAs(std::shared_ptr<PutSlidesSaveAsRequest> request)
{
	return savePresentation(request->getName(), request->getFormat(), request->getOutPath(), request->getOptions(), request->getPassword(), request->getFolder(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<DocumentProperty>> SlidesApi::putSlidesSetDocumentProperty(std::shared_ptr<PutSlidesSetDocumentPropertyRequest> request)
{
	return setDocumentProperty(request->getName(), request->getPropertyName(), request->getProperty(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Slide>> SlidesApi::putSlidesSlide(std::shared_ptr<PutSlidesSlideRequest> request)
{
	return updateSlide(request->getName(), request->getSlideIndex(), request->getSlideDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideBackground>> SlidesApi::putSlidesSlideBackground(std::shared_ptr<PutSlidesSlideBackgroundRequest> request)
{
	return setBackground(request->getName(), request->getSlideIndex(), request->getBackground(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideBackground>> SlidesApi::putSlidesSlideBackgroundColor(std::shared_ptr<PutSlidesSlideBackgroundColorRequest> request)
{
	return setBackgroundColor(request->getName(), request->getSlideIndex(), request->getColor(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<SlideProperties>> SlidesApi::putSlidesSlideProperties(std::shared_ptr<PutSlidesSlidePropertiesRequest> request)
{
	return setSlideProperties(request->getName(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
}

pplx::task<std::shared_ptr<Document>> SlidesApi::putSlidesSlideSize(utility::string_t name, boost::optional<int32_t> width, boost::optional<int32_t> height, utility::string_t sizeType, utility::string_t scaleType, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slideSize");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (width.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), width.value());
	}
	if (height.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), height.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("sizeType"), sizeType);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("scaleType"), scaleType);
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

pplx::task<std::shared_ptr<Document>> SlidesApi::putSlidesSlideSize(std::shared_ptr<PutSlidesSlideSizeRequest> request)
{
	return putSlidesSlideSize(request->getName(), request->getWidth(), request->getHeight(), request->getSizeType(), request->getScaleType(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<ViewProperties>> SlidesApi::putSlidesViewProperties(std::shared_ptr<PutSlidesViewPropertiesRequest> request)
{
	return setViewProperties(request->getName(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<void> SlidesApi::putSubshapeSaveAs(std::shared_ptr<PutSubshapeSaveAsRequest> request)
{
	return saveSubshape(request->getName(), request->getSlideIndex(), request->getPath(), request->getShapeIndex(), request->getFormat(), request->getOutPath(), request->getOptions(), request->getScaleX(), request->getScaleY(), request->getBounds(), request->getPassword(), request->getFolder(), request->getStorage(), request->getFontsFolder());
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

pplx::task<std::shared_ptr<NotesSlide>> SlidesApi::putUpdateNotesSlide(std::shared_ptr<PutUpdateNotesSlideRequest> request)
{
	return updateNotesSlide(request->getName(), request->getSlideIndex(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::putUpdateNotesSlideShape(std::shared_ptr<PutUpdateNotesSlideShapeRequest> request)
{
	return updateNotesSlideShape(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::putUpdateNotesSlideShapeParagraph(std::shared_ptr<PutUpdateNotesSlideShapeParagraphRequest> request)
{
	return updateNotesSlideParagraph(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<Portion>> SlidesApi::putUpdateNotesSlideShapePortion(std::shared_ptr<PutUpdateNotesSlideShapePortionRequest> request)
{
	return updateNotesSlidePortion(request->getName(), request->getSlideIndex(), request->getShapeIndex(), request->getParagraphIndex(), request->getPortionIndex(), request->getDto(), request->getPassword(), request->getFolder(), request->getStorage());
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

pplx::task<std::shared_ptr<StorageExist>> SlidesApi::storageExists(std::shared_ptr<StorageExistsRequest> request)
{
	return storageExists(request->getStorageName());
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
	httpBody = file;

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

pplx::task<std::shared_ptr<FilesUploadResult>> SlidesApi::uploadFile(std::shared_ptr<UploadFileRequest> request)
{
	return uploadFile(request->getPath(), request->getFile(), request->getStorageName());
}

}
}

