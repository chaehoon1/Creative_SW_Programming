#include <vector>
#include "student.h"

Student* find_min_GPA(vector<Student*> students) {
		int min_index = 0;
		for(int i = 0; i < students.size(); i++) {
			if(students[min_index]->get_GPA() > students[i]->get_GPA()) {
				min_index = i;
			}
		}

		return students[min_index];
}
