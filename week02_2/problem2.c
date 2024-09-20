#include <stdio.h>
void swap(int* a, int* b) {
	int tmp = *a;

	*a = *b;
	*b = tmp;
	
	return;
}

int main(void) {
	int a, b;

	printf("Input two numbers : ");
	scanf("%d %d", &a, &b);

	printf("Your numbers were %d %d\n", a, b);
	printf("After swaption...\n");

	swap(&a, &b);

	printf("Your numbers are %d %d\n", a, b);

	return 0;
}
