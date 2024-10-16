#include <iostream>
#include "point.h"

using namespace std;

void point_scaleup(Point& point) {
	point.set_x(2 * point.get_x());
	point.set_y(2 * point.get_y());
}

void Point::scaleup() {
	printf("Point::scaleup(): %p\n", this);
	_x = _x * 2;
	_y = _y * 2;
}
