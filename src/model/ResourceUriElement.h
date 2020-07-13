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

/*
 * ResourceUriElement.h
 *
 * Resource URI element.
 */

#ifndef _ResourceUriElement_H_
#define _ResourceUriElement_H_

#include "../ModelBase.h"

#include "../model/ResourceUri.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Resource URI element.
/// </summary>
class  ResourceUriElement : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ResourceUriElement();
	ASPOSE_DLL_EXPORT virtual ~ResourceUriElement();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Resource URI.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getUri() const;
	ASPOSE_DLL_EXPORT void setUri(std::shared_ptr<ResourceUri> value);

protected:
	std::shared_ptr<ResourceUri> m_Uri;
};

}
}

#endif /* _ResourceUriElement_H_ */
