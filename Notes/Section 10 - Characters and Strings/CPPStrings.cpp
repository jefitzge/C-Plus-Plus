/*Section 10*/
#include <iostream>
#include <string>

using namespace std;

int main() {

	/******************************************
	*		Declaring and Intializing
	******************************************/
	//string s1;				// Empty
	//string s2{ "Joseph" };	// Joseph
	//string s3{ s2 };		// Joseph
	//string s4{ "Joe",2 };	// Jo
	//string s5{ s3,0,3 };	// Jos


	/******************************************
	*				Assignment
	******************************************/
	//string s1;
	//s1 = "C++ is nice";

	//string s2{ "Hello" };
	////cout << s2 << endl;
	//s2 = s1;
	////cout << s2 << endl;

	//string part1{ "C++" };
	//string part2{ "is a powerful" };
	//string sentence;
	//sentence = part1 + " " + part2 + " language";
	////illegal
	////sentence = "C++" + " is a powerful";

	/******************************************
	*	Accesing strings using [] and .at()
	******************************************/
	//string s1{ "Joey" };
	//cout << s1[0] << endl;		// J
	//cout << s1.at(0) << endl;	// J

	//s1[0] = 'J'; // Joey
	//s1.at(0) = 'F'; // Foey
	//cout << s1 << endl;
	////Gives each character
	//for (char c : s1) {
	//	cout << c << endl;
	//}
	////Gives the integer that represents those characters
	//for (int c : s1) {
	//	cout << c << endl;
	//}

	/******************************************
	*			Comparing Strings
	******************************************/
	//string s1{ "Apple" };
	//string s2{ "Banana" };
	//string s3{ "Kiwi" };
	//string s4{ "apple" };
	//string s5{ s1 };

	/*
	s1 == s5;		// True
	s1 == s2;		// False
	s1 != s2;		// True
	s1 < s2;		// True
	s2 > s1;		// True
	s4 < s5;		// False
	s1 == "Apple";	// True
	*/
	/******************************************
	*			Sub Strings
	******************************************/
	//string s1{ "This is a test" };

	//cout << s1.substr(0, 4) << endl;	//This
	//cout << s1.substr(5, 2) << endl;	//is
	//cout << s1.substr(10, 4) << endl;	//test
	/******************************************
	*			Sub Strings - FIND
	*	returns index or NPOS if not found
	******************************************/
	//cout << s1.find("This") << endl;
	//cout << s1.find("is") << endl;
	//cout << s1.find("test") << endl;
	//cout << s1.find("e") << endl;
	//cout << s1.find("is", 4) << endl;	//Indicate an index to start search from
	//cout << s1.find("xxx") << endl;
	/******************************************
	*			Sub Strings - ERASE/CLEAR
	******************************************/
	//cout << s1.erase(0, 5) << endl; //is a test
	//cout << s1.erase(5, 4) << endl; //is a
	//s1.clear(); //Empty String
	//cout << s1 << endl; //This prints nothing because the string has been cleared
	/******************************************
	*			Input/Getline
	******************************************/
	//string s2;
	//cin >> s2;			//Hello There
	//					//Only accepts up to the first space
	//cout << s2 << endl; //Hello

	//getline(cin, s2);//Read entire line until \n
	//cout << s2 << endl;

	//getline(cin, s2, 'x');//Read entire line until x
	//cout << s2 << endl;

	return 0;
}
