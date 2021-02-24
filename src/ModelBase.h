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

#ifndef _ModelBase_H_
#define _ModelBase_H_


#include "HttpContent.h"
#include "MultipartFormData.h"
#include <cpprest/json.h>

namespace asposeslidescloud {
namespace model {

class  ModelBase
{
public:
    ModelBase();
    virtual ~ModelBase();

	virtual web::json::value toJson() const = 0;
	virtual void fromJson(web::json::value& json) = 0;

	static web::json::value toJson(const utility::string_t& value);
	static web::json::value toJson(const utility::datetime& value);
	static web::json::value toJson(int32_t value);
	static web::json::value toJson(int64_t value);
	static web::json::value toJson(double value);
	static web::json::value toJson(bool value);

	template<class T>
	static web::json::value toJson(const std::shared_ptr<T>& value)
	{
		return value->toJson();
	}

    static bool boolFromJson(web::json::value& val);
    static int32_t int32_tFromJson(web::json::value& val);
    static int64_t int64_tFromJson(web::json::value& val);
    static double doubleFromJson(web::json::value& val);
    static utility::string_t stringFromJson(web::json::value& val);
    static utility::datetime dateFromJson(web::json::value& val);
    static web::json::value* getField(web::json::value& val, std::string name);
};

}
}

#endif /* _ModelBase_H_ */
