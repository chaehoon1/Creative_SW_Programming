#include <iostream>
#include "student.h"

using namespace std;

int main(void) {
	Student myStudent;

	cout << "enter your name : ";
	cin >> myStudent.name;
	cout << "enter your ID : ";
	cin >> myStudent.ID;
	cout << "enter your GPA : ";
	cin >> myStudent.GPA;

	cout << "name : " << myStudent.name << endl;
	cout << "ID : " << myStudent.ID << endl;
	cout << "GPA : " << myStudent.GPA << endl;

	return 0;
}
