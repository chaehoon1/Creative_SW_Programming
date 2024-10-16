#include <iostream>
#include "point.h"

using namespace std;

int main(void) {
	cout << "before constructor is called!" << endl;
	Point p;
	cout << "after constructor is called!" << endl;
	
	p.set_x(1);
	p.set_y(2);

	p.scaleup();

	cout << "x : " << p.get_x() << " y : " << p.get_y() << endl;

	point_scaleup(p);

	cout << "x : " << p.get_x() << " y : " << p.get_y() << endl;

	return 0;
}
