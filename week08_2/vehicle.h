#ifndef __VEHICLE_H__
#define __VEHICLE_H__

#include <iostream>

using namespace std;

class Vehicle {
	protected :
		int wheels_;
		int seats_;
	public :
		Vehicle(int wheels, int seats) : wheels_(wheels), seats_(seats) {cout << "Vehicle()" << endl;}
		/*void drive();*/
		~Vehicle() {cout << "~Vehicle()" << endl;}
};

#endif // __VEHICLE_H__
