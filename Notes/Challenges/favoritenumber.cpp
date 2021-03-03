/*Section 4 Challenge*/
/*
* Create a c++ program that asks the user what their favorite number between 1 and 100
* the read this number from the console
*
* Suppose the user enters 24
* Then display the following to the console:
* 
* Amaizing! Thats my favorite number too!
* No really!!! 24 is my favorite number! 
*/
#include <iostream>
using namespace std;

int main() {
	int fav_number;

	cout << "Please enter your favorite number between 1 and 100: ";
	cin >> fav_number;
	cout << "Thats my favorite number too!" << endl;
	cout << "No really!!!, " << fav_number << " is my favorite number!" << endl;

	return 0;
}
