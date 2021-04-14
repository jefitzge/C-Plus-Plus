//Section 11 Passing Arrays to Functions
/*
	Since the array name evalueates to a memory location this 
	addresse is what is copied NOT the array elements.
	The function has no idea how many elements are in the array
	so we must tell the function how many elements the array has in it.

	Add const to a formal parameter to stop it from being unintentionally 
	changed.
	We can see this in the print_array function because we dont want to 
	modify the array.
	In set_array however we dont put const because we wish to change the 
	elements in the array
*/
#include <iostream>

using namespace std;
//Function protoypes
void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

/*
	We would NOT want to change the array in the print_array function
	so we add "const" to the formal parameter
*/
void print_array(const int arr[], size_t size) {
	for (size_t i{ 0 }; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void set_array(int arr[], size_t size, int value) {
	for (size_t i{ 0 }; i < size; i++) {
		arr[i] = value;
	}
}

int main() {

	int my_scores[]{ 100, 98, 90, 86, 84 };

	print_array(my_scores, 5);
	set_array(my_scores, 5, 100);
	print_array(my_scores, 5);


	return 0;
}
