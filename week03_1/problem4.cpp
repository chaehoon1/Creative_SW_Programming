#include <iostream>
#include <string>
 
int main(void) {
	bool to_upper = false;
	bool state = true;
	std::string message;

	std::cout << "My Chatbot" << std::endl;
	std::cout << "To quit the messager, "
		"type \"bye\"!!" <<std::endl;
	while(state) {
		std::cout << "You> ";
		std::getline(std::cin, message);
		if(message == "bye") {state = false;}
		else if(message == "upper") {
			to_upper = true;
			std::cout << "You> ";
                	std::getline(std::cin, message);
		}
		if(to_upper) {
			int i;
			for(i = 0; i <message.length(); i++) {
				message[i] = toupper(message[i]);
			}
			to_upper = false;
		}
		std::cout << "Bot> " << message << std::endl;	
	}	
	return 0;
}
