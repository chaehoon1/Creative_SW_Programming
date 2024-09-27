#include <iostream>
#include <iomanip>

using namespace std;

int a = 10, b = 20;

void add(int num1, int num2) {
	int sum = num1 + num2;
	cout << hex << setfill('0') << setw(8);
	cout << "num1 at " << &num1 << endl;
	cout << "num2 at " << &num2 << endl;
	cout << "sum at " << &sum << endl;
}

int main(void) {
	string txt = "Hello";
	char* name = new char[25];
	
	cin >> name;
	cout << txt << ", " << name << endl;
	add(a, b);
	cout << "a at " << &a << endl;
	cout << "b at " << &b << endl;
	cout << "txt at " << &txt << endl;
	cout << "name at " << ((void*) name) << endl;
	//cout << "name at " << ((void*) name) << endl;
	
	delete name;	

	return 0;
}
