#ifndef __MY_CONTAINER_H__
#define __MY_CONTAINER_H__

#include <iostream>

using namespace std;

template<typename T>
class MyContainer {
	T* mem_;
	int size_;
	public:
		MyContainer(int size) : size_(size) {
			mem_ = new T[size];
		}
		~MyContainer() {
			delete[] mem_;
		}
		int size() {
			return size_;
		}
		T& operator[](int index) {
			if(index > size_ - 1) {
				cout << "out of range, returning last index" << endl;
				return *(mem_ + size_ - 1);
			}
			else {
				return *(mem_ + index);
			}
		}
};

#endif //__MY_CONTAINER_H__
