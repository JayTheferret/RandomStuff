#include <iostream>
#include <windows.h>

using namespace std;

int main() {

	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE); //just once-> for color

	while (true) {

		char input;

		SetConsoleTextAttribute(color, 14);
		cout
			<< "EGG BOT: *gives egg*" << endl
			<< endl;

			SetConsoleTextAttribute(color, 8);
			cout
				<< "What do you wanna do?" << endl 
				<< "share egg (s) or keep egg (k)";

		cin >> input;

		cout << endl;

		if (input == 's') {
			SetConsoleTextAttribute(color, 11);
			cout
				<< endl
				<< "YOU:     *shares egg*" << endl;

			SetConsoleTextAttribute(color, 14);
			cout
				<< "EGG BOT: *takes egg*" << endl;
		}

		else if (input == 'k') {
			while (true) {
				SetConsoleTextAttribute(color, 8);
				cout
					<< endl 
					<< "Are you sure you wanna keep egg?" << endl
					<< "YES(y) or NO(n)";
				cin >> input;
				cout << endl;

				if (input == 'y') {
					cout << "I can't accept a yes at this point." << endl;
				}

				else if (input == 'n') {
					SetConsoleTextAttribute(color, 11);
					cout
						<< "YOU:     *gives egg*" << endl;

					SetConsoleTextAttribute(color, 14);
					cout
						<< "EGG BOT: *takes egg*" << endl;
					break;
				}
			}
		}

		else {
			SetConsoleTextAttribute(color, 14);
			cout 
				<< "EGG BOT: What? *tilts head*" << endl 
				<<endl;
		}
	}
}