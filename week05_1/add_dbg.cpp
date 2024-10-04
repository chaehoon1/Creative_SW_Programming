#include <iostream>
#include "add.h"

using namespace std;

int add(int x, int y) {
	cout << "calling add(" << x << ", " << y << ")" << endl;
        return x + y;
}	
