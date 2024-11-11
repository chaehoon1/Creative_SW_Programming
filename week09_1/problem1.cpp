#include <iostream>

using namespace std;

class Animal {
	string type_;
	float weight_;
	string color_;
	int months_;

	public :
	Animal(string type) : type_(type) {
		if(type_ == "Cat") {
			weight_ = 2;
		}
		else if(type_ == "Dog") {
			weight_ = 4.5;
		}
		else if(type_ == "Duck") {
			weight_ = 0.5;
		}
	}
	float get_weight() {return weight_;}
	string get_color() {return color_;}
	int get_months() {return months_;}
	void makeSound() {
		if(type_ == "Cat") {
			cout << "Mew~" << endl;
		}
		else if(type_ == "Dog") {
			cout << "Yip!Yip!" << endl;
		}
		else if(type_ == "Duck") {
			cout << "Quack" << endl;
		}
	}
	void getStartled();
};

int main(void) {
	Animal cat("Cat"), dog("Dog"), duck("Duck");
        cout << cat.get_weight() << endl;
	cat.makeSound();
 	cout << dog.get_weight() << endl;
	dog.makeSound();
	cout << duck.get_weight() << endl;
	duck.makeSound();	

	return 0;
}
