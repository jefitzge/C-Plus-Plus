/*section 9*/

#include <iostream>	
using namespace std;

int main() {


	/*****************************
	*		If-Statments
	******************************/
	//int num{ 0 };
	//int min{ 10 };
	//int max{ 100 };

	//cout << "Enter a number between " << min << " " << max << " : ";
	//cin >> num;

	//if (num >= min) {
	//	cout << "=========== If Statement 1 ===========" << endl;
	//	cout << num << " is greater than or equal to " << min << endl;

	//	int diff{ num - min };
	//	cout << "The number you entered is " << diff << " greater than " << min << endl;
	//}

	//if (num <= max) {
	//	cout << "=========== If Statement 2 ===========" << endl;
	//	cout << num << " is less than or equal to" << max << endl;

	//	int diff{ max - num };
	//	cout << "The number you entered is " << diff << " less than " << max << endl;
	//}

	//if (num >= min && num <=max) {
	//	cout << "=========== If Statement 3 ===========" << endl;
	//	cout << num << " is in the range " << endl;
	//	cout << "This means the statements 1 and 2 should also display" << endl;
	//}

	//if (num == min || num == max) {
	//	cout << "=========== If Statement 4 ===========" << endl;
	//	cout << num << " is right on a boundry " << endl;
	//}

	/*****************************
	*	 If-Else-Statments
	******************************/
	/*int num{ 0 };
	const int target{ 10 };

	cout << "Enter a number and I'll compare it to " << target << " : ";
	cin >> num;

	if (num >= target) {
		cout << "\n==============================" << endl;
		cout << num << " is greater than or eqaul to " << target << endl;
		int diff{ num - target };
		cout << num << " is " << diff << " greater than" << target << endl;
	}
	else {
		cout << "\n==============================" << endl;
		cout << num << " is less than " << target << endl;
		int diff{ target - num };
		cout << num << " is " << diff << " less than " << target << endl;
	}*/

	/*****************************
	*	 Nested-If-Statments
	******************************/
	int score{ 0 };
	cout << "Enter a your score on the exam (0-100): ";
	cin >> score;

	char letter_grade{};

	if (score >= 0 && score <= 100) {
		if (score > 90) {
			letter_grade = 'A';
		}
		else if (score > 80) {
			letter_grade = 'B';
		}
		else if (score > 70) {
			letter_grade = 'C';
		}
		else if (score > 60) {
			letter_grade = 'D';
		}
		else{
			letter_grade = 'F';
		}

		cout << "Your grade is a " << letter_grade << endl;
		if (letter_grade == 'F') {
			cout << "Sorry you must repeat this class!" << endl;
		}
		else {
			cout << "Congrats you passed!" << endl;
		}

	}
	else {
		cout << "Sorry the score you entered is not valid" << endl;
	}


	return 0;
}
