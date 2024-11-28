#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

using namespace std;

class Animal {
	const int id_;
	Animal* parent_;
	public:
		Animal(int id) : id_(id), parent_(NULL) {}
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

#endif //__ANIMAL_H__
