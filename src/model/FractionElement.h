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
 * FractionElement.h
 *
 * Specifies the fraction object, consisting of a numerator and denominator separated by a fraction bar.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_FractionElement_H_
#define ASPOSESLIDESCLOUD_MODEL_FractionElement_H_

#include "MathElement.h"

#include "../model/MathElement.h"
#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Specifies the fraction object, consisting of a numerator and denominator separated by a fraction bar.
/// </summary>
class  FractionElement : public MathElement
{
public:
	ASPOSE_DLL_EXPORT FractionElement();
	ASPOSE_DLL_EXPORT virtual ~FractionElement();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Fraction type
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFractionType() const;
	ASPOSE_DLL_EXPORT void setFractionType(utility::string_t value);
	/// <summary>
	/// Numerator
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getNumerator() const;
	ASPOSE_DLL_EXPORT void setNumerator(std::shared_ptr<MathElement> value);
	/// <summary>
	/// Denominator
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getDenominator() const;
	ASPOSE_DLL_EXPORT void setDenominator(std::shared_ptr<MathElement> value);

protected:
	utility::string_t m_FractionType;
	std::shared_ptr<MathElement> m_Numerator;
	std::shared_ptr<MathElement> m_Denominator;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_FractionElement_H_ */
