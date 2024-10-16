#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <string>

using namespace std;

class Student {
	private :
		const long _ID;
		string _name;
		float _GPA;
	
	public :
		Student(long ID) : _ID(ID)
		{
			_name = "";
			_GPA = 0.0;
		}

		~Student() {}

		string get_name();
		long get_ID() {return _ID;}
		float get_GPA();

		void set_name(string name);
		/*void set_ID(long ID) {
			_ID = ID;
		}*/
		void set_GPA(float GPA);
};

inline void Student::set_name(string name) {
	_name = name;
}

inline string Student::get_name() {
	return _name;
}

#endif //__STUDENT_H__
