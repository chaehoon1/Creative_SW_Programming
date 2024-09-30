#include <iostream>

using namespace std;

void swap_by_pointers(int* pa, int* pb) {
	int tmp = *pb;
	*pb = *pa;
	*pa = tmp;

	return;
}

void swap_by_references(int& ra, int& rb) {
	int tmp = rb;
	rb = ra;
	ra = tmp;

	return;
}

int main(void) {
	int a, b;

	a = 10, b = 20;
	swap_by_pointers(&a, &b);
	cout<< "a: " << a << ", b: " << b << endl;

	a = 10, b = 20;
	swap_by_references(a, b);
	cout<< "a: " << a << ", b: " << b << endl;

	return 0;
}
