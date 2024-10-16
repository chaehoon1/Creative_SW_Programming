#include <iostream>
#include "student.h"

using namespace std;

int main(void) {
	string name;
	long ID;
	float GPA;

	cout << "enter your name : ";
	cin >> name;
	cout << "enter your ID : ";
	cin >> ID;
	cout << "enter your GPA : ";
	cin >> GPA;

	Student myStudent(ID);
	myStudent.set_GPA(GPA);
	myStudent.set_name(name);

	cout << "name : " << myStudent.get_name() << endl;
	cout << "ID : " << myStudent.get_ID() << endl;
	cout << "GPA : " << myStudent.get_GPA() << endl;

	return 0;
}
