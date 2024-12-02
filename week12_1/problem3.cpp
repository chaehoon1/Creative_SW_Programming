#include <iostream>

using namespace std;

class Animal {
	protected:
		double weight_;
	public:
		Animal(double weight) : weight_(weight) {}
		double get_weight() {
			return weight_;
		}
};

class Cat : public Animal {
	public:
		Cat(double weight) : Animal(weight) {}
};

template<typename T>
double total_weight(T** arr, int len) {
	double sum = 0.0;
	for(int i = 0; i < len; i++) {
		sum += arr[i]->get_weight();
	}
	return sum;
}


int main(void) {
	Animal* animals[] = {new Animal(1), new Animal(2)};
	Cat* cats[] = {new Cat(3), new Cat(4)};
	//Animal* cats[] = {new Cat(3), new Cat(4)};
	cout<< total_weight(animals, 2) << endl;
	cout<< total_weight(cats, 2) << endl;
	
	return 0;
}

