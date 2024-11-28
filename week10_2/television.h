#ifndef __TELEVISION_H__
#define __TELEVISION_H__

#include <iostream>
#include "electronic_device.h"

using namespace std;

class Television : public ElectronicDevice {
	int _channel;
	int max_channel_;
	public:
		Television() : _channel(1), max_channel_(100) {}	

		void channel_up() {
			if(_state) {
				if(_channel < max_channel_) {
					_channel++;
				}
				else { _channel = 1;}	
			}
			else {
				cout << "The television is turned off." << endl;
			}
		}
		void channel_down() {
			if(_state) {
				if(_channel > 1) {
					_channel--;
				}
				else { _channel = max_channel_;}	
			}
			else {
				cout << "The television is turned off." << endl;
			}
		}
		void display() {
			if(_state) {cout << "ch: " << _channel << endl;}
			else {cout << "Out of power." << endl;}
		}
};

#endif //__TELEVISION_H__
