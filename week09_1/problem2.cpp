#include <iostream>
#include "animal.h"

using namespace std;

int main(void) {
	Cat cat; 
	Dog dog; 
	Duck duck;
        cout << cat.get_weight() << endl;
	cat.makeSound();
 	cout << dog.get_weight() << endl;
	dog.makeSound();
	cout << duck.get_weight() << endl;
	duck.makeSound();	

	return 0;
}
