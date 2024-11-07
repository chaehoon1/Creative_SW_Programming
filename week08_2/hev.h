#ifndef __HEV_H__
#define __HEV_H__

#include <iostream>
#include "ev.h"
#include "icev.h"

using namespace std;

class HEVehicle : public EVehicle, public ICEVehicle {
	public :
		HEVehicle() {cout << "HEVehicle()" << endl;}
		void drive();
		~HEVehicle() {cout << "~HEVehicle()" << endl;}
};

#endif //__HEV_H__
