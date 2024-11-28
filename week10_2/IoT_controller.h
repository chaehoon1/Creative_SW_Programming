#ifndef __IOT_CONTROLLER_H__
#define __IOT_CONTROLLER_H__

#include "electronic_device.h"
#include <list>

using namespace std;

class IoTController {
	list<ElectronicDevice> devices_;
	list<ElectronicDevice>::iterator it;
	public:
		void register_device(ElectronicDevice device) {
			devices_.push_back(device);
		}
		void turn_on_all_devices() {
			for(it = devices_.begin(); it != devices_.end(); it++) {
				it->on();
			}
		}
		void turn_off_all_devices() {
			for(it = devices_.begin(); it != devices_.end(); it++) {
				it->off();
			}
		}
};

#endif //__IOT_CONTROLLER_H__
