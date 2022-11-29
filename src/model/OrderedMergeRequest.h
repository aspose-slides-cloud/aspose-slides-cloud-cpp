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
 * OrderedMergeRequest.h
 *
 * Request for presentations merge with optional order of slides
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_OrderedMergeRequest_H_
#define ASPOSESLIDESCLOUD_MODEL_OrderedMergeRequest_H_

#include "../ModelBase.h"

#include "../model/PresentationToMerge.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Request for presentations merge with optional order of slides
/// </summary>
class  OrderedMergeRequest : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT OrderedMergeRequest();
	ASPOSE_DLL_EXPORT virtual ~OrderedMergeRequest();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets the presentation paths.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<PresentationToMerge>> getPresentations() const;
	ASPOSE_DLL_EXPORT void setPresentations(std::vector<std::shared_ptr<PresentationToMerge>> value);

protected:
	std::vector<std::shared_ptr<PresentationToMerge>> m_Presentations;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_OrderedMergeRequest_H_ */
