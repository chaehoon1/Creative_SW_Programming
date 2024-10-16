#include "student.h"

void Student::set_GPA(float GPA) {
	if(GPA > 4.5) {
		_GPA = 4.5;
	}
	else if(GPA < 0) {
		_GPA = 0.0;
	}
	_GPA = GPA;
}

float Student::get_GPA() {
	return _GPA;
}
