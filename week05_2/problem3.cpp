#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, const char **argv) {
	string code = argv[1];

	if(argc > 1) {
		for(int i = atoi(argv[2]); i <= atoi(argv[3]); i++) {
			code[i - 1] = '*';
		}	
	}

	cout << code << endl;

	return 0;
}
