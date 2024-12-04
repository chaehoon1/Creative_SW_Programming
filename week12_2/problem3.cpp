#include <iostream>
#include "account.h"
#include "simple_interest_account.h"
#include "compound_interest_account.h"

using namespace std;

int main(void) {
	int i;

	SimpleInterestAccount<int> account0(10000, 0.1);
	for (i= 0; i< 3; i++) {
		account0.AddInterest();
		cout<< account0.GetBalance() << endl;
	}
	
	CompoundInterestAccount<int> account1(10000, 0.1);
	for (i= 0; i< 3; i++) {
		account1.AddInterest();
		cout<< account1.GetBalance() << endl;
	}
	
	return 0;
}

