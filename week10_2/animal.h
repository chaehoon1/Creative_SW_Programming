#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

using namespace std;

class Animal {
	protected:
		float weight_;
	public:
		Animal(float weight) : weight_(weight) {}
		virtual void fly() {}
		virtual void makeSound() = 0;
		virtual void hibernate() {}
};

class Cat : public Animal {
	public:
		Cat() : Animal(2) {}
		void makeSound() {
			cout << "Meow~" << endl;
		}
};

class Dog : public Animal {
	public:
		Dog() : Animal(2.5) {}
		void makeSound() {
			cout << "Yip!Yip!" << endl;
		}
};

class Duck : public Animal {
	public:
		Duck() : Animal(0.5) {}
		void fly() {
			cout << "The duck files." << endl;
		}
		void makeSound() {
			cout << "Quack!" << endl;
		}
		void hibernate() {
			cout << "The duck hibernates during winter.." << endl;
		}
};


class Dove : public Animal {
	public:
		Dove() : Animal(0.5) {}
		void fly() {
			cout << "The dove files." << endl;
		}
		void makeSound() {
			cout << "Goo!Goo!" << endl;
		}
};


class Bear : public Animal {
	public:
		Bear() : Animal(600) {}	
		void makeSound() {
			cout << "Roar!" << endl;
		}
		void hibernate() {
			cout << "The bear hibernates during winter.." << endl;
		}
};

class Bedbug : public Animal {
	public:
		Bedbug() : Animal(0.001) {}	
		void makeSound() {
			cout << "Clicking..." << endl;
		}	
};

#endif //__ANIMAL_H__
