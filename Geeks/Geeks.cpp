#include <iostream>
#include <vector>
#include "Searching/SmallestElement.h"

using namespace std;


int main()
{
	vector<int> a = { 1, 14, 2, 16, 10, 20 };
	LimMinSet<int> set(3, a);
	set.printLargestElement();
	return 0;
}


