#include <iostream>
#include "animal.h"

void printAnimalSound(Animal& animal) {
	animal.makeSound();
}

void printCatFamilySound(CatFamily& cf) {
	cf.makeSound();
}

int main(void) {
	Cat cat;
	Lion lion;

	cat.makeSound();
	printAnimalSound(cat);
	printCatFamilySound(cat);
	cat.toggleClaws();

	lion.makeSound();
	printAnimalSound(lion);
	printCatFamilySound(lion);
	lion.toggleClaws();

	return 0;
}
