#include <iostream>
#include "animal.h"

using namespace std;

int main(void) {
	Cat cat;
	Dog dog;
	Duck duck;
	Dove dove;
	Bear bear;
	Bedbug bedbug;

	cat.makeSound();
	dog.makeSound();
	duck.fly();
	duck.makeSound();
	duck.hibernate();
	dove.fly();
	dove.makeSound();
	bear.makeSound();
	bear.hibernate();
	bedbug.makeSound();

	return 0;
}

