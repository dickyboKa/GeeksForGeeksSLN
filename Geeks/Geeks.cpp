#include <iostream>
#include <string>
#include <vector>
#include "Searching/PairSortedArray.h"

using namespace std;


int main()
{
	vector<int> a = { 12, 34, 10, 6, 40 };
	int r = findLargestSumPair(a);
	std::cout << r << std::endl;
	return 0;
}


