#include <iostream>
#include <vector>
#include "Searching/CountOne.h"

using namespace std;


int main()
{
	// how many one
	vector<int> test_1 = { 1, 1, 0, 0, 0, 0, 0 };
	cout << howManyOneInThisArray(test_1) << endl;
	vector<int> test_2 = { 1, 1, 1, 1, 1, 1, 1 };
	cout << howManyOneInThisArray(test_2) << endl;
	vector<int> test_3 = { 0, 0, 0, 0, 0, 0, 0 };
	cout << howManyOneInThisArray(test_3) << endl;
	
	return 0;
}


