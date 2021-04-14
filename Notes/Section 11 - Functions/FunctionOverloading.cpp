//Section 11 Function Overloading
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
	cout << "Printing int: " << num << endl;
}

void print(double num) {
	cout << "Printing double: " << num << endl;
}

void print(string s) {
	cout << "Printing string: " << s << endl;
}

void print(string s1, string s2) {
	cout << "Print two strings: " << s1 << " " << s2 << endl;
}

void print(vector<string> v) {
	cout << "Printing vector of strings: ";
	for (auto s: v) {
		cout << s + " ";
	}
	cout << endl;
}

int main() {

	print(100);					//int
	print('A');					//Character is always promoted to an int, Should be ASCII 65

	print(123.5);				//double
	print(123.3F);				//float is promoted to a double

	print("C-style String");	//C-stlye string is always promoted to C++ string

	string s{ "C++ String" };
	print(s);

	print("C-style String", s);	//The first argument gets converted to a C++ string

	vector<string> stooges{ "Larry", "Moe", "Curly" };
	print(stooges);

	return 0;
}
