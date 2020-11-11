#include <iostream>

using namespace std;


int main() {
	string u_in;
	bool run = true;
	bool u_in_corr;

	while (run) {
		cout << "Enter a sequence of number(s): ";

		cin >> u_in;
		u_in_corr = true;

		for (int i = 0; i < u_in.size(); i++) {
			if (u_in[i] > '9' || u_in[i] < '0') {
				cout << "Error: Sequence can only contain positive number(s)" << endl << endl;;
				u_in_corr = false;
				break;
			}
		}
		
		if (u_in_corr) {
			cout << endl;

			for (int i = 0; i < u_in.size(); i++) {
				cout << u_in[i] << endl;
			}

			cout << "---------" << endl;

			for (int i = u_in.size()-1; i >= 0; i--) {
				cout << u_in[i] << endl;
			}

			run = false;
		}

	}
	return 0;

}