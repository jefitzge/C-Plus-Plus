/*Section 9*/
/*
	NOTE: Once a match occurs ALL FOLLOWING case sections will be executed UNTIL a break is reached 
	NOTE: Provide a break to each case

	//The control expression must evalute to integral type or enumeration type
	switch (integer_control_expr) {
		case expression_1: statement_1; break;
		case expression_2: statement_2; break;
		. . . 
		case expression_n: statement_n; break;
		defualt: statement_defualt;
	}

	Example:
	switch (selection) {
		case '1':	cout << "1 selected";
					break;
		case '2':	cout << "2 selected"; 
					break;
		case '3':	
		case '4':	cout << "3 or 4 selected"; //Acts like an OR
					break;
		defualt:	cout << "1, 2, 4, and 3 not selected";
	}

	Example with Enumeration
	enum Color {
		red, blue, green
	};

	Color screen_color{ green };
	switch (screen_color) {
		case red:	cout << "red";
					break;
		case blue:	cout << "blue";
					break;
		case green:	cout << "green"
					break;
		defualt:	cout << "Should never execute";
	}

*/

#include <iostream>
using namespace std;

int main() {

	/***************************
			Basic Switch
	***************************/
	//Ask the user the letter grade the expect to get on the test
	//char letter_grade{};
	//
	//cout << "Enter the letter grade you expect on an exam: ";
	//cin >> letter_grade;

	//switch (letter_grade) {
	//case 'A':
	//case 'a': 
	//	cout << "You need a 90 or above" << endl;
	//	break;
	//case 'B':
	//case 'b':
	//	cout << "You need a 80-89 for a B" << endl;
	//	break;
	//case 'C':
	//case 'c':
	//	cout << "You need a 70-79 for a C" << endl;
	//	break;
	//case 'D':
	//case 'd':
	//	cout << "You need a 60-69 for a D" << endl;
	//	break;
	//case 'F':
	//case 'f': {
	//	char confirm{};
	//	cout << "Are you sure? Y/N " << endl;
	//	cin >> confirm;
	//	if (confirm == 'y' || confirm == 'Y')
	//		cout << "OK, go study..." << endl;
	//	else if (confirm == 'n' || confirm == 'N')
	//		cout << "Good, go study!" << endl;
	//	else
	//		cout << "Illegal choice" << endl;
	//	break;
	//}
	//default: cout << "Sorry thats not a valid grade" << endl;
	//}


	/***************************
		Enumeration Switch
	***************************/
	//Creating a direction type
	enum Direction {
		left, right, up, down
	};

	Direction heading{ left };

	switch (heading) {
	case left: cout << "going left" << endl;
		break;
	case right: cout << "going right" << endl;
		break;
	case up: cout << "going up" << endl;
		break;
	case down: cout << "going down" << endl;
		break;
	default: cout << "I dont know where Im going!" << endl;
	}

	return 0;
}
