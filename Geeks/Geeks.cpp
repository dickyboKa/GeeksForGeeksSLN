#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "Sorting/QuickSort.h"


int main()
{
	
	std::vector<int> arr = { 10, 7, 8, 9, 1, 5 };
	quickSort(arr.begin(), arr.end());
	std::copy(arr.cbegin(), arr.cend(), std::ostream_iterator<int>(std::cout, ", "));
	return 0;
}


