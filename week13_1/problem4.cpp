#include <iostream>
#include "class_registration1.h"
#include "invalid_student_id_exception.h"
#include "full_registration_exception.h"

using namespace std;

int main(void) {
	long id;
	ClassRegistration classRegistration(10);
	while (cin >> id) {
		try {
			Student student(id);
			classRegistration.Register(student);
		} catch (InvalidStudentIDException* e) {
			cout << "Invalid Student ID for student" << endl;
		} catch (FullRegstrationException* e) {
			cout << "Full Registrations!!" << endl;
		}
	}

	cout << "Final Registration Members: " << endl;
	classRegistration.Print();

	return 0;
}

