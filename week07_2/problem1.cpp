#include <iostream>
#include <list>
#include <string>

using namespace std;

bool comp(int a, int b) {
	return a > b;
}

int main(void) {
	string num;
	list<int> numbers;
	list<int>::iterator it;

	while(getline(cin, num, ' ')) {
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
