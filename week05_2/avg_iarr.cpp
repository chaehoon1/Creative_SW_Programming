#include "avg.h"
#include "sum.h"

double avg(int* arr, int len) {
	double sum_num = sum(arr, len);
	return (sum_num / (double)len);
}
