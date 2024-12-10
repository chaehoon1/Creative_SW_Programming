#ifndef __STUDENT0_H__
#define __STUDENT0_H__

class Student {
	long id_;
public:
	Student() {}
	Student(long id) : id_(id) {
		if (id < 1000000000 || id > 9999999999) {
			throw "Invalid ID for Student";
		}
	}
	long GetID() { return id_; }
};

#endif //__STUDENT0_H__

