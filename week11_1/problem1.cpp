#include "animal.h"
#include <iostream>

using namespace std;

int main(void) {
	int id = 0;
	Animal parent(id++);
	Animal child0 = Animal(id++);
	child0.setParent(&parent);
	Animal child1 = Animal(child0);
	parent.print();
	child0.print();
	child1.print();
	
	return 0;
}
