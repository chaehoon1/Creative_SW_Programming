#include <iostream>
#include <stdlib.h>
#define Malloc 1

using namespace std;

class Book {
	public:
		Book() { cout<< "Book()" << endl; }
		~Book() { cout<< "!Book()" << endl; }
};

int main(void) {
	Book* p;
#if Malloc == 1
	p= (Book*) malloc(sizeof(Book));
	free(p);
#else
	p = new Book;
	delete p;
#endif	
	return 0;
}
