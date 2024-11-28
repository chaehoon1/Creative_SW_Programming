#ifndef __WARRANTY_H__
#define __WARRANTY_H__

class Warranty {
	int cycle_;
	int max_cycle_;
	public:
		Warranty() : cycle_(0), max_cycle_(4) {}
		void get_damaged() {
			cycle_++;
		}
		bool expired() {
			return cycle_ > max_cycle_;
		}
};

#endif //__WARRANTY_H__
