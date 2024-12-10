#ifndef __STUDENT_H__
#define __STUDENT_H__

class Student {
	long id_;
public:
	Student() : Student(0) {}
	Student(long id) : id_(id) {}
	long GetID() { return id_; }
};

#endif //__STUDENT_H__

