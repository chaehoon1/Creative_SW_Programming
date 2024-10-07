#include "avg.h"
#include "point.h"

void avg(Point* point, int len, Point* res) {
	double sum_x = 0.0, sum_y = 0.0;
	for(int i = 0; i < len; i++) {
		sum_x += point[i].x;
		sum_y += point[i].y;
	}

	res->x = sum_x / (double) len;
	res->y = sum_y / (double) len;

	return;
}
