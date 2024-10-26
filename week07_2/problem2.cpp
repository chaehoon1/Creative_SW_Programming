#include <iostream>
#include <list>
#include <string>

using namespace std;

bool comp(int a, int b) {
	return a > b;
}

int main(void) {
	char num[80];
	list<int> numbers;
	list<int>::iterator it;

	while(cin.getline(num, 80, ' ')) {
			numbers.push_back(stoi(num));
	}

	cout << numbers.size() << endl;
	
	numbers.sort();

	for(it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	numbers.sort(comp);

	for(it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}
