#include <iostream>
#include "avg.h"

int main(void) {
	int arr[5] = {1, 2, 3, 7, 5};
	double arrd[5] = {1.3, 2.4, 3.5, 4.6, 5.7};
	
	Point result, p[2] = {{1, 2}, {3, 2}};
	
	avg(p, 2, &result);

	std::cout << avg(1, 6) << std::endl;
	std::cout << avg(1.5, 7.3) << std::endl;
	std::cout << avg(arr, 5) << std::endl;
	std::cout << avg(arrd, 5) <<  std::endl;
	std::cout << result.x<< ", "   << result.y<< std::endl;
	
	return 0;
}
