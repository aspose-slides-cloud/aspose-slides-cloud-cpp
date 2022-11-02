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

pplx::task<std::shared_ptr<Shapes>> SlidesApi::alignShapes(utility::string_t name, int32_t slideIndex, utility::string_t alignmentType, boost::optional<bool> alignToSlide, std::vector<int32_t> shapes, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'alignmentType'
	if (!boost::iequals(alignmentType, "AlignLeft") && !boost::iequals(alignmentType, "AlignRight") && !boost::iequals(alignmentType, "AlignCenter") && !boost::iequals(alignmentType, "AlignTop") && !boost::iequals(alignmentType, "AlignMiddle") && !boost::iequals(alignmentType, "AlignBottom") && !boost::iequals(alignmentType, "DistributeHorizontally") && !boost::iequals(alignmentType, "DistributeVertically"))
	{
		throw std::invalid_argument("Invalid value for alignmentType. Must be one of AlignLeft, AlignRight, AlignCenter, AlignTop, AlignMiddle, AlignBottom, DistributeHorizontally, DistributeVertically.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "alignShapes");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Shapes", json);
			return std::static_pointer_cast<Shapes>(instance);
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::alignSpecialSlideShapes(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t alignmentType, boost::optional<bool> alignToSlide, std::vector<int32_t> shapes, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	// validate the parameter 'alignmentType'
	if (!boost::iequals(alignmentType, "AlignLeft") && !boost::iequals(alignmentType, "AlignRight") && !boost::iequals(alignmentType, "AlignCenter") && !boost::iequals(alignmentType, "AlignTop") && !boost::iequals(alignmentType, "AlignMiddle") && !boost::iequals(alignmentType, "AlignBottom") && !boost::iequals(alignmentType, "DistributeHorizontally") && !boost::iequals(alignmentType, "DistributeVertically"))
	{
		throw std::invalid_argument("Invalid value for alignmentType. Must be one of AlignLeft, AlignRight, AlignCenter, AlignTop, AlignMiddle, AlignBottom, DistributeHorizontally, DistributeVertically.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "alignSpecialSlideShapes");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Shapes", json);
			return std::static_pointer_cast<Shapes>(instance);
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Html") && !boost::iequals(format, "Html5") && !boost::iequals(format, "Swf") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Mpeg4"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Pdf, Xps, Tiff, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Pot, Potx, Potm, Html, Html5, Swf, Svg, Jpeg, Png, Gif, Bmp, Fodp, Xaml, Mpeg4.");
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"LayoutSlide", json);
			return std::static_pointer_cast<LayoutSlide>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"MasterSlide", json);
			return std::static_pointer_cast<MasterSlide>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Slides", json);
			return std::static_pointer_cast<Slides>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Chart", json);
			return std::static_pointer_cast<Chart>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Chart", json);
			return std::static_pointer_cast<Chart>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Chart", json);
			return std::static_pointer_cast<Chart>(instance);
		});
}

pplx::task<std::shared_ptr<SlideComments>> SlidesApi::createComment(utility::string_t name, int32_t slideIndex, std::shared_ptr<SlideCommentBase> dto, boost::optional<int32_t> shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
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
	if (dto != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(dto->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "createComment");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideComments", json);
			return std::static_pointer_cast<SlideComments>(instance);
		});
}

pplx::task<HttpContent> SlidesApi::createCommentOnline(std::shared_ptr<HttpContent> document, int32_t slideIndex, std::shared_ptr<SlideCommentBase> dto, boost::optional<int32_t> shapeIndex, utility::string_t password)
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
	if (shapeIndex.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapeIndex"), shapeIndex.value());
	}

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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"NotesSlide", json);
			return std::static_pointer_cast<NotesSlide>(instance);
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::createParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<Paragraph> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Paragraph", json);
			return std::static_pointer_cast<Paragraph>(instance);
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::createPortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Portion> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Portion", json);
			return std::static_pointer_cast<Portion>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Document", json);
			return std::static_pointer_cast<Document>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Document", json);
			return std::static_pointer_cast<Document>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Document", json);
			return std::static_pointer_cast<Document>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Sections", json);
			return std::static_pointer_cast<Sections>(instance);
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::createShape(utility::string_t name, int32_t slideIndex, std::shared_ptr<ShapeBase> dto, boost::optional<int32_t> shapeToClone, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ShapeBase", json);
			return std::static_pointer_cast<ShapeBase>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Slides", json);
			return std::static_pointer_cast<Slides>(instance);
		});
}

pplx::task<std::shared_ptr<SmartArt>> SlidesApi::createSmartArtNode(utility::string_t name, int32_t slideIndex, int32_t smartArtIndex, utility::string_t subNode, utility::string_t text, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/smartArts/{smartArtIndex}/nodes");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "smartArtIndex", smartArtIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subNode"), subNode);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("text"), text);
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
			m_ApiClient->assertResponseException(response, "createSmartArtNode");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SmartArt", json);
			return std::static_pointer_cast<SmartArt>(instance);
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::createSpecialSlideParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, std::shared_ptr<Paragraph> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Paragraph", json);
			return std::static_pointer_cast<Paragraph>(instance);
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::createSpecialSlidePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Portion> dto, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Portion", json);
			return std::static_pointer_cast<Portion>(instance);
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::createSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, std::shared_ptr<ShapeBase> dto, boost::optional<int32_t> shapeToClone, boost::optional<int32_t> position, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ShapeBase", json);
			return std::static_pointer_cast<ShapeBase>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideBackground", json);
			return std::static_pointer_cast<SlideBackground>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Chart", json);
			return std::static_pointer_cast<Chart>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Chart", json);
			return std::static_pointer_cast<Chart>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Chart", json);
			return std::static_pointer_cast<Chart>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"DocumentProperties", json);
			return std::static_pointer_cast<DocumentProperties>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"DocumentProperties", json);
			return std::static_pointer_cast<DocumentProperties>(instance);
		});
}

pplx::task<std::shared_ptr<FontsData>> SlidesApi::deleteEmbeddedFont(utility::string_t name, utility::string_t fontName, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'fontName' is set
	if (fontName.empty())
	{
		throw std::invalid_argument("Missing required parameter: fontName");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/fonts/embedded/{fontName}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "fontName", fontName);

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
			m_ApiClient->assertResponseException(response, "deleteEmbeddedFont");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"FontsData", json);
			return std::static_pointer_cast<FontsData>(instance);
		});
}

pplx::task<HttpContent> SlidesApi::deleteEmbeddedFontOnline(std::shared_ptr<HttpContent> document, utility::string_t fontName, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	// verify the required parameter 'fontName' is set
	if (fontName.empty())
	{
		throw std::invalid_argument("Missing required parameter: fontName");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/fonts/embedded/{fontName}/delete");
	ApiClient::setPathParameter(methodPath, "fontName", fontName);

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
			m_ApiClient->assertResponseException(response, "deleteEmbeddedFontOnline");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Slide", json);
			return std::static_pointer_cast<Slide>(instance);
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deleteParagraph");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Paragraphs", json);
			return std::static_pointer_cast<Paragraphs>(instance);
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteParagraphs(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::vector<int32_t> paragraphs, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deleteParagraphs");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Paragraphs", json);
			return std::static_pointer_cast<Paragraphs>(instance);
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::deletePortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deletePortion");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Portions", json);
			return std::static_pointer_cast<Portions>(instance);
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::deletePortions(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, std::vector<int32_t> portions, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deletePortions");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Portions", json);
			return std::static_pointer_cast<Portions>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ProtectionProperties", json);
			return std::static_pointer_cast<ProtectionProperties>(instance);
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Sections", json);
			return std::static_pointer_cast<Sections>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Sections", json);
			return std::static_pointer_cast<Sections>(instance);
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deleteShape");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Shapes", json);
			return std::static_pointer_cast<Shapes>(instance);
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteShapes(utility::string_t name, int32_t slideIndex, std::vector<int32_t> shapes, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deleteShapes");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Shapes", json);
			return std::static_pointer_cast<Shapes>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Slides", json);
			return std::static_pointer_cast<Slides>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideComments", json);
			return std::static_pointer_cast<SlideComments>(instance);
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Slides", json);
			return std::static_pointer_cast<Slides>(instance);
		});
}

pplx::task<std::shared_ptr<SmartArt>> SlidesApi::deleteSmartArtNode(utility::string_t name, int32_t slideIndex, int32_t smartArtIndex, int32_t nodeIndex, utility::string_t subNode, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/smartArts/{smartArtIndex}/nodes/{nodeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "smartArtIndex", smartArtIndex);
	ApiClient::setPathParameter(methodPath, "nodeIndex", nodeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subNode"), subNode);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deleteSmartArtNode");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SmartArt", json);
			return std::static_pointer_cast<SmartArt>(instance);
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteSpecialSlideParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideParagraph");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Paragraphs", json);
			return std::static_pointer_cast<Paragraphs>(instance);
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::deleteSpecialSlideParagraphs(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, std::vector<int32_t> paragraphs, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideParagraphs");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Paragraphs", json);
			return std::static_pointer_cast<Paragraphs>(instance);
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteSpecialSlidePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deleteSpecialSlidePortion");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Portions", json);
			return std::static_pointer_cast<Portions>(instance);
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::deleteSpecialSlidePortions(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, std::vector<int32_t> portions, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deleteSpecialSlidePortions");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Portions", json);
			return std::static_pointer_cast<Portions>(instance);
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideShape");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Shapes", json);
			return std::static_pointer_cast<Shapes>(instance);
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::deleteSpecialSlideShapes(utility::string_t name, int32_t slideIndex, utility::string_t slideType, std::vector<int32_t> shapes, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapes"), shapes);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deleteSpecialSlideShapes");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Shapes", json);
			return std::static_pointer_cast<Shapes>(instance);
		});
}

pplx::task<std::shared_ptr<LayoutSlides>> SlidesApi::deleteUnusedLayoutSlides(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
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

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("DELETE"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "deleteUnusedLayoutSlides");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"LayoutSlides", json);
			return std::static_pointer_cast<LayoutSlides>(instance);
		});
}

pplx::task<HttpContent> SlidesApi::deleteUnusedLayoutSlidesOnline(std::shared_ptr<HttpContent> document, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/layoutSlides/delete");

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
			m_ApiClient->assertResponseException(response, "deleteUnusedLayoutSlidesOnline");
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

pplx::task<std::shared_ptr<MasterSlides>> SlidesApi::deleteUnusedMasterSlides(utility::string_t name, boost::optional<bool> ignorePreserveField, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/masterSlides");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (ignorePreserveField.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("ignorePreserveField"), ignorePreserveField.value());
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
			m_ApiClient->assertResponseException(response, "deleteUnusedMasterSlides");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"MasterSlides", json);
			return std::static_pointer_cast<MasterSlides>(instance);
		});
}

pplx::task<HttpContent> SlidesApi::deleteUnusedMasterSlidesOnline(std::shared_ptr<HttpContent> document, boost::optional<bool> ignorePreserveField, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/masterSlides/delete");

	std::map<utility::string_t, utility::string_t> queryParams;
	if (ignorePreserveField.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("ignorePreserveField"), ignorePreserveField.value());
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
			m_ApiClient->assertResponseException(response, "deleteUnusedMasterSlidesOnline");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff.");
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff.");
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff.");
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff.");
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Html") && !boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Html5"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Html, Pdf, Xps, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Potx, Pot, Potm, Svg, Fodp, Xaml, Html5.");
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Html") && !boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Html5"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Html, Pdf, Xps, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Potx, Pot, Potm, Svg, Fodp, Xaml, Html5.");
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadPortionAsMathMl(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}/mathml");
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

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "downloadPortionAsMathMl");
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Html") && !boost::iequals(format, "Html5") && !boost::iequals(format, "Swf") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Mpeg4"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Pdf, Xps, Tiff, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Pot, Potx, Potm, Html, Html5, Swf, Svg, Jpeg, Png, Gif, Bmp, Fodp, Xaml, Mpeg4.");
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder, utility::string_t subShape)
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
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Svg"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Svg.");
	}
	// validate the parameter 'bounds'
	if (!bounds.empty() && !boost::iequals(bounds, "Slide") && !boost::iequals(bounds, "Shape") && !boost::iequals(bounds, "Appearance"))
	{
		throw std::invalid_argument("Invalid value for bounds. Must be one of Slide, Shape, Appearance.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Svg"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Svg.");
	}
	// validate the parameter 'bounds'
	if (!bounds.empty() && !boost::iequals(bounds, "Slide") && !boost::iequals(bounds, "Shape") && !boost::iequals(bounds, "Appearance"))
	{
		throw std::invalid_argument("Invalid value for bounds. Must be one of Slide, Shape, Appearance.");
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Html") && !boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Html5"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Html, Pdf, Xps, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Potx, Pot, Potm, Svg, Fodp, Xaml, Html5.");
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Html") && !boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Html5"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Html, Pdf, Xps, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Potx, Pot, Potm, Svg, Fodp, Xaml, Html5.");
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<HttpContent> SlidesApi::downloadSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t format, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Svg"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Svg.");
	}
	// validate the parameter 'bounds'
	if (!bounds.empty() && !boost::iequals(bounds, "Slide") && !boost::iequals(bounds, "Shape") && !boost::iequals(bounds, "Appearance"))
	{
		throw std::invalid_argument("Invalid value for bounds. Must be one of Slide, Shape, Appearance.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::getAnimation(utility::string_t name, int32_t slideIndex, boost::optional<int32_t> shapeIndex, boost::optional<int32_t> paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
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
	if (paragraphIndex.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("paragraphIndex"), paragraphIndex.value());
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ApiInfo", json);
			return std::static_pointer_cast<ApiInfo>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideBackground", json);
			return std::static_pointer_cast<SlideBackground>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ColorScheme", json);
			return std::static_pointer_cast<ColorScheme>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"DiscUsage", json);
			return std::static_pointer_cast<DiscUsage>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"DocumentProperties", json);
			return std::static_pointer_cast<DocumentProperties>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"DocumentProperty", json);
			return std::static_pointer_cast<DocumentProperty>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"FileVersions", json);
			return std::static_pointer_cast<FileVersions>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"FilesList", json);
			return std::static_pointer_cast<FilesList>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"FontScheme", json);
			return std::static_pointer_cast<FontScheme>(instance);
		});
}

pplx::task<std::shared_ptr<FontsData>> SlidesApi::getFonts(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/fonts");
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
			m_ApiClient->assertResponseException(response, "getFonts");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"FontsData", json);
			return std::static_pointer_cast<FontsData>(instance);
		});
}

pplx::task<std::shared_ptr<FontsData>> SlidesApi::getFontsOnline(std::shared_ptr<HttpContent> document, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/fonts");

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
			m_ApiClient->assertResponseException(response, "getFontsOnline");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"FontsData", json);
			return std::static_pointer_cast<FontsData>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"FormatScheme", json);
			return std::static_pointer_cast<FormatScheme>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"LayoutSlide", json);
			return std::static_pointer_cast<LayoutSlide>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"LayoutSlides", json);
			return std::static_pointer_cast<LayoutSlides>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"MasterSlide", json);
			return std::static_pointer_cast<MasterSlide>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"MasterSlides", json);
			return std::static_pointer_cast<MasterSlides>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"NotesSlide", json);
			return std::static_pointer_cast<NotesSlide>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"NotesSlideHeaderFooter", json);
			return std::static_pointer_cast<NotesSlideHeaderFooter>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"NotesSlide", json);
			return std::static_pointer_cast<NotesSlide>(instance);
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getParagraph");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Paragraph", json);
			return std::static_pointer_cast<Paragraph>(instance);
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getParagraphEffective(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/effective");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getParagraphEffective");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Paragraph", json);
			return std::static_pointer_cast<Paragraph>(instance);
		});
}

pplx::task<std::shared_ptr<TextBounds>> SlidesApi::getParagraphRectangle(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/bounds");
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
			m_ApiClient->assertResponseException(response, "getParagraphRectangle");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"TextBounds", json);
			return std::static_pointer_cast<TextBounds>(instance);
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::getParagraphs(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getParagraphs");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Paragraphs", json);
			return std::static_pointer_cast<Paragraphs>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Placeholder", json);
			return std::static_pointer_cast<Placeholder>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Placeholders", json);
			return std::static_pointer_cast<Placeholders>(instance);
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::getPortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getPortion");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Portion", json);
			return std::static_pointer_cast<Portion>(instance);
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::getPortionEffective(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}/effective");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);
	ApiClient::setPathParameter(methodPath, "portionIndex", portionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getPortionEffective");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Portion", json);
			return std::static_pointer_cast<Portion>(instance);
		});
}

pplx::task<std::shared_ptr<TextBounds>> SlidesApi::getPortionRectangle(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}/bounds");
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
			m_ApiClient->assertResponseException(response, "getPortionRectangle");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"TextBounds", json);
			return std::static_pointer_cast<TextBounds>(instance);
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::getPortions(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getPortions");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Portions", json);
			return std::static_pointer_cast<Portions>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Document", json);
			return std::static_pointer_cast<Document>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Images", json);
			return std::static_pointer_cast<Images>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"TextItems", json);
			return std::static_pointer_cast<TextItems>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ProtectionProperties", json);
			return std::static_pointer_cast<ProtectionProperties>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Sections", json);
			return std::static_pointer_cast<Sections>(instance);
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::getShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getShape");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ShapeBase", json);
			return std::static_pointer_cast<ShapeBase>(instance);
		});
}

pplx::task<std::shared_ptr<GeometryPaths>> SlidesApi::getShapeGeometryPath(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/geometryPath");
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
			m_ApiClient->assertResponseException(response, "getShapeGeometryPath");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"GeometryPaths", json);
			return std::static_pointer_cast<GeometryPaths>(instance);
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::getShapes(utility::string_t name, int32_t slideIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t shapeType, utility::string_t subShape)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// validate the parameter 'shapeType'
	if (!shapeType.empty() && !boost::iequals(shapeType, "Shape") && !boost::iequals(shapeType, "Chart") && !boost::iequals(shapeType, "Table") && !boost::iequals(shapeType, "PictureFrame") && !boost::iequals(shapeType, "VideoFrame") && !boost::iequals(shapeType, "AudioFrame") && !boost::iequals(shapeType, "SmartArt") && !boost::iequals(shapeType, "OleObjectFrame") && !boost::iequals(shapeType, "GroupShape") && !boost::iequals(shapeType, "GraphicalObject") && !boost::iequals(shapeType, "Connector") && !boost::iequals(shapeType, "SmartArtShape") && !boost::iequals(shapeType, "ZoomFrame") && !boost::iequals(shapeType, "SectionZoomFrame") && !boost::iequals(shapeType, "SummaryZoomFrame") && !boost::iequals(shapeType, "SummaryZoomSection"))
	{
		throw std::invalid_argument("Invalid value for shapeType. Must be one of Shape, Chart, Table, PictureFrame, VideoFrame, AudioFrame, SmartArt, OleObjectFrame, GroupShape, GraphicalObject, Connector, SmartArtShape, ZoomFrame, SectionZoomFrame, SummaryZoomFrame, SummaryZoomSection.");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapeType"), shapeType);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getShapes");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Shapes", json);
			return std::static_pointer_cast<Shapes>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Slide", json);
			return std::static_pointer_cast<Slide>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideComments", json);
			return std::static_pointer_cast<SlideComments>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"HeaderFooter", json);
			return std::static_pointer_cast<HeaderFooter>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Images", json);
			return std::static_pointer_cast<Images>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideProperties", json);
			return std::static_pointer_cast<SlideProperties>(instance);
		});
}

pplx::task<std::shared_ptr<SlideShowProperties>> SlidesApi::getSlideShowProperties(utility::string_t name, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slideShowProperties");
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
			m_ApiClient->assertResponseException(response, "getSlideShowProperties");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideShowProperties", json);
			return std::static_pointer_cast<SlideShowProperties>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"TextItems", json);
			return std::static_pointer_cast<TextItems>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Slides", json);
			return std::static_pointer_cast<Slides>(instance);
		});
}

pplx::task<std::shared_ptr<SlideAnimation>> SlidesApi::getSpecialSlideAnimation(utility::string_t name, int32_t slideIndex, utility::string_t slideType, boost::optional<int32_t> shapeIndex, boost::optional<int32_t> paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	if (paragraphIndex.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("paragraphIndex"), paragraphIndex.value());
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::getSpecialSlideParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getSpecialSlideParagraph");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Paragraph", json);
			return std::static_pointer_cast<Paragraph>(instance);
		});
}

pplx::task<std::shared_ptr<Paragraphs>> SlidesApi::getSpecialSlideParagraphs(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}/paragraphs");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getSpecialSlideParagraphs");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Paragraphs", json);
			return std::static_pointer_cast<Paragraphs>(instance);
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::getSpecialSlidePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getSpecialSlidePortion");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Portion", json);
			return std::static_pointer_cast<Portion>(instance);
		});
}

pplx::task<std::shared_ptr<Portions>> SlidesApi::getSpecialSlidePortions(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getSpecialSlidePortions");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Portions", json);
			return std::static_pointer_cast<Portions>(instance);
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::getSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes/{shapeIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getSpecialSlideShape");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ShapeBase", json);
			return std::static_pointer_cast<ShapeBase>(instance);
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::getSpecialSlideShapes(utility::string_t name, int32_t slideIndex, utility::string_t slideType, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/{slideType}/shapes");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "slideType", slideType);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("GET"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "getSpecialSlideShapes");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Shapes", json);
			return std::static_pointer_cast<Shapes>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Theme", json);
			return std::static_pointer_cast<Theme>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ViewProperties", json);
			return std::static_pointer_cast<ViewProperties>(instance);
		});
}

pplx::task<std::shared_ptr<Shape>> SlidesApi::highlightShapeRegex(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t regex, utility::string_t color, boost::optional<bool> wholeWordsOnly, boost::optional<bool> ignoreCase, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'regex' is set
	if (regex.empty())
	{
		throw std::invalid_argument("Missing required parameter: regex");
	}
	// verify the required parameter 'color' is set
	if (color.empty())
	{
		throw std::invalid_argument("Missing required parameter: color");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/highlightRegex");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("regex"), regex);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("color"), color);
	if (wholeWordsOnly.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("wholeWordsOnly"), wholeWordsOnly.value());
	}
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
			m_ApiClient->assertResponseException(response, "highlightShapeRegex");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Shape", json);
			return std::static_pointer_cast<Shape>(instance);
		});
}

pplx::task<std::shared_ptr<Shape>> SlidesApi::highlightShapeText(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t text, utility::string_t color, boost::optional<bool> wholeWordsOnly, boost::optional<bool> ignoreCase, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'text' is set
	if (text.empty())
	{
		throw std::invalid_argument("Missing required parameter: text");
	}
	// verify the required parameter 'color' is set
	if (color.empty())
	{
		throw std::invalid_argument("Missing required parameter: color");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/highlightText");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("text"), text);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("color"), color);
	if (wholeWordsOnly.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("wholeWordsOnly"), wholeWordsOnly.value());
	}
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
			m_ApiClient->assertResponseException(response, "highlightShapeText");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Shape", json);
			return std::static_pointer_cast<Shape>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Document", json);
			return std::static_pointer_cast<Document>(instance);
		});
}

pplx::task<std::shared_ptr<Document>> SlidesApi::importFromPdf(utility::string_t name, std::shared_ptr<HttpContent> pdf, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (pdf == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.pdf");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Document", json);
			return std::static_pointer_cast<Document>(instance);
		});
}

pplx::task<std::shared_ptr<Shapes>> SlidesApi::importShapesFromSvg(utility::string_t name, int32_t slideIndex, std::shared_ptr<HttpContent> image, boost::optional<int32_t> x, boost::optional<int32_t> y, boost::optional<int32_t> width, boost::optional<int32_t> height, std::vector<int32_t> shapes, boost::optional<bool> group, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/fromSvg");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (x.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("x"), x.value());
	}
	if (y.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("y"), y.value());
	}
	if (width.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("width"), width.value());
	}
	if (height.has_value())
	{
		ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("height"), height.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("shapes"), shapes);
	if (group.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("group"), group.value());
	}
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

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "importShapesFromSvg");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Shapes", json);
			return std::static_pointer_cast<Shapes>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Document", json);
			return std::static_pointer_cast<Document>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Sections", json);
			return std::static_pointer_cast<Sections>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Slides", json);
			return std::static_pointer_cast<Slides>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"EntityExists", json);
			return std::static_pointer_cast<EntityExists>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"EntityExists", json);
			return std::static_pointer_cast<EntityExists>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ObjectExist", json);
			return std::static_pointer_cast<ObjectExist>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Document", json);
			return std::static_pointer_cast<Document>(instance);
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Slides", json);
			return std::static_pointer_cast<Slides>(instance);
		});
}

pplx::task<std::shared_ptr<FontsData>> SlidesApi::replaceFont(utility::string_t name, utility::string_t sourceFont, utility::string_t targetFont, boost::optional<bool> embed, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'sourceFont' is set
	if (sourceFont.empty())
	{
		throw std::invalid_argument("Missing required parameter: sourceFont");
	}
	// verify the required parameter 'targetFont' is set
	if (targetFont.empty())
	{
		throw std::invalid_argument("Missing required parameter: targetFont");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/fonts/{sourceFont}/replace/{targetFont}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "sourceFont", sourceFont);
	ApiClient::setPathParameter(methodPath, "targetFont", targetFont);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (embed.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("embed"), embed.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "replaceFont");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"FontsData", json);
			return std::static_pointer_cast<FontsData>(instance);
		});
}

pplx::task<HttpContent> SlidesApi::replaceFontOnline(std::shared_ptr<HttpContent> document, utility::string_t sourceFont, utility::string_t targetFont, boost::optional<bool> embed, utility::string_t password, utility::string_t fontsFolder)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	// verify the required parameter 'sourceFont' is set
	if (sourceFont.empty())
	{
		throw std::invalid_argument("Missing required parameter: sourceFont");
	}
	// verify the required parameter 'targetFont' is set
	if (targetFont.empty())
	{
		throw std::invalid_argument("Missing required parameter: targetFont");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/fonts/{sourceFont}/replace/{targetFont}");
	ApiClient::setPathParameter(methodPath, "sourceFont", sourceFont);
	ApiClient::setPathParameter(methodPath, "targetFont", targetFont);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (embed.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("embed"), embed.value());
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
			m_ApiClient->assertResponseException(response, "replaceFontOnline");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"DocumentReplaceResult", json);
			return std::static_pointer_cast<DocumentReplaceResult>(instance);
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideReplaceResult", json);
			return std::static_pointer_cast<SlideReplaceResult>(instance);
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
			result.setData(stream);
			return result;
		});
}

pplx::task<void> SlidesApi::savePortionAsMathMl(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, utility::string_t outPath, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/paragraphs/{paragraphIndex}/portions/{portionIndex}/mathml");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "paragraphIndex", paragraphIndex);
	ApiClient::setPathParameter(methodPath, "portionIndex", portionIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("outPath"), outPath);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "savePortionAsMathMl");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			return void();
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::saveShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t format, utility::string_t outPath, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder, utility::string_t subShape)
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
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Svg"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Svg.");
	}
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	// validate the parameter 'bounds'
	if (!bounds.empty() && !boost::iequals(bounds, "Slide") && !boost::iequals(bounds, "Shape") && !boost::iequals(bounds, "Appearance"))
	{
		throw std::invalid_argument("Invalid value for bounds. Must be one of Slide, Shape, Appearance.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Svg"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Svg.");
	}
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	// validate the parameter 'bounds'
	if (!bounds.empty() && !boost::iequals(bounds, "Slide") && !boost::iequals(bounds, "Shape") && !boost::iequals(bounds, "Appearance"))
	{
		throw std::invalid_argument("Invalid value for bounds. Must be one of Slide, Shape, Appearance.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Html") && !boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Html5"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Html, Pdf, Xps, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Potx, Pot, Potm, Svg, Fodp, Xaml, Html5.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Html") && !boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Html5"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Html, Pdf, Xps, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Potx, Pot, Potm, Svg, Fodp, Xaml, Html5.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			return void();
		});
}

pplx::task<void> SlidesApi::saveSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, utility::string_t format, utility::string_t outPath, std::shared_ptr<IShapeExportOptions> options, boost::optional<double> scaleX, boost::optional<double> scaleY, utility::string_t bounds, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Svg"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Svg.");
	}
	// verify the required parameter 'outPath' is set
	if (outPath.empty())
	{
		throw std::invalid_argument("Missing required parameter: outPath");
	}
	// validate the parameter 'bounds'
	if (!bounds.empty() && !boost::iequals(bounds, "Slide") && !boost::iequals(bounds, "Shape") && !boost::iequals(bounds, "Appearance"))
	{
		throw std::invalid_argument("Invalid value for bounds. Must be one of Slide, Shape, Appearance.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideBackground", json);
			return std::static_pointer_cast<SlideBackground>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideBackground", json);
			return std::static_pointer_cast<SlideBackground>(instance);
		});
}

pplx::task<std::shared_ptr<Axis>> SlidesApi::setChartAxis(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t axisType, std::shared_ptr<Axis> axis, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'axisType' is set
	if (axisType.empty())
	{
		throw std::invalid_argument("Missing required parameter: axisType");
	}
	// verify the required parameter 'axisType' is set
	if (axisType.empty())
	{
		throw std::invalid_argument("Missing required parameter: axisType");
	}
	// validate the parameter 'axisType'
	if (!boost::iequals(axisType, "HorizontalAxis") && !boost::iequals(axisType, "VerticalAxis") && !boost::iequals(axisType, "SecondaryHorizontalAxis") && !boost::iequals(axisType, "SecondaryVerticalAxis"))
	{
		throw std::invalid_argument("Invalid value for axisType. Must be one of HorizontalAxis, VerticalAxis, SecondaryHorizontalAxis, SecondaryVerticalAxis.");
	}
	if (axis == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.axis");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/{axisType}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "axisType", axisType);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (axis != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(axis->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "setChartAxis");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Axis", json);
			return std::static_pointer_cast<Axis>(instance);
		});
}

pplx::task<std::shared_ptr<Legend>> SlidesApi::setChartLegend(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<Legend> legend, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (legend == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.legend");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/legend");
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
	if (legend != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(legend->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "setChartLegend");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Legend", json);
			return std::static_pointer_cast<Legend>(instance);
		});
}

pplx::task<std::shared_ptr<Chart>> SlidesApi::setChartSeriesGroup(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t seriesGroupIndex, std::shared_ptr<ChartSeriesGroup> seriesGroup, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	if (seriesGroup == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.seriesGroup");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/seriesGroup/{seriesGroupIndex}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "seriesGroupIndex", seriesGroupIndex);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (seriesGroup != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(seriesGroup->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "setChartSeriesGroup");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Chart", json);
			return std::static_pointer_cast<Chart>(instance);
		});
}

pplx::task<std::shared_ptr<ChartWall>> SlidesApi::setChartWall(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, utility::string_t chartWallType, std::shared_ptr<ChartWall> chartWall, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'chartWallType' is set
	if (chartWallType.empty())
	{
		throw std::invalid_argument("Missing required parameter: chartWallType");
	}
	// verify the required parameter 'chartWallType' is set
	if (chartWallType.empty())
	{
		throw std::invalid_argument("Missing required parameter: chartWallType");
	}
	// validate the parameter 'chartWallType'
	if (!boost::iequals(chartWallType, "Floor") && !boost::iequals(chartWallType, "SideWall") && !boost::iequals(chartWallType, "BackWall"))
	{
		throw std::invalid_argument("Invalid value for chartWallType. Must be one of Floor, SideWall, BackWall.");
	}
	if (chartWall == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.chartWall");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/{chartWallType}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "slideIndex", slideIndex);
	ApiClient::setPathParameter(methodPath, "shapeIndex", shapeIndex);
	ApiClient::setPathParameter(methodPath, "chartWallType", chartWallType);

	std::map<utility::string_t, utility::string_t> queryParams;
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (chartWall != nullptr)
	{
		httpBody = std::shared_ptr<IHttpBody>(new JsonBody(chartWall->toJson()));
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("PUT"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "setChartWall");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ChartWall", json);
			return std::static_pointer_cast<ChartWall>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"DocumentProperties", json);
			return std::static_pointer_cast<DocumentProperties>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"DocumentProperty", json);
			return std::static_pointer_cast<DocumentProperty>(instance);
		});
}

pplx::task<std::shared_ptr<FontsData>> SlidesApi::setEmbeddedFont(utility::string_t name, utility::string_t fontName, boost::optional<bool> onlyUsed, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// verify the required parameter 'fontName' is set
	if (fontName.empty())
	{
		throw std::invalid_argument("Missing required parameter: fontName");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/fonts/embedded/{fontName}");
	ApiClient::setPathParameter(methodPath, "name", name);
	ApiClient::setPathParameter(methodPath, "fontName", fontName);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (onlyUsed.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("onlyUsed"), onlyUsed.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("fontsFolder"), fontsFolder);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "setEmbeddedFont");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"FontsData", json);
			return std::static_pointer_cast<FontsData>(instance);
		});
}

pplx::task<std::shared_ptr<FontsData>> SlidesApi::setEmbeddedFontFromRequest(std::shared_ptr<HttpContent> font, utility::string_t name, boost::optional<bool> onlyUsed, utility::string_t password, utility::string_t folder, utility::string_t storage)
{
	if (font == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.font");
	}
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/fonts/embedded");
	ApiClient::setPathParameter(methodPath, "name", name);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (onlyUsed.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("onlyUsed"), onlyUsed.value());
	}
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("folder"), folder);
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("storage"), storage);

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (font != nullptr)
	{
		requestFiles.push_back(font);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "setEmbeddedFontFromRequest");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"FontsData", json);
			return std::static_pointer_cast<FontsData>(instance);
		});
}

pplx::task<HttpContent> SlidesApi::setEmbeddedFontFromRequestOnline(std::shared_ptr<HttpContent> document, std::shared_ptr<HttpContent> font, boost::optional<bool> onlyUsed, utility::string_t password)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	if (font == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.font");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/fonts/embedded");

	std::map<utility::string_t, utility::string_t> queryParams;
	if (onlyUsed.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("onlyUsed"), onlyUsed.value());
	}

	std::map<utility::string_t, utility::string_t> headerParams;
	ApiClient::setQueryParameter(headerParams, utility::conversions::to_string_t("password"), password);

	std::shared_ptr<IHttpBody> httpBody = nullptr;
	std::vector<std::shared_ptr<HttpContent>> requestFiles;
	if (document != nullptr)
	{
		requestFiles.push_back(document);
	}
	if (font != nullptr)
	{
		requestFiles.push_back(font);
	}

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "setEmbeddedFontFromRequestOnline");
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

pplx::task<HttpContent> SlidesApi::setEmbeddedFontOnline(std::shared_ptr<HttpContent> document, utility::string_t fontName, boost::optional<bool> onlyUsed, utility::string_t password, utility::string_t fontsFolder)
{
	if (document == nullptr)
	{
		throw std::invalid_argument("Missing required parameter: request.document");
	}
	// verify the required parameter 'fontName' is set
	if (fontName.empty())
	{
		throw std::invalid_argument("Missing required parameter: fontName");
	}
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/fonts/embedded/{fontName}");
	ApiClient::setPathParameter(methodPath, "fontName", fontName);

	std::map<utility::string_t, utility::string_t> queryParams;
	if (onlyUsed.has_value())
	{
		ApiClient::setBoolQueryParameter(queryParams, utility::conversions::to_string_t("onlyUsed"), onlyUsed.value());
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
			m_ApiClient->assertResponseException(response, "setEmbeddedFontOnline");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"NotesSlideHeaderFooter", json);
			return std::static_pointer_cast<NotesSlideHeaderFooter>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Document", json);
			return std::static_pointer_cast<Document>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ProtectionProperties", json);
			return std::static_pointer_cast<ProtectionProperties>(instance);
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Sections", json);
			return std::static_pointer_cast<Sections>(instance);
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::setShapeGeometryPath(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<GeometryPaths> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slides/{slideIndex}/shapes/{shapeIndex}/geometryPath");
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

	return m_ApiClient->callApi(methodPath, utility::conversions::to_string_t("POST"), queryParams, headerParams, httpBody, requestFiles)
		.then([=](web::http::http_response response)
		{
			m_ApiClient->assertResponseException(response, "setShapeGeometryPath");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ShapeBase", json);
			return std::static_pointer_cast<ShapeBase>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"HeaderFooter", json);
			return std::static_pointer_cast<HeaderFooter>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideProperties", json);
			return std::static_pointer_cast<SlideProperties>(instance);
		});
}

pplx::task<std::shared_ptr<SlideShowProperties>> SlidesApi::setSlideShowProperties(utility::string_t name, std::shared_ptr<SlideShowProperties> dto, utility::string_t password, utility::string_t folder, utility::string_t storage)
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
	utility::string_t methodPath = utility::conversions::to_string_t("/slides/{name}/slideShowProperties");
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
			m_ApiClient->assertResponseException(response, "setSlideShowProperties");
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideShowProperties", json);
			return std::static_pointer_cast<SlideShowProperties>(instance);
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ViewProperties", json);
			return std::static_pointer_cast<ViewProperties>(instance);
		});
}

pplx::task<std::shared_ptr<SplitDocumentResult>> SlidesApi::split(utility::string_t name, std::shared_ptr<ExportOptions> options, utility::string_t format, boost::optional<int32_t> width, boost::optional<int32_t> height, boost::optional<int32_t> from, boost::optional<int32_t> to, utility::string_t destFolder, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t fontsFolder)
{
	// verify the required parameter 'name' is set
	if (name.empty())
	{
		throw std::invalid_argument("Missing required parameter: name");
	}
	// validate the parameter 'format'
	if (!format.empty() && !boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Html") && !boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Html5"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Html, Pdf, Xps, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Potx, Pot, Potm, Svg, Fodp, Xaml, Html5.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SplitDocumentResult", json);
			return std::static_pointer_cast<SplitDocumentResult>(instance);
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Html") && !boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Html5"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Html, Pdf, Xps, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Potx, Pot, Potm, Svg, Fodp, Xaml, Html5.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SplitDocumentResult", json);
			return std::static_pointer_cast<SplitDocumentResult>(instance);
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
	// validate the parameter 'format'
	if (!boost::iequals(format, "Jpeg") && !boost::iequals(format, "Png") && !boost::iequals(format, "Gif") && !boost::iequals(format, "Bmp") && !boost::iequals(format, "Tiff") && !boost::iequals(format, "Html") && !boost::iequals(format, "Pdf") && !boost::iequals(format, "Xps") && !boost::iequals(format, "Pptx") && !boost::iequals(format, "Odp") && !boost::iequals(format, "Otp") && !boost::iequals(format, "Ppt") && !boost::iequals(format, "Pps") && !boost::iequals(format, "Ppsx") && !boost::iequals(format, "Pptm") && !boost::iequals(format, "Ppsm") && !boost::iequals(format, "Potx") && !boost::iequals(format, "Pot") && !boost::iequals(format, "Potm") && !boost::iequals(format, "Svg") && !boost::iequals(format, "Fodp") && !boost::iequals(format, "Xaml") && !boost::iequals(format, "Html5"))
	{
		throw std::invalid_argument("Invalid value for format. Must be one of Jpeg, Png, Gif, Bmp, Tiff, Html, Pdf, Xps, Pptx, Odp, Otp, Ppt, Pps, Ppsx, Pptm, Ppsm, Potx, Pot, Potm, Svg, Fodp, Xaml, Html5.");
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
		.then([=](std::vector<unsigned char> responseVector)
		{
			HttpContent result;
			std::shared_ptr<std::stringstream> stream = std::make_shared<std::stringstream>(std::string(responseVector.begin(), responseVector.end()));
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"StorageExist", json);
			return std::static_pointer_cast<StorageExist>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Chart", json);
			return std::static_pointer_cast<Chart>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Chart", json);
			return std::static_pointer_cast<Chart>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Chart", json);
			return std::static_pointer_cast<Chart>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"LayoutSlide", json);
			return std::static_pointer_cast<LayoutSlide>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"NotesSlide", json);
			return std::static_pointer_cast<NotesSlide>(instance);
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::updateParagraph(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Paragraph> dto, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Paragraph", json);
			return std::static_pointer_cast<Paragraph>(instance);
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::updatePortion(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, std::shared_ptr<Portion> dto, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Portion", json);
			return std::static_pointer_cast<Portion>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Sections", json);
			return std::static_pointer_cast<Sections>(instance);
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::updateShape(utility::string_t name, int32_t slideIndex, int32_t shapeIndex, std::shared_ptr<ShapeBase> dto, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ShapeBase", json);
			return std::static_pointer_cast<ShapeBase>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Slide", json);
			return std::static_pointer_cast<Slide>(instance);
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"SlideAnimation", json);
			return std::static_pointer_cast<SlideAnimation>(instance);
		});
}

pplx::task<std::shared_ptr<Paragraph>> SlidesApi::updateSpecialSlideParagraph(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, std::shared_ptr<Paragraph> dto, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Paragraph", json);
			return std::static_pointer_cast<Paragraph>(instance);
		});
}

pplx::task<std::shared_ptr<Portion>> SlidesApi::updateSpecialSlidePortion(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, int32_t paragraphIndex, int32_t portionIndex, std::shared_ptr<Portion> dto, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"Portion", json);
			return std::static_pointer_cast<Portion>(instance);
		});
}

pplx::task<std::shared_ptr<ShapeBase>> SlidesApi::updateSpecialSlideShape(utility::string_t name, int32_t slideIndex, utility::string_t slideType, int32_t shapeIndex, std::shared_ptr<ShapeBase> dto, utility::string_t password, utility::string_t folder, utility::string_t storage, utility::string_t subShape)
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
	// validate the parameter 'slideType'
	if (!boost::iequals(slideType, "MasterSlide") && !boost::iequals(slideType, "LayoutSlide") && !boost::iequals(slideType, "NotesSlide"))
	{
		throw std::invalid_argument("Invalid value for slideType. Must be one of MasterSlide, LayoutSlide, NotesSlide.");
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
	ApiClient::setQueryParameter(queryParams, utility::conversions::to_string_t("subShape"), subShape);

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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"ShapeBase", json);
			return std::static_pointer_cast<ShapeBase>(instance);
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
			return response.extract_vector();
		})
		.then([=](std::vector<unsigned char> responseVector)
		{
			utility::string_t response(responseVector.begin(), responseVector.end());
			m_ApiClient->logString(response);
			web::json::value json = web::json::value::parse(response);
			std::shared_ptr<void> instance = ClassRegistry::deserialize(L"FilesUploadResult", json);
			return std::static_pointer_cast<FilesUploadResult>(instance);
		});
}

}
}

