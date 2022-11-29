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



#include "../ClassRegistry.h"
#include "Html5ExportOptions.h"

namespace asposeslidescloud {
namespace model {

Html5ExportOptions::Html5ExportOptions()
{
	m_AnimateTransitionsIsSet = false;
	m_AnimateShapesIsSet = false;
	setFormat(L"html5");
}

Html5ExportOptions::~Html5ExportOptions()
{
}

bool Html5ExportOptions::isAnimateTransitions() const
{
	return m_AnimateTransitions;
}

void Html5ExportOptions::setAnimateTransitions(bool value)
{
	m_AnimateTransitions = value;
	m_AnimateTransitionsIsSet = true;
}

bool Html5ExportOptions::animateTransitionsIsSet() const
{
	return m_AnimateTransitionsIsSet;
}

void Html5ExportOptions::unsetAnimateTransitions()
{
	m_AnimateTransitionsIsSet = false;
}

bool Html5ExportOptions::isAnimateShapes() const
{
	return m_AnimateShapes;
}

void Html5ExportOptions::setAnimateShapes(bool value)
{
	m_AnimateShapes = value;
	m_AnimateShapesIsSet = true;
}

bool Html5ExportOptions::animateShapesIsSet() const
{
	return m_AnimateShapesIsSet;
}

void Html5ExportOptions::unsetAnimateShapes()
{
	m_AnimateShapesIsSet = false;
}

web::json::value Html5ExportOptions::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	if(m_AnimateTransitionsIsSet)
	{
		val[utility::conversions::to_string_t("AnimateTransitions")] = ModelBase::toJson(m_AnimateTransitions);
	}
	if(m_AnimateShapesIsSet)
	{
		val[utility::conversions::to_string_t("AnimateShapes")] = ModelBase::toJson(m_AnimateShapes);
	}
	return val;
}

void Html5ExportOptions::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
	web::json::value* jsonForAnimateTransitions = ModelBase::getField(val, "AnimateTransitions");
	if(jsonForAnimateTransitions != nullptr && !jsonForAnimateTransitions->is_null())
	{
		setAnimateTransitions(ModelBase::boolFromJson(*jsonForAnimateTransitions));
	}
	web::json::value* jsonForAnimateShapes = ModelBase::getField(val, "AnimateShapes");
	if(jsonForAnimateShapes != nullptr && !jsonForAnimateShapes->is_null())
	{
		setAnimateShapes(ModelBase::boolFromJson(*jsonForAnimateShapes));
	}
}

}
}

