/*Section 8*/
/*
*
*	Ask the user to enter 3 integers, calculate the sum of the integers
*	then calculate the average of the 3 integers. Display the 3 integers
*	entered the sum of the 3 integers and the average of the 3 integers
*
*/

#include <iostream>
using namespace std;

int main() {

	const int count{ 3 }; 

	cout << "Enter 3 integers you would like to be averaged: "; 
	int num1{ 0 };
	int num2{ 0 };
	int num3{ 0 };
	cin >> num1 >> num2 >> num3;

	cout << "You entered: " << num1 << " " << num2 << " " << num3 << endl;

	int total{ 0 };
	total = num1 + num2 + num3;
	cout << "The sum of the 3 integers is: " << total << endl;

	double average{ 0.0 };
	average = static_cast<double>(total) / count;
	cout << "The average of the 3 integers is: " << average << endl;

	return 0;
}
