//Section 11 Function Parameters
/*
In all examples the value passed into the functions is made into a copy that is used and manipulated 
locally inside the function. This local value does not alter the original value. This property is seen 
in the cout statements where the value passed in remains the same.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
//Function prototypes
void pass_by_value_1(int num);
void pass_by_value_2(string s);
void pass_by_value_3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value_1(int num) {
	num = 1000;
}

void pass_by_value_2(string s) {
	s = "Changed";
}

void pass_by_value_3(vector<string> v) {
	v.clear(); //delete all vector elements 
}

void print_vector(vector<string> v) {
	for (auto s : v) {
		cout << s << " ";
	}
	cout << endl;
}

int main() {

	int num{ 10 };
	int another_num{ 20 };

	cout << "num before calling pass_by_value_1: " << num << endl;
	pass_by_value_1(num);
	cout << "num after calling pass_by_value_1: " << num << endl;

	cout << "another_num before calling pass_by_value_1: " << another_num << endl;
	pass_by_value_1(another_num);
	cout << "another_num after calling pass_by_value_1: " << another_num << endl;

	string name{ "Frank" };
	cout << "name before calling pass_by_value_2: " << name << endl;
	pass_by_value_2(name);
	cout << "name after calling pass_by_value_2: " << name << endl;

	vector<string> stooges{ "Larry","Moe","Curly" };
	cout << "stooges before calling pass_by_value_3: ";
	print_vector(stooges);
	pass_by_value_3(stooges);
	cout << "stooges after calling pass_by_value_3: ";
	print_vector(stooges);

	return 0;
}
