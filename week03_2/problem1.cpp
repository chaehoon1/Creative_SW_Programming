#include <iostream>

using namespace std;

int main(void) {
	int count = 0;
	string message;

	while(getline(cin, message, ' ')) {
		count++;
		cout << message << endl;
	}	

	cout << count << endl;
	return 0;
}
