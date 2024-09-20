#include <stdio.h>

size_t get_capacity(int* arr, int len) {
	return sizeof(int) * len;
}

int main(void) {
	int a[3] = {10, 20, 30};
	int b[7] = {1, 2, 3, 4, 5, 6, 7};

	printf("%lu, %lu\n", sizeof(a), sizeof(b));
	printf("%lu, %lu\n", get_capacity(a, sizeof(a)/sizeof(a[0])), get_capacity(b, sizeof(b)/sizeof(b[0])));

	return 0;
}
