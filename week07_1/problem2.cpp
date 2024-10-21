#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

bool cmp(Student* a, Student* b) {
	return a->get_GPA() < b->get_GPA();
}

int main(void) {
	vector<Student*> students;
	Student* ps;
	vector<Student*>::iterator it_max;
	char cmd;
	int loop = 1;
	string name;
	long ID;
	float GPA;

	while(loop) {
		cout << "Commands(new, statistics, print, quit): "; 
		cin >> cmd;
		switch(cmd) {
			case 'n': {
			          cout << "enter your name : ";
				  cin >> name;
				  cout << "enter your ID : ";
				  cin >> ID;
			          cout << "enter your GPA : ";
			          cin >> GPA;

				  Student* myStudent = new Student(ID);
				  myStudent->set_GPA(GPA);
				  myStudent->set_name(name);

				  students.push_back(myStudent);
				  break;
				  }

			case 's':
				  ps = find_min_GPA(students);
				  cout << "min GPA - name : " << ps->get_name() << ", ID : " << ps->get_ID() << ", GPA : " << ps->get_GPA() << endl;

				  it_max = max_element(students.begin(), students.end(), cmp);
				  ps = *it_max;
				  cout << "max GPA - name : " << ps->get_name() << ", ID : " << ps->get_ID() << ", GPA : " << ps->get_GPA() << endl;

				  break;

			case 'p':
				  for(int i = 0; i < students.size(); i++) {
					  cout << "[" << i << "] : " << students[i]->get_name() << ", " << students[i]->get_ID() << ", " << students[i]->get_GPA() << endl;
				  }
				  break;

			case 'q':
				  loop = 0;
				  break;

			default:
				  loop = 0;
				  break;
		}
	}	

	return 0;
}
