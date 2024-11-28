#include <iostream>

using namespace std;

int id = 0;

class Animal {
	const int id_;
	Animal* parent_;
	public:
		Animal() : id_(id++), parent_(NULL) {}
		Animal(const Animal& origin) : id_(id), parent_(origin.parent_) {}
		void setParent(Animal* animal) {
			parent_ = animal;
		}
		void print() {
			if(parent_) {
				cout << "id: " << id_ << ", born from id: " << parent_->id_ << endl;
			}
			else {
				cout << "id: " << id_ << endl;
			}
		}
};

int main(void) {
	Animal parent;
	Animal child0; 
	child0.setParent(&parent);
	Animal child1 = Animal(child0);

	parent.print();
	child0.print();
	child1.print();
	
	return 0;
}
