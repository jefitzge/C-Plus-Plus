/*Section 8*/
#include <iostream>
using namespace std;

int main() {
	int num{0};
	const int lower{ 10 };
	const int upper{ 20 };

	cout << boolalpha;

	//Determine if a entered integer is between two other integers
	//Assume lower < upper
	//cout << "Enter an integer - the bounds are " << lower << " " << upper << " : ";
	//cin >> num;

	//bool within_bounds{ false };

	//within_bounds = (num > lower && num < upper);
	//cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl;


	//Determine if an entered integer is outside two other integers
	//Asssume lower < upper
	//cout << "Enter an integer - the bounds are " << lower << " " << upper << " : ";
	//cin >> num;

	//bool outside_bounds{ false };

	//outside_bounds = (num < lower || num > upper);
	//cout << num << " is outside" << lower << " and " << upper << " : " << outside_bounds << endl;


	//Determine if an entered integer is exactly on the bounds
	//Asssume lower < upper
	//cout << "Enter an integer - the bounds are " << lower << " " << upper << " : ";
	//cin >> num;

	//bool exact_bounds{ false };

	//exact_bounds = (num == lower || num == upper);
	//cout << num << " is exactly on one of the bounds " << lower << " or " << upper << " : " << exact_bounds << endl;

	//Determin if we need to wear a coat based on temperature and wind speed
	bool wear_coat{ false };
	double temp{ 0.0 };
	int wind_speed{ 0 };

	const int wind_speed_for_coat{ 25 }; //Wind over this value requires a coat
	const double temp_for_coat{ 45 }; //Temperature below this requires a coat 

	cout << "Enter the temperature(F): ";
	cin >> temp;
	cout << "Enter the wind speed(mph): ";
	cin >> wind_speed;

	wear_coat = (temp < temp_for_coat || wind_speed > wind_speed_for_coat);
	cout << "You should wear a coat: " << wear_coat << endl;

	return 0;
}
