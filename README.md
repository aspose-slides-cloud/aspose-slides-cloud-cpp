# Aspose.Slides Cloud SDK for C++ [![NuGet](https://img.shields.io/nuget/v/Aspose.Slides-Cloud.svg)](https://www.nuget.org/packages/Aspose.Slides-Cloud.Cpp/)
This repository contains Aspose.Slides Cloud SDK for C++ source code. This SDK allows you to work with Aspose.Slides Cloud REST APIs in your .NET applications.

## Key Features
* Conversion between various document-related formats (20+ formats supported), including PDF<->PowerPoint conversion
* Download slides and shapes in various formats, including PDF and SVG
* Merge and split PowerPoint presentations
* Access PowerPoint presentation metadata and statistics
* Find and replace
* Full read & write access to Document Object Model, including slides, shapes, paragraphs, portions and many others
* Support of Aspose.Storage API

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
std::shared_ptr<asposeslidescloud::api::SlidesApi> api = std::make_shared<asposeslidescloud::api::SlidesApi>(utility::conversions::to_string_t("MyClientId"), utility::conversions::to_string_t("MyClientSecret"));
api->getSlidesApiInfo().get()->getName();
std::shared_ptr<PostSlidesConvertRequest> request = std::make_shared<PostSlidesConvertRequest>();
request->setFormat(utility::conversions::to_string_t("pdf"));
request->setDocument(std::make_shared<std::ifstream>("MyPresentation.pptx", std::ios::binary));
std::ofstream fs("MyPresentation.pdf", std::ios::binary);
api->postSlidesConvert().get().writeTo(versionStream);
```
You can check more [Examples](Examples) of using the SDK.

## Contact Us

Your feedback is very important to us. Please feel free to contact us using our [Support Forums](https://forum.aspose.cloud/c/slides).

## Resources
 
[Website](https://www.aspose.cloud/)  
[Product Home](https://products.aspose.cloud/slides/family)  
[API Reference](https://apireference.aspose.cloud/slides/)  
[Documentation](https://docs.aspose.cloud/slides/)  
[Blog](https://blog.aspose.cloud/category/slides/)  
 
## Other languages

We generate our SDKs in different languages so you may check if yours is available in our [list](https://github.com/aspose-slides-cloud).
 
If you don't find your language in the list, feel free to request it from us, or use raw REST API requests as you can find it [here](https://products.aspose.cloud/slides/curl).
