#include <iostream>
#include <cstring>

using namespace std;

class MyString{
	private:
		int len_;
		char* str_;
		int* ref_cnt_;
	public:
		MyString(const char* s) {
			len_ = strlen(s);
			str_ = new char[len_ + 1];
			strcpy(str_, s);
			ref_cnt_ = new int(1);
		}
		MyString(const MyString& mystr) {
			len_ = mystr.len_;
			str_ = mystr.str_;
			ref_cnt_ = mystr.ref_cnt_;
			*ref_cnt_ = *ref_cnt_ + 1;
		}
		~MyString() {
			cout << "~MyString()" << endl;
			*ref_cnt_ = *ref_cnt_ - 1;
			if(*ref_cnt_ == 0) {
				cout << "ref_cnt_: " << *ref_cnt_ << endl;
				delete[] str_;
			}
		}
		void Print() {
			cout << "ref_cnt_: " << *ref_cnt_ << endl;
			cout<< str_ << endl;
		}
};

int main(void) {
	MyString s1 = "Hanyang";
	MyString s2 = s1;
	
	s1.Print();
	s2.Print();

	return 0;
}


