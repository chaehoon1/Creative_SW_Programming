#ifndef __SIMPLE_INTEREST_ACCOUNT_H__
#define __SIMPLE_INTEREST_ACCOUNT_H__

#include <iostream>
#include "account.h"

using namespace std;

template<typename T>
class SimpleInterestAccount : public Account<T> {
	public:
		SimpleInterestAccount(int principal_amount, double rate) : Account<T>(principal_amount, rate) {}
		void AddInterest() {
			Account<T>::balance_ += Account<T>::rate_ * Account<T>::principal_amount_;
		}
};

#endif //__SIMPLE_INTEREST_ACCOUNT_H__
