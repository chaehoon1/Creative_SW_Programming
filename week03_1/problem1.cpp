#include <iostream>

int main(void) {
	int budget = 300000;
	int expense;
	char answer;

	while(1) {
		std::cout << "Your Budget: " << budget <<std::endl;
		std::cout << "e: expense, q: quit >";
		std::cin >> answer;
		if(answer == 'e') {
			std::cout << "Expense: ";
			std::cin >> expense;
			std::cout << "Processing..." << std::endl;
			budget -= expense;
		}
		else if(answer == 'q') {
			break;
		}
	}	

	return 0;
}


