#include <iostream>
#include "class_registration0.h"

using namespace std;

int main(void) {
	long id;
	ClassRegistration classRegistration(10);
	while (cin >> id) {
		try {
			Student student(id);
			classRegistration.Register(student);
		} catch(const char* msg) {
		       cout << msg << endl;
		} catch (const char* e) {
                       cout << e << endl;
                }

	}

	cout << "Final Registration Members: " << endl;
	classRegistration.Print();

	return 0;
}

