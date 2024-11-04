#include <iostream>
#include <vector>

using namespace std;

class Player {
	protected :
		string name_;
		string team_;
		int runs_;
		int hits_;
		int home_runs_;

	public :
		Player(string name, string team, int runs, int hits, int home_runs) 
			: name_(name), team_(team), runs_(runs), hits_(hits), home_runs_(home_runs) {}
		~Player() {}
		string toString() {
			return  "Name : " + name_ +  ", team : " + team_ + 
					", runs : " + to_string(runs_) + ", hits " + to_string(hits_) + 
					", home_runs : " + to_string(home_runs_); 
		}
		string getName() {
			return name_;
		}
};

class Hitter : public Player {
		private :
			string position_;
			int games_;
			int at_bats_;

		public :
			Hitter(string name, string team, string position, int runs, int hits, int home_runs, int games, int at_bats) 
				: Player(name, team, runs, hits, home_runs), position_(position), games_(games), at_bats_(at_bats) {}
			~Hitter() {}
			string toString() {
				return Player::toString() + ", games : " + to_string(games_) + ", at_bats : " + to_string(at_bats_);
			}
			string getName() {
				return Player::getName() + " at " + position_;
			}	
};

class Pitcher : public Player {
		private :
			int wins_;
			int loses_;
		public :
			Pitcher(string name, string team, int runs, int hits, int home_runs, int wins, int loses) 
				: Player(name, team, runs, hits, home_runs), wins_(wins), loses_(loses) {}
			~Pitcher() {}
			string toString() {
				return Player::toString() + to_string(home_runs_) + ", wins : " + to_string(wins_) + ", loses : " + to_string(loses_);
			}
			string getName() {
				return name_;
			}
};

class Team {
	private :
		string name_;
		vector<Hitter> hitters_;
		vector<Pitcher> pitchers_;
	public :
		Team(string name) : name_(name) {}
		void addHitter(Hitter hitter) {hitters_.push_back(hitter);}
		void addPitcher(Pitcher pitcher) {pitchers_.push_back(pitcher);}
		void printAllPlayers() {
			int i;
			cout << "hitters : ";
			for(i = 0; i < hitters_.size(); i++) {
				cout << hitters_[i].getName() << " ";
			}
			cout << endl;
			cout << "pitchers : ";
			for(i = 0; i < pitchers_.size(); i++) {
				cout << pitchers_[i].getName() << " ";
			}
			cout << endl;
		}
};

int main(void) {
	Team hero("Hero");
	Hitter kim("Kim", "Hero", "3rd base", 104, 186, 7, 137, 621);
	Pitcher son("Son", "Hero", 6, 7, 2, 9, 7);
	hero.addHitter(kim);
	hero.addPitcher(son);
	hero.printAllPlayers();
        return 0;
}       
