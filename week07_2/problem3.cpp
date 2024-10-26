#include <iostream>
#include <map>
#include <algorithm>
#include "word.h"

using namespace std;

int main(void) {
	int i, max_freq, count = 0;
	string word;
	map<string, Word> words;
	map<string, Word>::iterator it;

	while(getline(cin, word, ' ')) {
		it = words.find(word);
	
		if(it == words.end()) {
			//words.insert(make_pair(word, Word(word)));
			words[word] = Word(word);
		}
		else {
			it->second.inc_freq();
		}	
	}	

	word = find_max_freq(words);
	max_freq = words[word].get_freq();

	cout << "word: " << word << ", freq " << max_freq << endl;

	return 0;
}
