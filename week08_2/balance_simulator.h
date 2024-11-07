#ifndef __BALANCE_SIMULATOR_H__
#define __BALANCE_SIMULATOR_H__

#include "bank_account.h"

class BalanceSimulator {
	const BankAccount account_;
	public :
		BalanceSimulator(BankAccount account) : account_(account) {}
		double simulate(int mounth);
};

#endif //h


