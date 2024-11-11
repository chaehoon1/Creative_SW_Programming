#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

using namespace std;

class Animal {
	protected:
	float weight_;
	string color_;
	int months_;

	public:
	Animal(float weight): weight_(weight) {}	
	float get_weight() {return weight_;}
	string get_color() {return color_;}
	int get_months() {return months_;}
	virtual void makeSound() {} 
	virtual void getStartled() {}
};

class Cat : public Animal {
	public:
		Cat() : Animal(2) {}
		virtual void makeSound() {
			cout << "Mew~" << endl;
		}
		virtual void getStartled() {
			cout << "The cat jumped out" << endl;
		}
};

class Dog : public Animal {
	public:
		Dog() : Animal(4.5) {}
		virtual void makeSound() {
			cout << "Yip!Yip!" << endl;
		}
		virtual void getStartled() {
			cout << "The dog froze" << endl;
		}
};

class Duck : public Animal {
	public:
		Duck() : Animal(0.5) {}
		virtual void makeSound() {
			cout << "Quack!!" << endl;
		}
		virtual void getStartled() {
			cout << "The duck flew away" << endl;
		}

};

#endif //__ANIMAL_H__
