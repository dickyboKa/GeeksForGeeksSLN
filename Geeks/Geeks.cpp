#include <iostream>
#include <vector>
#include "Searching/BinarySearch.h"

using namespace std;


int main()
{
	vector<int> a = { 1, 2, 8, 10, 10, 12, 19 };
	int index = Floor(a, 0);
	int floor = (index > 0) ? a[index] : index;
	cout << floor;
	return 0;
}


