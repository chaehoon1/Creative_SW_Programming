#include <iostream>
#include "television.h"
#include "computer.h"

using namespace std;

int main(void) {

	Television tv;
	tv.channel_up();
	tv.display();

	tv.on();
	tv.channel_up();
	tv.display();

	tv.off();
	tv.channel_up();
	tv.display();

	Computer pc;
	pc.run("Memo");

	pc.on();
	pc.run("Memo");
	pc.off();

	for(int i = 0; i < 5; i++) {
		pc.on();
		pc.off();
	}

	pc.off();
	pc.run("Memo");
	
	return 0;
}

