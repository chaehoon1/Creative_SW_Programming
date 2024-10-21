#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

int main(void) {
	vector<Student> students;
	char cmd;
	int loop = 1;
	string name;
	long ID;
	float GPA;

	while(loop) {
		cout << "Commands(new, print, quit): "; 
		cin >> cmd;
		switch(cmd) {
			case 'n': { 
				cout << "enter your name : ";
				cin >> name;
				cout << "enter your ID : ";
				cin >> ID;
				cout << "enter your GPA : ";
				cin >> GPA;

				Student myStudent(ID);
				myStudent.set_GPA(GPA);
				myStudent.set_name(name);

				students.push_back(myStudent);
				break;
			}

			case 'p':
				for(int i = 0; i < students.size(); i++) {
					cout << "[" << i << "] : " << students[i].get_name() << ", " << students[i].get_ID() << ", " << students[i].get_GPA() << endl;
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
