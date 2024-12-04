#include <iostream>
#include "my_container.h"
using namespace std;

int main(void) {
	int i;
	MyContainer<int> arrays(4);
	for (i= 0; i< arrays.size(); i++) {
		arrays[i] = i;
	}
	for (i= 0; i< arrays.size(); i++) {
		cout<< arrays[i] << endl;
	}
	
	return 0;
}
