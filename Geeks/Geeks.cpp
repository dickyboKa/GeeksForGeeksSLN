#include <iostream>
#include <vector>
#include "Searching/PairSortedArray.h"

using namespace std;


int main()
{
	vector<int> a = { -1, -3, -4, 2, 0, -5 };
	auto r = findLargestProductPair(a);
	cout << "{" << r.first << "," << r.second << "}";
	return 0;
}


