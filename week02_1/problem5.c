#include <stdio.h>
void make_2x_int(int* a) {
	*a= *a * 2;
}

void make_2x_arr(int* arr, int len) {
	int i;
	for (i= 0; i< len; i++) { 
		arr[i]=arr[i]*2;
	}
}

int main(void) {
	int i=0,val=10,arr[5] = {1, 2, 3, 4, 5};
	
	make_2x_int(&val);
	make_2x_arr(arr,5);
	
	printf("val: %d\n", val);
	
	for(i= 0; i< 5; i++) {
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	
	return 0;
}
