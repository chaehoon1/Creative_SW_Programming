#include <iostream>

int main(void) {
	int a = 10;
	int* pa = &a;
	int& ra= a;
	
	ra= a + 10;
	
	std::cout<< a << " @" << &a << std::endl;
	std::cout<< *pa << " @" << pa << std::endl;
	std::cout<< ra<< " @" << &ra<< std::endl;

	return 0;
}
