#include <iostream>

using namespace std;


int main() {
	string u_in;
	bool run = true;

	while(run)
		cout << "Enter a sequence of number: ";

		cin >> u_in;

		for (int i = 0; i < u_in.size(); i++) {
			if (u_in[i] == '-')
				cout << "Error: Can't be a negative number" << endl;
				break;
		}
		
		//u_in.clear();
	/*for (int i = 0; i < u_in.size(); i++) {
		cout <<
	}*/
	return 0;

}