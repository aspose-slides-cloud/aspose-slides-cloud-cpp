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
 * FontScheme.h
 *
 * Represents font scheme
 */

#ifndef _FontScheme_H_
#define _FontScheme_H_

#include "ResourceBase.h"

#include "../model/FontSet.h"
#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents font scheme
/// </summary>
class  FontScheme : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT FontScheme();
	ASPOSE_DLL_EXPORT virtual ~FontScheme();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets fonts collection for a \&quot;heading\&quot; part of the slide.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FontSet> getMajor() const;
	ASPOSE_DLL_EXPORT void setMajor(std::shared_ptr<FontSet> value);
	/// <summary>
	/// Gets or sets  the fonts collection for a \&quot;body\&quot; part of the slide.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FontSet> getMinor() const;
	ASPOSE_DLL_EXPORT void setMinor(std::shared_ptr<FontSet> value);
	/// <summary>
	/// Gets or sets the name.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getName() const;
	ASPOSE_DLL_EXPORT void setName(utility::string_t value);

protected:
	std::shared_ptr<FontSet> m_Major;
	std::shared_ptr<FontSet> m_Minor;
	utility::string_t m_Name;
};

}
}

#endif /* _FontScheme_H_ */
