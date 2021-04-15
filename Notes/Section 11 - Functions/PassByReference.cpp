//Section 11 Pass by Reference
/*
	Sometimes we want to be able to change the actual parameter from within the function body.
	In order to achieve this, we need the location or address of the actual parameter.
	We saw how this is the effect with array, but what about other variable types?
	We can use reference parameters to tell the compiler to pass in a reference to the actual parameter.
	The formal parameter will now be an alias for the actual parameter.
	This link further explains reference variables:
	https://www.learncpp.com/cpp-tutorial/references/#:~:text=A%20reference%20is%20a%20type,ll%20discuss%20in%20this%20lesson.
*/

#include <iostream>
#include <string> 
#include <vector>

using namespace std;

//Function prototypes
void pass_by_ref1(int& num);
void pass_by_ref2(string& s);
void pass_by_ref3(vector<string>& v);
void print_vector(const vector<string>& v);

void pass_by_ref1(int& num) {
	num = 1000;
}

void pass_by_ref2(string& s) {
	s = "Changed";
}

void pass_by_ref3(vector<string>& v) {
	v.clear(); //delete all the elements 
}

void print_vector(const vector<string>& v) {
	for (auto s : v) {
		cout << s << " ";
	}
	cout << endl;
}

int main() {

	int num{ 10 };
	int another_num{ 20 };

	cout << "num before calling pass_by_ref1: " << num << endl;
	pass_by_ref1(num);
	cout << "num after calling pass_by_ref1: " << num << endl;

	cout << "another_num before calling pass_by_ref1: " << another_num << endl;
	pass_by_ref1(another_num);
	cout << "another_num after calling pass_by_ref1: " << another_num << endl;

	string name{ "Frank" };
	cout << "name before calling pass_by_ref1: " << name << endl;
	pass_by_ref2(name);
	cout << "name after calling pass_by_ref1: " << name << endl;

	vector<string> stooges{ "Larry", "Moe", "Curly" };
	cout << "\nstooges before calling pass_by_ref3: ";
	print_vector(stooges);
	pass_by_ref3(stooges);
	cout << "\nstooges after calling pass_by_ref3: ";
	print_vector(stooges);



	return 0;
}
