#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <string>

using namespace std;

class Student {
	private :
		long ID;
		string name;
		float GPA;
	
	public :
		Student() {
			ID = 0;
			name = "";
			GPA = 0.0;
		}

		~Student() {}

		string get_name();
		long get_ID() {return ID;}
		float get_GPA();

		void set_name(string name);
		void set_ID(long ID) {
			this->ID = ID;
		}
		void set_GPA(float GPA);
};

inline void Student::set_name(string name) {
	this->name = name;
}

inline string Student::get_name() {
	return name;
}

#endif //__STUDENT_H__
