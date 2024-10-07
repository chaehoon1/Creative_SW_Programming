#include "sum.h"

double sum(double* arr, int len) {
	double res = 0; 
	for(int i = 0; i < len; i++) {
		res += arr[i];
	}
	return res;
}
