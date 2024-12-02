#include <iostream>

using namespace std;

template<typename T, int len>
T ArraySum(T* arr) {
	int i;
	T sum = 0;
	for (i= 0; i< len; i++) {
		sum += arr[i];
	}
	
	return sum;
}

int main(void) {
	int i= 0, arr[] = {1, 2, 3, 4, 5};
	cout<< ArraySum<int, 1>(arr) << endl;
	cout<< ArraySum<int, 2>(arr) << endl;
	cout<< ArraySum<int, 3>(arr) << endl;
	cout<< ArraySum<int, 4>(arr) << endl;
	cout<< ArraySum<int, 5>(arr) << endl;
	//five ArraySum fuctions are made
	return 0;
}

