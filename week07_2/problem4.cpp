#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main(void) {
	string query;
	bool loop = true;
	map<string, vector<string>> recommendation;
	map<string, vector<string>>::iterator it;
	vector<string> related_queries;

	related_queries.clear();
	related_queries.push_back("hanyang.ac.kr");
	related_queries.push_back("hanyang univ.");
	recommendation["hanyang"] = related_queries;
	related_queries.clear();
	related_queries.push_back("univ2024");
	related_queries.push_back("univ meaning");
	related_queries.push_back("unv");
	related_queries.push_back("univ2023");
	recommendation["univ"] = related_queries;
	related_queries.clear();
	related_queries.push_back("computr");
	recommendation["computer"] = related_queries;

	while(loop) {
		getline(cin, query);
		cout << "showing results for " << query << endl;

		it = recommendation.find(query);
		if(it != recommendation.end()) {
			related_queries = it->second;
			cout << " *related: ";
			for(int i = 0; i < related_queries.size(); i++) {
				cout << related_queries[i] << " ";
			}
			cout << endl;
		}
		if(query == "quit") {
			loop = false;
		}
	}

	return 0;
}
