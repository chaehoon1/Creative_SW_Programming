#include <iostream>

using namespace std;

class Book {
	public:
		Book() { cout<< "Book()" << endl; }
		~Book() { cout<< "!Book()" << endl; }
};

int main(void) {
	Book *p = new Book[3];
	cout << p << endl;
	delete[] p;
	
	return 0;
}
