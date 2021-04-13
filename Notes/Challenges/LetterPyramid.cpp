//Section 10 Assignment
//Letter Pyramid
/*
Write a C++ program that displays a Letter Pyramid from a user-provided std::string.
Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:
It's much easier to understand the Letter Pyramid given examples.
If the user enters the string "ABC", then your program should display:
				  A                                                                                                                    
				 ABA                                                                                                                   
				ABCBA 
If the user enters the string, "12345", then your program should display:
					1
				   121
				  12321
				 1234321
				123454321
*/
#include <iostream>	
#include <string>

using namespace std;

int main() {

	cout << "Welcome to Letter Pyramid!" << endl;

	string user_input{};
	cout << "Enter a string of characters: ";
	cin >> user_input;
	
	//For loop for height of Pyramid
	for (size_t i{ 0 }; i < user_input.length(); i++) {
		//For loop to print spaces
		int num_spaces = user_input.length() - (i + 1);
		for (int j{ 0 }; j < num_spaces; j++) {
			cout << " ";
		}
		//Left side of pyramid
		for (int j{ 0 }; j < i; j++) {
			cout << user_input.at(j);
		}
		//Center of pyramid
		cout << user_input.at(i);
		//Right side of pyramid
		for (int j = (i - 1); j >= 0; --j) {
			cout << user_input.at(j);
		}

		cout << "\n";
	}
	
	return 0;
}
