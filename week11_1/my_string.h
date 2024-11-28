#ifndef __MY_STRING_H__
#define __MY_STRING_H__

#include <iostream>
#include <cstring>

using namespace std;

class MyString{
	private:
		int len_;
		char* str_;
	public:
		MyString(const char* s) {
			len_ = strlen(s);
			str_ = new char[len_ + 1];
			strcpy(str_, s);
		}
		MyString(const MyString& mystr) {
			len_ = strlen(mystr.str_);
			str_ = new char[len_ + 1];
			strcpy(str_, mystr.str_);
		}
		~MyString() {
			cout << "~MyString()" << endl;
			delete[] str_;
		}
		void Print() {
			cout<< str_ << endl;
		}
};

#endif // __MY_STRING_H__
