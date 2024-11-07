#include <iostream>
#include "hev.h"

using namespace std;

int main(void) {
	EVehicle ionic;
	ionic.get_charged();
	ionic.drive();
	ICEVehicle kona;
	kona.get_refueled();
	kona.drive();
		
	return 0;
}
