#include <iostream>
#include <iomanip>

using namespace std;

void print_history(int* history, int num) {
	 for(int i = 0; i < num; i++) {
		cout << "[" << i + 1 << "] " << setw(7) << right << history[i] << endl;
         }
	 return;
}

void apply_expense(int* budget, int* history, int* num) {
	int expense;
	cout << "Expense: ";
        cin >> expense;
        cout << "Processing..." << endl;
        *budget -= expense;
        *(history + *num) = expense;
        (*num)++;

	return;
}


int main(void) {
	int budget = 300000;
	int history[10] = {0, };
	int num = 0;
	char answer;
	bool state = true;

	while(state) {
		cout << "Your Budget: " << budget << endl;
		cout << "h: hitory, e: expense, q: quit >";
		cin >> answer;
		switch(answer) {
			case 'e' :
				apply_expense(&budget, history, &num);
				break;
			case 'q' :
				state = false;
				break;
			case 'h' :
				print_history(history, num);
				break;
		}
	}	

	return 0;
}


