#include <iostream>

using namespace std;

class Animal {
	protected:
		double weight_;
		void* func_[2];
	public:
		Animal() : Animal(0.0) {}
		Animal(double weight) : weight_(weight) {
			func_[0] = (void*) &Animal::makeSound;
			func_[1] = (void*) &Animal::getStartled;
		}
		~Animal() {}
		void makeSound() {
			cout<< "Unidentified" << endl;
		}
		void getStartled() {
			cout<< "Unidentified" << endl;
		}
		void callFunc(int index) {
			((void (*)(void)) func_[index])();
		}
};

class Cat: public Animal {
	public:
		Cat() : Animal(1.5) {
			func_[0] = (void*) &Cat::makeSound;
			func_[1] = (void*) &Cat::getStartled;
		}
		~Cat() {}
		void makeSound() {
			cout<< "Meow~" << endl;
		}
		void getStartled() {
			cout<< "The cat jumped out!" << endl;
		}
};

int main(void) {
	Animal* animals[2] = {new Animal, new Cat};

	for(int i = 0; i < 2; i++) {
		cout << "animals[" << i << "]->makeSound()" << endl;
		animals[i]->makeSound();
	}

	for(int i = 0; i < 2; i++) {
		cout << "animals[" << i << "]->callFunc(0)" << endl;
		animals[i]->callFunc(0);
	}
	
	for(int i = 0; i < 2; i++) {
		delete animals[i];
	}

	return 0;
}
