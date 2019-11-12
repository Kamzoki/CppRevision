#include <string>

#ifndef _CHATROBOT_H_
#define _CHATROBOT_H_
#pragma once

class ChatRobot
{
private:
	std::string recievedMessage;
	std::string replyMessage;

public:
	//Construtors
	ChatRobot();
	ChatRobot(const std::string& WelcomeMsg);
	//Copy constructor
	ChatRobot(const ChatRobot& obj);
	//Move constructor
	ChatRobot(ChatRobot&& obj);
	//Member methods
	bool SendMessage(const std::string& msg);
	std::string Reply() const;
	//Destructors
	~ChatRobot();
};

#endif // !_CHATROBOT_H_


