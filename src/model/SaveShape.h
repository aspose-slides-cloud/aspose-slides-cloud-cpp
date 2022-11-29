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
 * SaveShape.h
 *
 * Save shape task.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_SaveShape_H_
#define ASPOSESLIDESCLOUD_MODEL_SaveShape_H_

#include "Task.h"

#include "../model/Task.h"
#include "../model/OutputFile.h"
#include <cpprest/details/basic_types.h>
#include "../model/IShapeExportOptions.h"

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Save shape task.
/// </summary>
class  SaveShape : public Task
{
public:
	ASPOSE_DLL_EXPORT SaveShape();
	ASPOSE_DLL_EXPORT virtual ~SaveShape();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Format.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getFormat() const;
	ASPOSE_DLL_EXPORT void setFormat(utility::string_t value);
	/// <summary>
	/// Shape path.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getShapePath() const;
	ASPOSE_DLL_EXPORT void setShapePath(utility::string_t value);
	/// <summary>
	/// Output file.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<OutputFile> getOutput() const;
	ASPOSE_DLL_EXPORT void setOutput(std::shared_ptr<OutputFile> value);
	/// <summary>
	/// Save options.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<IShapeExportOptions> getOptions() const;
	ASPOSE_DLL_EXPORT void setOptions(std::shared_ptr<IShapeExportOptions> value);

protected:
	utility::string_t m_Format;
	utility::string_t m_ShapePath;
	std::shared_ptr<OutputFile> m_Output;
	std::shared_ptr<IShapeExportOptions> m_Options;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_SaveShape_H_ */
