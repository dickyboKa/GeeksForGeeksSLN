#include <iostream>
#include <vector>
#include <iterator>
#include "Searching/ClosestElement.h"

using namespace std;


int main()
{
	vector<int> a = { 20, 24, 100 };
	vector<int> b = { 2, 19, 22, 79, 800 };
	vector<int> c = { 10, 12, 23, 24, 119 };
	auto r = findThreeClosesElement(a, b, c);
	copy(r.begin(), r.end(), ostream_iterator<int>(cout, ", "));
	return 0;
}


