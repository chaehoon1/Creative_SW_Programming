#include <iostream>

using namespace std;

/*int id = 0;

int GenerateID() { return id++;}*/

class AnimalSequencer {
	static int id_;
	public:
		static int GenerateID() {return id_++;}
};

int AnimalSequencer::id_ = 0;

class Animal {
	int id_;
	Animal* parent_;
	public:
		Animal() : id_(AnimalSequencer::GenerateID()), parent_(NULL) {}
		Animal(const Animal& ref) : id_(AnimalSequencer::GenerateID()),  parent_(ref.parent_) {}
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
	Animal child1 = Animal(parent);
	
	parent.print();
	child0.print();
	child1.print();
	
	return 0;
}
