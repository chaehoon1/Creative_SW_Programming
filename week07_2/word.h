#ifndef __WORD_H__
#define __WORD_H__
#include <iostream>
#include <map>

using namespace std;

class Word {
        private :
                string _value;
                int _freq;

        public :
		Word() {}
                Word(string value) : _value(value), _freq(1) {}
                string get_value() { return _value;}
                int get_freq() { return _freq;}
                void inc_freq() {_freq++;}
};

string find_max_freq(map<string, Word> words);

#endif //__WORD_H__
