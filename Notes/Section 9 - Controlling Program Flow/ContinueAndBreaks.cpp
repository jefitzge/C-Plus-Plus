/*Section 9*/
/*
*	continue
*		no further statements in the body of the loop are executed 
*		control immediately goes directly to the beginning of the loop for the next iteration
*
*	break
*		no further statements in the body of the loop are executed 
*		loop is immediately terminated
*		control immediately goes to the statement following the loop construct
*/
#include <iostream>
#include <vector>	
using namespace std;

int main() {

	vector<int> vec{ 1,2,-1,3,-99,7,8,10 };
	for (auto val : vec) {
		if (val == -99) {
			break; //Exit the loop imediately if we encoutner -99
		}
		else if (val == -1) {
			continue; //Go back to the beginning of the loop
		}
		else {
			cout << val << endl; 
		}
	}

	return 0;
}
