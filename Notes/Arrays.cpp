/*Section 7 Arrays*/
/*	
*	Declaring an Array
*		Element_type array_name [constant number of elements];
*		examples:
*			int test_scores [10];
*			int high_scores [100];
*	
*			const double days_in_year{ 365 };
*			double hi_temperatures [days_in_year];	
*
*	Intializing Arrays
*		Element_type array_name [number of elements] {init list};
*		examples:
*			int test_scores [5] {69, 75, 99, 85, 93};
*			int high_scores [100] {3 ,5}; //init to 3, 5 and remaining to 0
*
*			const double days_in_year{ 365 };
*			double hi_temperatures [days_in_year] {0}; //init all to 0
*	
*			int another_array [] {1,2,3,4,5}; //size automatically calcualted;
*
*	Multi-dimensional arrays
*		Element_type array_name [dim1_size][dim2_size];
*		examples:
*			const int rows {3};
*			const int cols {4};
*			int movie_ratings [rows][cols];
*		
*/
#include <iostream>
using namespace std;

int main() {
	/*Array Practice*/
	char vowels[]{ 'a', 'e', 'i', 'o', 'u' };
	cout << "The first vowel is " << vowels[0] << endl;
	cout << "The last vowel is " << vowels[4] << endl;

	double hi_temps[]{ 99.0, 94.3, 95.7 };
	cout << "The first high temperature is " << hi_temps[0] << endl;

	hi_temps[0] = 107.6;
	cout << "The first high temperature is now " << hi_temps[0] << endl;


	int test_scores[5]{ 100, 90, 60, 80, 95 };	

	cout << "First score at index 0: " << test_scores[0] << endl;
	cout << "Second score at index 1: " << test_scores[1] << endl;
	cout << "Third score at index 2: " << test_scores[2] << endl;
	cout << "Fourth score at index 3: " << test_scores[3] << endl;
	cout << "Firth score at index 4: " << test_scores[4] << endl;

	cout << "Enter 5 test scores: ";
	cin >> test_scores[0];
	cin >> test_scores[1];
	cin >> test_scores[2];
	cin >> test_scores[3];
	cin >> test_scores[4];

	cout << "\nThe Updated array" << endl;
	cout << "First score at index 0: " << test_scores[0] << endl;
	cout << "Second score at index 1: " << test_scores[1] << endl;
	cout << "Third score at index 2: " << test_scores[2] << endl;
	cout << "Fourth score at index 3: " << test_scores[3] << endl;
	cout << "Firth score at index 4: " << test_scores[4] << endl;

	cout << "The name of the array is " << test_scores << endl; //Name of the array is the same as the memory address

	/*Multi-dimensional array Practice*/
	const int rows{ 3 };
	const int cols{ 4 };
	int movie_ratings[rows][cols]
	{
		{0, 3, 4, 5},
		{2, 3, 5, 6},
		{1, 4, 4, 2}
	}; //declare and initialize array

	cout << "Movie rating at [1][2]: " << movie_ratings[1][2] << endl;

	cout << "Enter a rating at [1][2]: " << endl;
	cin >> movie_ratings[1][2];

	cout << "NEW Movie rating at [1][2]: " << movie_ratings[1][2] << endl;


	return 0;
}
