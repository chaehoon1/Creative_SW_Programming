#ifndef __POINT_H__
#define __POINT_H__
#include <iostream>

class Point {
	private :
		int _x;
		int _y;

	public :
		Point() {
			std::cout << "Constructor is called!" << std::endl;
		}
		int get_x() {return _x;}
		int get_y() {return _y;}

		void set_x(int x) {
			_x = x;
		}
		void set_y(int y) {
			_y = y;
		}

		void scaleup();
};

void point_scaleup(Point&);

#endif //__POINT_H__

