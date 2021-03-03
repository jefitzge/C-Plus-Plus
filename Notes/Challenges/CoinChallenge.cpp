/*Section 8 Challenge*/
/*
*
*	Write a program that asks the user to enther the following:
*	An integer representing the number of cents   
*
*	You may assume that the number of cents entered is greater than or equal to zero
*	The program should then display how to provide that change to the user
*	
*	In the US:
*		1 dollar is 100 cents
*		1 quarter is 25 cents
*		1 dime is 10 cents
*		1 nickel is 5 cents
*		1 penny is 1 cent
*
*	Here is a sample run
*	
*	Enter an amount in cents: 92
*
*	dollars: 0
*	quarter: 3
*	dimes: 1
*	nickel: 1
*	penny: 2
*
*/

#include <iostream>
using namespace std;

int main() {

	const int dollar_value{ 100 };
	const int quarter_value{ 25 };
	const int dime_value{ 10 };
	const int nickel_value{ 5 };
	const int penny_value{ 1 };

	int cents{ 0 };
	cout << "Enter an amount in cents: "; 
	cin >> cents;

	int dollars{ 0 };
	int quarters{ 0 };
	int dimes{ 0 };
	int nickels{ 0 };
	int pennies{ 0 };

	//Calculate change needed
	dollars = cents / dollar_value;
	cents %= dollar_value;

	quarters = cents / quarter_value;
	cents %= quarter_value;

	dimes = cents / dime_value;
	cents %= dime_value;

	nickels = cents / nickel_value;
	cents %= nickel_value;

	pennies = cents / penny_value;
	/*cents %= pennies;*/


	//Print out change to user
	cout << "Heres your change!" << endl;
	cout << "===============================" << endl;
	cout << "Dollars : " << dollars << endl;
	cout << "Quarters : " << quarters << endl;
	cout << "Dimes : " << dimes << endl;
	cout << "Nickels : " << nickels << endl;
	cout << "Pennies : " << pennies << endl;

	int x = 10, y = 3, z = 6;
	cout << (x == y) << " ";
	cout << (z <= x) << " ";
	cout << (y != z) << " ";
	cout << (x > y && z < x) << " ";
	cout << (y < x && z < x) << " ";
	cout << (x < y || z < 0) << endl;

	return 0;
}
