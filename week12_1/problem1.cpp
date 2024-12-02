#include <iostream>

using namespace std;

/*
int ArraySum(int* arr, int len) {
	int sum = 0;
	for(int i = 0; i < len; i++) {
		sum += *(arr + i);
	}

	return sum;
}

double ArraySum(double* arr, int len) {
	double sum = 0.0;
	for(int i = 0; i < len; i++) {
		sum += *(arr + i);
	}

	return sum;
}
*/

template<typename T>
T ArraySum(T* arr, int len) {
	T sum = 0.0;
	for(int i = 0; i < len; i++) {
		sum += *(arr + i);
	}

	return sum;
}

int main(void) {
	int i_arr[] = {1, 2, 3, 4, 5};
	double d_arr[] = {0.5, 2.1, 3.2, 8.7};
	
	cout<< ArraySum(i_arr, 5) << endl;
	cout<< ArraySum(d_arr, 4) << endl;

	return 0;
}
