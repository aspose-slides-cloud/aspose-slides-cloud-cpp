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
 * Connector.h
 *
 * Represents Connector resource.
 */

#ifndef _Connector_H_
#define _Connector_H_

#include "GeometryShape.h"

#include "../model/GeometryShape.h"
#include "../model/Hyperlink.h"
#include "../model/EffectFormat.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ResourceUri.h"
#include "../model/ThreeDFormat.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents Connector resource.
/// </summary>
class  Connector : public GeometryShape
{
public:
	ASPOSE_DLL_EXPORT Connector();
	ASPOSE_DLL_EXPORT virtual ~Connector();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Start shape link.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getStartShapeConnectedTo() const;
	ASPOSE_DLL_EXPORT void setStartShapeConnectedTo(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// Start shape index.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getStartShapeConnectedToIndex() const;
	ASPOSE_DLL_EXPORT void setStartShapeConnectedToIndex(int32_t value);
	ASPOSE_DLL_EXPORT bool startShapeConnectedToIndexIsSet() const;
	ASPOSE_DLL_EXPORT void unsetStartShapeConnectedToIndex();
	/// <summary>
	/// End shape link.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getEndShapeConnectedTo() const;
	ASPOSE_DLL_EXPORT void setEndShapeConnectedTo(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// End shape index.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getEndShapeConnectedToIndex() const;
	ASPOSE_DLL_EXPORT void setEndShapeConnectedToIndex(int32_t value);
	ASPOSE_DLL_EXPORT bool endShapeConnectedToIndexIsSet() const;
	ASPOSE_DLL_EXPORT void unsetEndShapeConnectedToIndex();

protected:
	std::shared_ptr<ResourceUri> m_StartShapeConnectedTo;
	int32_t m_StartShapeConnectedToIndex;
	bool m_StartShapeConnectedToIndexIsSet;
	std::shared_ptr<ResourceUri> m_EndShapeConnectedTo;
	int32_t m_EndShapeConnectedToIndex;
	bool m_EndShapeConnectedToIndexIsSet;
};

}
}

#endif /* _Connector_H_ */
