#include <iostream>
#include "point.h"

using namespace std;

int main(void) {
	Point p;
	
	p.set_x(1);
	p.set_y(2);

	p.scaleup();

	cout << "x : " << p.get_x() << " y : " << p.get_y() << endl;

	point_scaleup(p);

	cout << "x : " << p.get_x() << " y : " << p.get_y() << endl;

	return 0;
}
