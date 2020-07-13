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



#include "Connector.h"

namespace asposeslidescloud {
namespace model {

Connector::Connector()
{
	m_StartShapeConnectedToIndexIsSet = false;
	m_EndShapeConnectedToIndexIsSet = false;
}

Connector::~Connector()
{
}

std::shared_ptr<ResourceUri> Connector::getStartShapeConnectedTo() const
{
	return m_StartShapeConnectedTo;
}

void Connector::setStartShapeConnectedTo(std::shared_ptr<ResourceUri> value)
{
	m_StartShapeConnectedTo = value;
	
}

int32_t Connector::getStartShapeConnectedToIndex() const
{
	return m_StartShapeConnectedToIndex;
}

void Connector::setStartShapeConnectedToIndex(int32_t value)
{
	m_StartShapeConnectedToIndex = value;
	m_StartShapeConnectedToIndexIsSet = true;
}

bool Connector::startShapeConnectedToIndexIsSet() const
{
	return m_StartShapeConnectedToIndexIsSet;
}

void Connector::unsetStartShapeConnectedToIndex()
{
	m_StartShapeConnectedToIndexIsSet = false;
}

std::shared_ptr<ResourceUri> Connector::getEndShapeConnectedTo() const
{
	return m_EndShapeConnectedTo;
}

void Connector::setEndShapeConnectedTo(std::shared_ptr<ResourceUri> value)
{
	m_EndShapeConnectedTo = value;
	
}

int32_t Connector::getEndShapeConnectedToIndex() const
{
	return m_EndShapeConnectedToIndex;
}

void Connector::setEndShapeConnectedToIndex(int32_t value)
{
	m_EndShapeConnectedToIndex = value;
	m_EndShapeConnectedToIndexIsSet = true;
}

bool Connector::endShapeConnectedToIndexIsSet() const
{
	return m_EndShapeConnectedToIndexIsSet;
}

void Connector::unsetEndShapeConnectedToIndex()
{
	m_EndShapeConnectedToIndexIsSet = false;
}

web::json::value Connector::toJson() const
{
	web::json::value val = this->GeometryShape::toJson();
	if (m_StartShapeConnectedTo != nullptr)
	{
		val[utility::conversions::to_string_t("StartShapeConnectedTo")] = ModelBase::toJson(m_StartShapeConnectedTo);
	}
	if(m_StartShapeConnectedToIndexIsSet)
	{
		val[utility::conversions::to_string_t("StartShapeConnectedToIndex")] = ModelBase::toJson(m_StartShapeConnectedToIndex);
	}
	if (m_EndShapeConnectedTo != nullptr)
	{
		val[utility::conversions::to_string_t("EndShapeConnectedTo")] = ModelBase::toJson(m_EndShapeConnectedTo);
	}
	if(m_EndShapeConnectedToIndexIsSet)
	{
		val[utility::conversions::to_string_t("EndShapeConnectedToIndex")] = ModelBase::toJson(m_EndShapeConnectedToIndex);
	}
	return val;
}

void Connector::fromJson(web::json::value& val)
{
	this->GeometryShape::fromJson(val);
	web::json::value* jsonForStartShapeConnectedTo = ModelBase::getField(val, "StartShapeConnectedTo");
	if(jsonForStartShapeConnectedTo != nullptr && !jsonForStartShapeConnectedTo->is_null())
	{
		std::shared_ptr<ResourceUri> newItem(new ResourceUri());
		newItem->fromJson(*jsonForStartShapeConnectedTo);
		setStartShapeConnectedTo(newItem);
	}
	web::json::value* jsonForStartShapeConnectedToIndex = ModelBase::getField(val, "StartShapeConnectedToIndex");
	if(jsonForStartShapeConnectedToIndex != nullptr && !jsonForStartShapeConnectedToIndex->is_null())
	{
		setStartShapeConnectedToIndex(ModelBase::int32_tFromJson(*jsonForStartShapeConnectedToIndex));
	}
	web::json::value* jsonForEndShapeConnectedTo = ModelBase::getField(val, "EndShapeConnectedTo");
	if(jsonForEndShapeConnectedTo != nullptr && !jsonForEndShapeConnectedTo->is_null())
	{
		std::shared_ptr<ResourceUri> newItem(new ResourceUri());
		newItem->fromJson(*jsonForEndShapeConnectedTo);
		setEndShapeConnectedTo(newItem);
	}
	web::json::value* jsonForEndShapeConnectedToIndex = ModelBase::getField(val, "EndShapeConnectedToIndex");
	if(jsonForEndShapeConnectedToIndex != nullptr && !jsonForEndShapeConnectedToIndex->is_null())
	{
		setEndShapeConnectedToIndex(ModelBase::int32_tFromJson(*jsonForEndShapeConnectedToIndex));
	}
}

}
}

