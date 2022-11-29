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
 * PresentationToMerge.h
 *
 * Represents presentation to merge
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_PresentationToMerge_H_
#define ASPOSESLIDESCLOUD_MODEL_PresentationToMerge_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents presentation to merge
/// </summary>
class  PresentationToMerge : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT PresentationToMerge();
	ASPOSE_DLL_EXPORT virtual ~PresentationToMerge();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Get or sets the presentation path
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPath() const;
	ASPOSE_DLL_EXPORT void setPath(utility::string_t value);
	/// <summary>
	/// Get or sets the presentation password
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPassword() const;
	ASPOSE_DLL_EXPORT void setPassword(utility::string_t value);
	/// <summary>
	/// Get or sets the indexes of slides to merge
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<int32_t> getSlides() const;
	ASPOSE_DLL_EXPORT void setSlides(std::vector<int32_t> value);
	ASPOSE_DLL_EXPORT bool slidesIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSlides();
	/// <summary>
	/// Merge (request or storage). 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSource() const;
	ASPOSE_DLL_EXPORT void setSource(utility::string_t value);

protected:
	utility::string_t m_Path;
	utility::string_t m_Password;
	std::vector<int32_t> m_Slides;
	bool m_SlidesIsSet;
	utility::string_t m_Source;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_PresentationToMerge_H_ */
