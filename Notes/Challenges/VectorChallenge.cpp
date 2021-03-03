/*Section 7 Challenge*/
/*
*	Declare 2 empty vectors of integers named vector1 and vector2
*	Add 10 and 20 to vector 1 dynamically using .push_back()
*	Display the elements using the .at() method as well as its size using the .size() method
*	Add 100 and 200 to vector2 dynamcially using .push_back()
*	Display the elements using the .at() method as well as its size using the .size() method
*	
*	Declare an empty 2D vector called vector_2d
*	Remember that a 2D vector is a vector of vector<int>
*	
*	Add vector1 to vector_2D dynamcially using .push_back()
*	Add vector2 to vector_2D dynamcially using .push_back()
*
*	Display the elements in vector_2d using the .at() method
*
*	Change vector1.at(0) to 1000
*
*	Display the elements in vector_2d again using the .at() method
*
*	Display the elements in vector1	
*	
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector <int> vector1;
	vector <int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);
	cout << "Vector 1 Elements: " << vector1.at(0) << ", " << vector1.at(1) << endl;
	cout << "Vector 1 size: " << vector1.size() << endl;

	vector2.push_back(100);
	vector2.push_back(200);
	cout << "\nVector 2 Elements: " << vector2.at(0) << ", " << vector2.at(1) << endl;
	cout << "Vector 2 size: " << vector2.size() << endl;

	vector<vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	cout << "\n2D Vector Elements:\n" << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1)
		<< "\n"
		<< vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1)
		<< endl;

	//We see no change in 2D vector because we make a copy and arent using pointers or references 
	cout << "\nChange vector1.at(0) to 1000" << endl;
	vector1.at(0) = 1000;
	cout << "2D Vector Elements:\n" << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1)
		<< "\n"
		<< vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1)
		<< endl;
	cout << "Vector 1 Elements: " << vector1.at(0) << ", " << vector1.at(1) << endl;

	return 0;
}
