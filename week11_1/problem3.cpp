#include <iostream>

using namespace std;

class Animal {
	const int id_;
	Animal* parent_;
	public:
		Animal(int id) : id_(id++), parent_(NULL) {}
		//Animal(const Animal& origin) : id_(id), parent_(origin.parent_) {}
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

class SequencedAnimal : public Animal {
	static int seq_;
	public:
		SequencedAnimal() : Animal(seq_++) {}
		SequencedAnimal(SequencedAnimal* parent) : Animal(seq_++) {
			Animal::setParent(parent);
		}
		static int getSeq() {
			return seq_;
		}
};

int SequencedAnimal::seq_ = 0;

int main(void) {
	SequencedAnimal *parent, *child0, *child1;
	parent = new SequencedAnimal;
	child0 = new SequencedAnimal(parent);
	child1 = new SequencedAnimal(parent);
	
	parent->print();
	child0->print();
	child1->print();

	return 0;
}
