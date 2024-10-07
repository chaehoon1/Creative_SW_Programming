#include <iostream>
#include <fstream>

using namespace std;

typedef struct {
                string value;
                int freq;
} Word;

int main(int argc, char** argv) {
	int i, max_freq, count = 0;
	string word;
	Word words[250];
	char* filename = argv[1];

	fstream fin;
	fin.open(filename);

	while(getline(fin, word, ' ')) {
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

	fin.close();

	return 0;
}
