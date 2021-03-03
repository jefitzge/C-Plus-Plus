/* 
Section 5 Basic I/O
This file contains basic I/O practice with no exception handling or input validation
*/

#include <iostream>

using namespace std;

int main() {
	//cout << "Hello World" << endl;
	//cout << "Hello World";
	//cout << "Hi";
	//cout << "testing\ncode" << endl;

	int x;
	int y;
	/*If you enter two numbers seperated by a space on the same line in the code below 
	cin wont wait for the user to hit enter twice it will automatically read from the 
	buffer and put the second number in the second variable*/
	cout << "Enter an integer ";
	cin >> x;
	cout << "Enter an integer ";
	cin >> y;

	cout << "Integer one is: " << x << endl;
	cout << "Integer two is: " << y << endl;


	cout << "Enter two integers seperated by a space ";
	cin >> x >> y;

	cout << "Integer one is: " << x << endl;
	cout << "Integer two is: " << y << endl;


	return 0;
}
