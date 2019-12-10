#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main() {

	string scree = "SCREEE";
	string e = "E";

	cout << scree;

	while (true) {
		cout << e;
		e += e;
		Sleep(500);
	}
}