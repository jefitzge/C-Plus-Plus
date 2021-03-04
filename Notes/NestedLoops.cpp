/*Section 9*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

	//Multiplication table
	//The inner loop, loops 10 times for every 1 time the outer loop, loops
	//The inner loop "loops faster" then the outer loop
	//for (int i{ 1 }; i <= 10; i++) {
	//	for (int j{ 1 }; j <= 10; j++) {
	//		cout << i << " * " << j << " = " << i * j << endl;
	//	}//End inner
	//	cout << "------------------------" << endl;
	//}//End outer

	//Histogram
	int num_items{ 0 };
	cout << "How many data items do you have? ";
	cin >> num_items;

	vector<int> data{};

	//Add data to the vector
	//Ask user to enter the data and push it into the vector
	for (int i{ 1 }; i <= num_items; i++) {
		int data_item{ 0 };
		cout << "Enter data item " << i << ": ";
		cin >> data_item;
		data.push_back(data_item);
	}

	//Display Histogram using dashes, every fifth dash display "*" for easier reading of chart
	cout << "Displaying Histogram with dashes" << endl;
	for (auto val : data) {
		for (int i{ 1 }; i <= val; i++) {
			if (i % 5 == 0) {
				cout << "*";
			}
			else {
				cout << "-";
			}
		} //End inner 
		cout << "\n";
	}//End outer

	return 0;
}
