#include <iostream>
#include "my_string.h"

int main(void) {
	MyString s1 = "Hanyang";
	MyString s2 = s1;
	s1.Print();
	s2.Print();
	
	return 0;
}
