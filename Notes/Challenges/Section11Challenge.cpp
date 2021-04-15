//Section 11 Challenge
/*
	Recall the challenge from section 9. Your challenge for section 11 is to modularize 
	your solution to section 9 challenge by refactoring your solution so that is uses functions.

	Hints:
		-Create functions for each major function
		-Keep the functions small
		-Remember the Boss/Worker analogy
		-Keep the vector decleration in the main function and pass the vecotr object 
		to any function that requires it

	DO NOT move the vector object outside the main and make it a global variable

		-You can start by defining a function that displays the menu
		-You can then define a function that reads the selection from the user and returns it in uppercase
		-Create functions for each menu option
		-Create functions that display the list of numbers, calculates the mean and so forth
*/

#include <iostream>
#include <vector>
using namespace std;

//Function Prototypes
void display_menu();
char get_user_selection();
void print_numbers(const vector<int>& v);
void add_number(vector<int>& v);
void calc_mean(const vector<int>& v);
void display_smallest_number(const vector<int>& v);
void display_largest_number(const vector<int>& v);
void find_number(const vector<int>& v);
void clear_list(vector<int>& v);

//Display menu to user
void display_menu() {
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
}

char get_user_selection() {
	char select{};
	cout << "Enter your choice : ";
	cin >> select;
	return toupper(select);
}
//Print List of numbers
void print_numbers(const vector<int>& v) {
	if (v.size() == 0) {
		cout << "[] - the list is empty" << endl;
	}
	else {
		cout << "[ ";
		for (unsigned i{ 0 }; i < v.size(); i++) {
			cout << v.at(i) << " ";
		}
		cout << "]" << endl;
	}
}
//Add a number to the list
void add_number(vector<int>& v) {
	//Prompt user for integer to add to vector
	int add_me{ 0 };

	cout << "Please enter an integer: ";
	cin >> add_me; //NOTE: if input isnt an integer program goes into infinte loop

	//Add integer to the vector
	v.push_back(add_me);
	//Display that the integer was added
	cout << add_me << " added" << endl;
}
//Calculate the mean of all the numbers in the list
void calc_mean(const vector<int>& v) {
	if (v.size() == 0) {
		cout << "Unable to calculate the mean - no data" << endl;
	}
	else {
		//Calculate the mean
		double mean{ 0.0 };
		int sum{ 0 };
		for (unsigned i{ 0 }; i < v.size(); i++) {
			sum += v.at(i);
		}
		//cout << "The sum is " << sum << endl; //Debugging
		mean = static_cast<double>(sum) / v.size();

		//Display the mean
		cout << "The mean is " << mean << endl;
	}
}
//Display the smallest number in the list
void display_smallest_number(const vector<int>& v) {
	if (v.size() == 0) {
		cout << "Unable to determine the smallest number - list empty" << endl;
	}
	else {
		//Store the first element of the vector in smallest
		int smallest{ v.at(0) };
		//Find the smallest
		for (unsigned i{ 0 }; i < v.size(); i++) {
			if (v.at(i) < smallest) {
				smallest = v.at(i); //Update smallest
			}
			else {
				continue;
			}
		}
		cout << "The smallest number is: " << smallest << endl;
	}
}
//Display the largest number in the list
void display_largest_number(const vector<int>& v) {
	if (v.size() == 0) {
		cout << "Unable to determine the largest number - list empty" << endl;
	}
	else {
		//Store the first element of the vector in smallest
		int largest{ v.at(0) };
		//Find the largest
		for (unsigned i{ 0 }; i < v.size(); i++) {
			if (v.at(i) > largest) {
				largest = v.at(i); //Update largest
			}
			else {
				continue;
			}
		}
		cout << "The largest number is: " << largest << endl;
	}
}
//Find a given number in the list and how many times it occurs
void find_number(const vector<int>& v) {
	//Prompt user for integer to find
	int find_me{ 0 };
	cout << "Enter the number you want to find: ";
	cin >> find_me;

	//Search for integer in list
	//Check if list is empty
	if (v.size() == 0) {
		cout << "Unable to find " << find_me << " - list is empty" << endl;
	}
	else {
		//Search the list for "find_me" and increment count each time "find_me" is seen in the list
		int count{ 0 };
		for (unsigned i{ 0 }; i < v.size(); i++) {
			if (v.at(i) == find_me) {
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
//Clear the list of all elements
void clear_list(vector<int>& v) {
	v.clear();
	cout << "Clearing list..." << endl;
}

int main() {
	cout << boolalpha;
	//Vector of ints that user will put data into
	vector<int> vector_of_ints{};
	char selection{};

	do
	{
		display_menu();
		selection = get_user_selection();

		switch (selection)
		{
		case 'P': print_numbers(vector_of_ints);
			break;
		case 'A': add_number(vector_of_ints);
			break;
		case 'M': calc_mean(vector_of_ints);
			break;
		case 'S': display_smallest_number(vector_of_ints);
			break;
		case 'L': display_largest_number(vector_of_ints);
			break;
		case 'F': find_number(vector_of_ints);
			break;
		case 'C': clear_list(vector_of_ints);
			break;
		case 'Q': cout << "Goodbye" << endl;
			break;
		default: cout << "Uknown selection, please try again" << endl;
			break;
		}

	} while (selection != 'Q');


	return 0;
}
