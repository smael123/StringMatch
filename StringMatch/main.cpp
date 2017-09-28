#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1;
	string str2;
	bool cont = true;

	while (cont) {
		cout << "Please enter the first string: ";
		cin >> str1;

		cout << "Please enter the second string: ";
		cin >> str2;

		if (str1 == str2) {
			cout << "The strings match!" << endl;
		}
		else {
			cout << "The strings do not match" << endl;
		}

		cout << "Continue? Enter 1 for Yes and 0 for No ";
		cin >> cont;
	}
}