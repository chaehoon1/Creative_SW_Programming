#include <iostream>

using namespace std;

int main(void) {
	int i, *p = NULL;
	
	for (i= 0; i< 10; i++) {
		p = (int*) malloc(sizeof(int));
		cout<< p << endl;
		free(p);
	}
	
	//else
	for (i= 0; i< 10; i++) {
		p = new int;
		cout<< p << endl;
		delete p;
	}
	
	return 0;
}
