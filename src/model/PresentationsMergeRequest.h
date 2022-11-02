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
 * PresentationsMergeRequest.h
 *
 * Request for presentations merge
 */

#ifndef _PresentationsMergeRequest_H_
#define _PresentationsMergeRequest_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Request for presentations merge
/// </summary>
class  PresentationsMergeRequest : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT PresentationsMergeRequest();
	ASPOSE_DLL_EXPORT virtual ~PresentationsMergeRequest();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets the presentation paths.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<utility::string_t> getPresentationPaths() const;
	ASPOSE_DLL_EXPORT void setPresentationPaths(std::vector<utility::string_t> value);
	/// <summary>
	/// Gets or sets the presentation passwords.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<utility::string_t> getPresentationPasswords() const;
	ASPOSE_DLL_EXPORT void setPresentationPasswords(std::vector<utility::string_t> value);

protected:
	std::vector<utility::string_t> m_PresentationPaths;
	std::vector<utility::string_t> m_PresentationPasswords;
};

}
}

#endif /* _PresentationsMergeRequest_H_ */
