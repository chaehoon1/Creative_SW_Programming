#include <iostream>
#include "bank_account.h"
#include "balance_simulator.h"

using namespace std;

int main(void) {
	BankAccount account(100000, 0.001);
	BalanceSimulator sim(account);
	cout<<sim.simulate(12) << endl;
	return 0;
}
