#ifndef __COMPUTER_H__
#define __COMPUTER_H__

#include <iostream>
#include "electronic_device.h"
#include "warranty.h"

class Computer : public ElectronicDevice {
	string program_;
	Warranty warranty_;
	public:
		void on() {
			if(warranty_.expired()) {
				cout << "warranty is expired!" << endl;
			}
			else {
				ElectronicDevice::on();
				warranty_.get_damaged();
			}
		}
		void run(string program) {
			if(_state) {
				program_ = program;
				cout << "The computer is running " << program_ << "." << endl;
			}
			else {
				cout << "The computer is out of power." << endl;
			}
		}
};

#endif //__COMPUTER_H__
