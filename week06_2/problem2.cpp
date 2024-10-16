#include <iostream>
#include "darray.h"

using namespace std;

int main(void) {
	DynamicArray darr= DynamicArray(5);
	
	for (int i= 0; i< 10; i++) {
		darr.put(i);
	}
	
	for (int i= 0; i< 10; i++) {
		cout<< "arr[" << i<< "]: " << darr.at(i) << endl;
	}
	cout << "size : " << darr.get_size() << endl;
	
	return 0;
}
