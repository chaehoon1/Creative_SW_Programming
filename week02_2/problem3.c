#include <stdio.h>

void MaxMin(int* arr,int len,int* min,int* max) {
	*max = arr[0];
        for(int i = 0; i < len; i++) {
                if(*max < arr[i]) {*max = arr[i];}
        }
	
	*min = arr[0];
        for(int i = 0; i < len; i++) {
                if(*min > arr[i]) {*min = arr[i];}
        }

	return;
}

int main(void) {
	int arr[5], min, max;

	printf("Let's fill an array of size 5\n");
	for(int i = 0; i < 5; i++) {
		printf("add[%d] : ", i);
		scanf("%d", &arr[i]);
	}

	MaxMin(arr, 5, &min, &max);

	printf("Min: %d, Max: %d in the array\n",min, max);

	return 0;
}
