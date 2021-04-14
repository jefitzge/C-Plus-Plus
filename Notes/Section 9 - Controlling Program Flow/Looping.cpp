/*Section 9*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

	/****************************
	*		For Loop
	****************************/
	/*	Basic for loop sytnax
		for (intilization; condition; increment/decrement){
			statement(s);
		}
	*/

	//for (int i{ 1 }; i <= 10; i++) {
	//	cout << i << endl;
	//}

	//for (int i{ 1 }; i <= 10; i+=2) {
	//	cout << i << endl;
	//}

	//for (int i{ 10 }; i > 0; i--) {
	//	cout << i << endl;
	//}
	//cout << "Blastoff" << endl;
	//for (int i{ 10 }; i <= 100; i+=10) {
	//	cout << i << endl;
	//}

	//for (int i{ 10 }; i <= 100; i+=10) {
	//	if (i % 15 == 0) {
	//		cout << i << endl;
	//	}
	//}

	//for (int i{ 1 }, j{ 5 }; i <= 5; i++, j++) {
	//	cout << i << " + " << j << " = " << i+j << endl;
	//}

	//Print a table from 1-100 with 10 numbers in each row
	//for (int i{ 1 }; i <= 100; i++) {
	//	cout << i;
	//	if (i % 10 == 0) {
	//		cout << endl;
	//	}
	//	else {
	//		cout << " ";
	//	}
	//}

	//Print a table from 1-100 with 10 numbers in each row using conditional
	//for (int i{ 1 }; i <= 100; i++) {
	//	cout << i << ((i % 10 == 0) ? "\n" : " ");
	//	//OR
	//	/*cout << i;
	//	cout << ((i % 10 == 0) ? "\n" : " ");*/
	//}

	//Loop through a vector
	//vector<int> nums{ 10,20,30,40,50 };
	//for (unsigned i{ 0 }; i < nums.size(); i++) {
	//	cout << nums[i] << endl;
	//}


	/****************************
	*	Range-Based For Loop
	****************************/
	/*	Basic syntax
		for (var_type var_name: sequence){
			statement(s); //can use var_name
		}

		NOTE: Saying auto tells the compiler to figure out what the type is based on the collection
	*/

	//int scores[]{ 10, 20, 30 };
	//for (auto score : scores){
	//	cout << score << endl;
	//}

	//vector<double> temps{ 87.2, 77.1, 80.0, 72.5 };
	//double average_temps{};
	//double total{};

	//for (auto temp : temps) {
	//	total += temp;
	//}
	//if (temps.size() != 0) {
	//	average_temps = total / temps.size();
	//	cout << average_temps << endl;
	//}
	//else {
	//	cout << "Error, there are no temperatures in the vector temps!" << endl;
	//}

	//for (auto c : "This is a test") {
	//	if(c != ' ')
	//		cout << c;
	//}

	//for (auto c : "This is a test") {
	//	if (c == ' ')
	//		cout << "\t";
	//	else
	//		cout << c;
	//}

	/****************************
	*	While Loop
	****************************/
	/* Basic Syntax
		while (expression){
			statement(s);
		}
	*/
	//int num{ 0 };
	//cout << "Enter a positive integer - start the countdown! ";
	//cin >> num;

	//while (num > 0) {
	//	cout << num << endl;
	//	num--;
	//}
	//cout << "Blastoff!!!" << endl;

	//int num{ 0 };
	//cout << "Enter a positive integer to count up to ";
	//cin >> num;

	//int i{ 1 };
	//while (num >= i) {
	//	cout << i << endl;
	//	i++;
	//}

	//int num{ 0 };

	//cout << "Enter an intger less than 100: ";
	//cin >> num;

	//while (num >= 100) {
	//	cout << "Enter an intger less than 100: ";
	//	cin >> num;
	//}
	//cout << "Thanks" << endl;

	//bool done{ false };
	//int num{ 0 };
	//
	//while (!done) {
	//	cout << "Enter an integer between 1 and 5: ";
	//	cin >> num;
	//	if (num <= 1 || num >= 5) {
	//		cout << "That number is not between 1 and 5" << endl;
	//	}
	//	else {
	//		cout << "Thanks" << endl;
	//		done = true;
	//	}
	//}

	/****************************
	*	do-While Loop
	****************************/
	/* Basic Syntax 
		do { 
			statments;
		} while (expression);
	*/
	char selection{};
	do {
		cout << "\n------------------------" << endl;
		cout << "1. Do this" << endl;
		cout << "2. Do that" << endl;
		cout << "3. Do something else" << endl;
		cout << "Q. Quit" << endl;
		cout << "\nEnter your selection: ";
		cin >> selection;

		if (selection == '1') {
			cout << "You choose 1 - doing this" << endl;
		}
		else if (selection == '2') {
			cout << "You choose 2 - doing that" << endl;
		}
		else if (selection == '3') {
			cout << "You choose 3 - do something else" << endl;
		}
		else if (selection == 'q' || selection == 'Q') {
			cout << "Goodbye" << endl;
		}
		else {
			cout << "Unknown option, try again" << endl;
		}

	} while (selection != 'q' && selection != 'Q');



	return 0;
}
