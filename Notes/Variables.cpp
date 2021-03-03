/*Section 6*/
#include <iostream>
#include <climits>
using namespace std;

int age{ 18 }; //Global Variable

int main() {

	/******************************
	*	Calculate the are of a room
	*******************************/
	cout << "enter the width of the room: ";
	int room_width{ 0 };
	cin >> room_width;

	cout << "enter the length of the room: ";
	int room_length{ 0 };
	cin >> room_length;

	cout << "the area of the room is " << room_width * room_length << endl;

	/******************************
	*	global variable practice
	*******************************/
	cout << "the voting age is " << age << endl;

	/******************************
	*		character types
	*******************************/
	char middle_initial{ 'e' };
	cout << "my middle initial is " << middle_initial << endl;

	/******************************
	*		integer types
	*******************************/
	unsigned short int exam_score{ 53 }; //same as unsigned short exam_score{ 53 };
	cout << "my exam score was: " << exam_score << endl;

	int countries_visited{ 65 }; 
	cout << "i have vistied " << countries_visited << " countries!" << endl;

	long people_in_florida{ 20610000 };
	cout << "there are about " << people_in_florida << " people in florida." << endl;

	long people_on_earth{ 7'600'000'00 };
	cout << "there are approximately " << people_on_earth << " people on earth." << endl;

	long long distance_to_alpha_centauri{ 9'461'000'000'000 };
	cout << "the distance to aplha centauri is " << distance_to_alpha_centauri << "" << endl;

	/******************************
	*	floating point types
	*******************************/
	float car_payment{ 401.23 };
	cout << "my car payment is " << car_payment << endl;

	double pi{ 3.14159 };
	cout << "pi is " << pi << endl;

	long double big_num{ 2.7e120 };
	cout << big_num << " is a very large number" << endl;

	/******************************
	*	boolean type
	*******************************/
	bool game_over{ false };
	cout << "the value of game over is " << game_over << endl; //prints out 0 because in c++ 0 is false and anything is else is true

	/******************************
	*	overlfow example
	*******************************/
	short value1{ 30000 };
	short value2{ 1000 };
	short product{ value1 * value2 };
	cout << "the sum of " << value1 << " and " << value2 << " is " << product << endl;

	/********************************
	*	sizeof operator
	* note you need to include climits
	*********************************/
	cout << "sizeof information" << endl;
	cout << "===========================" << endl;
	cout << "char: " << sizeof(char) << " bytes" << endl;
	cout << "int: " << sizeof(int) << " bytes" << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
	cout << "short: " << sizeof(short) << " bytes" << endl;
	cout << "long: " << sizeof(long) << " bytes" << endl;
	cout << "long long: " << sizeof(long long) << " bytes" << endl;
	cout << "===========================" << endl;
	cout << "float: " << sizeof(float) << " bytes" << endl;
	cout << "double: " << sizeof(double) << " bytes" << endl;
	cout << "long double: " << sizeof(long double) << " bytes" << endl;

	//use values in climits
	cout << "===========================" << endl;
	cout << "minimum value" << endl;
	cout << "char " << CHAR_MIN << endl;
	cout << "int " << INT_MIN << endl;
	cout << "short " << SHRT_MIN << endl;
	cout << "long " << LONG_MIN << endl;
	cout << "long long " << LLONG_MIN << endl;

	cout << "===========================" << endl;
	cout << "max value" << endl;
	cout << "char " << CHAR_MAX << endl;
	cout << "int " << INT_MAX << endl;
	cout << "short " << SHRT_MAX << endl;
	cout << "long " << LONG_MAX << endl;
	cout << "long long " << LLONG_MAX << endl;

	cout << "===========================" << endl;
	cout << "sizeof using variable names" << endl;

	int age{ 23 };
	cout << "age is " << sizeof(age) << " bytes" << endl;
	//or
	cout << "age is " << sizeof age << " bytes" << endl;

	double wage{ 15.65 };
	cout << "wage is " << sizeof(wage) << " bytes" << endl;
	//or
	cout << "wage is " << sizeof wage << " bytes" << endl;

	/******************************
	*	     Constants
	*******************************/
	//Declared constants
	/*const double pi{ 3.14159 };
	const int months_in_year{ 12 };*/
	//Defined constants (dont use in modern c++)
	/*#define pi 3.1415926;*/

	return 0;
}
