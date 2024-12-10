#include <iostream>

using namespace std;

double divide(int x,int y) {
	if(y == 0) {
		throw "Division by zero condition!";
	}
	return ((double) x) / y;
}

int main(void) {
	int x, y;
	double z;
	cin >> x >> y;

	try {
		z = divide(x, y);
		cout<<z<<endl;
	}catch (const char* msg) {
		cerr << msg << endl;
	}

	return 0;
}
