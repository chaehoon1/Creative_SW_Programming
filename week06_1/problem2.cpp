#include <iostream>
#include "student2.h"

using namespace std;

int main(void) {
	Student myStudent;
	string name;
	long ID;
	float GPA;

	cout << "enter your name : ";
	cin >> name;
	myStudent.set_name(name);
	cout << "enter your ID : ";
	cin >> ID;
	myStudent.set_ID(ID);
	cout << "enter your GPA : ";
	cin >> GPA;
	myStudent.set_GPA(GPA);

	cout << "name : " << myStudent.get_name() << endl;
	cout << "ID : " << myStudent.get_ID() << endl;
	cout << "GPA : " << myStudent.get_GPA() << endl;

	return 0;
}
