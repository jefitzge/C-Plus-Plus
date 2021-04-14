/*Section 8*/
#include <iostream>
using namespace std;

int main() {

	int num1{ 10 };
	int num2{ 20 };

	//num1 = 100; //Assign 100 to num1, not saying that num1 is EQUAL to 100
	//num1 = num2 = 1000; //Chaining assignment operators
	num1 = num2;

	cout << "num1 is: " << num1 << endl;
	cout << "num2 is: " << num2 << endl;

	return 0;
}
