#include <iostream>
#include <vector>
#include "Searching/PairSortedArray.h"

using namespace std;


int main()
{
	// how many one
	vector<int> test = { 10, 22, 28, 29, 30, 40 };
	pair<int, int> result = findThePairByTheSum(test, 54);
	cout << "(" << result.first << "," << result.second << ")" << endl;

	test = { 1, 3, 4, 7, 10 };
	result = findThePairByTheSum(test, 15);
	cout << "(" << result.first << "," << result.second << ")" << endl;
	return 0;
}


