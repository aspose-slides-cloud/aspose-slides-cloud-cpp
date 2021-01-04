![](https://img.shields.io/badge/api-v3.0-lightgrey) ![Nuget](https://img.shields.io/nuget/v/Aspose.slides-Cloud) ![Nuget](https://img.shields.io/nuget/dt/Aspose.slides-Cloud) [![GitHub license](https://img.shields.io/github/license/aspose-slides-cloud/aspose-slides-cloud-cpp)](https://github.com/aspose-slides-cloud/aspose-slides-cloud-cpp/blob/master/LICENSE)
# Aspose.Slides Cloud SDK for C++
This repository contains Aspose.Slides Cloud SDK for C++ source code. This SDK allows you to work with Aspose.Slides Cloud REST APIs in your .NET applications.

## Key Features
* Conversion between various document-related formats (20+ formats supported), including PDF<->PowerPoint conversion
* Download slides and shapes in various formats, including PDF and SVG
* Merge and split PowerPoint presentations
* Access PowerPoint presentation metadata and statistics
* Find and replace
* Full read & write access to Document Object Model, including slides, shapes, paragraphs, portions and many others
* Support of Aspose.Storage API

### New Features & Recent API Changes

#### 20.12
* New property "HttpRequestTimeout" is added to SDK configuration. It allows to specify a custom timeout (in seconds) for HTTP requests made by the SDK.

#### 20.10
* Removed shapeType property from BaseShape class; replaced geometryShapeType with shapeType property for GeometryShape.
* Removed redundant ResourceUriElement class. All properties of ResourceUriElement type are changed to ResourceUri type.

#### 20.9
* New getSections, putSections, putSection, postSection, postSectionMove, deleteSection, deleteSections methods to add, update and delete presentation sections.
* New postSlidesHeaderFooter, postSlideHeaderFooter, getSlideHeaderFooter, postNotesSlideHeaderFooter, getNotesSlideHeaderFooter methods to manage header/footer settings for slides.
* Replaces categories for parentCategories & level properties in ChartCategory class to properly support Sunburst & Treeview charts.


## Licensing
All Aspose.Slides Cloud SDKs are licensed under MIT License.

## How to use the SDK?

The complete source code is available in this repository folder. You can either directly use it in your project via source code or get [NuGet distribution](https://www.nuget.org/packages/Aspose.Slides-Cloud.Cpp/) (recommended).

### Prerequisites

To use Aspose Slides Cloud SDK you need to register an account with [Aspose Cloud](https://www.aspose.cloud/) and lookup/create App Key and SID at [Cloud Dashboard](https://dashboard.aspose.cloud/#/apps). There is free quota available. For more details, see [Aspose Cloud Pricing](https://purchase.aspose.cloud/pricing).

### Installation

From the command line:

	nuget install Aspose.Slides-Cloud.Cpp

From Package Manager:

	PM> Install-Package Aspose.Slides-Cloud.Cpp

### Sample usage

The example code below converts a PowerPoint document to PDF format using Aspose.Slides-Cloud library:
```c++
std::shared_ptr<asposeslidescloud::api::SlidesApi> api = std::make_shared<asposeslidescloud::api::SlidesApi>(utility::conversions::to_string_t("MyAppSid"), utility::conversions::to_string_t("MyAppKey"));
api->getSlidesApiInfo().get()->getName();
std::shared_ptr<PostSlidesConvertRequest> request = std::make_shared<PostSlidesConvertRequest>();
request->setFormat(utility::conversions::to_string_t("pdf"));
request->setDocument(std::make_shared<std::ifstream>("MyPresentation.pptx", std::ios::binary));
std::ofstream fs("MyPresentation.pdf", std::ios::binary);
api->postSlidesConvert().get().writeTo(versionStream);
```
You can check more [Examples](Examples) of using the SDK.

## Aspose.Slides Cloud SDKs in Popular Languages

| .NET | Java | PHP | Python | Ruby | Node.js | Android | Swift|Perl|Go|
|---|---|---|---|---|---|---|--|--|--|
| [GitHub](https://github.com/aspose-slides-cloud/aspose-slides-cloud-dotnet) | [GitHub](https://github.com/aspose-slides-cloud/aspose-slides-cloud-java) | [GitHub](https://github.com/aspose-slides-cloud/aspose-slides-cloud-php) | [GitHub](https://github.com/aspose-slides-cloud/aspose-slides-cloud-python) | [GitHub](https://github.com/aspose-slides-cloud/aspose-slides-cloud-ruby)  | [GitHub](https://github.com/aspose-slides-cloud/aspose-slides-cloud-nodejs) | [GitHub](https://github.com/aspose-slides-cloud/aspose-slides-cloud-android) | [GitHub](https://github.com/aspose-slides-cloud/aspose-slides-cloud-swift)|[GitHub](https://github.com/aspose-slides-cloud/aspose-slides-cloud-perl) |[GitHub](https://github.com/aspose-slides-cloud/aspose-slides-cloud-go) |
| [NuGet](https://www.nuget.org/packages/Aspose.slides-Cloud/) | [Maven](https://repository.aspose.cloud/webapp/#/artifacts/browse/tree/General/repo/com/aspose/aspose-slides-cloud) | [Composer](https://packagist.org/packages/aspose/slides-sdk-php) | [PIP](https://pypi.org/project/asposeslidescloud/) | [GEM](https://rubygems.org/gems/aspose_slides_cloud)  | [NPM](https://www.npmjs.com/package/asposeslidescloud) | [Maven](https://repository.aspose.cloud/webapp/#/artifacts/browse/tree/General/repo/com/aspose/aspose-slides-cloud) | [Cocoapods](https://cocoapods.org/pods/AsposeslidesCloud)|[Meta Cpan](https://metacpan.org/release/AsposeSlidesCloud-SlidesApi) | [Go.Dev](https://pkg.go.dev/github.com/aspose-slides-cloud/aspose-slides-cloud-go/) | 

[Product Page](https://products.aspose.cloud/slides/cpp) | [Documentation](https://docs.aspose.cloud/display/slidescloud/Home) | [API Reference](https://apireference.aspose.cloud/slides/) | [Code Samples](https://github.com/aspose-slides-cloud/aspose-slides-cloud-cpp) | [Blog](https://blog.aspose.cloud/category/slides/) | [Free Support](https://forum.aspose.cloud/c/slides) | [Free Trial](https://dashboard.aspose.cloud/#/apps)
