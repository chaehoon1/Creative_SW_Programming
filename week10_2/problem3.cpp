#include <iostream>
#include "television.h"
#include "computer.h"
#include "IoT_controller.h"

using namespace std;

int main(void) {
	Television tv;
	Computer pc;
	IoTController con;
	
	con.register_device(tv);
	con.register_device(pc);
	
	con.turn_on_all_devices();
	con.turn_off_all_devices();

	return 0;
}
