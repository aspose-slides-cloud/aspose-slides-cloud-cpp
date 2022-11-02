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
 * TextFrameFormat.h
 *
 * Contains the TextFrame&#39;s formatting properties.
 */

#ifndef _TextFrameFormat_H_
#define _TextFrameFormat_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/ThreeDFormat.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Contains the TextFrame&#39;s formatting properties.
/// </summary>
class  TextFrameFormat : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT TextFrameFormat();
	ASPOSE_DLL_EXPORT virtual ~TextFrameFormat();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Represents 3d effect properties for a text.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ThreeDFormat> getThreeDFormat() const;
	ASPOSE_DLL_EXPORT void setThreeDFormat(std::shared_ptr<ThreeDFormat> value);
	/// <summary>
	/// Gets or sets text wrapping shape.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTransform() const;
	ASPOSE_DLL_EXPORT void setTransform(utility::string_t value);

protected:
	std::shared_ptr<ThreeDFormat> m_ThreeDFormat;
	utility::string_t m_Transform;
};

}
}

#endif /* _TextFrameFormat_H_ */
