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
	virtual ~Animal() {}	
	float get_weight() {return weight_;}
	string get_color() {return color_;}
	int get_months() {return months_;}
	virtual void makeSound() {} 
	virtual void getStartled() {}
};

class CatFamily : public Animal {
	protected:
		bool hiddenClaws_;
	public:
		CatFamily(float weight) : Animal(weight), hiddenClaws_(false) {}
		virtual void toggleClaws() {
			hiddenClaws_ = !hiddenClaws_;
			cout << "CatFamily::toggleClaws()" << endl;
		}	
		void makeSound() {
			cout << "CatFamily::makeSound()" << endl;
		}


};

class Cat : public CatFamily {
	public:
		Cat() : CatFamily(2) {}
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
		void fly() {
			cout << "The duck flew away!!!" << endl;
		}
};

class Fish {
	float weight_;
	public:
		Fish(float weight) : weight_(weight) {}
		float get_weight() {return weight_;}
		void swim() {
			cout << "The fish swims in the water." << endl;
		}
};

class Lion : public CatFamily {
	public:
		Lion() : CatFamily(300) {}
		virtual void makeSound() {
			cout << "Roar!!" << endl;
		}
		virtual void toggleClaws() {
			cout << "Lion cannot hide their claws." << endl;
		}
};

class Liver {
	float weight_;
	public:
		Liver(float weight) : weight_(weight) {
			cout << "Liver for Aquaman!!" << endl;
		}
		virtual ~Liver() {
			cout << "Liver is gone..." << endl;
		}
};

class Hare : public Animal {
	Liver* liver_;
	public:
		Hare() : Animal(2) {
			cout << "Hare()" << endl;
			liver_ = new Liver(0.1);
		}
		virtual ~Hare() {
			cout << "~Hare()" << endl;
			delete liver_;
		}
		void hibernate() {
			cout << "The hare went into hibernation..." << endl;
		}
};

#endif //__ANIMAL_H__
