#include <iostream>
#include "my_container.h"

using namespace std;

class Flyable {
	public:
		virtual void fly() = 0;
};

class Duck : public Flyable {
	public:
		void fly() {
			cout << "The duck flew away..." << endl;
		}
};

class Goose : public Flyable {
	public:
		void fly() {
			cout << "The goose flew away..." << endl;
		}
};

int main(void) {
	int i;
	MyContainer<Flyable*> birds(2);
	birds[0] = new Duck();
	birds[1] = new Goose();
	for (i= 0; i< birds.size(); i++) {
		birds[i]->fly();
	}
	
	return 0;
}

