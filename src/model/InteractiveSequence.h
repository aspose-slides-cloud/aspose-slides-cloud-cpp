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
 * InteractiveSequence.h
 *
 * Represents comments collection of slide
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_InteractiveSequence_H_
#define ASPOSESLIDESCLOUD_MODEL_InteractiveSequence_H_

#include "../ModelBase.h"

#include <vector>
#include "../model/Effect.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents comments collection of slide
/// </summary>
class  InteractiveSequence : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT InteractiveSequence();
	ASPOSE_DLL_EXPORT virtual ~InteractiveSequence();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Effect list.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<Effect>> getEffects() const;
	ASPOSE_DLL_EXPORT void setEffects(std::vector<std::shared_ptr<Effect>> value);
	/// <summary>
	/// Index of the shape that triggers the sequence.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getTriggerShapeIndex() const;
	ASPOSE_DLL_EXPORT void setTriggerShapeIndex(int32_t value);

protected:
	std::vector<std::shared_ptr<Effect>> m_Effects;
	int32_t m_TriggerShapeIndex;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_InteractiveSequence_H_ */
