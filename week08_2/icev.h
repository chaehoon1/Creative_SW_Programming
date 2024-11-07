#ifndef __ICEV_H__
#define __ICEV_H__

#include <iostream>
#include "vehicle.h"

using namespace std;

class ICEVehicle : public Vehicle {
	public :
		ICEVehicle() : Vehicle(4, 4) {cout << "ICEVehicle()" << endl;}
		void drive();
		void get_refueled();
		~ICEVehicle() {cout << "~ICEVehicle()" << endl;}
};

#endif //__ICEV_H__
