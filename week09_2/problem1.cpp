#include <iostream>
#include "animal.h"

using namespace std;

void printWeight(Animal animal) {
	cout << "It weights " << animal.get_weight() << "kg." << endl;
}

void startleAnimal(Animal animal) {
	animal.makeSound();
	animal.getStartled();
}

int main(void) {
	Cat cat; 
	Dog dog; 
        Duck duck; 	
	
	printWeight(cat);
	printWeight(dog);
	printWeight(duck);
	startleAnimal(cat);
	startleAnimal(dog);
	startleAnimal(duck);

	return 0;
}
