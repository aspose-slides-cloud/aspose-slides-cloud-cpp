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
 * LimitElement.h
 *
 * Specifies the Limit object
 */

#ifndef _LimitElement_H_
#define _LimitElement_H_

#include "MathElement.h"

#include "../model/MathElement.h"
#include <cpprest/details/basic_types.h>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Specifies the Limit object
/// </summary>
class  LimitElement : public MathElement
{
public:
	ASPOSE_DLL_EXPORT LimitElement();
	ASPOSE_DLL_EXPORT virtual ~LimitElement();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Base
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getBase() const;
	ASPOSE_DLL_EXPORT void setBase(std::shared_ptr<MathElement> value);
	/// <summary>
	/// Limit
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getLimit() const;
	ASPOSE_DLL_EXPORT void setLimit(std::shared_ptr<MathElement> value);
	/// <summary>
	/// Specifies upper or lower limit
	/// </summary>
	ASPOSE_DLL_EXPORT bool getUpperLimit() const;
	ASPOSE_DLL_EXPORT void setUpperLimit(bool value);
	ASPOSE_DLL_EXPORT bool upperLimitIsSet() const;
	ASPOSE_DLL_EXPORT void unsetUpperLimit();

protected:
	std::shared_ptr<MathElement> m_Base;
	std::shared_ptr<MathElement> m_Limit;
	bool m_UpperLimit;
	bool m_UpperLimitIsSet;
};

}
}

#endif /* _LimitElement_H_ */
