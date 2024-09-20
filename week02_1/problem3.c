#include <stdio.h>

int main(void) {
	int arr[5] = {1, 2, 3, 4,5};
	int* ptr = &arr[0];	
	
	for(int i = 0; ; i++, ptr++) {
		printf("arr[%d] : %p %d\n", i, ptr, *ptr);
	}

	return 0;
}
