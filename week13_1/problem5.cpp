#include <iostream>

using namespace std;

int total_tires = 3;

class Tire {
	int wear_level_;
public:
	Tire() : wear_level_(100) {
		cout << "Tire()" << endl;
		if (total_tires == 0) {
			throw "Out of tires...";
		} else {
			total_tires--;
		}
	}
	~Tire() {
		cout << "~Tire()" << endl;
		total_tires++;
	}
};

class Vehicle {
	Tire** tires_;
	int num_tires_;
public:
	Vehicle(int num) : num_tires_(num) {
		int i;
		try {
			tires_ = new Tire*[num];
			for (i = 0; i < num; i++) {
				tires_[i] = new Tire();
			}
		} catch (const char* e) {
			for (i = 0; i < num; i++) {
				if (tires_[i])
					delete tires_[i];
				tires_[i] = NULL;
			}
			throw "Failed to construct a vehicle";
		}
	}
	~Vehicle() {
		int i;
		for (i = 0; i < num_tires_; i++) {
			if (tires_[i])
				delete tires_[i];
		}
		delete tires_;
	}
};

int main(void) {
	int num;
	cin >> num;
	Vehicle* v = NULL;

	try {
		v = new Vehicle(num);
	} catch (const char* e) {
		cout << e << endl;
	}

	cout << "Total tire remained: " << total_tires << endl;

	if (v) {
		cout << "Deleting the vehicle" << endl;
		delete v;
	}

	cout << "Total tire remained: " << total_tires << endl;

	return 0;
}

