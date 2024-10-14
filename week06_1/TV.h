#include <iostream>

using namespace std;

class TV {
	private :
		int _channel = 1;
	public :
		void display() {
			cout << "-----------------------" << endl;
			cout << "|               " << "ch: " << _channel << " |" << endl;
			cout << "|                     |" << endl;
			cout << "|                     |" << endl;
			cout << "|                     |" << endl;
			cout << "|                     |" << endl;
			cout << "-----------------------" << endl;
		}
		void set_channel(int channel) {
			_channel = channel;
		}
		int get_channel() {
			return _channel;
		}
};

