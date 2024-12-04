#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include <iostream>

using namespace std;

template<typename T>
class Account {
	protected:
		T principal_amount_;
		double rate_;
		T balance_;
	public:
		Account(T principal_amount, double rate) : principal_amount_(principal_amount), rate_(rate), balance_(principal_amount) {}
		virtual void AddInterest() = 0;
		T GetBalance() {return balance_;}
};

#endif //__ACCOUNT_H__
