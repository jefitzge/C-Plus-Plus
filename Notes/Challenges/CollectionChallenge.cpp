/*Section 9 Challenge*/
// This challenge is about using a collection(list) of integers and allowing the user to select options from a menu
// to perform operations on the list
// Your program should displa a menu options to the user as follows:
//
// P - Print numbers
// A - Add a number
// M - Display mean of the numbers
// S - Display the smallest number
// L - Display the largest number
// Q - quit
// Enter your choice:
//
// The program should only accept valid choices from the user both upper and lowercase selections should be allowed.
// If an illegal choice is made you should display, "Uknown selection, please try again"
// and the menu options should be displayed again
//
// If the user enters 'P' or 'p' you should display all of the elements(ints) in the list
// If the list is empty you shoudl display "[] - the list is empty"
// If the list is not empty then all the list elements should be displated inside the square brackets seperated by a space
// For example, [1 2 3 4 5]
//
// If the user eneters 'A' or 'a' then you should prompt the user for an integer to add to the list which you will add to the list and
// display it was added. For example if the user eneters 5 you shoudl display "5 added".
// Duplicate list entries are OK
//
// If the user enters 'M' or 'm' you should calculate the mean or average of the elements in the list and display it
// If the list is empty you should display, "Unable to calculate the mean - no data"
//
// If the user enters 'S' or 's' you should display the smallest element in the list. For example if the list contains [2 4 5 1]
// you should display "The smalles number is 1". If the list is empty you should display
// "Unable to determine the smallest number - list empty"
//
// If the user enters 'L' or 'l' you should display the largest element in the list. For example if the list contains [2 5 4 1]
// you should display "The largest number is 5" If the list is empty you should display,
// "Unable to detemine the largest number - list empty"
//
// If the user enters 'Q' or 'q' then you should display "Goodbye" and the program should terminate.
//
// Hint: Use vectors
//
// Additional functionality if you wish to extend this program
//
//	-search for a number in the list and if found display the number of times it occurs in the list
//	-clearing out the list (make it empty again)(Hint: the vector class has a .clear() method)
//	-dont allow duplicate entries
//	-come up with your own ideas!


#include <iostream>
#include <vector>
using namespace std;

int main() {
	//NOTE: This could all be optimized with functions
	//User selction
	char selection{};
	//Vector of ints that user will put data into
	vector<int> vector_of_ints{};
	cout << boolalpha;
	do {
		//Display menu to user
		cout << "\n";
		cout << "P - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "F - Find a number" << endl; //Additional Challenge
		cout << "C - Clear the list" << endl; //Additional Challenge
		cout << "Q - quit" << endl;
		cout << "---------------------------------" << endl;
		cout << "Enter your choice : ";
		cin >> selection; //Get user input

		//Perform menu selections (Alternatively a switch statement could be used)
		if (selection == 'P' || selection == 'p') {
			//Check if list is empty
			if (vector_of_ints.size() == 0) {
				cout << "[] - the list is empty" << endl;
			}
			else {
				cout << "[ ";
				for (unsigned i{ 0 }; i < vector_of_ints.size(); i++) {
					cout << vector_of_ints.at(i) << " ";
				}
				cout << "]" << endl;
			}

		}
		else if (selection == 'A' || selection == 'a') {
			//Prompt user for integer to add to vector
			int add_me{ 0 };
			cout << "Please enter an integer: ";
			cin >> add_me; //NOTE: if input isnt an integer program goes into infinte loop

			//Add integer to the vector
			vector_of_ints.push_back(add_me);
			//Display that the integer was added
			cout << add_me << " added" << endl;
		}
		else if (selection == 'M' || selection == 'm') {
			if (vector_of_ints.size() == 0) {
				cout << "Unable to calculate the mean - no data" << endl;
			}
			else {
				//Calculate the mean
				double mean{ 0.0 };
				int sum{ 0 };
				for (unsigned i{ 0 }; i < vector_of_ints.size(); i++) {
					sum += vector_of_ints.at(i);
				}
				//cout << "The sum is " << sum << endl; //Debugging
				mean = static_cast<double>(sum) / vector_of_ints.size();

				//Display the mean
				cout << "The mean is " << mean << endl;
			}
		}
		else if (selection == 'S' || selection == 's') {
			if (vector_of_ints.size() == 0) {
				cout << "Unable to determine the smallest number - list empty" << endl;
			}
			else {
				//Store the first element of the vector in smallest
				int smallest{ vector_of_ints.at(0) };
				//Find the smallest
				for (unsigned i{ 0 }; i < vector_of_ints.size(); i++) {
					if (vector_of_ints.at(i) < smallest) {
						smallest = vector_of_ints.at(i); //Update smallest
					}
					else {
						continue;
					}
				}
				cout << "The smallest number is: " << smallest << endl;
			}
		}
		else if (selection == 'L' || selection == 'l') {
			if (vector_of_ints.size() == 0) {
				cout << "Unable to determine the largest number - list empty" << endl;
			}
			else {
				//Store the first element of the vector in smallest
				int largest{ vector_of_ints.at(0) };
				//Find the largest
				for (unsigned i{ 0 }; i < vector_of_ints.size(); i++) {
					if (vector_of_ints.at(i) > largest) {
						largest = vector_of_ints.at(i); //Update largest
					}
					else {
						continue;
					}
				}
				cout << "The largest number is: " << largest << endl;
			}

		}
		else if (selection == 'F' || selection == 'f') {
			//Prompt user for integer to find
			int find_me{ 0 };
			cout << "Enter the number you want to find: ";
			cin >> find_me;

			//Search for integer in list
			//Check if list is empty
			if (vector_of_ints.size() == 0) {
				cout << "Unable to find " << find_me << " - list is empty" << endl;
			}
			else {
				//Search the list for "find_me" and increment count each time "find_me" is seen in the list
				int count{ 0 };
				for (unsigned i{ 0 }; i < vector_of_ints.size(); i++) {
					if (vector_of_ints.at(i) == find_me) {
						count++;
					}
					else {
						continue;
					}
				}
				//Check to see if find_me was found by seeing if count changed
				if (count > 0) {
					cout << " Your number " << find_me << " is found " << count << " time(s) in the list" << endl;
				}
				else {
					cout << find_me << " is not in the list" << endl;
				}
			}
		}
		else if (selection == 'C' || selection == 'c') {
			vector_of_ints.clear();
			cout << "Clearing list..." << endl;
		}
		else if (selection == 'Q' || selection == 'q') {
			cout << "Goodbye" << endl;
		}
		else {
			cout << "Uknown selection, please try again" << endl;
		}

	} while (selection != 'Q' && selection != 'q');

	return 0;
}
