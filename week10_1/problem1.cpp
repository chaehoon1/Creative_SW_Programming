#include <iostream>
#include "animal.h"

using namespace std;

int main(void) {
	int i, len;
	Animal* animals[] = {new Hare(), new Cat(),new Dog(), new Duck()};
	len = sizeof(animals) / sizeof(animals[0]);
	
	for (i= 0; i< len; i++){
		animals[i]->makeSound();
	}
	
	for (i= 0; i< len; i++) {
		Duck* duck = dynamic_cast<Duck*>(animals[i]);
		if(duck) {
			cout << "Found duck instance at " << i << endl;
		        duck->fly();
		}
		Hare* hare = dynamic_cast<Hare*>(animals[i]);
		if(hare) {
			cout << "Found hare instance at " << i << endl;
		        hare->hibernate();
		}
	}
	
	for (i= 0; i< len; i++) {
		delete animals[i];
	}

	return 0;
}


