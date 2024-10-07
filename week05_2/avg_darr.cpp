#include "avg.h"
#include "sum.h"

double avg(double* arr, int len) {
	double sum_num = sum(arr, len);
	return (sum_num / (double)len);
}
