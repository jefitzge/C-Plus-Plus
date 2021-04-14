#include <iostream>
using namespace std;

int main() {

	int num1{ 200 };
	int num2{ 100 };

	cout << num1 << " +  " << num2 << " = " << num1 + num2 << endl;

	int result{ 0 };
	/*Addition*/
	result = num1 + num2;
	cout << num1 << " +  " << num2 << " = " << result << endl;
	/*Subtraction*/
	result = num1 - num2;
	cout << num1 << " -  " << num2 << " = " << result << endl;
	/*Multiplication*/
	result = num1 * num2;
	cout << num1 << " *  " << num2 << " = " << result << endl;
	/*Integer Division*/
	result = num1 / num2;
	cout << num1 << " /  " << num2 << " = " << result << endl;
	/*Mod*/
	result = num1 % num2;
	cout << num1 << " %  " << num2 << " = " << result << endl;

	num1 = 10;
	num2 = 3;

	result = num1 % num2;
	cout << num1 << " %  " << num2 << " = " << result << endl;

	cout << 5 / 10 << endl;
	cout << 5.0 / 10.0 << endl;


	return 0;
}
