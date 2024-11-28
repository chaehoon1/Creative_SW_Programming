#include <iostream>
#include <algorithm>

using namespace std;

class Animal {
	protected:
		int speed_;

	public:
		Animal(int speed) : speed_(speed) {}
		virtual ~Animal() {}
		virtual void makeSound() = 0;
		int getRunningSpeed() {return speed_;}
};

class Bear : public Animal {
	public:
		Bear() : Animal(45) {}
		virtual ~Bear() {}
		virtual void makeSound() {
			cout << "Roar!!" << endl;
		}	
};

class Cheetah : public Animal {
	public:
		Cheetah() : Animal(100) {}
		virtual ~Cheetah() {}
		virtual void makeSound() {
			cout << "Bleat!!" << endl;
		}
};

class Dove : public Animal {
	public:
		Dove() : Animal(120) {}
		virtual ~Dove() {}
		virtual void makeSound() {
			cout << "Goo!!" << endl;
		}
};

class Gorani : public Animal {
	public:
		Gorani() : Animal(60) {}
		virtual ~Gorani() {}
		virtual void makeSound() {
			cout << "Buck!!" << endl;
		}
};

bool comp(Animal* a, Animal* b) {
	return a->getRunningSpeed() > b->getRunningSpeed();
}

int main(void) {
	Animal* animals[] = {new Bear, new Cheetah, new Dove, new Gorani};

	sort(animals, animals + 4, comp);

	for(int i = 0; i < 4; i++) {
		animals[i]->makeSound();
	}

	return 0;
}
