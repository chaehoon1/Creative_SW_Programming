#include <iostream>
#include "TV.h"

using namespace std;

int main(void) {
	TV myTV;
	char cmd = 0;
	int loop = 1;

	while(loop) {
		myTV.display();
		cout << "enter u to channel up, d to channel down and q to quit : ";
		cin >> cmd;

		switch (cmd) {
			case 'u' :
				if(myTV.get_channel() == 9) {
					myTV.set_channel(1);
				}
				else {
					myTV.set_channel(myTV.get_channel() + 1);
				}
				break;
			case 'd' :
				if(myTV.get_channel() == 1) {
					myTV.set_channel(9);
				}
				else {
					myTV.set_channel(myTV.get_channel() - 1);
				}
				break;
			case 'q' :
				loop = 0;
				break;
			default : 
				myTV.display();
				break;
		}
	}

	return 0;
}

