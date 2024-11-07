#include "balance_simulator.h"

double BalanceSimulator::simulate(int mounth) {
	int i;
	double balance = account_.get_balance();
	for(i = 0; i < mounth; i++) {
		balance += (account_.get_balance() * account_.get_rate());
	}
	return balance;
}
