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
 * CustomDashPattern.h
 *
 * Custom dash pattern.
 */

#ifndef _CustomDashPattern_H_
#define _CustomDashPattern_H_

#include "../ModelBase.h"

#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Custom dash pattern.
/// </summary>
class  CustomDashPattern : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT CustomDashPattern();
	ASPOSE_DLL_EXPORT virtual ~CustomDashPattern();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Pattern items.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<double> getItems() const;
	ASPOSE_DLL_EXPORT void setItems(std::vector<double> value);
	ASPOSE_DLL_EXPORT bool itemsIsSet() const;
	ASPOSE_DLL_EXPORT void unsetItems();

protected:
	std::vector<double> m_Items;
	bool m_ItemsIsSet;
};

}
}

#endif /* _CustomDashPattern_H_ */
