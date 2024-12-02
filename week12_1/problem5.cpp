#include <iostream>

using namespace std;

template<typename T>
T ArraySum(T* arr, int len) {
	int i;
	T sum = 0;
	for (i= 0; i< len; i++) {
		sum += arr[i];
	}
	
	return sum;
}

int main(void) {
	int i= 0, arr[] = {1, 2, 3, 4, 5};
	cout<< ArraySum<int>(arr, 1) << endl;
	cout<< ArraySum<int>(arr, 2) << endl;
	cout<< ArraySum<int>(arr, 3) << endl;
	cout<< ArraySum<int>(arr, 4) << endl;
	cout<< ArraySum<int>(arr, 5) << endl;
	//only one ArraySum fuction is made	
	return 0;
}

