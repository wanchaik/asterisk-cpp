/*
 * SkypeChatMessageEvent.cpp
 *
 *  Created on: May 3, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/utils/Base64.h"
#include "asteriskcpp/manager/events/SkypeChatMessageEvent.h"

namespace asteriskcpp {

	SkypeChatMessageEvent::SkypeChatMessageEvent(const std::string & values) :
			ManagerEvent(values) {

	}

	SkypeChatMessageEvent::~SkypeChatMessageEvent()
	{
	}

	const std::string& SkypeChatMessageEvent::getTo() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& SkypeChatMessageEvent::getFrom() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	const std::string& SkypeChatMessageEvent::getMessage() const
	{
		return (getGetterValue(__FUNCTION__));
	}

	std::string SkypeChatMessageEvent::getDecodedMessage()
	{
		return (Base64::decode(getMessage()));
	}
} /* namespace asteriskcpp */
