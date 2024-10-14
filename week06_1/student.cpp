#include "student2.h"

void Student::set_GPA(float GPA) {
	if(GPA > 4.5) {
		GPA = 4.5;
	}
	else if(GPA < 0) {
		GPA = 0.0;
	}
	this->GPA = GPA;
}

float Student::get_GPA() {
	return GPA;
}
