#include <iostream>
#include <map>
#include "word.h"

using namespace std;

string find_max_freq(map<string, Word> words) {
	map<string, Word>::iterator it;
	string max_freq_str;
	
	it = words.begin();
	max_freq_str = it->first;

	for(it = words.begin(); it != words.end(); it++) {
		if(it->second.get_freq() > words[max_freq_str].get_freq()) {
			max_freq_str = it->first;
		}
	}

	return max_freq_str;
}

		





