#ifndef __EV_H__
#define __EV_H__

#include <iostream>
#include "vehicle.h"

using namespace std;

class EVehicle : public Vehicle {
	public :
		EVehicle() : Vehicle(4, 4) {cout << "EVehicle()" << endl;}
		void drive();
		void get_charged();
		~EVehicle() {cout << "~EVehicle()" << endl;}
};


#endif // __EV_H__
