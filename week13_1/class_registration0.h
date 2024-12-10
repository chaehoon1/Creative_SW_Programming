#ifndef __CLASS_REGISTRATION0_H__
#define __CLASS_REGISTRATION0_H__
#include <iostream>
#include "student0.h"

using namespace std;

class ClassRegistration {
	int idx_, size_;
	Student* students_;
public:
	ClassRegistration(int size) : idx_(0), size_(size) {
		students_ = new Student[size_];
	}
	~ClassRegistration() {
		delete[] students_;
	}
	void Register(Student s) {
		if (idx_ < size_) {
			students_[idx_] = s;
			idx_++;
		} else {
			throw "The total number of registration cannot exceed 10";
		}
	}
	void Print() { 
		int i = 0;
		for (i = 0; i < idx_; i++) {
			cout << students_[i].GetID() << endl;
		}
	}
};

#endif //__CLASS_REGISTRATION0_H__


