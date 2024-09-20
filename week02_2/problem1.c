#include <stdio.h>

int g_var;

int add1(int x, int y) {
	return x + y;
}

void add2(int x, int y, int* out) {
	*out = x + y;
	return;
}

void add3(int x, int y) {
	g_var = x + y;
}

int main(void) {
	int a = 10, b = 20;

	int res = add1(a, b);
	
	printf("a : %d, b : %d, => add1(a, b) returns %d\n", a, b, res);

	res = 0;
	add2(a, b, &res);

	printf("a : %d, b : %d, => add2(a, b) returns %d\n", a, b, res);

	res = 0;
	add3(a, b);

	printf("a : %d, b : %d, => add3(a, b) returns %d\n", a, b, g_var);

	return 0;
}
