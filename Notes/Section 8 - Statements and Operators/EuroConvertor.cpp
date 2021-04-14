/*Section 8 Converting Euros to Dollars*/
#include <iostream>
using namespace std;

int main() {

	const double usd_per_eur{ 1.9 };

	cout << "Welcome to the EUR to USD converter" << endl;
	cout << "Enter the value in EUR: ";

	double euros{ 0.0 };
	double dollars{ 0.0 };

	cin >> euros;

	dollars = euros * usd_per_eur;

	cout << euros << " is equivilent to " << dollars << " dollars" << endl;

	return 0;
}
