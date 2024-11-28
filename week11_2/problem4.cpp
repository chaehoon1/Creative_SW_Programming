#include <iostream>

using namespace std;

class Sequencer {
	int id_;
	public:
		Sequencer() : id_(0) {}
		int GetSeq() {
			return id_;
		}
		Sequencer& operator++() {
			id_++;
			return *this;	
		}
		friend Sequencer operator++(Sequencer&, int);
};

Sequencer operator++(Sequencer& seq, int d) {
	Sequencer new_seq = seq;
	seq.id_++;
	return new_seq;
}

int main(void) {
	Sequencer seq;
	cout<< (++seq).GetSeq() << endl;
	cout<< (seq++).GetSeq() << endl;
	cout<< seq.GetSeq() << endl;
	
	return 0;
}
