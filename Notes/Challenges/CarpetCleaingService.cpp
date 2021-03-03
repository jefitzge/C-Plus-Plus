#include <iostream>
using namespace std;
/*Section 6 challenge*/
/*
*	Frank's Carpet Cleaning Service
*	Charges:
*		$25 per small room
*		$35 per large room
*	Sales tax is 6%
*	Estimates are valid for 30 days
*
*	Prompt the user for the number of small and large rooms they would like cleaned
*	and provide an estimate such as:
*
*	Estimate for carpet cleaing service
*	Number of small rooms: 3
*	Number of large rooms: 1
*	Price per small room: $25 
*	Price per large room: $35
*	Cost: $110
*	Tax: $6.6
*	====================================
*	Total Estimate: $116.6
*	This estimate is valid for 30 days
*/

int main() {

	const double price_per_small_room{ 25.0 };
	const double price_per_large_room{ 35.0 };
	const double sales_tax{ 0.06 };
	const int estimate_expiry{ 30 };

	cout << "Hello and welcome to Frank's Carpet Cleaning Service!" << endl;
	cout << "How many small rooms would you like cleaned? ";
	int small_rooms{ 0 };
	cin >> small_rooms;

	cout << "How many large rooms would you like cleaned? ";
	int large_rooms{ 0 };
	cin >> large_rooms;

	cout << "Number of small rooms: " << small_rooms << endl;
	cout << "Number of large rooms: " << large_rooms << endl;
	cout << "Price per small room: $" << price_per_small_room << endl;
	cout << "Price per large room: $" << price_per_large_room << endl;
	cout << "Cost $" << (small_rooms * price_per_small_room) + (large_rooms * price_per_large_room) << endl;
	cout << "Tax $" << ((small_rooms * price_per_small_room) + (large_rooms * price_per_large_room)) * sales_tax << endl;
	cout << "==================================" << endl;
	cout << "Total Estimate $" << (small_rooms * price_per_small_room) + (large_rooms * price_per_large_room) + ((small_rooms * price_per_small_room) + (large_rooms * price_per_large_room)) * sales_tax << endl;
	cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

	return 0;
}
