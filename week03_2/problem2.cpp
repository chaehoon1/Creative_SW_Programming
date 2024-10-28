#include <iostream>

using namespace std;

typedef struct {
                string value;
                int freq;
} Word;

int main(void) {
	int i, max_freq, count = 0;
	string word;
	Word words[250];

	while(getline(cin, word, ' ')) {
		for(i = 0; i < count; i++) {
			if(words[i].value == word) {
				words[i].freq++;
				break;
			}
		}
		if(i == count) {
			words[i].value = word;
			words[i].freq = 1;
			count++;
		}
	}	

	for(i = 0, max_freq = 0; i < count; i++) {
		if(max_freq < words[i].freq) {
			max_freq = words[i].freq;
			word = words[i].value;
		}	
	}

	cout << "word: " << word << ", freq " << max_freq << endl;

	return 0;
}
