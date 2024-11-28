#include <iostream>

using namespace std;

int id = 0;

class Animal {
	int id_;
	public:
		Animal() : id_(id++) {}
		Animal(const Animal& ref) : Animal() {
			cout << "Calling copy constructor" << endl;
		}
		Animal& operator=(const Animal& ref) {
			cout << "Calling operator=(Animal&)" << endl;
			this->id_ = ref.id_;
			return *this;
		}
		void print() {
			cout << "id: " << id_ << endl;
		}
};

int main(void) {
	Animal parent;
	Animal child0(parent);
	Animal child1 = Animal(parent);
	Animal child2 = parent;
	child1 = parent;
	child2 = Animal(child1);

	parent.print();
	child0.print();
	child1.print();
	child2.print();

	return 0;
}
