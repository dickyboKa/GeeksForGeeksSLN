#include <iostream>
#include <vector>
#include <iterator>
#include <random>
#include "Sorting/TimSort.h"


int main()
{

	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(1, 100);

	std::vector<int> arr;
	for (int i = 0; i < 200; ++i)
		arr.push_back(dist(mt));
	std::cout << "before sort: " << std::endl;
	std::copy(arr.cbegin(), arr.cend(), std::ostream_iterator<int>(std::cout, ", "));
	timSort(arr);
	std::cout << std::endl << "after sort: " << std::endl;
	std::copy(arr.cbegin(), arr.cend(), std::ostream_iterator<int>(std::cout, ", "));
	return 0;
}


