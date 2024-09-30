#include <iostream>

using namespace std;

typedef struct {
	double x;
	double y;
} Point;

void center_of_points(Point* points, int len, Point* out) {
	double sum_x = 0, sum_y = 0;

	for(int i = 0; i < len; i++) {
		sum_x += points[i].x;
	       	sum_y += points[i].y;
	}

	out->x = sum_x / len;
	out->y = sum_y / len;

	return; 
}

/*Point& center_of_points(Point* points, int len) {
        Point* ret = new Point;
        double sum_x = 0, sum_y = 0;

        for(int i = 0; i < len; i++) {
                sum_x += points[i].x;
                sum_y += points[i].y;
        }

        ret->x = sum_x / len;
        ret->y = sum_y / len;

        return ret;
}*/


/*Point center_of_points(Point* points, int len) {
        Point center = {0, 0};
        double sum_x = 0, sum_y = 0;

        for(int i = 0; i < len; i++) {
                sum_x += points[i].x;
                sum_y += points[i].y;
        }

        center.x = sum_x / len;
        center.y = sum_y / len;

        return center;
}*/


int main(void) {
	Point points[3] = {{1, 2}, {3, 2}, {1, 5}};
	Point center;

	//center = center_of_points(points, sizeof(points) / sizeof(points[0]));

	center_of_points(points, sizeof(points) / sizeof(points[0]), &center);

	//Point& rcenter = rcenter = center_of_points(points, sizeof(points) / sizeof(points[0])); 

	cout << "x: " << center.x << ", y: " << center.y << endl;
	//cout << "x: " << rcenter.x << ", y: " << rcenter.y << endl;

	return 0;
}
