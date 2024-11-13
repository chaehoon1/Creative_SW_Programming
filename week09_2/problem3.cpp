#include <iostream>
#include "animal.h"

using namespace std;

void printWeight(Animal& animal) {
	cout << "It weights " << animal.get_weight() << "kg." << endl;
}

void startleAnimal(Animal& animal) {
	animal.makeSound();
	animal.getStartled();
}

int main(void) {
	Cat cat; 
	Dog dog; 
        Duck duck; 	
	Fish tuna(0.1);

	printWeight(cat);
	printWeight(dog);
	printWeight(duck);
	cout << tuna.get_weight() << endl;
	startleAnimal(cat);
	startleAnimal(dog);
	startleAnimal(duck);
	tuna.swim();

	return 0;
}
