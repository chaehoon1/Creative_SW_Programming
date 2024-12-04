#ifndef __COMPOUND_INTEREST_ACCOUNT_H__
#define __COMPOUND_INTEREST_ACCOUNT_H__

#include <iostream>
#include "account.h"

using namespace std;

template<typename T>
class CompoundInterestAccount : public Account<T> {
	public:
		CompoundInterestAccount(T principal_amount, double rate) : Account<T>(principal_amount, rate) {}
		void AddInterest() {
			Account<T>::balance_ += Account<T>::rate_ * Account<T>::balance_;
		}
};

#endif //__COMPOUND_INTEREST_ACCOUNT_H__
