#ifndef __STUDENT1_H__
#define __STUDENT1_H__

#include "invalid_student_id_exception.h"

class Student {
	long id_;
public:
	Student() {}
	Student(long id) : id_(id) {
		if (id < 1000000000 || id > 9999999999)
			throw new InvalidStudentIDException();
	}
	long GetID() { return id_; }
};

#endif //__STUDENT1_H__

