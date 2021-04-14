/*Section 7 Vectors*/
/*
*	Vectors are objects, very similar to arrays but are more powerful
*
*	Declaring a Vector
*		vector <type> vector_name; //Empty vector with no elements
*		vector <char> vector_name (5); //No intializer list, using constructor to set size
*
*		vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
*		vector <double> hi_temperatures (365, 80.0); //First number sets the size of the vector and the second number 
*														sets the values all to 80.0
*
*	2D Vector is a vector of vectors
*		vector< vector <type>> movie_ratings
*		{
*			{1, 2, 3, 4},
*			{1, 2, 3, 4},
*			{1, 2, 3, 4}
*		};
*
*
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

	//vector <char> vowels; //empty
	//vector <char> vowels(5); //5 intialized to zero
	//vector <char> vowels{ 'a', 'e', 'i', 'o', 'u' };
	//cout << vowels[0] << endl; 	//subscripting wont do bounds check
	//cout << vowels[4] << endl;

	//vector <int> test_score(3, 100); //3 elements intialized to 100
	vector<int> test_scores{ 100, 95, 99};
	
	cout << "Test scores using Array syntax" << endl;
	cout << test_scores[0] << endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl;

	cout << "\nTest scores using Vector syntax" << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << "There are " << test_scores.size() << " elements in the vector" << endl;

	cout << "\nEnter 3 test scores seperated by spaces: ";
	cin >> test_scores.at(0);
	cin >> test_scores.at(1);
	cin >> test_scores.at(2);

	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;

	cout << "\nEnter a test score to add the vector: ";
	
	int score_to_add{ 0 };
	cin >> score_to_add;

	test_scores.push_back(score_to_add);

	cout << "\nEnter another test score to add the vector: ";
	cin >> score_to_add;

	test_scores.push_back(score_to_add);

	cout << "\nTest scores are now" << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;
	cout << test_scores.at(4) << endl;
	cout << "There are " << test_scores.size() << " elements in the vector" << endl;


	//2D Vectors
	vector< vector <int>> movie_ratings
	{
		{1, 2, 3, 4}, //First reviewer
		{1, 2, 3, 4}, //Second reviewer
		{1, 2, 3, 4}
	};

	cout << "\nMovie Ratings for reviewer #1 using Array syntax" << endl;
	cout << movie_ratings[0][0] << endl;
	cout << movie_ratings[0][1] << endl;
	cout << movie_ratings[0][2] << endl;
	cout << movie_ratings[0][3] << endl;

	cout << "\nMovie Ratings for reviewer #1 using Vector syntax" << endl;
	cout << movie_ratings.at(0).at(0) << endl;
	cout << movie_ratings.at(0).at(1) << endl;
	cout << movie_ratings.at(0).at(2) << endl;
	cout << movie_ratings.at(0).at(3) << endl;


	return 0;
}
