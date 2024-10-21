#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

bool r_comp(int a, int b) {
	return a > b;
}

int main(void) {
	int i;
	int input[] = {6, 5, 1, 7, 8, 10 , 2};
	list<int> numbers;
	list<int>::iterator it;

	for(i = 0; i < 7; i++) {
		numbers.push_back(input[i]);
	}

	for(it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	numbers.sort();

	for(it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	numbers.sort(r_comp);

	for(it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	
	return 0;
}
