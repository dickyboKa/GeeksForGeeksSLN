 #include <iostream>
#include <vector>
#include "Searching/SmallestElement.h"

using namespace std;


int main()
{
	// how many one
	vector<int> a = { 7, 10, 4, 3, 20, 15 };
	cout << findTheSmallestElementRankAt(a, 3) << endl;
	cout << findTheSmallestElementRankAt(a, 4) << endl;

	return 0;
}


