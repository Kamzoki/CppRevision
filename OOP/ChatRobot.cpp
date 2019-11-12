#include "ChatRobot.h"
#include <iostream>

ChatRobot::ChatRobot()
	: recievedMessage{""}, replyMessage{""}
{}

ChatRobot::ChatRobot(const std::string& WelcomeMsg) {
	if (WelcomeMsg != "")
	{
		std::cout << WelcomeMsg << std::endl;
	}
}

bool ChatRobot::SendMessage(const std::string& msg) {

	if (msg != "")
	{
		recievedMessage = msg;
		return true;
	}

	return false;
}

ChatRobot::ChatRobot(const ChatRobot& obj)
	:recievedMessage{obj.recievedMessage}, replyMessage{obj.replyMessage}{
	std::cout << "Yo nigga, I'm emrged new from ma other brotha ! dat's some cooool shit!" << std::endl;
}

std::string ChatRobot::Reply() const {

	if (recievedMessage == "Hello")
	{
		return "SWAAAAG MY NIGGA!";
	}

	else if (recievedMessage == "Excuse me?")
	{
		return "First time seein' a talking ape? racist bitch!";
	}

	else if (recievedMessage == "This program is trash, you black motherfucking nigger!")
	{
		return "Your white ass should have died in WW2, yo slow ass, walkin' no runnin', dirty shirt, racist toung, small dick, red vegiana, weak ass, flippin' like a baboon son of a bitch!";
	}
	else
	{
		return "Get yo shit together, bitch ass nigga!";
	}

}

ChatRobot::~ChatRobot() {
	std::cout << "You blew your loads on me?! Finished Oh you luv? well, I GOTTA SURPRISE FOR YO ASS NIGGA!"<<std::endl;
}