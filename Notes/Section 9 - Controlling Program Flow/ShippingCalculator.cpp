/*Section 9*/
/*
	Shipping cost calculator
	Ask the user for the dimension in inches
	length, width, height - these should be integers

	All dimensions must be 10 inches or less or we cannot ship it
	
	Base cost $2.50
	If package volume is greater than 100 cubic inches there is a 10% surcharge
	If package volume is greater than 500 cubic inches there is a 25% surcharge
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int length{ 0 };
	int width{ 0 };
	int height{ 0 };

	const int max_dim{ 10 };
	const int size1_volume{ 100 };
	const int size2_volume{ 500 };
	const double base_cost{ 2.50 };
	const double size1_surcharge{ 0.1 };
	const double size2_surcharge{ 0.25 };

	cout << "Welcome to the shipping cost calculator!" << endl;
	cout << "Enter the length, width and height of the package in inches seperated by spaces: ";
	cin >> length >> width >> height;

	if (length > max_dim || width > max_dim || height > max_dim) {
		//Reject package for being too large
		cout << "Sorry the package dimensions you entered are too large for us to ship!" << endl;
	}
	else {
		//Calculate volume of package
		int volume{ length * width * height };
		cout << "The volume of the package is: " << volume << endl;

		//Calculate cost of package
		double cost_to_ship{ 0 };

		cost_to_ship = base_cost;

		if (volume > 100 && volume <= 500) {
			cost_to_ship += cost_to_ship * size1_surcharge;
		}
		else if (volume > 500) {
			cost_to_ship += cost_to_ship * size2_surcharge;	
		}
		//Display the cost to ship
		cout << fixed << setprecision(2); //This makes it display only two decimal places 
		cout << "The total cost to ship your package is $" << cost_to_ship << endl;
	}

	return 0;
}
