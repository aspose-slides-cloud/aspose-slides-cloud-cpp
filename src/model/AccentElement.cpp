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
#include "AccentElement.h"

namespace asposeslidescloud {
namespace model {

AccentElement::AccentElement()
{
	setType(L"Accent");
}

AccentElement::~AccentElement()
{
}

std::shared_ptr<MathElement> AccentElement::getBase() const
{
	return m_Base;
}

void AccentElement::setBase(std::shared_ptr<MathElement> value)
{
	m_Base = value;
	
}

utility::string_t AccentElement::getCharacter() const
{
	return m_Character;
}

void AccentElement::setCharacter(utility::string_t value)
{
	m_Character = value;
	
}

web::json::value AccentElement::toJson() const
{
	web::json::value val = this->MathElement::toJson();
	if (m_Base != nullptr)
	{
		val[utility::conversions::to_string_t("Base")] = ModelBase::toJson(m_Base);
	}
	if (!m_Character.empty())
	{
		val[utility::conversions::to_string_t("Character")] = ModelBase::toJson(m_Character);
	}
	return val;
}

void AccentElement::fromJson(web::json::value& val)
{
	this->MathElement::fromJson(val);
	web::json::value* jsonForBase = ModelBase::getField(val, "Base");
	if(jsonForBase != nullptr && !jsonForBase->is_null())
	{
		std::shared_ptr<void> instanceForBase = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForBase);
		setBase(std::static_pointer_cast<MathElement>(instanceForBase));
	}
	web::json::value* jsonForCharacter = ModelBase::getField(val, "Character");
	if(jsonForCharacter != nullptr && !jsonForCharacter->is_null())
	{
		setCharacter(ModelBase::stringFromJson(*jsonForCharacter));
	}
}

}
}

