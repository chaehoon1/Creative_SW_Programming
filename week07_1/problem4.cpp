#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Word {
	private :
                string _value;
                int _freq;

	public :
		Word(string value) : _value(value), _freq(1) {}
		string get_value() { return _value;}
		int get_freq() { return _freq;}
		void inc_freq() {_freq++;}
};

bool comp(Word& a, Word& b) {
	return a.get_freq() > b.get_freq();
}

int main(void) {
	int i, max_freq, count = 0;
	string word;
	vector<Word> words;
	vector<Word>::iterator it;

	while(getline(cin, word, ' ')) {
		for(it = words.begin(); it != words.end(); it++) {
			if(it->get_value() == word) {
				it->inc_freq();
				break;
			}
		}

		/*
		for(i = 0; i < count; i++) {
			if(words[i].get_value() == word) {
				words[i].inc_freq();
				break;
			}
		}
		*/
		if(it == words.end()) {
			words.push_back(Word(word));
			count++;
		}
		/*
		if(i == count) {
			words[i] = Word(word);
			count++;
		}
		*/
	}	

	sort(words.begin(), words.end(), comp);
	/*	
	for(i = 0, max_freq = 0; i < count; i++) {
		if(max_freq < words[i].get_freq()) {
			max_freq = words[i].get_freq();
			word = words[i].get_value();
		}	
	}
	*/
	word = words[0].get_value();
	max_freq = words[0].get_freq();

	cout << "word: " << word << ", freq " << max_freq << endl;

	return 0;
}
