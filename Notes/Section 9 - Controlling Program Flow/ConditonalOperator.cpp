/*Section 9*/
#include <iostream>
using namespace std;

int main() {

	//int num{ 0 };

	//cout << "Enter an integer: ";
	//cin >> num;

	//Using if else to see if a number is even
	//if (num % 2 == 0) {
	//	cout << num << " is even" << endl;
	//}
	//else
	//	cout << num << " is odd" << endl;

	//Using conditional
	//cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

	int num1{ 0 };
	int num2{ 0 };

	cout << "Enter two numbers seperated by a space: ";
	cin >> num1 >> num2;

	if (num1 != num2) {
		cout << "Largest " << ((num1 > num2) ? num1 : num2) << endl;
		cout << "Smallest " << ((num1 < num2) ? num1 : num2) << endl;
	}
	else {
		cout << "The numbers are the same!" << endl;
	}



	return 0;
}
