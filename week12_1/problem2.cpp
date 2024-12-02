#include <iostream>

using namespace std;

class Point {
	int x_, y_;
	public:
		Point() : Point(0, 0) {}
		Point(int x, int y) : x_(x), y_(y) {}
		int getX() const { return x_; }
		int getY() const { return y_; }
		void setX(int x) {
			x_ = x;
		}
		void setY(int y) {
			y_ = y;
		}
		Point& operator=(const Point& p) {
			x_ = p.getX();
			y_ = p.getY();
			return *this;
		}
		Point& operator=(const int& val) {
			x_ = val;
			y_ = val;
			return *this;
		}
};

template<typename T>
T ArraySum(T* arr, int len) {
	T sum;
	sum = 0;
	for(int i = 0; i < len; i++) {
		sum = (sum + arr[i]);
	}

	return sum;
}

Point operator+(Point a, Point b) {
	Point res;
	res.setX(a.getX() + b.getX());
        res.setY(a.getY() + b.getY());
	return res;
}	

ostream& operator<<(ostream& os, const Point& p) {
	os << p.getX() << ", " << p.getY();
	return os;
}

int main(void) {
	Point points[] = {Point(1, 2), Point(3, 4), Point(5, 6)};
	cout<< ArraySum<Point>(points, 3) << endl;
	
	return 0;
}

