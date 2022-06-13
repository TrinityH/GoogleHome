#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;


int main() {

	// Declare objects and variables
	fstream f;
	string user;
	string name;
	int age;
	string state;
	char start;
	char yOrN;

	//Bried introduction
	cout << "Hello, I am Dakota, your personal assistant." << endl;
	cout << "I can remember any details that you wish to tell me." << endl;
	cout << "Let's start with the basics, shall we? 'Y' for yes, 'N' for no." << endl;

	cin >> start;

	//Input and store data to text file
	if (start == 'Y') {
		f.open("userData", ios::out | ios::in | ios::app);
		cout << "What is your name?" << endl;
		cin >> name;
		f << name;
		cout << "How old are you?" << endl;
		cin >> age;
		f << age;
		cout << "Which state do you reside in?" << endl;
		cin >> state;
		f << state;
		f.close();

		cout << "Shall I read your personal details back to you? 'Y' or 'N'?" << endl;

		cin >> yOrN;

		//Open and read from text file
		if (yOrN == 'Y') {
			f.open("userData", ios::in);
			string s;
			while (getline(f, s)) {
				cout << s << endl;
			}
		}
	}






	return 0;
}