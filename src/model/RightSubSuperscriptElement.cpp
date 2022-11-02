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
#include "RightSubSuperscriptElement.h"

namespace asposeslidescloud {
namespace model {

RightSubSuperscriptElement::RightSubSuperscriptElement()
{
	m_AlignScriptsIsSet = false;
	setType(L"RightSubSuperscriptElement");
}

RightSubSuperscriptElement::~RightSubSuperscriptElement()
{
}

std::shared_ptr<MathElement> RightSubSuperscriptElement::getBase() const
{
	return m_Base;
}

void RightSubSuperscriptElement::setBase(std::shared_ptr<MathElement> value)
{
	m_Base = value;
	
}

std::shared_ptr<MathElement> RightSubSuperscriptElement::getSubscript() const
{
	return m_Subscript;
}

void RightSubSuperscriptElement::setSubscript(std::shared_ptr<MathElement> value)
{
	m_Subscript = value;
	
}

std::shared_ptr<MathElement> RightSubSuperscriptElement::getSuperscript() const
{
	return m_Superscript;
}

void RightSubSuperscriptElement::setSuperscript(std::shared_ptr<MathElement> value)
{
	m_Superscript = value;
	
}

bool RightSubSuperscriptElement::getAlignScripts() const
{
	return m_AlignScripts;
}

void RightSubSuperscriptElement::setAlignScripts(bool value)
{
	m_AlignScripts = value;
	m_AlignScriptsIsSet = true;
}

bool RightSubSuperscriptElement::alignScriptsIsSet() const
{
	return m_AlignScriptsIsSet;
}

void RightSubSuperscriptElement::unsetAlignScripts()
{
	m_AlignScriptsIsSet = false;
}

web::json::value RightSubSuperscriptElement::toJson() const
{
	web::json::value val = this->MathElement::toJson();
	if (m_Base != nullptr)
	{
		val[utility::conversions::to_string_t("Base")] = ModelBase::toJson(m_Base);
	}
	if (m_Subscript != nullptr)
	{
		val[utility::conversions::to_string_t("Subscript")] = ModelBase::toJson(m_Subscript);
	}
	if (m_Superscript != nullptr)
	{
		val[utility::conversions::to_string_t("Superscript")] = ModelBase::toJson(m_Superscript);
	}
	if(m_AlignScriptsIsSet)
	{
		val[utility::conversions::to_string_t("AlignScripts")] = ModelBase::toJson(m_AlignScripts);
	}
	return val;
}

void RightSubSuperscriptElement::fromJson(web::json::value& val)
{
	this->MathElement::fromJson(val);
	web::json::value* jsonForBase = ModelBase::getField(val, "Base");
	if(jsonForBase != nullptr && !jsonForBase->is_null())
	{
		std::shared_ptr<void> instanceForBase = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForBase);
		setBase(std::static_pointer_cast<MathElement>(instanceForBase));
	}
	web::json::value* jsonForSubscript = ModelBase::getField(val, "Subscript");
	if(jsonForSubscript != nullptr && !jsonForSubscript->is_null())
	{
		std::shared_ptr<void> instanceForSubscript = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForSubscript);
		setSubscript(std::static_pointer_cast<MathElement>(instanceForSubscript));
	}
	web::json::value* jsonForSuperscript = ModelBase::getField(val, "Superscript");
	if(jsonForSuperscript != nullptr && !jsonForSuperscript->is_null())
	{
		std::shared_ptr<void> instanceForSuperscript = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForSuperscript);
		setSuperscript(std::static_pointer_cast<MathElement>(instanceForSuperscript));
	}
	web::json::value* jsonForAlignScripts = ModelBase::getField(val, "AlignScripts");
	if(jsonForAlignScripts != nullptr && !jsonForAlignScripts->is_null())
	{
		setAlignScripts(ModelBase::boolFromJson(*jsonForAlignScripts));
	}
}

}
}

