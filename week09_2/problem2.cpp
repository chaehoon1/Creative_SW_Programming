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
	void makeSound() {} 
	void getStartled() {}
};

class Cat : public Animal {
	public:
		Cat() : Animal(2) {}
		void makeSound() {
			cout << "Mew~" << endl;
		}
		void getStartled() {
			cout << "The cat jumped out" << endl;
		}
};

class Dog : public Animal {
	public:
		Dog() : Animal(4.5) {}
		void makeSound() {
			cout << "Yip!Yip!" << endl;
		}
		void getStartled() {
			cout << "The dog froze" << endl;
		}
};

class Duck : public Animal {
	public:
		Duck() : Animal(0.5) {}
		void makeSound() {
			cout << "Quack!!" << endl;
		}
		void getStartled() {
			cout << "The duck flew away" << endl;
		}

};



void printWeight(Animal& animal) {
	cout << "It weights " << animal.get_weight() << "kg." << endl;
}

void startleAnimal(Animal& animal) {
	animal.makeSound();
	animal.getStartled();
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
