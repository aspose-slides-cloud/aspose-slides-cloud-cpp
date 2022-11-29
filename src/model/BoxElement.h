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
 * BoxElement.h
 *
 * Box element.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_BoxElement_H_
#define ASPOSESLIDESCLOUD_MODEL_BoxElement_H_

#include "MathElement.h"

#include "../model/MathElement.h"
#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Box element.
/// </summary>
class  BoxElement : public MathElement
{
public:
	ASPOSE_DLL_EXPORT BoxElement();
	ASPOSE_DLL_EXPORT virtual ~BoxElement();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Base
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getBase() const;
	ASPOSE_DLL_EXPORT void setBase(std::shared_ptr<MathElement> value);
	/// <summary>
	/// Operator emulator
	/// </summary>
	ASPOSE_DLL_EXPORT bool isOperatorEmulator() const;
	ASPOSE_DLL_EXPORT void setOperatorEmulator(bool value);
	ASPOSE_DLL_EXPORT bool operatorEmulatorIsSet() const;
	ASPOSE_DLL_EXPORT void unsetOperatorEmulator();
	/// <summary>
	/// No break
	/// </summary>
	ASPOSE_DLL_EXPORT bool isNoBreak() const;
	ASPOSE_DLL_EXPORT void setNoBreak(bool value);
	ASPOSE_DLL_EXPORT bool noBreakIsSet() const;
	ASPOSE_DLL_EXPORT void unsetNoBreak();
	/// <summary>
	/// Differential
	/// </summary>
	ASPOSE_DLL_EXPORT bool isDifferential() const;
	ASPOSE_DLL_EXPORT void setDifferential(bool value);
	ASPOSE_DLL_EXPORT bool differentialIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDifferential();
	/// <summary>
	/// Alignment point
	/// </summary>
	ASPOSE_DLL_EXPORT bool isAlignmentPoint() const;
	ASPOSE_DLL_EXPORT void setAlignmentPoint(bool value);
	ASPOSE_DLL_EXPORT bool alignmentPointIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAlignmentPoint();
	/// <summary>
	/// Explicit break
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getExplicitBreak() const;
	ASPOSE_DLL_EXPORT void setExplicitBreak(int32_t value);
	ASPOSE_DLL_EXPORT bool explicitBreakIsSet() const;
	ASPOSE_DLL_EXPORT void unsetExplicitBreak();

protected:
	std::shared_ptr<MathElement> m_Base;
	bool m_OperatorEmulator;
	bool m_OperatorEmulatorIsSet;
	bool m_NoBreak;
	bool m_NoBreakIsSet;
	bool m_Differential;
	bool m_DifferentialIsSet;
	bool m_AlignmentPoint;
	bool m_AlignmentPointIsSet;
	int32_t m_ExplicitBreak;
	bool m_ExplicitBreakIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_BoxElement_H_ */
