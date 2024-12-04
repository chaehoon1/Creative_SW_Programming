#include <iostream>
#include "account.h"
#include "simple_interest_account.h"
#include "compound_interest_account.h"

using namespace std;

int main(void) {
	int i;
	SimpleInterestAccount<int> krw_account(10000, 0.1);
	for (i= 0; i< 3; i++) {
		krw_account.AddInterest();
		cout<< krw_account.GetBalance() << endl;
	}
	CompoundInterestAccount<double> usd_account(99.50, 0.1);
	for (i= 0; i< 3; i++) {
		usd_account.AddInterest();
		cout<< usd_account.GetBalance() << endl;
	}
	
	return 0;
}

