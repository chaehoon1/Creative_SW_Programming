#include <iostream>
#include "animal.h"

using namespace std;

void hunt(Animal** animals, int len) {
	int i;
	for(i = 0; i < len; i++) {
		delete animals[i];
	}
}

int main(void) {
	Animal* animals[2] = {new Hare(), new Duck()};
	hunt(animals, 2);

	return 0;
}
