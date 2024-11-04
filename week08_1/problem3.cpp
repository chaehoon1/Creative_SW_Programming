#include <iostream>

using namespace std;

class Player {
	protected :
		string name_;
		string team_;
		int runs_;
		int hits_;
		int home_runs_;

	public :
		Player(string name, string team, int runs, int hits, int home_runs) : name_(name), team_(team), runs_(runs), hits_(hits), home_runs_(home_runs) {}
		~Player() {}
		string toString() {
			return  "Name : " + name_ +  ", team : " + team_ + 
					", runs : " + to_string(runs_) + ", hits " + to_string(hits_) + 
					", home_runs : " + to_string(home_runs_); 
		}

};

class Hitter : public Player {
		private :
			int games_;
			int at_bats_;

		public :
			Hitter(string name, string team, int runs, int hits, int home_runs, int games, int at_bats) : Player(name, team, runs, hits, home_runs), games_(games), at_bats_(at_bats) {}
			~Hitter() {}
			string toString() {
				return Player::toString() + ", games : " + to_string(games_) + ", at_bats : " + to_string(at_bats_);
			}
};

class Pitcher : public Player {
		private :
			int wins_;
			int loses_;
		public :
			Pitcher(string name, string team, int runs, int hits, int home_runs, int wins, int loses) : Player(name, team, runs, hits, home_runs), wins_(wins), loses_(loses) {}
			~Pitcher() {}
			string toString() {
				return Player::toString() + to_string(home_runs_) + ", wins : " + to_string(wins_) + ", loses : " + to_string(loses_);
			}
};

int main(void) {
	Hitter roh("Roh", "Hanwha", 85, 153, 31, 131, 595);
	Pitcher fedde("Fedde", "NC", 3, 13, 2, 20, 6);
	cout << roh.toString() << endl;
	cout << fedde.toString() << endl;
        return 0;
}       
