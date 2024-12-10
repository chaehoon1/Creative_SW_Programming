#include <iostream>
#include "class_registration.h"

using namespace std;

int main(void) {
	long id;
	ClassRegistration classRegistration(10);
	while (cin >> id) {
		if (id >= 1000000000 && id <= 9999999999) {
			Student student(id);
			classRegistration.Register(student);
		} else {
			cout << "Invalid ID for Students" << endl;
		}
	}

	cout << "Final Registration Members: " << endl;
	classRegistration.Print();

	return 0;
}

