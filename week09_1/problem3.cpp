#include <iostream>
#include "animal.h"

using namespace std;

void printWeight(Dog dog) {
	cout << "It weights " << dog.get_weight() << "kg." << endl;
}

void printWeight(Cat cat) {
	cout << "It weights " << cat.get_weight() << "kg." << endl;
}

void printWeight(Duck duck) {
	cout << "It weights " << duck.get_weight() << "kg." << endl;
}


void startleAnimal(Cat cat) {
	cat.makeSound();
	cat.getStartled();
}

void startleAnimal(Dog dog) {
	dog.makeSound();
	dog.getStartled();
}

void startleAnimal(Duck duck) {
	duck.makeSound();
	duck.getStartled();
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
