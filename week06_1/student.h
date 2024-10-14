#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <iostream>

using namespace std;

class Student {
	public :
		long ID;
		string name;
		float GPA;
	
		Student() {
			ID = 0;
			name = "";
			GPA = 0.0;
		};

		~Student() {};
};

#endif //__STUDENT_H__
