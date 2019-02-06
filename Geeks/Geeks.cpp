#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "Sorting/SelectionSort.h"


int main()
{
	
	std::vector<int> arr = { 64, 25, 12, 22, 11 };
	selectionSort(arr);
	std::copy(arr.cbegin(), arr.cend(), std::ostream_iterator<int>(std::cout, ", "));
	return 0;
}


