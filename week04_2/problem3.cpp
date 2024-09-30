#include <iostream>

using namespace std;

int main(void) {
	char txt[10];

	char (&ref)[10] = txt;

	cin >> txt;
	cout<< "ref: " << ref << ", len: " << sizeof(ref) << endl;

	return 0;
}
