#include <iostream>
#include <string>
 
int main(void) {
	bool state = true;
	std::string message;

	std::cout << "My Chatbot" << std::endl;
	std::cout << "To quit the messager, " "type \"bye\"!!" <<std::endl;
	while(state) {
		std::cout << "You> ";
		std::getline(std::cin, message);
		if(message == "bye") {state = false;}
		else {
			std::cout << "Bot> " << message << std::endl;
		}
	}	
	return 0;
}