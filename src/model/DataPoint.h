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
 * DataPoint.h
 *
 * Data point.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_DataPoint_H_
#define ASPOSESLIDESCLOUD_MODEL_DataPoint_H_

#include "../ModelBase.h"

#include "../model/EffectFormat.h"
#include "../model/SeriesMarker.h"
#include <cpprest/details/basic_types.h>
#include "../model/FillFormat.h"
#include "../model/LineFormat.h"
#include "../model/ThreeDFormat.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Data point.
/// </summary>
class  DataPoint : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT DataPoint();
	ASPOSE_DLL_EXPORT virtual ~DataPoint();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets the fill format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<FillFormat> getFillFormat() const;
	ASPOSE_DLL_EXPORT void setFillFormat(std::shared_ptr<FillFormat> value);
	/// <summary>
	/// Gets or sets the effect format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<EffectFormat> getEffectFormat() const;
	ASPOSE_DLL_EXPORT void setEffectFormat(std::shared_ptr<EffectFormat> value);
	/// <summary>
	/// Gets or sets the 3D format
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ThreeDFormat> getThreeDFormat() const;
	ASPOSE_DLL_EXPORT void setThreeDFormat(std::shared_ptr<ThreeDFormat> value);
	/// <summary>
	/// Gets or sets the line format.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<LineFormat> getLineFormat() const;
	ASPOSE_DLL_EXPORT void setLineFormat(std::shared_ptr<LineFormat> value);
	/// <summary>
	/// Gets or sets the marker.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<SeriesMarker> getMarker() const;
	ASPOSE_DLL_EXPORT void setMarker(std::shared_ptr<SeriesMarker> value);
	/// <summary>
	/// 
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getType() const;
	ASPOSE_DLL_EXPORT void setType(utility::string_t value);

protected:
	std::shared_ptr<FillFormat> m_FillFormat;
	std::shared_ptr<EffectFormat> m_EffectFormat;
	std::shared_ptr<ThreeDFormat> m_ThreeDFormat;
	std::shared_ptr<LineFormat> m_LineFormat;
	std::shared_ptr<SeriesMarker> m_Marker;
	utility::string_t m_Type;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_DataPoint_H_ */
