/*Section 8*/

#include <iostream>
using namespace std;

int main() {

	bool equal_result{ false };
	bool not_equal_result{ false };

	cout << boolalpha; //will display true/false instead of 1 or 0

	/*ints*/
	//int num1{ 0 };
	//int num2{ 0 };

	//cout << "Enter 2 integers seperated by a space: "; 
	//cin >> num1 >> num2;
	//equal_result = (num1 == num2);
	//not_equal_result = (num1 != num2);

	//cout << "Comparison result(equals): " << equal_result << endl;
	//cout << "Comparison result(not equals): " << not_equal_result << endl;

	/*chars*/
	//char char1{};
	//char char2{};

	//cout << "Enter 2 chars seperated by a space: ";
	//cin >> char1 >> char2;
	//equal_result = (char1 == char2);
	//not_equal_result = (char1 != char2);

	//cout << "Comparison result(equals): " << equal_result << endl;
	//cout << "Comparison result(not equals): " << not_equal_result << endl;

	/*doubles*/
	//double num1{ 0 };
	//double num2{ 0 };

	//cout << "Enter 2 doubles seperated by a space: ";
	//cin >> num1 >> num2;
	//equal_result = (num1 == num2);
	//not_equal_result = (num1 != num2);

	//cout << "Comparison result(equals): " << equal_result << endl;
	//cout << "Comparison result(not equals): " << not_equal_result << endl;

	/*integers and double*/
	int num1{ 0 };
	double num2{ 0 };

	cout << "Enter an integer and a double seperated by a space: ";
	cin >> num1 >> num2;
	equal_result = (num1 == num2);
	not_equal_result = (num1 != num2);

	cout << "Comparison result(equals): " << equal_result << endl;
	cout << "Comparison result(not equals): " << not_equal_result << endl;


	return 0;
}
