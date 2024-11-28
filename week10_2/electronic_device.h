#ifndef __ELECTRONIC_DEVICE_H__
#define __ELECTRONIC_DEVICE_H__

#include <iostream>

using namespace std;

class ElectronicDevice {
	protected:
		bool _state;
	public:
		ElectronicDevice() : _state(false) {}
		void on() {
			if(_state == true) {
				cout << "The device has alredy turned on!" << endl;
			}
			else {
				_state = true;
				cout << "The device is being turned on!" << endl;
			}
		}

		void off() {
			if(_state == false) {
				cout << "The device has alredy turned off!" << endl;
			}
			else {
				_state = false;
				cout << "The device is being turned off!" << endl;
			}
		}
};

#endif //__ELECTRONIC_DEVICE_H__
