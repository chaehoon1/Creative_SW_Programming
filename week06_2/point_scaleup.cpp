#include "point.h"

void point_scaleup(Point& point) {
	point.set_x(2 * point.get_x());
	point.set_y(2 * point.get_y());
}

void Point::scaleup() {
	_x = _x * 2;
	_y = _y * 2;
}
