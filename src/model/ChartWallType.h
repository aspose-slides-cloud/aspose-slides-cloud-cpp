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
 * ChartWallType.h
 *
 * 3D chart wall type
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_ChartWallType_H_
#define ASPOSESLIDESCLOUD_MODEL_ChartWallType_H_

#include "../ModelBase.h"


#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// 3D chart wall type
/// </summary>
class  ChartWallType : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ChartWallType();
	ASPOSE_DLL_EXPORT virtual ~ChartWallType();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;


protected:
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_ChartWallType_H_ */
