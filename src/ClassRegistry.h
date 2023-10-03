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


#ifndef _ClassRegistry_H_
#define _ClassRegistry_H_

#include <cpprest/details/basic_types.h>
#include <cpprest/json.h>
#include <map>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/replace.hpp>

#include "defines.h"

namespace asposeslidescloud {
namespace api {

class ClassRegistry
{
public:
	ASPOSE_DLL_EXPORT static std::shared_ptr<void> deserialize(utility::string_t className, web::json::value json);
	ASPOSE_DLL_EXPORT static bool isClass(utility::string_t className);
	ASPOSE_DLL_EXPORT static bool isSubclass(utility::string_t subclassName, utility::string_t className);
private:
	static utility::string_t getSubclass(utility::string_t className, web::json::value json);
	static std::shared_ptr<void> deserializeSubclass(utility::string_t className, web::json::value json);

	static std::map<utility::string_t, utility::string_t> s_hierarchy;
	static std::map<utility::string_t, std::map<utility::string_t, utility::string_t>> s_determiners;
};
}
}

#endif /* _ApiClient_H_ */
