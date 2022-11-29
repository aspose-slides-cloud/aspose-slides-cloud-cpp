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
 * Portions.h
 *
 * Represents list of Links to Paragraphs resources
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_Portions_H_
#define ASPOSESLIDESCLOUD_MODEL_Portions_H_

#include "ResourceBase.h"

#include "../model/Portion.h"
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents list of Links to Paragraphs resources
/// </summary>
class  Portions : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT Portions();
	ASPOSE_DLL_EXPORT virtual ~Portions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// List of portion links.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<Portion>> getItems() const;
	ASPOSE_DLL_EXPORT void setItems(std::vector<std::shared_ptr<Portion>> value);

protected:
	std::vector<std::shared_ptr<Portion>> m_Items;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_Portions_H_ */
