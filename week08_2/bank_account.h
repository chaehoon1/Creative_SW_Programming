#ifndef __BANK_ACCOUNT_H__
#define __BANK_ACCOUNT_H__

class BankAccount {
	private :
		double balance_;
		double rate_;
	public :
		BankAccount(double balance, double rate) : balance_(balance), rate_(rate) {}
		double get_balance() const {return balance_;}
		double get_rate() const {return rate_;}
};

#endif //__BANK_ACCOUNT_H__
