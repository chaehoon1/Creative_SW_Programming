#include <iostream>
#include "addi.h"

using namespace std;

int main(void) {
	int a, b;
	
	a = add(1, 2);
	b = add(3, 4);

	cout << add(a, b) << endl;

	return 0;
}
