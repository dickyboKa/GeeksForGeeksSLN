#include <iostream>
#include <vector>
#include <iterator>
#include "Searching/RotateArray.h"

using namespace std;


int main()
{
	vector<int> a = { 1, 2, 5, 4, 3 };
	checkReverse(a) ? cout << "Yes" : cout << "No";
	return 0;
}


